#include <stdio.h>
#include <math.h>

void calcuPi(int n)
{
    double l[n];
    double temp1, temp2, temp3, temp4;
    int index;

    l[0] = 1;
    for(index=1; index<n; index++){
      temp1 = pow(l[index-1]/2.0, 2);
      temp2 = sqrt(1 - temp1);
      temp3 = 1 - temp2;
      temp4 = temp1 + pow(temp3,2);
      l[index] = sqrt(temp4);

      printf("index = %d, l = %.16f, p = %.16f\n", index, l[index], l[index]*3*pow(2,index));
    }

    return;
}

void calcuE(unsigned int n)
{
    double e, tmp1;
    tmp1 = 1 + ((double)1)/n;
    e = pow(tmp1, n);
    
    printf("n = %u, e = %.16f\n", n, e);
}

void calcuE2(unsigned int n)
{
    double e;
    int index, tmp1;

    tmp1 = 1;
    e = 1;
    for(index=0; index<n; index++){
        tmp1 = tmp1*(index+1);
        e = e + (((double)1.0)/((double)tmp1));
    }
    
    printf("n = %u, e= %.16f\n", n, e);
}

void main()
{
    calcuPi(16);
    calcuE(10000);
    calcuE(1000000);
    calcuE2(10);
    calcuE2(20);
}
