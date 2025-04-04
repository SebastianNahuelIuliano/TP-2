#include <stdio.h>
#include <string.h>


int main(){
	
	char palabra[30];
	char caracter1;
	char caracter2;
	
	printf("Ingrese una palabra: ");
	scanf("%s", palabra);
	
	printf("Ingrese el caracter que quiere reemplazar: ");
	scanf(" %c", &caracter1);
	
	printf("Ingrese el caracter que reemplace ese otro caracter: ");
	scanf(" %c", &caracter2);
	
	int longitud = strlen(palabra);
	
	for(int i=0;i<longitud;i++){
		
		if(palabra[i]==caracter1){
			palabra[i]=caracter2;
		}
	}
	
	
	printf("%s",palabra);
	
	return 0;
}
