#include <stdio.h>

	int main(void)
	{
		int kilometers;
		int miles;
		int mile = 1.609;

		printf("Please enker kilometers: \n");
		scanf_s("%d", &kilometers);

		miles = mile * kilometers;

		printf("%d km is equal to %.1f \n", kilometers, miles);
	}