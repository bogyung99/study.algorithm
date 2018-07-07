#include<stdio.h>

void insertionSort(int A[], int n);

int main()
{
	int n;
	int A[1000] = { 0 };

	scanf("%d", &n);

	insertionSort(A, n);

	return 0;
}

void insertionSort(int A[], int n)
{
	int loc, newitem;
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}

	for (int i = 1; i < n; i++)
	{
		loc = i - 1;
		newitem = A[i];
		while (loc >= 0 && newitem < A[loc])
		{
			A[loc + 1] = A[loc];
			loc = loc - 1;
		}
		A[loc + 1] = newitem;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d\n", A[i]);
	}
}