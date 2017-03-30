#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j=0,n,a[20],temp;
	printf("enter the n");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\nsorted arry is\n");
	for(i=1;i<n;)
	{
		if(a[j]<=a[i])
		{
		j++;i++;
	    }
		else
	    {
	    	temp=a[j];
	    	a[j]=a[i];
	    	a[i]=temp;
	    	if(j>0)
	    	{
			i--;j--;
			}
		}	
	}
	for(i=0;i<n;i++)
	printf(" %d ",a[i]);
	return 0;
	getch();
}
