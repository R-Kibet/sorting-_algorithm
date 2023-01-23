#include <stdio.h>
#include <stdlib.h>



void combine(int a[], int s, int m, int e)
{
	int i, j, k, *buff;

	buff = malloc(sizeof(int) * (e + 1));

	k = s;

	while(k <= e)
	{
		buff[k] = a[k];
		k = k + 1;
	}

	i = s;
	j = m + 1;
	k = s;

	while (i <= m && j <= e)
	{
		if (buff[i] <= buff[j])
		{
			a[k] = buff[i];
			i = i + 1;
		}
		else 
		{
			a[k] = buff[j];
			j = j + 1;
		}
		k = k + 1;
	}
	while(i <= m)
	{
		a[k] = buff[i];
		i = i + 1;
		k = k + 1;
	}
	while (j <= e)
	{
		a[k] = buff[j];
		j = j + 1;
		k = k + 1;
	}

	free(buff);
}
/**
 * mrgSort - auxiliary/helper function 
 * @a: array
 * @s: start
 * @e: end
 */

void mrgsort(int a[], int s, int e)
{
	int m;

	/* Base case nover true */
	if (s >= e)
	{
		return;
	}

	/* find mid point value */
	m = (s + e) / 2;

	/* use recursion */
	mrgsort(a, s, m);
	mrgsort(a, m + 1, e);
	combine(a, s, m, e);
}

/**
 * mrgSort: mergesort function
 * @a: array
 * @n: size
 */

void mrgSort(int a[], int n)
{
	mrgsort(a, 0, n - 1);
}

void display(int a[], int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		printf("%d\t", a[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - main function
 * Return: 0
 */

int main() 
{
	int s, arr[] = {52, 12, 6887, 458 ,6547, 1022, 5255, 1, 21, 11, 10, 36};
	s = sizeof(arr)/sizeof(int);

	display(arr, s);
	mrgSort(arr, s);
	display(arr, s);
	return 0;
}
