//
//  main.cpp
//  1-5的阶乘
//
//  Created by Chen on 2019/5/23.
//  Copyright © 2019 Chen. All rights reserved.
//

#include <iostream>
using namespace std;

void jiecheng();

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    jiecheng();
    return 0;
}

void jiecheng()
{
    int sum = 1;
    for(int i = 1;i<6;i++)
    {
        sum = sum *i;
    }
    cout <<sum;
    
}
