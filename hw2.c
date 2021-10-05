#include <stdio.h>

int main(void)
{
	int kilometers;
	int miles;

	printf("Please enker kilometers: \n");
	scanf_s("%d", &kilometers);

	miles = 1.609 * kilometers;

	printf("%d km is equal to %.1f \n", kilometers, miles);
}