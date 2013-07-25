#include <stdio.h>
#include "head.h"
int main(void)
{
	int x,y,z;
	int *p1,*p2,*p3;
	printf("please input number(1,2,3):\n");
	scanf("%d,%d,%d",&x,&y,&z);
	p1=&x;p2=&y;p3=&z;
	exchenge(&x,&y,&z);
	printf("%d,%d,%d\n",x,y,z);
	return 0;
}
