#include <stdio.h>

int main(void)
{
	char ch;
	while (scanf("%c", &ch) != EOF)
	{
		if (ch <= 31 || ch >= 127) continue;
		printf("%hhd\n", ch);
	}
}
