
#include <stdio.h>

int potencia(int, int);

int main()
{

    int base_test;
    int exp_test;
printf("Ingresa la base:");
 scanf("%d",&base_test);
printf("Ingresa el exponente:");
 scanf("%d",&exp_test);
   
	int res=potencia(base_test,exp_test);
	printf("El numero %d elevado a %d es %d\n",base_test,exp_test,res);

 	

    return 0;
}


int potencia(int base, int exp)
{
	int i=1;
	int result=base;
	if(exp == 0){
		return 1;
	}

	
else
	while(i<exp){
		result=result*base;
		i++;
}
	
	return result;
}
