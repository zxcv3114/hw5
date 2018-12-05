#include<stdio.h>
#include<stdlib.h>

void cube(int *p);
int main(void)
{
	int number = 5;
	printf(" The original value of number is%d", number);
	cube(&number);
	printf("\nThe new value of number is%d", number);
	system("pause");
	return 0;

}
void cube(int *p)
{
	*p = *p* *p* *p;
}