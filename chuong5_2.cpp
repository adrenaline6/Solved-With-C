#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 10


int main() {
	int i,j = 0;
	int n;
	printf("nhap so phan tu cua day so: ");
	scanf("%d", &n);
	fflush(stdin);
	int arr[n];
	char dayso[n+n-1];
	gets(dayso);
	char * p;
	p = strtok(dayso, ",");
	arr[i] = atoi(p);
	i++;
//	printf("%d\n", arr[0]);
	while (p != NULL) {
		p = strtok(NULL, ",");
		if(p != NULL) {
//			printf("%s\n", p);
			arr[i] = atoi(p);
			i++;
		}
	}
	int dem_so_duong = 0;
	int dem_so_am = 0;
	float tong_duong = 0;
	float tong_am = 0;
	for(j = 0;j < n; j++) {
//		printf("%d", arr[j]);
		
		if(arr[j] > 0) {
			dem_so_duong++;
			tong_duong = tong_duong + arr[j];	
		}else if (arr[j] < 0) {
			dem_so_am++;
			tong_am = tong_am + arr[j];
		}else {
			continue;
		}
		
	}
	if (dem_so_am == 0 ) {
		dem_so_am = 1;
	}
	if (dem_so_duong == 0 ) {
		dem_so_duong = 1;
	}
	printf("\nTrung binh cong so duong la: %f", (tong_duong / dem_so_duong));
	printf("\nTrung binh cong so am la: %f", (tong_am / dem_so_am));
	return 0;
}

