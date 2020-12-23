#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s1[256], s2[256];
	int i, n, nrlit = 0;
	gets(s1);
	n = strlen(s1);
	for (i = 0; i < n; i++)
		if ((s1[i] >= 'a' && s1[i] <= 'z') || (s1[i] >= 'A' && s1[i] <= 'Z'))
		{
			s2[nrlit] = s1[i];
			nrlit++;
		}
	puts(s2);
	getch();
	return 0;
}
