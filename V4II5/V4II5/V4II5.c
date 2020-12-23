#include<stdio.h>
#include<conio.h>
int main()
{
	int a[24][24], n, i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (j != n - i - 1)
				a[i][j] = n - i;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (j == n - i - 1)
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
