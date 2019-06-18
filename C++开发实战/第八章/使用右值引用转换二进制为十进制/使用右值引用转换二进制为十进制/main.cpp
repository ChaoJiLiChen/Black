//
//  main.cpp
//  使用右值引用转换二进制为十进制
//这里用到了 递归 和 右值引用 
//  Created by Chen on 2019/6/18.
//  Copyright © 2019 Chen. All rights reserved.
//

#include <iostream>

using namespace std;

//1.输入信息
//2.每8位调用一次函数
//3.根据返回结果进行输出
int two_ten(int n,int &&init);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    char init[33] = {0};
    int res[4] = {0};
    //cin>>init;
    scanf("%s",init);
    for(int i = 0; i< 8; i++)
    {
        if(init[i] == '1')
        {
            res[0] +=two_ten(2,7-i);
        }
    }
    
    for(int i = 8; i< 16; i++)
    {
        if(init[i] == '1')
        {
            res[1] +=two_ten(2,15-i);
        }
    }
    
    for(int i = 16; i< 24; i++)
    {
        if(init[i] == '1')
        {
            res[2] +=two_ten(2,23-i);
        }
    }
    
    for(int i = 24; i< 32; i++)
    {
        if(init[i] == '1')
        {
            res[3] +=two_ten(2,31-i);
        }
    }
    cout <<res[0]<<"."<<res[1]<<"."<<res[2]<<"."<<res[3]<<endl;
    
    return 0;
}

int two_ten(int n, int &&init)
{
    if(init == 0)
    {
        return 1;
    }
    return n * two_ten(n,init -1);
    
}
