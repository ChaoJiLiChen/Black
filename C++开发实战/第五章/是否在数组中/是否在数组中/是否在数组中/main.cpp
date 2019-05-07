//
//  main.cpp
//  是否在数组中
//
//  Created by Chen on 2019/5/7.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    //创建一个数组
    //输入一个字符串
    //判断是否在数组中
    //输出结果
    
    string newword = "";
    string oldword = "abcdefg";
    cout <<"请输入一串任意东西"<<endl;
    
    cin>>newword;
    
    int length_new = (int)newword.length();
    int length_old =  (int)oldword.length();
    
    if(length_new >length_old)
    {
        cout<<"输入过长"<<endl;
        return 0;
    }

    
    for(int i = 0; i<length_old - length_new;i++)
    {
        string firstname(oldword.substr(i,length_new));
        if(firstname == newword)
        {
            cout<<"相等"<<endl;
            return 0;
        }
            
    }
    
    cout<<"不相等"<<endl;
    
    
    return 0;
}
