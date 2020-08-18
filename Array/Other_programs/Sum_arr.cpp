#include<stdio.h>

int main()
{
	int arr1[10], arr2[10], s_arr[10], x, i;
	printf("Enter size: ");
	scanf("%d",&x);
	
	printf("\n");
	printf("Enter elements of first array:\n");
	for(i=0; i<x; i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	printf("\n");
	printf("Enter elements of second array:\n");
	for(i=0; i<x; i++)
	{
		scanf("%d",&arr2[i]);
	}
	
	for(i=0; i<x; i++)
	{
		s_arr[i] = arr1[i] + arr2[i];
	}
	
	printf("Sum of two Array is: ");
	for(i=0; i<x; i++)
	{
		printf("%d ",s_arr[i]);
	}
	
	return 0;
}
