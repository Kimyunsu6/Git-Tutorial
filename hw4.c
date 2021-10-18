#include<stdio.h>

int DectoBin(int n);

int main(void) 
{
	int number;
	printf("1Please enter a number: ");
	scanf_s("%d", &number);
	DectoBin(number);
	

	return 0;
}
int DectoBin(int n) {

	if (n == 0 || n == 1)
		printf("%d",n);
	else {
			DectoBin(n / 2);
			printf("%d", n % 2);
	}
	return 0;
}