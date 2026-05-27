#include <stdio.h>
#include <assert.h>
#include "function_calcular-2.c"

int main()
{
    assert(dividir(14,2) == 7);
    assert(dividir(99,3) == 33);
    assert(dividir(144,12) == 12);
    printf("Teste executado com sucesso");
 printf("\nfeito por Leonardo Mattoso (https://github.com/Leonardo-Torres01)");
 return 0;
}
