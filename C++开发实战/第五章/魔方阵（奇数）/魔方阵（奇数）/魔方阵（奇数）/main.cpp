//
//  main.cpp
//  魔方阵（奇数）
//
//  Created by Chen on 2019/5/5.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    
    //1.输入几阶
    //2.进行第一次输出
    //3.将1进行放置
    //4.利用for循环来进行控制
    //5.越界
        //6.行 列一起越界
            //7.左上有值
                //8.下方有值
                    //9.退出
                //10.下方无值
                    //11.写入下方
            //12.左上无值
                //13.写入左上
        //14.行越界
            //15.左上有值
                //16.下方有值
                    //17.退出
                //18.下方无值
                    //19.写入下方
            //20.左上无值
                //21.写入左上
        //22.列越界
            //23.左上有值
                //24.下方有值
                    //25.退出
                //26.下方无值
                    //27.写入下方
            //28.左上无值
                //29.写入左上
    //30.无越界
        //31.左上有值
            //32.下方有值
                //33.退出
            //34.下方无值
                //35.写入下方
        //36.左上无值
            //37.写入左上
    
    //38.输出
    
    //有一个问题 ：应该是先把当前的格子填写完成 再去判断接下来的格子在哪才对
    
    //1.
    std::cout << "程序开始!\n";
    int hang = 0;
    int lie = 0;
    int cubeNum = 0;
    int cube[50][50] = {0};
    cout<<"请输入一个奇数"<<endl;
    cin>>cubeNum;
    
    //2.
    for(int i = 0; i<cubeNum;i++)
    {
        for(int j = 0;j<cubeNum;j++)
        {
            cout<<cube[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //3.
    lie = cubeNum/2;
    cube[hang][lie] = 1;
    
    //4.
    for(int i = 2;i <= cubeNum*cubeNum;i++)
    {
        //5.
        //6.
        if((hang == 0) &&(lie == 0))
        {
            //7.
            if(cube[cubeNum-1][cubeNum-1] != 0)
            {
                //8.
                if(cube[1][cubeNum/2] != 0)
                {
                    //9.
                    break;
                }
                //10.
                else
                {
                    cube[1][cubeNum/2] = i;
                    hang = 1;
                    lie = cubeNum/2;
                    
                    cout<<"-------------"<<endl;
                    
                    for(int i = 0; i<cubeNum;i++)
                    {
                        for(int j = 0;j<cubeNum;j++)
                        {
                            cout<<cube[i][j]<<" ";
                        }
                        cout<<endl;
                    }
                    
                    
                    
                    
                    
                    //11.
                    continue;
                }
            }
            
            //12.
            else
            {
                //13.
                cube[cubeNum-1][cubeNum-1] = i;
                hang = cubeNum-1;
                lie = cubeNum -1;
                
                cout<<"-------------"<<endl;
                
                for(int i = 0; i<cubeNum;i++)
                {
                    for(int j = 0;j<cubeNum;j++)
                    {
                        cout<<cube[i][j]<<" ";
                    }
                    cout<<endl;
                }
                
                
                continue;
            }
        }
        //14.
        if(hang == 0)
        {
            //15.
            if(cube[cubeNum-1][cubeNum-1] != 0)
            {
                //16.
                if(cube[hang -1][lie] != 0)
                {
                    //17.
                    break;
                }
                //18.
                else
                {
                    //19.
                    cube[hang -1][lie] = i;
                    hang =  hang -1;
                    
                    cout<<"-------------"<<endl;
                    
                    for(int i = 0; i<cubeNum;i++)
                    {
                        for(int j = 0;j<cubeNum;j++)
                        {
                            cout<<cube[i][j]<<" ";
                        }
                        cout<<endl;
                    }
                    
                    
                    
                    continue;
                    
                }
            }
            //20
            else
            {
                //21.
                cube[cubeNum-1][cubeNum-1] = i;
                hang =  cubeNum -1;
                lie =  cubeNum -1;
                
                cout<<"-------------"<<endl;
                
                for(int i = 0; i<cubeNum;i++)
                {
                    for(int j = 0;j<cubeNum;j++)
                    {
                        cout<<cube[i][j]<<" ";
                    }
                    cout<<endl;
                }
                
                
                
                continue;
                
            }
        }
        //22.
        if(lie == 0)
        {
            //23.
            if(cube[hang -1][cubeNum -1] != 0)
            {
                //24.
                if(cube[hang -1][lie]!= 0)
                {
                    //25.
                    break;
                }
                //26.
                else
                {
                    //27.
                    cube[hang -1][lie]= i;
                    hang =  hang-1;
                    
                    
                    cout<<"-------------"<<endl;
                    
                    for(int i = 0; i<cubeNum;i++)
                    {
                        for(int j = 0;j<cubeNum;j++)
                        {
                            cout<<cube[i][j]<<" ";
                        }
                        cout<<endl;
                    }
                    
                    
                    
                    continue;
                }
            }
            //28.
            else
            {
                //29.
                cube[hang -1][cubeNum -1] = i;
                hang = hang -1;
                lie =  cubeNum -1;
                
                cout<<"-------------"<<endl;
                
                for(int i = 0; i<cubeNum;i++)
                {
                    for(int j = 0;j<cubeNum;j++)
                    {
                        cout<<cube[i][j]<<" ";
                    }
                    cout<<endl;
                }
                
                
                
                continue;
            }
            
        }
        //30.
        //31.
        if(cube[hang -1][lie -1] != 0)
        {
            //32.
            if(cube[hang -1][lie]!= 0)
            {
                //33.
                break;
            }
            //34.
            else
            {
                //35.
                cube[hang -1][lie]= i;
                hang -= hang;
                
                cout<<"-------------"<<endl;
                
                for(int i = 0; i<cubeNum;i++)
                {
                    for(int j = 0;j<cubeNum;j++)
                    {
                        cout<<cube[i][j]<<" ";
                    }
                    cout<<endl;
                }
                
                
                continue;
            }
        }
        else
        {
            cube[hang -1][lie -1] = i;
            hang -= hang;
            lie -= lie;
            
            cout<<"-------------"<<endl;
            
            for(int i = 0; i<cubeNum;i++)
            {
                for(int j = 0;j<cubeNum;j++)
                {
                    cout<<cube[i][j]<<" ";
                }
                cout<<endl;
            }
            
            
            
            continue;
        }
    }
    
    cout<<"-------------"<<endl;
    
    for(int i = 0; i<cubeNum;i++)
    {
        for(int j = 0;j<cubeNum;j++)
        {
            cout<<cube[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}







