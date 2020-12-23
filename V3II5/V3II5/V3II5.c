#include<stdio.h>
#include<conio.h>
int main()
{
	int a[24][24], i, j, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[j][i] = n - i;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (i == j)
				a[i][j] = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
