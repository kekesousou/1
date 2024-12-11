#include <stdio.h>
#include <stdlib.h>
int* Findsddlepoint(int matrix[][100], int n) {
	int* reslut = (int*)malloc(2 * sizeof(int));
	for (int i = 0; i < n; i++) {
		int maxrow = matrix[i][0];
		int a = 0;
		for (int j = 1; j < n; j++) {
			if (matrix[i][j] > maxrow) {
				maxrow = matrix[i][j];
				a = j;
			}
		}int issdd = 1;
		for (int k = 0; k < n; k++) {
			if (matrix[k][a] < maxrow)issdd = 0;

		}
		if (issdd) {
			reslut[0] = i;
			reslut[1] = a;
			return reslut;
		}
	}
	reslut[0] = -1;
reslut[1] = -1;
return reslut;
	}
int main() {
	int n;
	int matrix[100][100];
	printf("请输入矩阵的的阶数:\n");
	scanf_s("%d", &n);
	printf("请按行输入元素:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf_s("%d", &matrix[i][j]);
		}
	}
	int* sddlepoint = Findsddlepoint(matrix, n);
	if (sddlepoint[0] != -1 && sddlepoint[1] != -1) {
		printf("鞍点位置为:(%d,%d)值为:%d\n", sddlepoint[0]+1, sddlepoint[1]+1, matrix[sddlepoint[0]][sddlepoint[1]]);
	}
	else printf("不存在鞍点\n");
}