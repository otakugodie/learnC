#include <stdio.h>

int main(){
    float nota1, nota2, promedio;
    printf("Ingrese la nota del primer examen: ");
    scanf("%f", &nota1);
    printf("Ingrese la nota del segundo examen: ");
    scanf("%f", &nota2);
    printf("El promedio de los examenes fue: %f",((nota1+nota2)/2));

    return 0;
}