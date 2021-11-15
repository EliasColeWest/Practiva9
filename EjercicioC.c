#include<stdio.h>
#include<stdlib.h>

int main(){
    //srand(time(NULL));
    float numero[60];
    int contador, cero, positivo, negativo;
	cero = positivo= negativo=0;
	

    while (contador<60)
    {
    	numero[contador]=rand() %10-5;
    	
        printf("numero %f \n", numero[contador]);//Quitar luego
        
        if(numero[contador]==0){
        	cero++;
		}
		if(numero[contador]>0){
        	positivo++;
		}
		if(numero[contador]<0){
        	negativo++;
		}

        
        contador++;
    }
    printf("numeros positivos %d \n", positivo);
    printf("numeros negativos %d \n", negativo);
    printf("cero %d \n", cero);

}
