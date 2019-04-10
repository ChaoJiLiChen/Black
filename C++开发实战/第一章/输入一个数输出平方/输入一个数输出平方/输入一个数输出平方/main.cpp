//
//  main.cpp
//  输入一个数输出平方
//
//  Created by Chen on 2019/4/10.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
#include <stdio.h>

int main(int argc, const char * argv[])
{
    //没有加逻辑判断 程序不健壮
    // insert code here...
    //std::cout << "Hello, World!\n";
    char ia;

    printf("please in a number\n");
    ia = getchar();
    ia = ia -48;
    printf("%d\n",int(ia));
    
    printf("%d\n",ia * ia);
    return 0;
}
