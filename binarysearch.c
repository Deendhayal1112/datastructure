#include<stdio.h>
int main()
{
	int i,first,last,middle,a[100],n,flag=0,key;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	printf("enter %d integers\n",n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
    printf("enter the key element to found");
	scanf("%d",&key);
    first=0;
    last=n-1;
    while(first<=last)
    {
    	middle=(first+last)/2;
	    	if (a[middle]==key)
	    	{
	    		flag=1;
	    		break;
			}
			else if (a[middle]>key)
			{
				last=middle-1;
			}
			else if (a[middle]<key)
			{
				first=middle+1;
			}
	}
	if(flag==1)
	{
		printf("found");
	}
	else
	{
		printf("not found");
	}
	return 0;
}
