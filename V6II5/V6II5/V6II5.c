#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[255];
	int i, n, ok = 1;
	gets(s);
	n = strlen(s);
	for (i = 0; i < n; i++)
		if (ok == 1 && s[i] != ' ')
		{
			s[i] = toupper(s[i]);
			ok = 0;
		}
		else
			if (s[i] == ' ')
				ok = 1;
	puts(s);
	getch();
	return 0;
}
