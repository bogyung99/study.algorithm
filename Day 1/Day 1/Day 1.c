#include<stdio.h>
void SWAP(int *a, int *b);
void bubbleSoft(int a[], int b);
// �Լ� ����(�ν�)

int main()
{
	int n;
	int A[1001] = { 0 };
	// �迭 ������ �� ũ�� ����
	scanf_s("%d", &n);

	bubbleSoft(A, n);
	// �迭�� �Լ��� ���� �� �̸���

	return 0;
}

// �����Լ�
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
	// �ϳ��� �Է�

	// ���־󿡼��� scanf�� -s�ٿ��� ��

	for (last = 0; last < b; last++)
	{
		for (int i = 1; i < b - last; i++)
		{
			// �ϳ��� �ٿ��� ����
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