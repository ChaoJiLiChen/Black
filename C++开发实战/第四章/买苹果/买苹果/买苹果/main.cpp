//
//  main.cpp
//  买苹果
//
//  Created by Chen on 2019/4/24.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
using namespace std;

void buyApple(int num);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    buyApple(2);
    return 0;
}

void buyApple(int num)
{
    int numsum = 0;
    int day = 1;
    float moneysum = 0;
    numsum = num;
    moneysum = num * 0.8;
    while(1)
    {
        
        num *= 2;
        numsum +=num;
        day++;
        moneysum += num*0.8;
        if((numsum + num *2)>= 100)
        {
            cout<<"numsum:"<<numsum<<endl;
            cout<<"money:"<<moneysum/day<<endl;
            break;
        }
    }
    
}
