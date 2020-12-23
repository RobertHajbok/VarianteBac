#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[40];
	int i;
	gets(s);
	for (i = 0; i < strlen(s); i++)
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
			printf("%c ", s[i]);
	getch();
	return 0;
}
