#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 5

int aplicarDescuento(int precio);
int contarCaracteres(char alfabeto[],char buscar);

int main()
{
    int precioP=200;
    int descuento;
    char alfabeto[5]={'a','b','c','a'};
    int caracteres;
    char cararterAbuscar= 'a';

    descuento=aplicarDescuento(precioP);

    printf("El precio con descuento es de: %d\n", descuento);

    caracteres=contarCaracteres(alfabeto,cararterAbuscar);

    printf("la veces que se muestra la A es: %d",caracteres);



    return 0;
}

int aplicarDescuento(int precio)
{
    int valorConDescuento;

    valorConDescuento=(precio*5)/100;
    valorConDescuento= precio - valorConDescuento;

    return valorConDescuento;
}
int contarCaracteres(char alfabeto[],char buscar)
{
    char letraEncontrada;
    int contador=0;

    for(int i = 0; i < 5; i++)
    {
        if(buscar == alfabeto[i])
        {
            contador++;
        }
    }
}




