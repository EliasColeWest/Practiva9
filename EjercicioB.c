#include<stdio.h>
#include<stdlib.h>

int main(){
    //srand(time(NULL));
    float COS[12], promedio, sum, mayor, menor;
    int contador, mayorcosecha, mayormes, menormes;
    mayor = menor = COS[0];

    while (contador<=12)
    {
    	COS[contador]=rand() %100;
    	
        printf("COS %d %f \n", numero, COS[contador]);//Quitar luego
        sum = sum + COS[contador];
        promedio = sum/12;
        printf("SUMA = %f \n", sum);//Quitar luego
        
        contador++;
    }
    
    printf("SUMA = %f \n", promedio);
    contador = 0;
    while(contador<12){
    	if(COS[contador]>promedio){
        	mayorcosecha=mayorcosecha+1;
        	
		}
		
		if (COS[contador] > mayor){
			mayor = COS[contador];
			mayormes=contador;
		} 
		
		if (COS[contador] < menor){
		 	menor = COS[contador];
		 	menormes=contador;
		}
		
		contador++;
	}
	printf("Mayor que el promedio anual = %d \n", mayorcosecha);
	printf("Mes con mayor cosecha fue el %d con %f \n", mayormes, mayor);
	printf("Mes con menor cosecha fue el %d con %f \n", menormes, menor);

}
