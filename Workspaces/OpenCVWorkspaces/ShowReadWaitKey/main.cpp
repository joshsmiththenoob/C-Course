#include <iostream>
#include <opencv2/highgui.hpp>


int main(){
    
    cv::Mat img {}; // standard data type of OpenCV
    std::cout << img << std::endl;
    
    img = cv::imread("D:\\C-Course\\Workspaces\\OpenCVWorkspaces\\Meko.png", cv::IMREAD_LOAD_GDAL);
    
    cv::imshow("Sample", img);
    
    // waitKey to handle GUI(window) events
    cv::waitKey(0); // 0: waiting for pressing any key, other numbers: waiting numbers of milliseconds for closing window

    return 0;
}