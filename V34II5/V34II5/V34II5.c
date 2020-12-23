#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20][20], i, j, n, nr;
	scanf("%d", &n);
	nr = 0;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			nr = nr + 2;
			while (nr % 3 == 0)
				nr = nr + 2;
			a[i][j] = nr;
		}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
