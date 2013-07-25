#include <stdio.h>

int main(void)
{
struct stu
{
	char c;
	short s;
	char cc;
	int i;
};
	printf("%d\n",sizeof(struct stu));
	
	return 0;
}
