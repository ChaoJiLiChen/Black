//
//  main.cpp
//  水仙花数
//
//  Created by Chen on 2019/4/15.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    std::cout << "开始!\n";
    for(int i = 100 ; i < 1000 ; i++)
    {
        int ge = i % 10;
        int shi = i / 10 % 10;
        int bai = i / 10 /10;
        if(ge* ge * ge + shi * shi * shi + bai * bai * bai == i )
        {
            printf("%d\n",i);
        }
        
    }
    
    
    
    return 0;
}
