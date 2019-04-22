//
//  main.cpp
//  灯塔数量
//
//  Created by Chen on 2019/4/22.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int chushi = 1;
    int tmp;
    int sum = 0;
    cout <<"计算开始"<<endl;
    while(1)
    {
        tmp = chushi;
        for(int i = 0; i< 8; i++)
        {
            sum += tmp;
            tmp *= 2;
            
        }
        if(sum == 765)
        {
            cout <<chushi<<endl;
            break;
        }
        chushi ++;
        sum = 0;
    }

    return 0;
}
