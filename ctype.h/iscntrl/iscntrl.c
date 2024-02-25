#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char c1 , c2, c3, c4;

	c1 = '\n';
	c2 = '\r';
	c3 = '\t';
	c4 = 'D';

	printf("\\n bir kontrol karakteri%s\n", iscntrl(c1) ? "dir!" : " değildir!");
	printf("\\r bir kontrol karakteri%s\n", iscntrl(c2) ? "dir!" : " değildir!");
	printf("\\t bir kontrol karakteri%s\n", iscntrl(c3) ? "dir!" : " değildir!");
	printf("D bir kontrol karakteri%s", iscntrl(c4) ? "dir!" : " değildir!");

	return (0);
}