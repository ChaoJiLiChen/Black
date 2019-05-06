//
//  main.cpp
//  字符串的加密和解密
//
//  Created by Chen on 2019/5/6.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

char *jiami(char *cha ,int length);

int main(int argc, const char * argv[])
{
    std::cout << "Hello, World!\n";
    string str = "";
    int i ;
    char get[50] = {'\0'};
    int length = 0;
    // insert code here...
    //输入字符串
    
    cin >>str;
    for(i = 0;i<str.length();i++)
    {
        get[i] = str[i];
    }
    get[i] = '\0';
    
    //调用加密函数 进行加密
    length =(int)str.length();
    jiami(get ,length);
    
    //输出
    printf("%s\n",get);
    //调用解密函数 进行解密
    
    
    
    
    
    return 0;
}

char * jiami(char * cha ,int length)
{
    
    for(int i = 0; i<length/2;i++)
    {
        //cout<<cha[i];
        
        char tmp = '\0';
        tmp = cha[i];
        cha[i] = cha[length -i -1 ];
        cha[length-i -1] = tmp;
    }
    
    printf("%s\n",cha);
    return cha;
}
