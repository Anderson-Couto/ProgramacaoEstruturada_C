//#include "contafreq.h"

int contafreq(int num, int digito) {
   if (num == 0)
    {
        return 0;
    }
    else
    {
        int resto = num%10;
        
        if (resto == digito)
        {
            return contafreq(num/10, digito)+1;
        }
        else
        {
            return contafreq(num/10, digito);
        }
    }
}