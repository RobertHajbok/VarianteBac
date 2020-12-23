/*Eficienta metodei utilizate va tine seama de faptul ca cei doi vectori sunt ordonati si au componente de paritate diferita. Astfel
vom lua un element dintr-un tablou si celalalt element din celalalt tablou cat timp a[i]<b[j]. In cazul in care nu mai este asigurata
continuitatea se cauta primul element de paritate diferita decat ultimul element pus in tabloul c tinand cont ca acesta se alege din
a sau b. Pentru eficienta se va cauta de la ultima pozitie in care s-a facut ultima alegere.*/
#include<stdio.h>
FILE* f = fopen("BAC.TXT", "w");
int m, n;
int a[100], b[100];
int c[100];
int min(int x, int y)
{
	if (x > y)
	{
		c[1] = y;
		return 0;
	}
	else
	{
		c[1] = x;
		return 1;
	}
}
void citire()
{
	int i;
	scanf("%d", &n);
	scanf("%d", &m);
	for (i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (i = 1; i <= m; i++)
		scanf("%d", &b[i]);
}
int main()
{
	int i, j, k = 1;
	citire();
	if (min(a[1], b[1]) != 0)
	{
		i = 2;
		j = 1;
	}
	else
	{
		i = 1;
		j = 2;
	}
	while (i <= n && j <= m)
	{
		if (a[i] < b[j])
			if ((c[k] % 2 != a[i] % 2) && c[k] < a[i])
				c[++k] = a[i++];
			else
				i++;
		else
			if ((c[k] % 2 != b[j] % 2) && c[k] < b[j])
				c[++k] = b[j++];
			else
				j++;
	}
	for (i = 1; i <= k; i++)
		fprintf(f, "%d ", c[i]);
	return 0;
}
