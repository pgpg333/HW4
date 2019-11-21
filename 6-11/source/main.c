#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int a[5];
	int i, j, b;
	printf("Enter 5 integers:");
	for (i = 0; i <= 4; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (j = 0; j <= 10; j++) 
	{
		for (i = 0; i <= 3; i++) 
		{
			if (a[i] > a[i + 1])
			{
				b = a[i];
				a[i] = a[i + 1];
				a[i + 1] = b;
			}
		}
	}
	for (i = 0; i <= 4; i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}