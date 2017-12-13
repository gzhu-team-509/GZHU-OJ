#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void)
{
    int line;
    scanf("%d\n", &line);
    while (line--)
    {
        bool capslock = false;
        int ch;
        while ((ch = getchar()) != '\n')
        {
            if (ch == '!') {
                capslock = !capslock;
                continue;
            }
            if (capslock)
                isupper(ch) ? putchar(tolower(ch)) : putchar(toupper(ch));
            else
                putchar(ch);
        }
        putchar('\n');
    }
    
    return 0;
}
