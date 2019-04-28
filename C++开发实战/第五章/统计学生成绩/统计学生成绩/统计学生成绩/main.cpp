//
//  main.cpp
//  统计学生成绩
//
//  Created by Chen on 2019/4/28.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    int stnum = 0;//学生人数
    int Englis[50] = {0};
    int Math[50] = {0};
    int Chinese[50] = {0};
    int avg = 0;

    //输入学生人数
    cout<<"请输入学生总人数"<<endl;
    cin>>stnum;
    //输入学生每科成绩
    for(int i = 0; i<stnum; i++)
    {
        cin >>Englis[i];
        cin >>Math[i];
        cin >>Chinese[i];
    }
    //计算平均成绩
    for(int i = 0; i<stnum; i++)
    {
        avg = (Englis[i] + Math[i] + Chinese[i])/3;
        cout <<"平均成绩是："<<avg<<endl;
    }
    return 0;
}
