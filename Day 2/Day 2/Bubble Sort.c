#include<stdio.h>

void bubbleSort(int A[], int x);
void SWAP(int *a, int *b);

int main()
{
	int n;
	int A[1000] = { 0 };

	scanf("%d", &n);

	bubbleSort(A, n);

	return 0;
}

void bubbleSort(int A[], int x)
{
	int last;

	last = x;

	for (int i = 0; i < last; i++)
	{
		scanf("%d", &A[i]);
	}

	for (int i = 1; i < last; i++)
	{
		for (int j = 0; j < last - i; j++)
		{
			// j + 1을 빼면 안되는 이유
			// 한 번 for문이 돌아갈 때 계속 똑같이 돔
			if (A[j] > A[j + 1])
			{
				SWAP(&A[j], &A[j + 1]);
			}
		}
	}

	for (int i = 0; i < last; i++)
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
