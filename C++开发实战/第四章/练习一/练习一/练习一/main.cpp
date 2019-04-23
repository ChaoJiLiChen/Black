//
//  main.cpp
//  练习一
//
//  Created by Chen on 2019/4/23.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
using namespace std;

void func(int num1,int num2)
{
    int sum =num1*num2 + num2*num2;
    if(sum > 100)
    {
        cout <<sum<<endl;
    }
    else
    {
        cout <<  num1+num2<<endl;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int num1= 0;
    int num2 = 0;
    
    cin>>num1>>num2;
    func(num1,num2);
    
    
    
    return 0;
}
