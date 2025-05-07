#include <stdlib.h>
#include <stdio.h>
#include "fibo.h"

int main (int argc, char * argv [])
{
    long ret;
    int n;
    if (argc<2)
    {
        fprintf(stderr, "missing index.\n");
        return -1;
    }
    n = atoi(argv[1]);
    ret = fibo(n);
    printf("Fibo (%d) is %ld\n",n,ret);
    return EXIT_SUCCESS;
}
long fibo (int n)
{
    if (n<2)
        return 1L;
    else
        return fibo(n-1) + fibo(n-2);
}
#ifndef _FIBO_h
#define _FIBO_h
long fibo (int n);
#endif
