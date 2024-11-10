#include <iostream>
#include "../include/add.h"
#include <opencv2/opencv.hpp>
int main() {
    // 读取图像
    cv::Mat image = cv::imread("/Users/zwg/CLionProjects/untitled4/WechatIMG1055.jpeg");
    if (image.empty()) {
        std::cerr << "Error: Could not load image!" << std::endl;
        return -1;
    }

    // 显示图像
    cv::imshow("Display Image", image);
    cv::waitKey(0); // 等待按键事件

    return 0;
}

