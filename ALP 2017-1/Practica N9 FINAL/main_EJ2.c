#include <stdlib.h>
#include <stdio.h>


// Problema  2

double ff(int x, float nn) { return x/nn; }
double hh(int a, float b)  { return a*b; }

typedef double (*func) (int, float);

int main(void){
    func func_arr[2] = {ff, hh};

    int arr1[8] = {0, 1, 1, 0, 1, 0, 0, 0};
	float arr2[8] = {0.5, 3.4, 8.35, 12.0, 42.42, 0.034, 9.9, 5.67};

    int i;
    for(i = 0; i < 8; i++)
        printf("Posicion: %d, Resultado: %lf\n", i, func_arr[arr1[i]](arr1[i] + 1, arr2[i]));

    return 0;
}
