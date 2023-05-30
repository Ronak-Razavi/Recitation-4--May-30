#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float real;
    float imag;
} Complex;

Complex Add(Complex z1, Complex z2);
Complex Subtract(Complex z1, Complex z2);
Complex product(Complex z1, Complex z2);
Complex divid(Complex z1, Complex z2);
void DispComplex(Complex z);

int main()
{
    Complex z1 = {1, 5};
    printf("z1 is: ");
    DispComplex(z1);
    printf("\n");

    Complex z2 = {1, -5};
    printf("z2 is: ");
    DispComplex(z2);
    printf("\n");

    Complex z3 = {0, 0};
    printf("z3 is: ");
    DispComplex(z3);
    printf("\n");

    Complex z4 = {-1, 0};
    printf("z4 is: ");
    DispComplex(z4);
    printf("\n");

    Complex z5 = {0, 7};
    printf("z5 is: ");
    DispComplex(z5);
    printf("\n");

    Complex result = divid(z1, z2);
    printf("z1/z2 is: \n");
    DispComplex(result);
     printf("\n");


     Complex selfdivid = divid(z1, z1);
    printf("z1/z1 is: \n");
    DispComplex(selfdivid);
     printf("\n");

    return 0;
}

void DispComplex(Complex z)
{
    float x = z.real;
    float y = z.imag;
    if (x == 0)
    {
        if (y == 0)
        {
            printf("z is 0");
        }
        else
        {
            printf("%fi", y);
        }
    }
    else
    {
        if (y == 0)
        {
            printf("%f", x);
        }
        else
        {
            if (y > 0)
            {
                printf("%f+%fi", x, y);
            }
            else if (y < 0)
            {
                printf("%f-%fi", x, -y);
            }
        }
    }
}

Complex Add(Complex z1, Complex z2)
{
    Complex z;
    z.real = z1.real + z2.real;
    z.imag = z1.imag + z2.imag;
    return z;
}

Complex Subtract(Complex z1, Complex z2)
{
    Complex z = {z1.real - z2.real, z1.imag - z2.imag};
    return z;
}

Complex product(Complex z1, Complex z2)
{
    Complex z;
    z.real = z1.real + z2.real - z1.imag * z2.imag;
    z.imag = z1.real * z2.imag + z2.real * z1.imag;
    return z;
}

Complex divid(Complex z1, Complex z2)
{
    Complex z;
    float den = z2.real * z2.real + z2.imag * z2.imag;
    z.real = (z1.real * z2.real + z1.imag * z2.imag) / den;
    z.imag = (z1.real * z2.imag + z2.real * z1.imag) / den;
    return z;
}


