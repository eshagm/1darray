#include<stdio.h>

main()
{
	int i,a[4],b[4],sum[4];
	printf("enter first array =\n");
	for(i=0;i<=4;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("enter second array =\n");
	for(i=0;i<=4;i++)
	{
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<=4;i++)
	{
		sum[i]=a[i]+b[i];
	}
	printf("sum of array =");
	for(i=0;i<=4;i++)
	{
		printf("\nsum[%d]=%d",i,sum[i]);
	}
}
