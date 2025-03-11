import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from sensor_msgs.msg import LaserScan
import random

class ApolloNavigation(Node):
    def __init__(self):
        super().__init__('apollo_navigation')

        # Publisher to control movement
        self.cmd_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)

        # Subscriber to LIDAR scan data
        self.scan_sub = self.create_subscription(
            LaserScan,
            '/scan',  # Adjust this based on your LIDAR topic
            self.scan_callback,
            10)

        self.twist_msg = Twist()
        self.obstacle_detected = False
        self.timer = self.create_timer(0.1, self.move_robot)

    def scan_callback(self, msg):
        """ Callback function for LIDAR data. Detects obstacles in front. """
        min_distance = min(msg.ranges)  # Get the closest detected object
        if min_distance < 0.5:  # Stop if an obstacle is within 0.5 meters
            self.obstacle_detected = True
        else:
            self.obstacle_detected = False

    def move_robot(self):
        """ Moves forward until an obstacle is detected, then turns left or right. """
        if self.obstacle_detected:
            self.get_logger().info("Obstacle detected! Turning...")

            # Stop movement first
            self.twist_msg.linear.x = 0.0
            self.twist_msg.angular.z = 0.0
            self.cmd_vel_pub.publish(self.twist_msg)

            # Choose a random direction
            turn_direction = random.choice([-1, 1])  # -1 for left, 1 for right
            self.twist_msg.angular.z = turn_direction * 1.0  # Rotate at 1 rad/s

            # Rotate for 1 second to achieve 90-degree turn
            self.cmd_vel_pub.publish(self.twist_msg)
            self.get_logger().info(f"Turning {'left' if turn_direction == -1 else 'right'}")
            rclpy.sleep(1.0)

            # Stop turning
            self.twist_msg.angular.z = 0.0
            self.cmd_vel_pub.publish(self.twist_msg)
        else:
            self.get_logger().info("Moving forward...")
            self.twist_msg.linear.x = 0.5  # Move forward at 0.5 m/s
            self.cmd_vel_pub.publish(self.twist_msg)

def main(args=None):
    rclpy.init(args=args)
    node = ApolloNavigation()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
