#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char sir[256], cifre[10];
	int nrap[10], max, imax, i;
	strcpy(cifre, "0123456789");
	gets(sir);
	for (i = 0; i < strlen(sir); i++)
		if (strchr(cifre, sir[i]))
			nrap[sir[i] - '0']++;
	for (i = 0; i <= 9; i++)
		if (nrap[i] > max)
		{
			max = nrap[i];
			imax = i;
		}
	if (max == 0)
		printf("NU");
	else
		printf("%d", imax);
	getch();
	return 0;
}
