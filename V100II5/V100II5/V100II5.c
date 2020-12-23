#include<stdio.h>
#include<conio.h>
int a[101][101], n, i, j;
int verifica(int i, int j)
{
	int x = a[i][j];
	if ((i + 1 <= n) && (x >= a[i + 1][j]))
		return 0;
	if ((i - 1 >= 1) && (x >= a[i - 1][j]))
		return 0;
	if ((j - 1 >= 1) && (x >= a[i][j - 1]))
		return 0;
	if ((j + 1 <= n) && (x >= a[i][j + 1]))
		return 0;
	return 1;
}
int main()
{
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			scanf("%d", &a[i][j]);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (verifica(i, j) == 1)
				printf("%d ", a[i][j]);
	getch();
	return 0;
}
