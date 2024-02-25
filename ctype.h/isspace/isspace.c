#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c1 , c2, c3;

	c1 = ' ';//32
	c2 = 35;
	c3 = '\n';
    printf("\\t bir boşluk karakteri%s\n", isspace(c1) ? "dir!" : " değildir!");
    printf("c bir boşluk karakteri%s\n", isspace(c2) ? "dir!" : " değildir!");
    printf("; bir boşluk karakteri%s\n", isspace(c3) ? "dir!" : " değildir!");

    return (0);
}