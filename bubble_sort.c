#include <stdio.h>
#include <stdlib.h>

/**
 * swap - swaping  elements
 * @a: aray
 * @x: int
 * @y: int
 */

void swap(int a[], int x, int y)
{
	int temp;
	temp = a[x];
	a[x] = a[y];
	a[y] = temp;
}

/**
 * bubble - sort from last to fisrst
 * @a: array
 * @n: size
 */

void bubble(int a[], int n)
{
	int i;

	/* last element */
	i = n -1;

	while (i > 0)
	{
		if (a[i] < a[i - 1])
		{
			swap(a, i, i - 1);
		}
		i--;
	}
}

void bblSort(int a[], int n)
{
	int i;

	i = 0;
	while (i < n - 1)
	{
		bubble(a, n);
		i++;
	}
}

/**
 * display - display array
 * @a: array
 * @s: size
 */

void display(int a[], int s)
{
	int i;

	i =0;
	
	while (i < s)
	{
		printf("%d\t", a[i]);
		i++;
	}
	printf("\n");
}


/**
 * main -
 * Return: 0
 */

int main ()
{

	int s, arr[] = {52, 12, 6887, 458 ,6547, 1022, 5255, 1, 21, 11, 10, 36};

	s = sizeof(arr)/ sizeof(int);

	display(arr, s);
	bblSort(arr, s);
	display(arr, s);

	return 0;
}
