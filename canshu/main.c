#include <stdio.h>
#include "head.h"
int (*hanshu)(int x,int y);
typedef int (*tmp)(int x,int y);
int process(tmp ss[4],int x,int y);
int main(void)
{
	int x,y;
/*	hanshu=add;*/
	printf("please input number(3,5):\n");
	scanf("%d,%d",&x,&y);
	tmp ss[4]={add,sub,mul,dev};
	process(ss,x,y);
/*	printf("%d\n",hanshu(x,y));
	printf("%d\n",sub(x,y));
	printf("%d\n",mul(x,y));
	printf("%d\n",process(tmp,x,y));*/
	return 0;
}
int process(tmp ss[4],int x,int y)
{
	int i;
	for(i=0;i<4;i++){
		printf("%d\n",ss[i](x,y));
	}
	
}
