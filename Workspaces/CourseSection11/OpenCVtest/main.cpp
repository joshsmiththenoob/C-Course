#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::Mat image = cv::imread("D:\\C-Course\\Workspaces\\CourseSection11\\OpenCVtest\\Meko.png");
    if (image.empty()){
        std::cout << "Could not open or find the image!" << std::endl;
        return -1;
    }
    cv::namedWindow("Display window", cv::WINDOW_AUTOSIZE);
    cv::imshow("Display window", image);
    cv::waitKey(0);  // 等待直到用戶按任何鍵
    
    std::cout << "programming executed" << std::endl;
    return 0;
}


//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//int main() {
//    // 打印 OpenCV 的构建信息
//    std::string buildInfo = cv::getBuildInformation();
//    std::cout << "Build Information:" << std::endl << buildInfo << std::endl;
//
//    return 0;
//}
