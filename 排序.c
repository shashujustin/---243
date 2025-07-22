/*#include <stdio.h>
#include <stdlib.h>
int main() {
	printf("请输入一个整数：");
	int N;
	scanf_s("%d", &N);
	int* arr = (int*)malloc(N * sizeof(int));
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - i - 1; j++) {
			if (arr[j] > arr[j]);
			int temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
	}
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
		if (i < N - 1)printf(" ");
	}
	printf("\n");
	free(arr);
	return 0;
	
	

}*/