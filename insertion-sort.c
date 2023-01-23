#include <stdio.h>
#include <stdlib.h>

/**
 * insertIth - function that cal the diff
 * @a: array
 * @n: int
 * @i: int
 */

void insertIth (int a[], int n, int i)
{
	int j, k;

	k = a[i];
	j = i - 1;

	while(j >= 0 && a[j] > k)
	{
		a[j + 1] = a[j];
		j = j - 1;
	}
	a[j + 1] = k;
}


/**
 * insSort -insert sort function 
 * @a: array
 * @n: size
 */

void insSort(int a[], int n)
{
	int i;
	i = 1;

	while (i < n)
	{
		insertIth(a, n, i);
		i++;
	}
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
	int s;

	int arr[] = {12, 150, 32, 57, 6988, 100, 254};
	s = sizeof(arr)/sizeof(int);

	display(arr, s);
	insSort(arr, s);
	display(arr, s);
	return 0;
}
