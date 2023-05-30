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

        Complex z2={1,-5};
        printf("z2 is :");
        DispComplex (z2);
        printf("\n");

        Complex z3={0,0};
        printf("z3 is :");
        DispComplex (z3);
        printf("\n");

        Complex z4={-1,0};
        printf("z4 is :");
        DispComplex (z4);
        printf("\n");

        Complex z5={0,7};
        printf("z5 is :");
        DispComplex (z5);
        printf("\n");



        return 0;
    }
      void DispComplex (Complex z)
      {
          float x= z.real;
          float y= z.imag;
          if (x==0)
          {
              if (y==0)
              {
                 printf("z is 0") ;
                // return;
              }
              else
                {
                printf("%fi",y);
                // return;
              }

          }
          else
          {
              if (y==0)
              {
                  printf("%f",x);
              }
              else
              {
                  if (y>0)
                  {
                      printf("%f+%fi",x,y);
                  }

                  else if (y<0)
                  {
                      printf("%f-%fi",x,-y);
                  }
              }