#include "head.h"
void exchenge(int *p1,int *p2,int *p3)
{
	if(*p1>*p2)
		swap(p1,p2);
	if(*p1>*p3)
		swap(p1,p3);
	if(*p2>*p3)
		swap(p2,p3);
}
void swap(int *p1,int *p2)
{
	int tmp;
	tmp=*p1;
	*p1=*p2;
	*p2=tmp;
}
