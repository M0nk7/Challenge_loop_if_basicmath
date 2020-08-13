#include <stdio.h>
#include <math.h>
int main()
{
	float num1, num2;
	float sum = 0, sumpow = 0;
	float average, SD;
	int i = 0;
	scanf_s("%f%f", &num1, &num2);
	if (num1 == num2)
	{
		printf("%.0f", num1);
		printf("\nAverage = %.1lf\n",num1);
		printf("SD = 0");
		return 0;
	}
	if (num1 > num2)
	{
		while (num1 >= num2)
		{
			printf("%.0f ", num1);
			sum += num1;
			sumpow += num1 * num1;
			num1--;
			i++;
		}
		average = sum / i;
		printf("\nAverage = %.1lf\n", average);
	}
	else
	{
		while (num1 <= num2)
		{
			printf("%.0f ", num1);
			sum += num1;
			sumpow += num1 * num1;
			num1++;
			i++;
		}
		average = sum / i;
		printf("\nAverage = %.1lf\n", average);
	}
	SD = ((i * sumpow) - (sum * sum)) / (i * (i - 1));
	printf("SD = %.2lf", sqrt(SD));
	return 0;
}