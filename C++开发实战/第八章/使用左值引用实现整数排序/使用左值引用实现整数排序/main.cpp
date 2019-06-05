//
//  main.cpp
//  使用左值引用实现整数排序
//
//  Created by Chen on 2019/6/5.
//  Copyright © 2019 Chen. All rights reserved.
//

#include <iostream>
using namespace std;

//用引用去实现

//引用可以理解为是变量的别名 使用方法和普通变量一样 只是要在声明的时候不同

//输入三个数字
//通过引用对数字进行比较
//通过引用对数字进行排序 从小到大
//输出

void order(int &num1,int &num2,int &num3);
void swap(int &num1,int &num2);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    cout <<"请输入三个整数"<<endl;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    
    order(num1,num2,num3);
    cout <<num1<<" "<<num2<<" "<<num3<<" "<<endl;
    
    return 0;
}


void order(int &num1,int &num2,int &num3)
{
    
    cout <<"hello"<<endl;
    if(num1 > num2)
    {
        swap(num1,num2);
    }
    if(num1 > num3)
    {
        swap(num1,num3);
    }
    if(num2 > num3)
    {
        swap(num2,num3);
    }
}

void swap(int &num1,int &num2)
{
    int tmp = 0;
    tmp = num1;
    num1 = num2;
    num2 = tmp;
}
