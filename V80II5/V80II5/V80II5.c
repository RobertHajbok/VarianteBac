#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[100], aux[20];
	int n, k;
	gets(s);
	n = strlen(s);
	if (n % 2 == 0)
	{
		k = n / 2;
		strcpy(aux, s + k);
		strncat(aux, s, k);
		puts(aux);
	}
	else
	{
		k = n / 2;
		strcpy(aux, s + k + 1);
		strncat(aux, s + k, 1);
		strncat(aux, s, k);
		puts(aux);
	}
	getch();
	return 0;
}
