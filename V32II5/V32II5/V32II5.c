//Varianta 32
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[50], c1, c2, x[50];
	int i, n;
	gets(s);
	scanf("%c %c", &c1, &c2);
	strcpy(x, s);
	n = strlen(s);
	for (i = 0; i < n; i++)
	{
		if (s[i] == c1)
			s[i] = c2;
		else
			if (s[i] == c2)
				s[i] = c1;
	}
	puts(x);
	puts(s);
	getch();
	return 0;
}
