#include <stdio.h>

int main(){
    printf("Hola Mundo");
    int variable = 44;
    int *puntero = &variable;

     printf("Contenido del puntero (*puntero): %d\n", *puntero);
    
    
    printf("Direccion almacenada en el puntero (puntero): %p\n", puntero);
    
    
    printf("Direccion de la variable (&variable): %p\n", &variable);
    
    
    printf("Direccion del puntero (&puntero): %p\n", &puntero);

    printf("5) Tamaño de la variable (sizeof(variable)): %d bytes\n", sizeof(variable));

    return 0;
}