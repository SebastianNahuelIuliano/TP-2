#include <stdio.h>
#include <string.h>

int main(){

char palabra[30];
int i, cantVocales=0;

printf("Ingrese una palabra: ");
scanf("%s",palabra);

int longitud=strlen(palabra);

for(i=0;i<longitud;i++){
	
	if(palabra[i]=='a' || palabra[i]=='e' || palabra[i]=='i' || palabra[i]=='o' || palabra[i]=='u'){
		cantVocales++;
	}
}

printf("La cantidad de vocales en la palabra son: %d", cantVocales);


return 0;
}
