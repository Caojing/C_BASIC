#ifndef LIST_H_
#define LIST_H_
typedef struct stu{
	int num;
	char name[20];
	char iphone[12];
	struct stu *next;
}stu_t;
void show_info(stu_t *);
void init_node(stu_t *);
#endif
