#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[101];
	int n, i;
	gets(s);
	n = strlen(s);
	for (i = 0; i < n; i++)
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
			s[i] = s[i] + 1;
	puts(s);
	getch();
	return 0;
}
