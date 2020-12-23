#include<stdio.h>
#include<conio.h>
int a[51][51], n, m, i, j;
void inversare_coloana(int j)
{
	int aux;
	for (i = 1; i <= n / 2; i++)
	{
		aux = a[i][j];
		a[i][j] = a[n - i + 1][j];
		a[n - i + 1][j] = aux;
	}
}
void afisare()
{
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}
int main()
{
	scanf("%d", &n);
	scanf("%d", &m);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			scanf("%d", &a[i][j]);
	for (j = 1; j <= m; j++)
		inversare_coloana(j);
	afisare();
	getch();
	return 0;
}
