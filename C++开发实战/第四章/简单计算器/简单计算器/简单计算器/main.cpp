//
//  main.cpp
//  简单计算器
//
//  Created by Chen on 2019/4/19.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    char chop = 'a';
    float num1 = 0;
    float num2 = 0;
    cin >>chop;
    cin >>num1 >>num2;
    switch (chop) {
        case '+':
            cout << chop<<" "<<num1 + num2<<endl;
            break;
        case '-':
            cout << chop<<" "<<num1 - num2<<endl;;
            break;
        case '*':
            cout << chop<<" "<<num1 * num2<<endl;
            break;
        case '/':
            cout << chop<<" "<<num1 / num2<<endl;
            break;
        default:
            cout << "输入有误"<<endl;;
    }
    return 0;
}
