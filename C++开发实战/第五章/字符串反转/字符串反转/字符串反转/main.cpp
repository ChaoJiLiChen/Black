//
//  main.cpp
//  字符串反转
//
//  Created by Chen on 2019/5/6.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string in = "";
    char get[100] = {'\0'};
    
    std::cout << "Hello, World!\n";
    
    //输入字符串
    cin>>in;
    
    //进行反转
    int i = 0;
    for(i;i<in.length();i++)
    {
        get[i] = in[i];
    }
    get[i] = '\0';

    //输出反转之后的
    int len =in.length();
    for(len;len>=0;len--)
    {
        cout<<get[len];
    }
    cout<<endl;
    
    
    
    return 0;
}
