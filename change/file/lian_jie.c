#include <stdio.h>
#include "head.h"

int main(void)
{
	int a,b;
	printf("enter the number(3,5):\n");
	scanf("%d,%d",&a,&b);
	printf("add=%d\n",add(a,b));
	printf("sub=%d\n",sub(a,b));
	printf("mul=%d\n",mul(a,b));
	printf("dev=%d\n",dev(a,b));
	return 0;
}
