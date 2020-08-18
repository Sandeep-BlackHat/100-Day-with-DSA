//Reverse Inverted Traingle
#include<stdio.h>

int main()
{
	int i, j, n;
	printf("Enter the size: "); 
	scanf("%d",&n);
	printf("\n");
	
	printf("The Inverted Hollow Traingle is: ");
	printf("\n");
	for(i=1; i<=n; i++)
	{	
		for(j=1; j<= (n * 2 - (2 * i - 1)); j++)
		{
			if(i == 1 || j == 1 || j == (n * 2 - (2 * i - 1)))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
