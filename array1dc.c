#include<stdio.h>

main()
{
	int arr[]={12,23,34,53,62};
	int i,sum=0,avg;
	
	for(i=0;i<=4;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum of all elemant =%d\n",sum);
	avg=sum/5;
	printf("average =%d",avg);

}
