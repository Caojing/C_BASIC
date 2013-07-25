#include <stdio.h>
#include "lian_xi.h"
#include <stdlib.h>
#include <assert.h>
int main(void)
{
	/*FI0LE *fp;
	fp=fopen("first.txt","w");*/
	int n=0;
	str *head,*p,*q;
	head=NULL;
	while(1){
		n++;
		q=(str *)malloc(sizeof(*q));
		assert(q);
		show_info(q);
		if(q->num==0){
			free(q);
			q=NULL;
			break;	
		}
		if(n==1)
			p=head=q;
		else{
			p->next=q;
			p=p->next;}
		
	}
	show_PRINTF(head);
	return 0;
}
