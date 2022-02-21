/*
 * File: main.cpp
 * Project: SF Framework
 * File Created: Sunday, 20th February 2022 2:22:40 PM
 * Author: nknab
 * Email: bkojo21@gmail.com
 * Version: 1.0
 * Brief: 
 * -----
 * Last Modified: Monday, 21st February 2022 8:38:41 AM
 * Modified By: nknab
 * -----
 * Copyright ©2022 nknab
 */

#include "rclcpp/rclcpp.hpp"

class SFFNode : public rclcpp::Node
{
public:
    SFFNode() : Node("sff_name")
    {
    }

private:
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<SFFNode>();

    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
