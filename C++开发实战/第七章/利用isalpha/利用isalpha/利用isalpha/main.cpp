//
//  main.cpp
//  利用isalpha
//
//  Created by Chen on 2019/5/9.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
#include <ctype.h>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int cha = ' ';
    while(1)
    {
        cha = getchar();
        char k = getchar();
        if(cha == 'q' ||cha == 'Q')
        {
            break;
        }
        
        if(isalpha(cha))
        {
            cout<<"字母"<<endl;
        }
        if( !isalpha(cha))
        {
            cout<<"数字"<<endl;
        }
        
        
    }
    
    
    return 0;
}
