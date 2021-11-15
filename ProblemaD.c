#include<stdio.h>
#include<stdlib.h>

int main(){
    //srand(time(NULL));
    float numero[12], mediaAritmetica, suma;
    int contador;
	

    while (contador<=12)
    {
    	numero[contador]=rand() %10;
    	suma = suma + numero[contador];
        printf("numero %d %f \n", contador, numero[contador]);//Quitar luego
        printf("suma %f \n", suma);//Quitar luego
        contador++;
    }
	mediaAritmetica=suma/12;
	printf("suma %f \n", mediaAritmetica);
	
}
