#include <stdio.h>
#include "lian_xi.h"
#include <assert.h>
void show_info(str *q)
{
	FILE *fp;
	fp=fopen("first.txt","r");
	fscanf(fp,"%d,%s",&q->num,q->name);
	getchar();
	fscanf(fp,"%s",q->call);

}
int show_PRINTF(str *h)
{
	/*FILE *fp;
	fp=fopen("first.txt","r");*/
	str *p;
	assert(h);
	p=h;
	while(p){
		printf("num=%d,name=%s,call=%s\n",p->num,p->name,p->call);
		p=p->next;
	}
	/*fclose(fp);*/
}
