#include <stdio.h> 
#include <conio.h>

int main(){
	
	
	int op, opc,valor1, valor2, valor3;
	
	opc=1;
	
	while(opc==1){
	
	printf("Seleccione una opcion\n\n");
	
	printf("1. Suma\n");
	printf("2. Resta\n");
	printf("3. Multiplicacion\n");
	printf("4. Division\n");
	
	scanf("%d", &op);
	
    
	switch(op){
		
		case 1:
			
		printf("Ingrese los valores \n");
	    
		scanf("%i", &valor1);
	    scanf("%i", &valor2);
	    
	    valor3=valor1+valor2;
	    
	    printf("El resultado es de %i\n\n",valor3);
	    
		break;
		
		case 2:
		
		printf("Ingrese los valores \n");
		scanf("%i",&valor1);
	    scanf("%i",&valor2);
	    
	    valor3=valor1-valor2;
	    
	    printf("El resultado es de %i\n\n",valor3);
	    
		break;
	    
	    case 3:
	    
	    printf("Ingrese los valores \n");
		scanf("%i",&valor1);
	    scanf("%i",&valor2);
	    
	    valor3=valor1*valor2;
	    
	    printf("El resultado es de %i\n\n",valor3);
	    
		break;
	    
	    case 4:
	    
		printf("Ingrese los valores \n");
		scanf("%i",&valor1);
	    scanf("%i",&valor2);
	    
	    valor3=valor1/valor2;
	    
	    printf("El resultado es de %i\n\n",valor3);
	
		break;
		
		default:
		
		printf("\nerror, ingreso una opcion no valida\n\n");
		
		
		
	}
	
	printf("Quiere repetir el programa\n");
	scanf("%i",&opc);
	
 }
	
	
	
}
