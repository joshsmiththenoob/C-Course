#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>


int main(){
    
    cv::Mat img {}; // standard data type of OpenCV
    std::cout << img << std::endl;
    img = cv::imread("D:\\C-Course\\Workspaces\\OpenCVWorkspaces\\Meko.png", cv::IMREAD_COLOR);
    
    cv::Mat bilateral_img {};
    cv::bilateralFilter(img, bilateral_img, 15, 95, 45);
    
    cv::Mat gaussian_blur_img {};
    cv::GaussianBlur(img, gaussian_blur_img, cv::Size(15, 15), 0);
    
    cv::Mat median_blur_img {};
    cv::medianBlur(img, median_blur_img, 15);
    
    
    
    
    cv::imshow("Sample", img);
    cv::imshow("Bilateral Filtered Img", bilateral_img);
    cv::imshow("Gaussian Blur Img", gaussian_blur_img);
    cv::imshow("Median Blur Img", median_blur_img);
    
    // waitKey to handle GUI(window) events
    cv::waitKey(0); // 0: waiting for pressing any key, other numbers: waiting numbers of milliseconds for closing window

    return 0;
}