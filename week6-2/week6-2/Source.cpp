#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int star(int x) {
	int i = 0,j;
	for (i = 0; i < x; i++) {
		for (j = x-i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
int main() {
	int x;
	scanf("%d", &x);
	star(x);
}