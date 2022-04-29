#include<stdio.h>
#include<math.h>
int main()
{
	int n1,n2,result;
	char choice;
	printf(" \nEnter two numbers \n");
 	scanf("%d%d",&n1,&n2);
	while(1)
	{
		printf("\n Enter 1 for add, Enter 2 for subtract, Enter 3 for multiplication, Enter 4 for division, Enter 5 for square of numbers,Enter 6 for cube of numbers \n \n");
		scanf("%d",&result);	
	switch(result)
	{
		case 1: printf("The addition value is = %d",n1+n2);
		break;
		case 2: printf("The subtraction value is = %d",n1-n2);
		break;
		case 3: printf("The Multiplication value is = %d",n1*n2);
		break;
		case 4: printf("The Division Value is = %d",n1/n2);
		break;
		case 5: printf("The square values are = %d and %d",n1*n1,n2*n2);
		break;
		case 6: printf("The cube values are = %d and %d ",n1*n1*n1,n2*n2*n2);
		break;
		default: printf("Please enter valid value \n");
	}
	printf("\nDo you want to repeat again? \n");
	scanf(" %c",&choice);
	if(choice == 'y' || choice == 'Y')
	{
		continue;
	}
	else if(choice =='n' || choice =='N')
	{
		break;
	}
}

	return 0;
		}
