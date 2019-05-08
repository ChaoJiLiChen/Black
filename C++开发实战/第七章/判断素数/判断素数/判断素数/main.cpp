//
//  main.cpp
//  判断素数
//
//  Created by Chen on 2019/5/8.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>

using namespace std;

bool panduan(int number);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int number = 0;
    //输入一个整数
    //调用函数进行判断
    //输出结果
    
    cout<<"输入一个整数"<<endl;
    
    cin>>number;
    
    bool res =panduan( number);
    if(res == 1)
    {
        cout<<"shi"<<endl;
    }
    else
    {
        cout<<"fou"<<endl;
    }
    
    
    return 0;
}

bool panduan(int number)
{
    for(int i = 2; i<number;i++)
    {
        if(number%i == 0)
        {
            
            return 0;
        }
    }
    return 1;
}
