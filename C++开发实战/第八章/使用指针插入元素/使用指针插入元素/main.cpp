//
//  main.cpp
//  使用指针插入元素
//
//  Created by Chen on 2019/6/10.
//  Copyright © 2019 Chen. All rights reserved.
//

#include <iostream>

using namespace std;

//创建初始元素
//接收要插入的元素
//找到要插入的位置
//插入
//将后面的元素依次后移
//输出


void insert(int * init ,int count ,int num);
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int init[11] = {1,3,5,7,9};
    for(int i = 0; i < 10; i++)
    {
        cout <<init[i]<<" ";
    }
    cout<<endl<<"--------------------"<<endl;
    int num = 0;
    cout <<"输入要插入的元素"<<endl;
    cin >> num;
    
    insert(init,10 ,num);
    for(int i = 0; i < 10; i++)
    {
        cout <<init[i]<<" ";
    }
    cout<<endl<<"--------------------"<<endl;
    
    return 0;
}

void insert(int * init ,int count ,int num)
{
    int * point = NULL;
    for(int i = 0; i < 10 ; i++)
    {
        if(count > *(init + i))
        {
            point = init + i;
            for(int j = 10; j > i;j--)
            {
                *(init + j + 1) = *(init + j);
            }
            * (point + 2) = num;
            break;
        }
    }
}
