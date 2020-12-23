/*S-a citit fiecare din cele n cifre fara a le memora, s-a comparat cu max si numarat de cate ori se gasesc valorile.*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, nr, x, max, i;
	FILE* f;
	f = fopen("numere.txt", "r");
	max = 1;
	fscanf(f, "%d", &n);
	for (i = 1; i <= n; i++)
	{
		fscanf(f, "%d", &x);
		if (x > max)
		{
			max = x;
			nr = 1;
		}
		else
			if (x == max)
				nr++;
	}
	printf("%d %d", max, nr);
	getch();
	return 0;
}
