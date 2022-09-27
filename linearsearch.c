#include<stdio.h>
int main()
{
	int n,a[100],i,key,flag=0;
	printf("Enter number of elements in array:");
    scanf("%d", &n);
    printf("Enter %d integers\n",n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	printf("enter the number to be searched :");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
		flag=1;
		break;
		}
	}
	if(flag==1)
	{
		printf("Element is found");
	}
	else
	{
	    printf("Element is not found");	
	}return 0;
	
}
