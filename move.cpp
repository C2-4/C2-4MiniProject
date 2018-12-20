#include "ros/ros.h"
#include "std_msgs/String.h"
#include <string>
#include <iostream>
#include <geometry_msgs/Twist.h>
#include <math.h>

void chatterCallback(const std_msgs::String::ConstPtr& msg)
{
  ros::NodeHandle nh;
  using namespace std;
  ros::Publisher cmd_vel_pub_;
  cmd_vel_pub_= nh.advertise<geometry_msgs::Twist>("turtle1/cmd_vel", 1);
  geometry_msgs::Twist base_cmd;

  float timerf;
  std::stringstream ss;
  ss << msg->data.c_str();
  ss >> timerf;
  cout << "Received: " << timerf << endl;
  ros::Rate rate(50);
  int times[]={3, 6, 9, 12, 15, 18, 21, 24};
  int k = timerf/3 - 1;
  if(timerf == times[k]){
    float angVelocity[]={M_PI/4, 0, M_PI/4, 0, -M_PI/4, 0, M_PI/4, 0};
    float linVelocity[]={0, 0.6, 0, 0.5, 0, 0.5, 0, 0.6};
    int Loops[]={100, 100, 75, 80, 65, 80, 75, 100};
    double n;

    base_cmd.linear.x = linVelocity[k];
    base_cmd.linear.y = 0;
    base_cmd.angular.z = angVelocity[k];
    n = Loops[k];
    cout << "linear: " << linVelocity[k] << endl << "angular: " << angVelocity[k] << endl;
    cout << "k = " << k << endl;
    for (n>0; n--;){
      cmd_vel_pub_.publish(base_cmd);
      rate.sleep();
    }
  }
}

int main(int argc, char **argv)
{

  ros::init(argc, argv, "move");
  ros::NodeHandle n;
  ros::Subscriber sub = n.subscribe("chatter", 1, chatterCallback);
  ros::spin();

  return 0;
}
