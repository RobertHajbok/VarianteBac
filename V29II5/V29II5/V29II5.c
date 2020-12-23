//produsul numerelor "pivot" intr-o matrice
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50][50], n, i, j, x, p = 1, ok;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			scanf("%d", &a[i][j]);
	for (j = 2; j <= n; j++)
	{
		if (a[1][j] % a[1][1] == 0)
		{
			ok = 0;
			x = a[1][j] / a[1][1];
			for (i = 2; i <= n; i++)
				if (a[i][j] / a[i][1] != x)
				{
					ok = 1;
					break;
				}
		}
		if (ok == 0)
			p = p * x;
	}
	printf("produsul este %d", p);
	getch();
	return 0;
}
