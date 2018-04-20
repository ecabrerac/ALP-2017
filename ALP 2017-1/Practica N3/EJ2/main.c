//Ejercicio 2

int main()
{
    int i=1,j=0;
    while(i<6) //while que cambia el numero a imprimir
    {
        while (j<i)// while anidado que imprime la cantidad de veces el numero
        {
            printf("%i",i);
            j++;
        }
        printf("\n");//salto de linea para mayor orden
        j=0;// se resetea j para que siempre cuente de 0
        i++;// se actualizai
    }
    return 0;
}
