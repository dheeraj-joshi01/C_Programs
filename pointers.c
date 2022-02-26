#include<stdio.h>

void swap(int *a, int *b);

int main()
{
	int a,b;
	int *ptra, *ptrb;
	ptra = &a;
	ptrb = &b;
	printf("Enter 2 numbers\n");
	scanf("%d%d", ptra, ptrb);
	swap(ptra,ptrb);
	
	return 0;
}


void swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
	printf("Numbers after swapping are : %d\n%d\n", *a, *b);
}
