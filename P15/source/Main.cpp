#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void bubb(int *array);
int main()
{
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 66, 89, 45, 37 };
	int i;
	printf("Data items in original order\n");
	for (i = 0;i < SIZE ;i++)
	{
		printf("%4d", a[i]);
	}
	bubb(a);
	printf("\nDate items in ascending order\n");
		for (i = 0;i < SIZE ;i++)
		{
			printf("%4d", a[i]);
		}
		printf("\n");
	system("pause");
}

void bubb(int *array)
{
	int pass,j;
	void swap(int *element1, int *element2);
	for (pass = 0;pass < SIZE ;pass++)
	{
		for (j = 0;j < SIZE-1 ;j++) {
			if (array[j] > array[j + 1])
			{
				swap( &array[j], &array[j + 1]);
			}
		}
	}
}
void swap(int *element1, int *element2)
{
	int t;
	t = *element1;
	*element1 = *element2;
	*element2 = t;
}
