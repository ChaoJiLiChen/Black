//
//  main.cpp
//  求字符串中字符的个数
//
//  Created by Chen on 2019/5/9.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
using namespace std;

int length(char *str);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    char str[100] = {'\0'};
    gets(str);
    int len  = length(str);
    cout<<len<<endl;
    return 0;
}

int length(char * str)
{
    int length = 0;
    
    while(*str != '\0')
    {
        str++;
        length ++;
    }
    
    return length;
}
