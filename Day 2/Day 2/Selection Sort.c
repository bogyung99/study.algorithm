#include<stdio.h>

void selectionSort(int A[], int n);
void SWAP(int *a, int *b);

int main()
{
	int n;
	int A[1000] = { 0 };

	scanf("%d", &n);

	selectionSort(A, n);

	return 0;
}

void selectionSort(int A[], int n)
{
	int big = 0;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (A[i] > big)
		big = A[i];
	}

	A[n] = big;

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (A[j] > A[n - i])
			{
				SWAP(&A[j], &A[n - i]);
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d\n", A[i]);
	}

}

void SWAP(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}