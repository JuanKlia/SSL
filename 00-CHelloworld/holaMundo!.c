#include <stdio.h>
#include <stdlib.h>
#define longText 30
int main(){
	
	/*Este programa envia a pantalla (flujo estandar) el contenido de text  */
	/*Finalmente se redireccionara el flujo del .exe a un archivo.txt mediante el operador >*/
	/*Ejemplo:  ejecutable.exe > archivo.txt*/
	
	char text[longText] = "Hola mundo! :D \n";
	printf("%s", text);
	

	return 0;
}
