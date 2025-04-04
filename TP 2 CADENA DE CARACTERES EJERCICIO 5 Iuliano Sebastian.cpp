#include <stdio.h>
#include <string.h>

int main(){
	
	char cadena[100];
	int i, cant_palabras=0;
	
	printf("Ingrese una cadena de palabras: ");
	fgets(cadena, sizeof(cadena), stdin);
	
	int longitud = strlen(cadena);
	
	for(i=0;i<longitud;i++){
		
		if(cadena[i]==' ' || cadena[i]=='\n'){
			cant_palabras++;
		}
		
	}
	
	
	printf("La cantidad de palabras es: %d", cant_palabras);
	
	return 0;
}
