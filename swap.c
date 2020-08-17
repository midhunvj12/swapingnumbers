#include<stdio.h>
int main()
{
	int a,b;
	printf("\n Before Swap\n");
	printf("--------------\n");
	printf("FIRST NUMBER : ");
	scanf("%d",&a);
	printf("SECOND NUMBER : ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n\n After Swap\n");
	printf("--------------\n");
	printf("FIRST NUMBER : %d \n",a);
	printf("SECOND NUMBER : %d",b);
	return 0;
}
