#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[100], v[100];
	int i, j;
	gets(s);
	gets(v);
	i = strlen(s) - 1;
	j = strlen(v) - 1;
	while (s[i] == v[j])
	{
		i--;
		j--;
	}
	printf("%s", s + strlen(s) - i);
	getch();
	return 0;
}
