#include<stdio.h>

int main()
{
	int arr[3][2];
	float cost=0;
	float price[] = {29.5, 45.0, 49.0, 95.5, 68.5};
	
	for(int i=0; i<3; i++)
	{	
		for(int j=0; j<2; j++)	
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for(int i=0; i<3; i++)
	{	
		switch(arr[i][0])
			{
				case 1:
				cost += arr[i][1] * price[i];
				break;

				case 2:
				cost += arr[i][1] * price[i];
				break;

				case 3:
				cost += arr[i][1] * price[i];
				break;

				case 4:
				cost += arr[i][1] * price[i];
				break;

				case 5:
				cost += arr[i][1] * price[i];
				break;

				default:
				printf("invalid");
			}
		
	}

	printf("Your total cost is:\n%f", cost);
	

	return 0;
}
