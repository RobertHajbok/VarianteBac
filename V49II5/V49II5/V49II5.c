#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[21], v[21], t[] = "aeiou";
	int i;
	gets(s);
	strcpy(v, "");
	for (i = 0; i < strlen(s); i++)
		if (strchr(t, s[i]))
			strncat(v, s + i, 1);
	puts(v);
	return 0;
}
