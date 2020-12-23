/*Se parcurge mai intai vectorul si se elimina elementele care se repeta, astfel incat in vector sa ramana numai elemente distincte. In
continuare se cauta acele elemente ale vectorului care pot fi scrise ca suma de alte 2 elemente care apartin tabloului.*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int p = 0, n, i, j, k, x, v[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &v[i]);
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (v[i] == v[j])
			{
				v[j] = v[n - 1];
				n--;
			}
	for (k = 0; k < n; k++)
		for (i = 0; i < n - 1; i++)
			for (j = i + 1; j < n; j++)
				if (k != j && k != i && v[k] == v[i] + v[j])
					p++;
	printf("%d", p);
	getch();
	return 0;
}
