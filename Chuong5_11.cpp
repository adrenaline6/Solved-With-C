#include<stdio.h>

int main() {
	int count = 0;
	for (int i = 0; i <= 200; i++) {
		for (int j = 0; j <= 100; j++) {
			for (int k = 0; k <= 40; k++) {
				if (i * 1000 + j * 2000 + k * 5000 == 200000) {
					printf("\n%d to 1000(VND) -  %d to 2000(VND) - %d to 5000(VND) ", i, j, k);
                    count++;
				}
                    
			}
		}
	}
	printf("\nCo %d cach!", count);
	return 0;
}
