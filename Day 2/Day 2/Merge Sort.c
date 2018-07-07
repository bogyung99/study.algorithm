#include<stdio.h>
// 반 씩 잘라서 정렬 후 다시 병합하는 정렬
int A[1000000] = { 0 };

void mergeSort(int A[], int p, int n);
void merge(int A[], int p, int q, int n);

int main()
{
	int n;
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}

	mergeSort(A, 0, n - 1);

	for (int i = 0; i < n; i++)
	{
		printf("%d\n", A[i]);
	}

	return 0;
}

void mergeSort(int A[], int p, int n)
{
	int q;

	if (p < n)
	{
		q = (p + n) / 2;
		mergeSort(A, p, q);
		mergeSort(A, q + 1, n);
		merge(A, p, q, n);
	}
}

void merge(int A[], int p, int q, int n)
{
	int i = p;
	int j = q + 1;
	int t = 0;
	int tmp[1000000];

	while (i <= q && j <= n) 
	{
		if (A[i] <= A[j]) 
			tmp[t++] = A[i++];
		else 
			tmp[t++] = A[j++];
	}

	while (i <= q) 
		tmp[t++] = A[i++];

	while (j <= n) 
		tmp[t++] = A[j++];

	i = p;
	t = 0;

	while (i <= n) 
		A[i++] = tmp[t++];
}