 #include <iostream>
using namespace std;

/*Hacer un programa para ingresar por teclado la cantidad
de horas trabajadas por un operario y el valor que
se le paga por hora trabajada y listar por pantalla
el sueldo que le corresponda.*/

int main(){

int horasTrabajadas;
int valorHora = 10000;
int sueldo;

cout << "Ingrese la cantidad de horas trabajadas: ";
cin >> horasTrabajadas;

sueldo = valorHora * horasTrabajadas;

cout << "El sueldo que le corresponde es de: " << sueldo << endl;


return 0;
}
