#include <stdio.h>
#ifndef LIST_H_
#define LIST_H_
typedef struct stu
{
	int num;
	char name[20];
	char call[20];
	struct stu *next;
}str;
int show_PRINTF(str *);
void show_info(str *);
#endif
