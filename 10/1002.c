#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char inword = 0;
    int ch, sum = 0;
    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n'){
            ch = getchar();
            if (ch == '#')
            {
                scanf("##");
                getchar();
                printf("%d\n", sum);
                sum = inword = 0;
                continue;
            }
            // 交由下面的情况来判断
        }
        if (ispunct(ch)){
            inword = 0;
            sum++;
            continue;
        }
        if (isspace(ch)){
            inword = 0;
            continue;
        }
        if (isalpha(ch) || isdigit(ch)){
            if(!inword){
                inword++;
                sum++;
            }
            continue;
        }
    }
}
