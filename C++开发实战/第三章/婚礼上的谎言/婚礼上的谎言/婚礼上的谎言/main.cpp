//
//  main.cpp
//  婚礼上的谎言
//
//  Created by Chen on 2019/4/11.
//  Copyright © 2019年 Chen. All rights reserved.
//
/*
 问题：三对情侣参加婚礼，3个新郎a、b、c，3个新娘x、y、z，有人想知道究竟谁和谁结婚，于是就问新人中的三位，得到如下提示：a说他将和x结婚；x说他的未婚夫是c；c说他将和z结婚。这人事后知道他们都在开玩笑，说的全是假话，那么究竟谁与谁结婚呢？
*/

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    for(int a = 1; a <= 3; a++)
    {
        for(int b = 1; b <= 3; b++)
        {
            for(int c = 1; c <= 3; c++)
            {
                if(a !=1 && c != 1 && c != 3 && a != b && b != c && c != a)
                {//刚开始在 “'x' + a - 1” 处不理解 为什么要这么做 其实在上面的所有for循环中 已经判断出来 a和数字几进行结合 b和数字几进行结合 这里要做的就是将数字和字母做一个匹配 其实后面可以不减一 但是就不是x了 而是w
                    printf("%c 将嫁给 a\n",'x' + a - 1);
                    printf("%c 将嫁给 b\n",'x' + b - 1);
                    printf("%c 将嫁给 c\n",'x' + c - 1);
                   
                    
                }
                
            }
            
        }
        
    }
    
    return 0;
}
