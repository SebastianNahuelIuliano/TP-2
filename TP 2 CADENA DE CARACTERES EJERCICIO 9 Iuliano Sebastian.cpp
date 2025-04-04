#include <stdio.h>
#include <string.h>

int main(){
	
	char oracion[300];
	int opc, i;
	
	printf("Ingrese una oracion: ");
	fgets(oracion, sizeof(oracion), stdin);
	
	printf("1. Imprimir la oracion toda en mayuscula.\n");
	printf("2. Imprimir la oracion toda en minuscula.\n");
	printf("3. Imprimir la oracion alternando una mayuscula y una minuscula.\n");
	printf("4. Imprimir la oracion comenzando todas las palabras con mayuscula.\n");
	
	printf("Ingrese una opcion: ");
	scanf("%d",&opc);
	
	int longitud = strlen(oracion);
	
	switch(opc){
		
		case 1:
			strupr(oracion);
			printf("%s",oracion);
			break;
		
		case 2:
			strlwr(oracion);
			printf("%s",oracion);
			break;
		
		case 3:
			for(i=0;i<longitud;i++){
				
				if(i%2==0){
					
					strupr(oracion);
					printf("%c",oracion[i]);
				} 
				if(i%2!=0){
					strlwr(oracion);
					printf("%c",oracion[i]);
				}
			}
			break;
			
		case 4:
			for (i=0; i<longitud; i++){
				
				if (oracion[i-1] == ' ' || i == 0){
					strupr(oracion);
				} else {
					strlwr(oracion);
				}
				
				printf("%c", oracion[i]);
			}
			break;
	}
	
	
	
	
	
	
	
	return 0;
}
