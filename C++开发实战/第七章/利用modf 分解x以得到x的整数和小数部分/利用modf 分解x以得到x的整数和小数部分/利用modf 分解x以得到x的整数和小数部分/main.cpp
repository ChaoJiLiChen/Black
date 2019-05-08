//
//  main.cpp
//  利用modf 分解x以得到x的整数和小数部分
//
//  Created by Chen on 2019/5/8.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    float number = 0;
    float zheng = 0;
    float xiao = 0;
    cout<<"输入一个小数"<<endl;
    cin>>number;
    
    xiao = modf(number, &zheng);
    cout<<zheng<<" "<<xiao<<endl;
    
    
    return 0;
}
