//
//  main.cpp
//  指针实现冒泡排序
//
//  Created by Chen on 2019/6/10.
//  Copyright © 2019 Chen. All rights reserved.
//

#include <iostream>

using namespace std;

//从小到达排序
//输入要排序的数字
//实现指针排序函数
//调用函数
//输出

void order(float * num , int count);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int count = 0;
    float num[50] = {0};
    cout <<"请输入要对多少数字排序"<<endl;
    cin >> count;
    for(int i = 0; i < count ; i++)
    {
        cin >> num[i];
    }
    for(int i = 0; i < count ; i++)
    {
        cout <<num[i];
        cout <<" ";
    }
    cout <<endl;
    order(num,count);
    
    for(int i = 0; i < count ; i++)
    {
        cout <<num[i];
        cout <<" ";
    }
    return 0;
}

void order(float * num , int count)
{
    for(int i = 0; i < count; i++)
    {
        for(int j = 0;j<count;j++)
        {
            if(* (num + j) > * (num + j + 1))
            {
                int tmp =* (num + j);
                * (num + j) =  * (num + j + 1);
                * (num + j + 1) = tmp;
                
            }
        }
    }
}


