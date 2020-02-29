//
//  main.cpp
//  test
//
//  Created by 徐亦燊 on 2020/2/28.
//  Copyright © 2020 徐亦燊. All rights reserved.
//

#include <iostream>
#include <highgui.hpp>

using namespace cv;

int main(int argc, const char * argv[]) {
    
    
    cv::Mat srcMat = cv::imread("/Users/xuyishen/Desktop/ImreadTwo/test/tu.png",0);
   
        cv::namedWindow("srcImage");
        cv::imshow("srcImage", srcMat);
        
        waitKey(0);
        return 0;
    }
