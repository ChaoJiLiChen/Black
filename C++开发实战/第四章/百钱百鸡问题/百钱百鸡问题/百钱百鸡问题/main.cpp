//
//  main.cpp
//  百钱百鸡问题
//
//  Created by Chen on 2019/4/18.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    

    for(int gong = 0;gong <= 20 ; gong++)
    {
        for(int mu = 0;mu <= 33 ; mu++)
        {
            for(int xiao = 0;xiao <= 99;xiao++)
            {
                if(((gong + mu + xiao) == 100 )&& ((gong * 5 + mu * 3 + xiao / 3) == 100 ) &&(xiao %3 ==0))
                {
                    cout <<"gong:"<<gong<<" mu:"<<mu<<" xiao:"<<xiao<<endl;
                }
            }
        }
    }
    
    return 0;
}
