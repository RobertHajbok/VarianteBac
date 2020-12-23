#include<stdio.h>
#include<conio.h>
int main()
{
	int a[23][23], i, j, n, k;
	scanf("%d", &n);
	scanf("%d", &k);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (i < k)
				if (j < k)
					a[i][j] = 1;
				else
					a[i][j] = 2;
			else
				if (j < k)
					a[i][j] = 3;
				else
					a[i][j] = 4;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
