#include <stdio.h>
#include <math.h>

float stdev(float num[], int size, float* ave, float* stdev)
{
	float sum1 = 0;
	float sum2 = 0;
	float variance;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += num[i];
	}
	*ave = sum1 / size;

	for (i = 0; i < size; i++) {
		sum2+= (num[i] - *ave) * (num[i] - *ave);
	}
	variance = sum2 / size;
	*stdev = sqrt(variance);
}

int main() {
	int size = 5;
	float num[5];
	int i;
	float mean, mean1, stdev1;

	printf("Enter 5 real numbers: ");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%f", &num[i]);
	}

	stdev(num, size, &mean1, &stdev1);

	printf("\nStandard Deciation: %0.3f", stdev1);
	return 0;
	
}