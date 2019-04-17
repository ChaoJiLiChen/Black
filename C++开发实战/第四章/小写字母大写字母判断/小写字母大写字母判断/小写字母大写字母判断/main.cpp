//
//  main.cpp
//  小写字母大写字母判断
//
//  Created by Chen on 2019/4/17.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    char cha;
    cout <<"输入一个字母"<<endl;
    cha = getchar();
    if(cha <= 90 && cha >= 65)
    {
        cout <<"big"<<endl;
    }
    else
    {
        cout <<"small"<<endl;
        
    }
    return 0;
}
