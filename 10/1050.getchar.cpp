/* Atoi */
#include <cstdio>
#include <cctype>

int main()
{
    int ch, neg = 0;
    bool sgn = false, isprefix = true, printed = false;
    while ((ch = getchar()))
    {
        if (ch == EOF) break;
        if (ch == '-') neg++;
        if (isdigit(ch))
        {
            if (ch == '0') {
                if (!isprefix) putchar(ch);
            }
            else {
                if (!sgn) {
                    sgn = true;
                    if (neg % 2) putchar('-');
                }
                putchar(ch);
                isprefix = false;
                printed = true;
            }
        }
        if (ch == '\n') {
            if (!printed) putchar('0');
            putchar('\n');
            neg = 0;
            sgn = false;
            isprefix = true;
            printed = false;
        }
    }
}
