#include <stdio.h>
#include <stdlib.h>

/**
 * swap - creating a swap function
 * @a: array
 * @x: int 1
 * @y: int 2
 */

void swap(int a[], int x, int y)
{
	int temp;

	temp = a[x];
	a[x] = a[y];
	a[y] = temp;
}

/**
 * locOfSmallest -  loc of small int in array	
 * @a: array
 * @s: int
 * @e: ending point
 * Return: smallest
 */

int locOfSmallest(int a[], int s, int e)
{
	int i, j;

	i = s;
	j = i;

	while (i <= e)
	{
		if (a[i] < a[j])
		{
			j = i;
		}
		i = i + 1;
	}
	return j;
}

/**
 * selSort - selection sort
 * @a: array
 * @n: size of array
 */

void selSort(int a[], int n)
{
	int i, j;
	
	i = 0;

	while(i < n - 1)
	{
		j = locOfSmallest(a, i, n-1);
		swap(a, i, j);
		i++;
	}
}

/**
 * display - display cntent of array
 * @a: array
 * @N: size
 */

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
 * main -  selection sort alg
 * Return: 0
 */

int main ()
{
	int s;

	int arr[] = {12, 150, 32, 57, 6988, 100, 254};
	s = sizeof(arr)/sizeof(int);

	display(arr, s);
	selSort(arr, s);
	display(arr, s);

	return 0;

}
