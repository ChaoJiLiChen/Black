//
//  main.cpp
//  加油站加油问题
//
//  Created by Chen on 2019/4/22.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    char whichGas = 'x';//哪种汽油
    float gasMoney = 0; //汽油价格
    char way = 'x';//怎么加油
    float many = 0;//加多少油
    float haochu = 0;
    //float sum = 0;//总价格
    cout <<"欢迎光临"<<endl;
    cout <<"选择哪种汽油"<<endl;
    cin>>whichGas;
    switch (whichGas) {
        case 'a':
            gasMoney = 3.25;
            break;
        case 'b':
            gasMoney = 3.0;
            break;
        case 'c':
            gasMoney = 2.75;
            break;
        default:
            break;
            
    }
    cout<<"如何加油"<<endl;
    cin>>way;
    switch (way) {
        case 'm':
            haochu = 0.05;
            break;
        case 'y':
            haochu = 0.10;
            break;
        default:
            break;
    }
    cout<<"加多少油"<<endl;
    cin>>many;
    cout <<"请支付"<<gasMoney * many * (1-haochu)<<endl;
    return 0;
}
