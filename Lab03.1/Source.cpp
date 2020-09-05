#include<stdio.h>

int main()
{
	int x, y;
	printf("Enter your num : ");
	scanf_s("%d", &x);
	while (x >= 10)
	{
		int sum = 0;
		y = x;
		while (y > 0)
		{
			sum = sum + y % 10;
			y = y / 10;
		}
		printf("%d\n", sum);
		x = sum;
	}
	return 0;
}