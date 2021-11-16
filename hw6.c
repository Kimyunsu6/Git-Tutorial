#include <stdio.h>

int main(void) {
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };

	int* ptr1 = &arr1[0];
	int* ptr2 = &arr2[0];


	int i, temp;

	printf("arr1: %d %d %d %d %d %d", arr1[0]
		, arr1[1], arr1[2], arr1[3], arr1[4], arr1[5]);
	printf("\narr2: %d %d %d %d %d %d", arr2[0]
		, arr2[1], arr2[2], arr2[3], arr2[4], arr2[5]);

	for (i = 0; i < 7; i++)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		
		ptr1++;
		ptr2++;
	}
	printf("\n\nafter swap");
	printf("\narr1: %d %d %d %d %d %d", arr1[0]
		, arr1[1], arr1[2], arr1[3], arr1[4], arr1[5]);
	printf("\narr2: %d %d %d %d %d %d", arr2[0]
		, arr2[1], arr2[2], arr2[3], arr2[4], arr2[5]);

	return 0;
}
