#include<stdio.h>

int A[1000000] = { 0 };
// 배열의 크기가 클 경우 전역변수로 선언해주어야 함
// 컴퓨터의 램 크기가 적을 경우 정렬이 실행되지 않을 수 있음

void quickSort(int A[], int p, int n);
int partition(int A[], int p, int n);
int choosePivot(int l, int h);
void SWAP(int *a, int *b);

int main()
{
	int n;
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}

	quickSort(A, 0, n - 1);

	for (int i = 0; i < n; i++)
	{
		printf("%d\n", A[i]);
	}

	return 0;
}

void quickSort(int A[], int p, int n)
{
	int q;

	if (p < n)
	{
		q = partition(A, p, n);
		quickSort(A, p, q - 1);
		quickSort(A, q + 1, n);
	}
}

int partition(int A[], int p, int n)
{
	int pivotIndex = choosePivot(p, n);
	int pivotValue = A[pivotIndex];
	SWAP(&A[pivotIndex],& A[n]);

	int x;
	int i;
	x = A[n];
	i = p - 1;

	for (int j = p; j < n; j++)
	{
		if (A[j] <= x)
			SWAP(&A[++i], &A[j]);
	}

	SWAP(&A[i + 1], &A[n]);

	return i + 1;
}


int choosePivot(int l, int h) {
	return l + (h - l) / 2;
}

void SWAP(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}