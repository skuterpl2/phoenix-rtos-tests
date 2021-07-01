#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv)
{
	
    double x;
    double result;

    x = 2.3;
    result = sin(x);
    printf("sin(%.2lf) = %.2lf\n", x, result);

    x = -2.3;
    result = sin(x);
    printf("sin(%.2lf) = %.2lf\n", x, result);

    x = 0;
    result = sin(x);
    printf("sin(%.2lf) = %.2lf\n", x, result);


    return 0;
}
