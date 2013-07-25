#include <stdio.h>

int main(void)
{
	FILE *fp=fopen("a.c","w");
	char *str="Hello world!\n";
	int i=0;
	while(str[i]){
		fprintf(fp,"%c",str[i]);
		i++;
	}
	fseek(fp,20,SEEK_END);
	fputc('K',fp);
	fclose(fp);
	return 0;
}


