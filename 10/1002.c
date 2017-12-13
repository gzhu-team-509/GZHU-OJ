#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    bool inword = false;
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
            inword = false;
            sum++;
            continue;
        }
        if (isspace(ch)){
            inword = false;
            continue;
        }
        if (isalpha(ch) || isdigit(ch)){
            if(!inword){
                inword = true;
                sum++;
            }
            continue;
        }
    }
}
