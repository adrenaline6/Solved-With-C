#include<stdio.h>


void taohinh() {
	int i,j;
	int n = 5;

	for (i = 0; i <= 2 * n; i++) {
		printf("* ");
		 
	}
	printf("\n");
	for (i = 1; i <= n - 1; i++) {
		for (j = 0; j <= n - i; j++) {
			printf("* ");
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			printf("  ");
		}
		for (j = 0; j <= (n - i); j++) {
			printf("* ");
		}
		printf("\n");
	}
	for (i = 0; i <= 2 * n; i++) {
		printf("* ");
		 
	}
	
}
int main() {
	int i,j;
	int a [20][20];
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			printf("Nhap so vi tri hang %d cot %d: ", (i + 1), (j + 1));
			scanf("%d", &a[i][j]);
			
			
		}
	}
	for (i = 0; i < 6; i++) {
		//		printf("%d", i);
		
		for (j = 0; j < 6; j++) {
//			a[i][j] = i;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	
	}
	taohinh();
	return 0;
}
