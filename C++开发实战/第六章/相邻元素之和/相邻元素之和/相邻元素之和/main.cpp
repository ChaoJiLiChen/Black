//
//  main.cpp
//  相邻元素之和
//
//  Created by Chen on 2019/4/25.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int num = 0;
    int arry1[5] = {0};
    int arry2[5] = {0};
    
    for(int i = 0;i < 5 ; i++)
    {
        scanf("%d",&arry1[i]);
    }
    for(int i = 0;i < 5 ; i++)
    {
        printf("%d  ",arry1[i]);
    }
    printf("\n");
    for(int i = 0; i<4;i++)
    {
        arry2[i] = arry1[i] + arry1[i + 1];
    }
   

    for(int i = 0; i<4;i++)
    {
        if(num == 3)
        {
            printf("\n");
            num =0;
        }
        printf("%d ",arry2[i]);
        ++num;
    }
    
    
    return 0;
}
