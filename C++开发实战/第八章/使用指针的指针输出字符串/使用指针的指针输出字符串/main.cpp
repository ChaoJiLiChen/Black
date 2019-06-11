//
//  main.cpp
//  使用指针的指针输出字符串
//
//  Created by Chen on 2019/6/11.
//  Copyright © 2019 Chen. All rights reserved.
//

#include <iostream>

using namespace std;

//创建二级指针数组
//利用指针进行循环输出

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    char * str[] =
    {
        "王大锤",
        "李小明",
        "赵小花",
        "郭富城",
        "无名氏"
    };
    char ** out = NULL;
    out = str;
    for(int i = 0; i < 5 ; i++)
    {
        cout <<*(out + i)<<" ";
    }
    cout <<endl;
    
    return 0;
}
