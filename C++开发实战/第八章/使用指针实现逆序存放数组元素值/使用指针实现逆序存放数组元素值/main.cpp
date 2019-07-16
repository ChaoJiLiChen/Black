//
//  main.cpp
//  使用指针实现逆序存放数组元素值
//
//  Created by Chen on 2019/7/16.
//  Copyright © 2019 Chen. All rights reserved.
//
//创建数组 利用random
//使用指针进行交换


#include <iostream>
using namespace std;


int Random(int * Name,int num);
int show(int * Name,int num);
int exchange(int * Name,int num);

int main(int argc, const char * argv[]) {

    int array[10] = {};
    
    Random(array,10);
    show(array,10);
    exchange(array,10);
    show(array,10);
    
    return 0;
}


/*
函数名称：Random
函数原型：int Random(int * Name,int num)
函数功能：生成随机数组
函数参数：
说明：
*/

int Random(int * Name,int num)
{
    srand( (unsigned)time(NULL));
    for(int i = 0;i<num;i++)
    {
        int tmp = rand()%100;
        Name[i] = tmp;
    }
    
    return 0;
}

/*
 函数名称：show
 函数原型：int show(int * Name,int num)
 函数功能：打印数组
 函数参数：
 说明：
 */

int show(int * Name,int num)
{
    for(int i = 0;i<num;i++)
    {
        cout <<Name[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}


/*
 函数名称：exchange
 函数原型：int exchange(int * Name,int num)
 函数功能：交换数组
 函数参数：
 说明：
 */

int exchange(int * Name,int num)
{
    for(int i = 0;i<num/2;i++)
    {
        int tmp = 0;
        tmp = Name[i];
        Name[i] = Name[num - i - 1];
        Name[num - i - 1] = tmp;
    }
    cout<<endl;
    
    return 0;
}

