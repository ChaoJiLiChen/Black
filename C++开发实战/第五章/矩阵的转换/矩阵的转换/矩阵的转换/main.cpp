//
//  main.cpp
//  矩阵的转换
//
//  Created by Chen on 2019/4/29.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int chushi[100][100] = {0};
    int res[100][100] = {0};
    int hang = 0;
    int lie = 0;
    
    //输入行数和列数
    cin >>hang;
    cin >>lie;
    //输入元素
    for(int i = 0; i<hang;i++)
    {
        for(int j = 0; j<lie; j++)
        {
            cin>>chushi[i][j];
        }
    }
    //转换
    for(int i = 0; i<hang ; i++)
    {
        for(int j = 0;j<lie;j++)
        {
            res[j][i] = chushi[i][j];
        }
    }
    for(int i = 0;i <lie;i++)
    {
        for(int j = 0 ; j<hang;j++)
        {
            cout<<res[i][j];
        }
    }
    
        
    //输出
    
    return 0;
}
