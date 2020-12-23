#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[41], v[41];
	int i, n;
	gets(s);
	n = strlen(s);
	for (i = 0; i < n; i++)
	{
		strcpy(v, s);
		strcpy(v + i, v + i + 1);
		puts(v);
		printf("\n");
	}
	getch();
	return 0;
}
