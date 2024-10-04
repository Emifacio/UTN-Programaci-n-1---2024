#include <iostream>
using namespace std;

/*hacer un programa que se ingresen 3 numero
y muestre cuantos de ellos son positivos

DE:
    num1, num2, num3
DS:
    cantidadPositivos
op:
    cantidadPositivos = cantidadPositivos + 1 => num > 0

// estrategia
pido los 3 numeros,
cuento cuantos de ellos son positivos
muestro la cantidad contada

contador:
    inicializacion:
        cont = 0
        cont += 1
        cont ++
        ++ cont
        */

int main(){
    float num1, num2, num3;
    int cantidadPositivos;

    cantidadPositivos = 0;

    cout << "ingrese un numero: " ;
    cin >> num1;

    cout << "ingrese un numero: " ;
    cin >> num2;

    cout << "ingrese un numero: " ;
    cin >> num3;


    if(num1 > 0){
        cantidadPositivos++;
    }

    if(num2 > 0){
        cantidadPositivos++;
    }

    if(num3 > 0){
        cantidadPositivos++;
    }
    cout << "la cantidad de positivos es: " << cantidadPositivos;

return 0;
}
