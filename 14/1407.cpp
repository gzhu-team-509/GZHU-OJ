/* 字符串重组 */
#include <cstdio>
#include <cstring>
using namespace std;

char str[5][10050];

int main()
{
    int n;
    scanf("%d", &n); getchar();

    while (n--)
    {
        /**
         * 及时清空字符串 
         * 若不清空，当scanf()不能从输入流中读取字符赋值给str[i]时（输入字符串长度为0），
         * str[i]保持将原值不变。
        **/
        memset(str, '\0', sizeof(str));

        scanf("%[^<]", str[0]); getchar();
        scanf("%[^>]", str[1]); getchar();
        scanf("%[^<]", str[2]); getchar();
        scanf("%[^>]", str[3]); getchar();
        //fgets(str[4], sizeof(str[4]), stdin);             效率高于scanf()
        scanf("%[^\n]", str[4]); getchar();
//!     scanf("%s[^'\n']", str[4]); getchar();              读取到“'”或“\n”时停止

        printf("%s", str[0]);
        printf("%s", str[2]);
        //fputs(str[4], stdout);
        printf("%s\n", str[4]);

        printf("%s", str[0]);
        printf("%s", str[3]);
        printf("%s", str[2]);
        printf("%s", str[1]);
        //fputs(str[4], stdout);
        printf("%s\n", str[4]);
    }
}
