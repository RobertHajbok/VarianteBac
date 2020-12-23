#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[256];
	int i, n;
	gets(s);
	n = strlen(s);
	if (s[0] != ' ')
		s[0] = s[0] - 32;
	if (s[n - 1] != ' ')
		s[n - 1] - s[n - 1] - 32;
	for (i = 1; i <= n - 2; i++)
		if (s[i - 1] == ' ' || s[i + 1] == ' ')
			s[i] = s[i] - 32;
	puts(s);
	getch();
	return 0;
}
