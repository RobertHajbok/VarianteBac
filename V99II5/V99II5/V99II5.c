#include<stdio.h>
#include<conio.h>
int main()
{
	int a[51][51], n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= i; j++)
			a[i][j] = a[j][i] = i;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
