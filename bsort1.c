#include<stdio.h>
int main()
{
	int percent[50],n,i,temp,j;
	printf("Enter the number of percent: ");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter percentage of %dth student obtained in unit test: \n",i);
		scanf("%d",&percent[i]);
	}
	printf("\n\nThe unsorted percent is : ");
	for(i=0;i<=n-1;i++)
	{
		printf("%d ",percent[i]);
	}
	
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2-i;j++) 
		{
			if(percent[j]>percent[j+1])
			{
				temp=percent[j];
				percent[j]=percent[j+1];
				percent[j+1]=temp;
			}
		}
	}
	printf("\n\n\nThe sorted percent in ascending order is : ");
	for(i=0;i<=n-1;i++)
		{
			printf("%d ",percent[i]);
		}
	for(i=0;i<=n-2;i++)
	{
			for(j=0;j<=n-2-i;j++) 
			{
				if(percent[j]<percent[j+1])
				{
					temp=percent[j];
					percent[j]=percent[j+1];
					percent[j+1]=temp;
				}
			
			}
	}
		printf("\n\n\nThe sorted percent in descending is : ");
		for(i=0;i<=n-1;i++)
		{
			printf("%d ",percent[i]);
		}
	return 0;
}



