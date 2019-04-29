//
//  main.cpp
//  模拟比赛打分
//
//  Created by Chen on 2019/4/29.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "请输入参赛人数!\n";
    int personnum = 0;
    float scor[50][5];
    float sum[50];
    //输入参赛人数
    cin >>personnum;
    
    //输入成绩
    for(int i = 0; i<personnum; i++)
    {
        cout<<"请对"<<i<<"号选手评分"<<endl;
        for(int j = 0; j<5 ;j++)
        {
            cout<<j<<"号裁判的评分是："<<endl;
            cin>>scor[i][j];
        }
    }
    //计算总分
    for(int i = 0; i<personnum; i++)
    {
        sum[i] = scor[i][0]+ scor[i][1]+ scor[i][2] + scor[i][3]+ scor[i][4];
        cout<<i<<"选手的总分为："<<sum[i]<<endl;
    }
    
    
    
    
    
    return 0;
}
