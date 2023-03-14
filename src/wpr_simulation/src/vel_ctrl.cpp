#include <iostream>
#include <cstdio>
#include <ros/ros.h>
#include <geometry_msgs/Twist.h>

void vel_cmd_init(geometry_msgs::Twist& vel_cmd_in) {
    vel_cmd_in.linear.x = 0;
    vel_cmd_in.linear.y = 0;
    vel_cmd_in.linear.z = 0;
    vel_cmd_in.angular.x = 0;
    vel_cmd_in.angular.y = 0;
    vel_cmd_in.angular.z = 0;
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "vel_ctrl");
    ros::NodeHandle n;
    ros::Publisher vel_pub = n.advertise<geometry_msgs::Twist>("/cmd_vel", 10);

    printf("Input direction:\n");
    printf("w for moving forward\n");
    printf("s for moving backward\n");
    printf("a for turning left\n");
    printf("d for turning right\n");
    printf("else for stopping\n");

    while(ros::ok()) {
        geometry_msgs::Twist vel_cmd;

        vel_cmd_init(vel_cmd);

        system("stty -icanon");
        char input_ch;
        std::cin.get(input_ch);
        switch (input_ch)
        {
            case 'w':
                vel_cmd.linear.x = 0.5;
                printf(" move forward\n");
                break;
            case 's':
                vel_cmd.linear.x = -0.5;
                printf(" move backward\n");
                break;
            case 'a':
                vel_cmd.linear.y = 0.5;
                printf(" turn left\n");
                break;
            case 'd':
                vel_cmd.linear.y = -0.5;
                printf(" turn right\n");
                break;
            default:
                vel_cmd.linear.x = 0;
                vel_cmd.linear.y = 0;
                printf(" stop!");
                break;
        }

        
        vel_pub.publish(vel_cmd);

        ros::spinOnce();
    }
    return 0;
}
