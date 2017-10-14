/**
 * 链接：
 * https://www.gzhuacm.cn/problem?pid=1003
 *
 */

/**
 * 题目分析：细心，仔细
 * 
 */


/* !!! WA !!!*/
#include <stdio.h>

int is_greater(int [], int[], int length);
void show(int [], int length);
void next(int [], int length);
void mk_least(int [], int length);

int main(void)
{
    int N[10000], P[10000];
    int * ptr = N;

    int ch;
    while((ch=getchar())!=EOF)
    {
        if(ch!='\n')
        {
            *ptr++ = ch - '0';
            continue;
        }else{
            /* 生成一个P，使得P前半部分与N相同 */
            int length = ptr - (int *)N;
            int counter = 0;
            int * head = P, * tail = &P[length-1];
            while(tail - head >= 0)
            {
                *head = N[counter];
                *tail = N[counter];
                counter++;
                head++;
                tail--;
            }
            /* 若P大于N，则输出P；否则，将P设置为下一个回文数 */
            if(is_greater(P, N, length)){
                show(P, length);
                continue;
            }else{
                for(;;){
                    next(P, length);
                    if(P[0]!=0){
                        if(is_greater(P, N, length)){
                            show(P, length);
                            break;
                        }else{
                            continue;
                        }
                    }else{
                        mk_least(P ,length+1);
                        show(P, length+1);
                        break;
                    }
                }
            }
            ptr = N;
        }
    }

    return 0;
}

int is_greater(int * left, int * right, int length)
{
    while(length--){
        if(*left++ > *right++) return 1;
    }
    return 0;
}

void show(int * elem, int length)
{
    while(length--){
        putchar(*elem++ +'0');
    }
    putchar('\n');
}

void next(int * elem, int length)
{
    int middle = length / 2 + length % 2;
    if(*(elem + middle - 1) < 9){
        *(elem + middle - 1) += 1;
    }else{
        int * ptr = elem + middle - 1;
        while(elem - ptr>0){
            *ptr = 0;
            if(*--ptr!=9){
               return;
            }
        }
    }
}

void mk_least(int * P, int length)
{
    P[0] = 1;
    for(int i=1; i<length-1; i++)
    {
        P[i] = 0;
    }
    P[length-1] = 1;    
}
