#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c1 , c2, c3;

	c1 = ' ';//32
	c2 = 35;
	c3 = ';';
    printf("%c bir noktalama karakteri%s\n", c1, ispunct(c1) ? "dir!" : " değildir!");
    printf("%c bir noktalama karakteri%s\n", c2, ispunct(c2) ? "dir!" : " değildir!");
    printf("%c bir noktalama karakteri%s\n", c3, ispunct(c3) ? "dir!" : " değildir!");
    
    return (0);
}
