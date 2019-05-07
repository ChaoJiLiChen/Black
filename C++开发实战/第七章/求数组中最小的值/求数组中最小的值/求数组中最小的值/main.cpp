//
//  main.cpp
//  求数组中最小的值
//
//  Created by Chen on 2019/5/7.
//  Copyright © 2019年 Chen. All rights reserved.
//
//输入一串数组
//调用函数
//取最小
//打印结果

#include <iostream>
#include <string>

using namespace std;

int getmini(int *arr,int number);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    int getnumber = 0;
    int array[50] = {0};
    int mini  = 0;
    
    cout<<"输入要输入的个数"<<endl;
    cin>>getnumber;
    
    cout<<"请输入一串数字"<<endl;
    for(int i = 0 ; i<getnumber;i++)
    {
        cin>>array[i];
    }
    mini =getmini(array,getnumber);
    cout<<mini<<endl;

    return 0;
}

int getmini(int *arr,int number)
{
    int mini = arr[0];
    for(int i = 0; i<number;i++)
    {
        
        if(mini > arr[i])
        {
            mini = arr[i];
        }
    }
    
    return mini;
}
