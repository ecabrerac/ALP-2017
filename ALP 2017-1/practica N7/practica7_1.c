#include <stdio.h>
#include <stdlib.h>

int trespasos(int);

int main(void)
{
    int argumento, res;

    printf("Ingrese numero 1: ");
    scanf("%d", &argumento);
    fflush(stdin);
    res = trespasos(argumento);
    printf("Paso 1: %d\n\n", res);

    printf("Ingrese numero 2: ");
    scanf("%d", &argumento);
    fflush(stdin);
    res = trespasos(argumento);
    printf("Paso 2: %d\n\n", res);

    printf("Ingrese numero 3: ");
    scanf("%d", &argumento);
    fflush(stdin);
    res = trespasos(argumento);
    printf("Paso 3: %d\n", res);
    
    return 0;
}

int trespasos (int a)
{
    static int estado = 0;
    static int resultado;
    
    switch(estado)
    {
        case 0:
            resultado = a;
            break;
        case 1:
            resultado = resultado + a;
            break;
        case 2:
            resultado = resultado * a;
            break;
        default:
            break;
    }
    
    estado++;
    
    return resultado;
}