#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

#define N 7
// �������еĵڼ���Ԫ���ƶ���ָ����λ��

void Move_Arr(int A[], int num, int k) {   // ���鱻��ʽת����ָ��
	int temp = 0;
	int i;
	for (i = num; i < k; i++) {
		// ��������Ԫ��
		temp = A[i - 1];
		A[i - 1] = A[i];
		A[i] = temp;// ����
	}
}

int main() {
	int num = 0;
	int k = 0;
	int A[N] = { 10, 20, 45, 20, 5, 5, 4 };
	// ��ӡ����
	for (int i = 0; i < N; i++) {
		printf("%d ", A[i]);

	}
	printf("\n");
	printf("�����뽫Ҫ�ƶ��ڼ���Ԫ���Լ�Ҫ�ƶ����ڼ�����");
	scanf("%d%d", &num, &k);
	printf("\n���� %d ��Ԫ���ƶ����� %d ���Ľ��Ϊ��\n", num, k);
	Move_Arr(A, num, k); // �����ƶ�����

	// ��ӡ�ƶ��������
	for (int i = 0; i < N; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
