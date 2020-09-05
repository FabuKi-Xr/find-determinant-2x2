#include<stdio.h>
int main() {
	int n[2][2], i, j, det;
	printf("Enter num : \n[][]\n[][]\n");
	for (i = 0;i < 2;i++) {
		for (j = 0;j < 2;j++) {
			scanf_s("%d", &n[i][j]);
		}
	}
	det = n[0][0] * n[1][1] - (n[1][0] * n[0][1]);
	printf("%d", det);


	return 0;
}