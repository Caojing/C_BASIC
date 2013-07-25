#include <stdio.h>
#include <string.h>
int main(void)
{
	int i=0;
	int ss[10]={1,2,3,4,5,6,7,8,9,0};
	int *p=NULL;
	p=ss;
	printf("%d\n",sizeof(ss));
	printf("%d\n",*p);
	f(ss[i]);
	return 0;
}
void f(ss[i])
{
	int i=0;
	ss++;
	printf("%d\n",ss);
}
