#include<stdio.h>

int main()
{

	int i=0,j=0,rows=0;

	printf("Enter the no. of rows\n");
	scanf("%d", &rows);

	for(i = 0; i<rows; i++)
	{
		for(int k = 0; k< i;k++)
		{
			printf(" ");
		}

		for(j=rows; j>i;j--)
		{
			printf("* ");
		}

		
		printf("\n");
	}	

	for(i = 0; i<rows; i++)
	{
		for(j=rows; j>i+1;j--)
		{
			printf(" ");
		}

		for(int k = 0; k<= i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}


	/*int arr1[4] ,arr2[3],i,j=0, flag=0;
	
	for(i = 0;i<4;i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	for(i = 0;i<3;i++)
	{
		scanf("%d",&arr2[i]);
	}

	int arr3[7];

	while(flag<7)
	{
		if(flag<4)
		{
			arr3[flag] = arr1[flag];
			flag++;
		}

		else
		{
			arr3[flag] = arr2[j];
			flag++;
			j++;
		}
	}

	for(i = 0;i<7;i++)
	{
		printf("%d ",arr3[i]);
	}*/


	return 0;
}
