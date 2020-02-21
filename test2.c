#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

#define N 7
// 把数组中的第几个元素移动到指定的位置

void Move_Arr(int A[], int num, int k) {   // 数组被隐式转化成指针
	int temp = 0;
	int i;
	for (i = num; i < k; i++) {
		// 交换数组元素
		temp = A[i - 1];
		A[i - 1] = A[i];
		A[i] = temp;// 右移
	}
}

int main() {
	int num = 0;
	int k = 0;
	int A[N] = { 10, 20, 45, 20, 5, 5, 4 };
	// 打印数组
	for (int i = 0; i < N; i++) {
		printf("%d ", A[i]);

	}
	printf("\n");
	printf("请输入将要移动第几个元素以及要移动到第几个：");
	scanf("%d%d", &num, &k);
	printf("\n将第 %d 个元素移动到第 %d 个的结果为：\n", num, k);
	Move_Arr(A, num, k); // 调用移动函数

	// 打印移动后的数组
	for (int i = 0; i < N; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
