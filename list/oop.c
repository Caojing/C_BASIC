#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef struct stu
{
	int num;
	char name[20];
	struct stu *next;
	int (*get_num)(struct stu *);
	int (*set_num)(struct stu *,int );
}str;
int get_n(struct stu *new)
{
	return new->num;
}
int set_n(struct stu *new,int x)
{
	return new->num=x;
}
int main(void)
{
	str *p;
	p=(str *)malloc(sizeof(*p));
	assert(p);
	p->get_num=get_n;
	p->set_num=set_n;
	p->set_num(p,6);
	printf("num=%d\n",p->set_num(p,6));
	free(p);
	p=NULL;
	return 0;
}
