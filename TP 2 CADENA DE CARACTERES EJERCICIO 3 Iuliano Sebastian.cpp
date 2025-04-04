#include <stdio.h>
#include <string.h>

int main(){
	
	char palabra[30];
	char copia [30];
	
	printf("Ingrese una palabra: ");
	scanf("%s",palabra);
	
	strcpy(copia,palabra);
	
	int longitud=strlen(palabra);
	int correcto=0;
	int aux= longitud-1;
	
	for(int i=0;i<longitud;i++){
	 if(palabra[i]== copia[aux]){
	 	aux--;
	 	correcto++;
	 }
	}
	
	if(correcto == longitud){
		printf("La palabra es un palindromo");
		
		
	}else{
	printf("La palabra no es un palindromo");
		
	}
	
	
	
	
	
	return 0;
}
