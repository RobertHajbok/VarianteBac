#include<stdio.h>
#include<conio.h>
int main()
{
	int a[7][7], m, n, i, j, k;
	scanf("%d", &n);
	k = 0;
	m = n;
	while (m != 0)
	{
		m = m / 10;
		k++;
	}
	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= 6; j++)
			if (i == j)
				a[i][j] = 0;
			else
				if (i < j)
					a[i][j] = a[j][i] = n % 10;
		n = n / 10;
	}
	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= 6; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
