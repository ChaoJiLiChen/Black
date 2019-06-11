//
//  main.cpp
//  使用new关键字为二级指针开辟空间
//
//  Created by Chen on 2019/6/11.
//  Copyright © 2019 Chen. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    /*
     如果不理解下面的什么意思 可以先看下下面注释的两行代码 int *a 对应的是 int [3] 那么** init对应就应该再加上加上一个*了
          int * a = NULL;
          a = new int[3];
     */
    
    int ** init = NULL;
    init = new int*[3];
    
    for(int i = 0;i< 3; i++)
    {
        *(init + i) = new int[3];
        for(int j = 0; j< 3; j++)
        {
            *(*(init + i) + j) =  i*1+j;
        }
    }
    
    for(int i = 0; i< 3; i++)
    {
        for(int j = 0; j< 3;j++)
        {
            cout <<*(*(init + i) + j)<<" ";
        }
        cout<<endl;
    }
    
    for(int i = 0; i< 3; i++)
    {
        delete *(init + i);
    }
    delete init;
    
    return 0;
}

