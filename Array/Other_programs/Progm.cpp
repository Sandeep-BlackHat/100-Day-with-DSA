[1] //Sum of Arrays!

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


[2] //Merging and Sorting Array!

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


[3] //Fibonacci Series

#include<stdio.h>

int main()
{
	int n1 = 0, n2 = 1, n3, i, x;
	printf("Enter the number upto which Fibonacci series is needed: ");
	scanf("%d",&x);
	printf("\n");	
	printf("The Series is: ");
	printf("%d %d ",n1,n2);
	for(i=2; i<x; i++)
	{
		n3 = n1 + n2;
		printf("%d ",n3);
		n1 = n2;
		n2 = n3;
	}
	
	return 0;
}

[4] //Reverse Inverted Traingle
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

[5] //Finding 1st and 2nd Max,Min in an Array With sorting!
	
	
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int A[10], x, i, temp, j;
	
	printf("--------------------------------------\n");
	printf("Enter the size of Array needed: ");
	scanf("%d",&x);
	printf("--------------------------------------\n");
	printf("Enter the array: \n");
	for(i=0; i<x; i++)
	{
		scanf("%d",&A[i]);
	}
	
	int max = A[x-1];
	
	for(i=0; i<x; i++)
	{
		for(j=i; j<x; j++)
		{
			if (A[i] > A[j])
			{
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}
	printf("The Max in Array is: %d\n",A[x-1]);
	printf("The 2nd Max in Array is: %d\n",A[x-2]);
	printf("The Min in Array is: %d\n",A[0]);
	printf("The 2nd Min in Array is: %d\n",A[1]);
	return 0;
}
