/*Se citeste separat primul numar din sir in variabila x, apoi toate celelalte numere vor fi citite in variabila y, verificand la
fiecare citire daca numarul citit este mai mic decat cel retinut in variabila x. In acest fel, doar numaram cate numere din sir sunt
mai mici decat primul, si evitam citirea numerelor intr-un vector(economie de memorie) si ordonarea vectorului(minimizand timpul de
executie).*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int x, y, i, n, k = 0;
	FILE* f;
	f = fopen("numere.txt", "r");
	fscanf(f, "%d%d", &n, &x);
	for (i = 1; i <= n; i++)
	{
		fscanf(f, "%d", &y);
		if (y < x)
			k++;
	}
	printf("%d", k);
	getch();
	return 0;
}
