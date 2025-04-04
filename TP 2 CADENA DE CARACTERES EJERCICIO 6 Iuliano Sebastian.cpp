#include <stdio.h>
#include <string.h>

int main() {
    char cadena[300];
    int i, j = 0, k = 0;
    char palabra[300];
    char cadenaInvertida[300] = ""; 
    int inicio = 0;
    
    printf("Ingrese una oracion: \n");
    fgets(cadena, sizeof(cadena), stdin);
    
    int longitud = strlen(cadena);
    
    for (i = longitud - 1; i >= 0; i--) {
        if (cadena[i] == ' ' || i == 0) {
        	
            if (i==0){
				inicio = i;
			} else {
				inicio = i+1;
			}
            
            for (j = inicio; cadena[j] != ' '; j++) {
                palabra[k] = cadena[j];
                k++;
            }
            palabra[k] = '\0';
            
            strcat(cadenaInvertida, palabra);
            strcat(cadenaInvertida, " ");
            k = 0; 
        }
    }

    printf("\nCadena invertida: %s\n", cadenaInvertida);
    
    return 0;
}

