//include "euclides.h"

//#include "euclides.h"

long euclides_recursivo(long m, long n)
{
    if(n == 0) return m;
    return euclides_recursivo(n, m % n);
}

long euclides_iterativo(long m, long n)
{
    while(n != 0){
        long r = m % n;
        m = n;
        n = r;
    }
    return m;
}
