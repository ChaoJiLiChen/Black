//
//  main.cpp
//  统计各种字符个数
//
//  Created by Chen on 2019/5/6.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    //接受字符
    //将字符放到数组里面
    //循环进行判断
    
    char abcd[100] = {'\0'};
    string str = "";
    cin>>str;
    int i ;
    int number = 0;
    int letters  = 0;
    int space = 0;
    int others = 0;
    for( i=0;i<str.length();i++)
    {
        abcd[i] = str[i];
        
        
    }
    abcd[i] = '\0';
    for(int j  = 0;j<str.length();j++)
    {
        if((abcd[j] >='a' && abcd[j] <='z') ||(abcd[j] >='A' && abcd[j] <='Z'))
        {
            ++letters;
        }else
        if(abcd[j] >='0' && abcd[j] <='9')
        {
            ++number;
        }else
        if(abcd[j] ==' ')
        {
            ++space;
        }else
        {
            ++others;
        }
    }
    
    cout<<"others:"<<others <<"number:"<<number<<"letters:"<<letters<<endl;
    
    
    
    
    return 0;
}
