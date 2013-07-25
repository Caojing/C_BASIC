#include "list.h"
#include <stdio.h>
#include <assert.h>

void show_info(stu_t *h)
{
	stu_t *p;
	assert(h);
	p=h;
	while(p){
		printf("num:%d\tname=%s\tiphone=%s\n",\
			p->num,p->name,p->iphone);
		p=p->next;
	}
}
void init_node(stu_t *new)
{
	printf("entry stu info(123,alex)");
	scanf("%d,%s",&new->num,new->name);
	getchar();
	printf("entry iphone:");
	scanf("%s",new->iphone);
	getchar();
}
