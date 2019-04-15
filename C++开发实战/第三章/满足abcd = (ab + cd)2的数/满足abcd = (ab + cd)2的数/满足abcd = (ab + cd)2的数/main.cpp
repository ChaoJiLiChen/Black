//
//  main.cpp
//  满足abcd = (ab + cd)2的数
//
//  Created by Chen on 2019/4/15.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "开始!\n";
    for(int i = 1000; i< 10000; i++)
    {
        int geshi = i /100;
        int baiqian = i % 100;
        if((geshi + baiqian)*(geshi + baiqian) == i)
        {
            std::cout <<i <<std::endl;
        }
        
    }
    return 0;
}
