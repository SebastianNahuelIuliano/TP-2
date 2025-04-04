#include <stdio.h>
#include <string.h>

int main() {
	
	char cadena[300];
	char subcadena[300];
	
	char *puntero;
	
	printf("Ingrese una cadena: \n");
	fgets(cadena, sizeof(cadena), stdin);
	
	printf("Ingrese la subcadena a buscar: \n");
	fgets(subcadena, sizeof(subcadena), stdin);
	
	// Elliminar salto de linea
	if (cadena[strlen(cadena) - 1] == '\n') {
        cadena[strlen(cadena) - 1] = '\0';
    }
    
    if (subcadena[strlen(subcadena) - 1] == '\n') {
        subcadena[strlen(subcadena) - 1] = '\0';
    }
	
	puntero = strstr(cadena, subcadena);
	
	if (puntero != NULL){
		
		printf("La subcadena \"%s\" se encuentra en la posicion %ld de la cadena \"%s\".", subcadena, puntero - cadena + 1, cadena);
	
	} else {
		
		printf("La subcadena \"%s\" no se encuentra en la cadena \"%s\".", subcadena, cadena);
	}
	
	return 0;
}
