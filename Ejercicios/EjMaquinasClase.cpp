#include <iostream>
using namespace std;

/*Una empresa de impresiones dispone de un conjunto de registros que represetan las
impresiones creadas por sus 5 maquinas
Por cada dia y maquina se carga la siguiente informacion:
Numero de Maquina (1 - 5)
Dia
Cantidad de impresiones

El fin de la carga de datos se indica con un n�mero de maquina igual a 0

Informar:
    A - Por cada dia, la cantidad de impresiones que se realizaron
	B - Los dias donde se realizaron unicamente impresiones de la maquina 3

	La estructura principal es un while.
	-------------------------------------------------------------

	 datos de entrada:

	 int Dia;
	 int impresion;
	 bool controlM3;

	 datos de salida:

	 int totalImpresionDiaria
	 [diasOnlyM3]



	 funciones:
	 void onlyM3 (int numeroMaquina , int cantidadMaquinas, bool &controlM3){
	 if( cantidadMaquina >= 1 {
        controlM3 = false;
	 }
	 if (numeroMaquina != 3 ){
         controlM3 = false;
	 };

	  while{

        dias
        controlM3 = true;
        {

        }
        for(i=0; i<5 ; i++){
         m[i] = m[i]{
                     impresion,
                     dia;
                    }
         }

    }
clase:

    vector["offset o indice"] = 10

	*/

void cargarDatos();
void mostrarCantidadImpresionesDia(int cantidad[]);
void diasUnicamenteMaquina3(bool hay3[], bool hayOtros[] );

int main(){


int numeroMaquina, dia, cantidadImpresiones;
int cantidadDia[31]{};
bool hayMaquina3[31] = false;
bool hayOtrasMaquinas[31] = false;



//carga de datos --> se puede meter en una funcion.

// cargarDatos(cantidadDia, hayMaquina3, otrasMaquinas);
//mostrarCantidadImpresionesDia(cantidadDia, hayMaquina3, otrasMaquinas);
// diasUnicamenteMaquina3(cantidadDia, hayMaquina3, otrasMaquinas);
cout<< "Ingrese numero maquina: ";
cin >> numeroMaquina;

while(numeroMaquina!=0)
{
    cout<< "ingrese dia: ";
    cin>> dia;

    cout<< "ingrese cantidad de impresiones: ";
    cin>> cantidadImpresiones;

    cantidadDia[dia - 1] += cantidadImpresiones; //por cada dia, acumulo


    if(numeroMaquina == 3){
        hayMaquina3[dia - 1] = true;
    }
    else{
        otrasMaquinas[dia - 1] = true;
    }


    cout <<"Ingrese numero de maquina: ";
    cin >> numeroMaquina;
}

for(int i = 0; i<31; i++){
    cout << "Dia " << i+1 << cantidadDia[i]<<endl;
}
for(int i = 0; i<31; i++){
        //if(hayMaquina3)
        if(hayMaquina3[i] == true){
            cout<< "Dia " << i + 1 << endl;
         }
}
return 0;
}

// definiciones de las funciones

void cargarDatos (int &cantidadDia[], bool &hay3[], bool &hayOtros[]);

