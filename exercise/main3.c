#include <stdio.h>

int main(void)
{
	char ss[]={"Hello world!\n"};
	FILE *fp=fopen("first.txt","w");
	if(fp==NULL){
		printf("open file error :\n");
	}
	int i=0;
	while(ss[i]){
		fprintf(fp,"%c",ss[i]);
		i++;
	}
	fclose(fp);
	fp=fopen("first.txt","r");
	char str[]={'\0'};
	char c=0;
	if(fp==NULL){
		printf("open file error :\n");
	}
	while((c=fgetc(fp))!=EOF){
		sprintf(str,"%c",c);
		printf("%s",str);
	}
	fclose(fp);
	return 0;
}

