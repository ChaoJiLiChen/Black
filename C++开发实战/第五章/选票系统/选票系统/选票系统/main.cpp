//
//  main.cpp
//  选票系统
//
//  Created by Chen on 2019/4/28.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int num[50] = {0};
    int getnum = 0;
    int p1get = 0;
    int p2get = 0;
    int p3get = 0;
    
    std::cout << "一共有多少人投票？\n";
    cin>>getnum;
    
    for( int i = 0; i< getnum; i++)
    {
        cout<<i<<"的投票是："<<endl;
        cin>>num[i];
    }
    for(int i = 0; i<getnum; i++)
    {
        if(num[i] == 1)
        {
            p1get++;
        }
        else if(num[i] == 2)
        {
            p2get++;
        }
        else if(num[i] == 3)
        {
            p3get++;
        }
        else
        {
            cout<<"此票无效:"<<i<<":"<<num[i]<<endl;
        }
        
    }
    cout<<"1号的票："<<p1get<<endl;
    cout<<"2号的票："<<p2get<<endl;
    cout<<"3号的票："<<p3get<<endl;
    
    
    
    return 0;
}
