#include<stdio.h>

main()
{
	int a[100];
	int n,i;
	printf("enter the size=\n");
	scanf("%d",&n);
	printf("enter array elemants=\n");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array elemants=\n");
	for(i=0;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
}
