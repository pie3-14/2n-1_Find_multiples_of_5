#include <stdio.h>

int main(void) {
	int n = 1;
	int count = 0;
	
	for (int i = 0; i < 10000; i++) {
		int result = 2 * n - 1;
		printf("%d\n", result);
		if (result % 5 == 0) {
			count++;
		}
		n++;
	}
	printf("5의 배수 개수 = %d\n", count);
	return 0;
}
