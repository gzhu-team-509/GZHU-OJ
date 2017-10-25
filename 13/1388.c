/* https://www.gzhuacm.cn/problem?pid=1388 */

/**
 * 题目分析：王者之剑Excalibur
 * 
 * 典故参见[Wikipedia](https://zh.wikipedia.org/wiki/%E7%8E%8B%E8%80%85%E4%B9%8B%E5%8A%8D)
 * 
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    scanf("Remember these numbers: ");
    
    int hints[101], count = 0;
    int ch, inword = 0;
    while((ch=getchar())!='\n')
    {
        if(isdigit(ch)){
            if(inword){
                hints[count] = hints[count] * 10 + (ch - '0');
            }else{
                inword++;
                count++;
                hints[count] = ch - '0';
            }
        }
        else{
            inword = 0;
        }
    }

    char line[1000];
    for(int seq = 1; seq <= count; seq++)
    {
        gets(line);
        putchar(line[hints[seq]-1]);
    }

    putchar('\n');

    return 0;
}
