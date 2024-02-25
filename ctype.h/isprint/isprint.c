#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char c1 , c2, c3;

	c1 = ' ';//32
	c2 = 35;
	c3 = '\n';
	printf("%c yazdırılabilir bir karakter%s\n", c1, isprint(c1) ? "dir!" : " değildir!");
	printf("%c yazdırılabilir bir karakter%s\n", c2, isprint(c2) ? "dir!" : " değildir!");
	printf("%c yazdırılabilir bir karakter%s", c3, isprint(c3) ? "dir!" : " değildir!");
	return (0);
}