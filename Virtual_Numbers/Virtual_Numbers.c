#include <stdio.h>
#include <complex.h>

double ft_VirtualNumbers(int power)
{
    double complex index;

    if (power < 0) 
    {
        index = csqrt(power + 0.0*I);
        printf("%lf --- %lf * I\n",cimag(index), creal(index));
        return cimag(index);
    } 
    else if (power >= 0)
    {
        index = csqrt(power);
        printf("%lf --- %lf * I\n",cimag(index), creal(index));
        return creal(index);
    }
}

int main(void) {

    ft_VirtualNumbers(-20);

    return 0;
}