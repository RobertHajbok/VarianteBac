/*In vectorul a se marcheaza cu 1 aparitia fiecarei cifre cif din fiecare numar x(citit din fisier). Indexul(pozitia) din vectorul a
reprezinta valoarea unei cifre. In final se parcurge vectorul cifre si se afiseaza acei indecsi pentru care elementul este marcat cu
1.*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10], n, i, x, cif;
	FILE* f;
	f = fopen("numere.txt", "r");
	fscanf(f, "%d", &n);
	for (i = 1; i <= n; i++)
	{
		fscanf(f, "%d", &x);
		while (x != 0)
		{
			cif = x % 10;
			a[cif] = 1;
			x = x / 10;
		}
	}
	for (i = 0; i <= 9; i++)
		if (a[i] == 1)
			printf("%d ", i);
	getch();
	return 0;
}
