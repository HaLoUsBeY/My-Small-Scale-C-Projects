#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char isspace1 = '\n';
    char isspace2 = '\t';
    char A = 'A';

    if (iscntrl(isspace1))
    {
        printf("%c is a control character.\n", isspace1);
    }
    else
    {
        printf("%c is not a control character.\n", isspace1);
    }

    if (iscntrl(isspace2))
    {
        printf("%c is a control character.\n", isspace2);
    }
    else
    {
        printf("%c is not a control character.\n", isspace2);
    }

    if (iscntrl(A))
    {
        printf("%c is a control character.\n", A);
    }
    else
    {
        printf("%c is not a control character.\n", A);
    }

    return (0);
}
