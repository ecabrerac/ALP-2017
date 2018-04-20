#include <stdio.h>

int main(void){
    // Ejercicio 1
    
    int a = 12;
    int b = 8;
    
    printf("a < b. Resultado: %d\n", a < b);
    printf("a > b. Resultado: %d\n", a > b);
    printf("a == b. Resultado: %d\n", a == b);
    printf("a != b. Resultado: %d\n", a != b);
    printf("a <= b. Resultado: %d\n", a <= b);
    printf("a >= b. Resultado: %d\n", a >= b);

    if(a == b)
        printf("a es igual que b\n", a < b);
    else if(a > b)
        printf("a es mayor que b\n", a > b);
    else
        printf("a es menor a b\n", a == b);
    
    // Ejercicio 2

    int i;
    int c[6] = {3, 7, 45, 22, 5, 38};
    int d[6] = {33, 0, 45, 10, 8, 27};
    
    printf("\n");
    
    for (i = 0; i < 6; i++)
    {
        if(c[i] == d[i])
            printf("%d es igual que %d\n", c[i], d[i]);
        else if(c[i] > d[i])
            printf("%d es mayor que %d\n", c[i], d[i]);
        else
            printf("%d es menor a %d\n", c[i], d[i]);
    }
    
    printf("\n");
    
    // Ejercicio 3
    
    i = 0;
    while(i < 6)
    {
        if(c[i] % 2)
            printf("%d es impar\n", c[i]);
        else
            printf("%d es par\n", c[i]);
        i++;
    }
}