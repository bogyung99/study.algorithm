#include<stdio.h>
void SWAP(int *a, int *b);
void bubbleSoft(int a[], int b);
// 함수 선언(인식)

int main()
{
	int n;
	int A[1001] = { 0 };
	// 배열 선언할 때 크기 규정
	scanf_s("%d", &n);

	bubbleSoft(A, n);
	// 배열을 함수에 넣을 땐 이름만

	return 0;
}

// 스왑함수
void SWAP(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void bubbleSoft(int a[], int b)
{
	int last;

	for (int i = 0; i < b; i++)
	{
		scanf_s("%d", &a[i]);
	}
	// 하나씩 입력

	// 비주얼에서의 scanf는 -s붙여야 됨

	for (last = 0; last < b; last++)
	{
		for (int i = 1; i < b - last; i++)
		{
			// 하나씩 줄여서 돌림
			if (a[i - 1] > a[i])
			{
				SWAP(&a[i - 1], &a[i]);
			}
		}
	}

	for (int i = 0; i < b; i++)
	{
		printf("%d\n", a[i]);
	}

}