//
//  main.cpp
//  判断三角形的类型
//
//  Created by Chen on 2019/4/18.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    float num1 =0;
    float num2 = 0;
    float num3 = 0;
    cin>>num1>>num2>>num3;
    if(num1 + num2 > num3 && num3 + num2 > num1 && num1 + num3 > num2)
    {
        if(num1 == num2 || num3 == num2 || num1 == num3)
        {
            cout <<"等边三角形"<<endl;
        }
        else if(num1 * num1 + num2 * num2 == num3 * num3 || num3 * num3 + num2 * num2 == num1 * num1 || num1 * num1 + num3 * num3 == num2 * num2)
        {
            cout <<"直角三角形"<<endl;
        }
        else
        {
            cout <<"普通三角形"<<endl;
        }
    }
    else
    {
        cout <<"不是三角形"<<endl;
    }
    return 0;
}
