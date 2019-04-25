//
//  main.cpp
//  模拟ATM
//
//  Created by Chen on 2019/4/25.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
using namespace std;


void prin();

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    
    
    float summoney = 1000;
    int key =123;
    
    while(1)
    {
        char opera;
        prin();
        cin>>opera;
        switch (opera)
        {
            case '1':
                int inkey;
                int getmoney;
                
                for(int i = 0; i<3;)
                {
                    scanf("%d",&inkey);
                    if(key != inkey)
                    {
                        cout<<"密码错误"<<endl;
                        i++;
                    }
                    else
                    {
                        cout<<"取钱金额"<<endl;
                        scanf("%d",&getmoney);
                        if(getmoney >summoney)
                        {
                            cout<<"穷逼 有多少钱心里没点B数吗"<<endl;
                        }
                        else
                        {
                            cout<<"取钱成功"<<endl;
                            summoney = summoney - getmoney;
                            break;
                        }
                    }
                }
                cout<<"请输入密码"<<endl;
                break;
            case '2':
                cout<<"您的余额为"<<summoney<<endl;
                break;
            case '3':
                exit(1);
                break;
            default:
                cout<<"输入有误，请重新输入"<<endl;
                break;
        }
        system("cls");
    }
    
    return 0;
}

void prin()
{
    std::cout << "***********************\n";
    std::cout << "*        欢迎使用!     *\n";
    std::cout << "* 1 取钱              *\n";
    std::cout << "* 2 查询余额           *\n";
    std::cout << "* 3 退出              *\n";
    std::cout << "***********************\n";
}
