#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[53], s1[255];
	int i, j, n;
	gets(s);
	n = strlen(s);
	for (i = 0; i < n - 1; i = i + 2)
		for (j = 1; j <= s[i + 1] - 48; j++)
			strncat(s1, s + i, 1);
	puts(s1);
	getch();
	return 0;
}
