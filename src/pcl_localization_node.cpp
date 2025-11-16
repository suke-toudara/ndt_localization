#include <pcl_localization/pcl_localization_component.hpp>

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::NodeOptions options;
  auto node = std::make_shared<PCLLocalization>(options);

  rclcpp::spin(node);
  rclcpp::shutdown();

  return 0;
}
