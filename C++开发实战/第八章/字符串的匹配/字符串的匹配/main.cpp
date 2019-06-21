//
//  main.cpp
//  字符串的匹配
//
//  Created by Chen on 2019/6/20.
//  Copyright © 2019 Chen. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

//输入两个字符串
//进行匹配 用指针或者引用操作
//输出比对结果

int compar(string t,string p);

int main(int argc, const char * argv[]) {
    // insert code here...
    string str1;
    string str2;
    
    std::cout << "Hello, World!\n";
    cout <<"请输入两个字符串"<<endl;
    cin>>str1>>str2;
    cout <<"str1:"<<str1<<endl;
    cout <<"str2:"<<str2<<endl;
    
    int res = compar(str1,str2);
    cout <<"res:"<<res<<endl;
    return 0;
}

int compar(string t,string p)
{
   
        int lenT = t.size();
        int lenP = p.size();
        int i, j;
        for (i = 0; i <= lenT - lenP; ++i){
            for (j = 0; j < lenP; ++j){
                if (t[i + j] != p[j]){
                    break;
                }
            }
            if (j == lenP){
                return i;
            }
        }
        return -1;
    }
  

