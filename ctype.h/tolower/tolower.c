#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c1;
    char c2;

    c1 = 'A';
    c2 = 'B';
    printf("%c %c\n", c1, tolower(c1));
    printf("%c %c", c2, tolower(c2));

    return 0;
}
