
#include <stdio.h>


int main()
{
    double t1, t2;
    int op;

    printf("Ingrese temperatura en Celcius: ");
    scanf("%lf",&t1);
    printf("Eliga una opcion de conversion:\n1.- Kelvin\n2.- Fahrenheit\n");
    scanf("%i",&op);

    switch(op)
    {
    case 1:
        t2=t1+273.15;
	printf("\nEl resultado es: %f\n",t2);
        break;
    case 2:
        t2=t1*9/5+32;
	printf("\nEl resultado es: %f\n",t2);
        break;
    default:
        printf("Error");
    }

    
    return 0;
}


