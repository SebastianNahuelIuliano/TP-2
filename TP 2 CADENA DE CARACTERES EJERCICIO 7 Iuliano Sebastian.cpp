#include <stdio.h>
#include <string.h>

int main(){
	
	char cadena1[100];
	char cadena2[100];
	int cantIguales=0, i, j;
	
	printf("Ingrese una palabra: ");
	fgets(cadena1, sizeof(cadena1), stdin);
	
	printf("Ingrese otra palabra: ");
	fgets(cadena2, sizeof(cadena2), stdin);
	
	int longitud1 = strlen(cadena1);
	 
	int longitud2 = strlen(cadena2);
	
	if(longitud1==longitud2){
		
		for(i=0;i<longitud1;i++){
			
			for(j=0;j<longitud2;j++){
				
				if(cadena1[j]==cadena2[i]){
					
					cantIguales++;
					break;
				}
			}
		}
	}
	
	if(cantIguales==longitud1){
		printf("La palabra es un anagrama.");
	}else{
		printf("La palabra no es un anagrama.");
	}
	
	return 0;
}
