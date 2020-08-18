[1] #Sum of Arrays!

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


[2] Merging and Sorting Array!

#include<stdio.h>
#include<conio.h>

print(int *a,int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d\n",a[i]);
	}
}

int main()
{
	int a[100], b[100], c[100], i, j, n1, n2, temp;
	
	printf("Enter the size of 1st Array:\n");
	scanf("%d",&n1);
	
	printf("First Array:\n");
	for(i=0; i<n1; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter the size of 2nd Array:\n");
	scanf("%d",&n2);
	
	printf("Second Array:\n");
	for(i=0; i<n2; i++)
	{
		scanf("%d",&b[i]);
	}
	
	for(i=0; i<n1+n2; i++)
	{
		if(i<n1)
		{
			c[i] = a[i];
		}
		else
		{
			c[i] = b[i-n1];
		}
	}
	
	printf("First Array:");
	print(a,n1);
	
	printf("Second Array:");
	print(b,n2);
	
	for(i=0; i<n1+n2; i++)
	{
		for(j=i; j<n1+n2; j++)
		{
			if(c[i]>c[j])
			{
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}
	
	printf("Array after sorting and  merging: \n");
	print(c,n1+n2);
	
	return 0;
}
