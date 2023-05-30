#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    float real;
    float imag;
}Complex;

int main()
{
    Complex z1={1,5};

    printf("z1 is :");
    DispComplex (z1);
    printf("\n");

    return 0;
}
  void DispComplex (Complex z)
  {
      printf("%f + %fi", z.real,z.imag);
  }
