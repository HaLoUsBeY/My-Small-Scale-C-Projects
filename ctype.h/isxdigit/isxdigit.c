#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c1 , c2, c3, c4;

	c1 = 'A';
	c2 = '5';
	c3 = 'z';
    printf("%c onaltılık sayı sistemi karakteri%s\n", c1, isxdigit(c1) ? "dir!" : " değildir!");
    printf("%c onaltılık sayı sistemi karakteri%s\n", c2, isxdigit(c2) ? "dir!" : " değildir!");
    printf("%c onaltılık sayı sistemi karakteri%s\n", c3, isxdigit(c3) ? "dir!" : " değildir!");

    return (0);
}