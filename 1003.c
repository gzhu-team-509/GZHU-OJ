/**
 * 链接：
 * https://www.gzhuacm.cn/problem?pid=1003
 *
 */

/**
 * 题目分析：可以按N数码数量分类，然后为每种分类安排算法
 * 
 * “逐渐变得贪婪。”（慢慢地走向贪婪，快速贪婪的是不是逻辑没有想清楚？）
 * 
 */

#include <stdio.h>

int larger(int a)
{
    if(a!=9) return a+1;
    else return 9;
}

/* ！！可优化！！ */
int main(void)
{
    int number = 0;       // N
    int count = 0;        // N的位数
    int digits[6];        // N每一位的数码，digit[1]是N最高位的数码

    int ch;
    while((ch=getchar())!=EOF)
    {
        if(ch!='\n')
        /* 读取N */
        {
            count++;
            digits[count] = ch - '0';
            number = number * 10 + digits[count];
        }
        else
        /* 寻找大于N的最小回文数 */
        {
            switch(count)
            {
                case 5:{
                    // 特殊处理N=10000的情况
                    printf("10001\n");
                    break;
                }
                case 1:{
                    int temp = larger(digits[1]);
                    if(temp > number){
                        printf("%d\n", temp);
                    }else{
                        printf("11\n");
                    }
                    break;
                }
                case 2:{
                    int temp = digits[1] * 11;
                    if(temp > number){
                        printf("%d\n", temp);
                    }else{
                        temp = larger(digits[1]) * 11;
                        if(temp > number){
                            printf("%d\n", temp);
                        }else{
                            printf("101\n");
                        }
                    }
                    break;
                }
                case 3:{
                    int temp = digits[1] * 101;
                    if(temp > number){
                        printf("%d\n", temp);
                        break;
                    }else{
                        int temp = digits[1] * 101 +  digits[2] * 10;
                        if(temp > number){
                            printf("%d\n", temp);
                        }else{
                            int temp = digits[1] * 101 +  larger(digits[2]) * 10;
                            if(temp > number){
                                printf("%d\n", temp);
                            }else{
                                temp = larger(digits[1]) * 101;
                                if(temp > number){
                                    printf("%d\n", temp);
                                }else{
                                    temp = larger(digits[1]) * 101 + digits[2] *10;
                                    if(temp > number){
                                        printf("%d\n", temp);
                                    }else{
                                        temp = larger(digits[1]) * 101 + larger(digits[2]) *10;
                                        if(temp > number){
                                            printf("%d\n", temp);
                                        }else{
                                            printf("1001\n");
                                        }
                                    }
                                }
                            }
                        }
                    }
                    break;
                }
                case 4:{
                    int temp = digits[1] * 1001;
                    if(temp > number){
                        printf("%d\n", temp);
                    }else{
                        temp = digits[1] * 1001 + digits[2] * 110;
                        if(temp > number){
                            printf("%d\n", temp);
                        }else{
                            temp = digits[1] * 1001 + larger(digits[2]) * 110;
                            if(temp > number){
                                printf("%d\n", temp);
                            }else{
                                temp = larger(digits[1]) * 1001;
                                if(temp > number){
                                    printf("%d\n", temp);
                                }else{
                                    temp = larger(digits[1]) * 1001 + digits[2] * 110;
                                    if(temp > number){
                                        printf("%d\n", temp);
                                    }else{
                                        temp = larger(digits[1]) * 1001 + larger(digits[2]) * 110;
                                        if(temp > number){
                                            printf("%d\n", temp);
                                        }else{
                                            printf("10001\n");
                                        }
                                    }
                                }
                            }
                        }
                    }
                    break;
                }
            }
            number = count = 0;
        }
    }

    return 0;
}
