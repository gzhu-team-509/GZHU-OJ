#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int line, capslock;
    scanf("%d\n", &line);
    while(line--){
        capslock = 0;
        int ch;
        while((ch = getchar()) != '\n')
        {
            if(ch == '!')
            {
                if(capslock){
                    capslock = 0;
                }else{
                    capslock = 1;
                }
                continue;
            }
            if(capslock){
                if(isupper(ch)){
                    putchar(tolower(ch));
                }else{
                    putchar(toupper(ch));
                }
            }else{
                putchar(ch);
            }
        }
        putchar('\n');
    }
    
    return 0;
}
