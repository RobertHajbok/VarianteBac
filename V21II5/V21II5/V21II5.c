#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[251];
	int i, n;
	scanf("%s", &s);
	n = strlen(s);
	for (i = 0; i < n; i++)
		if (s[i] == s[i + 1] && s[i] != '*')
		{
			printf("%c%c", s[i], s[i]);
			printf("\n");
		}
	getch();
	return 0;
}
