#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"
int count=0;
int main(void)
{
	stu_t *head,*new,*p;

	head=NULL;
	while(1){
		new=(stu_t *)malloc(sizeof(*new));
		assert(new);
		init_node(new);
		if(new->num==0){
			free(new);new=NULL;
			break;
		}
		count++;
		if(count==1){
			p=head=new;
		}
		p->next=new;
		p=p->next;
	}
	show_info(head);
	return 0;
}
