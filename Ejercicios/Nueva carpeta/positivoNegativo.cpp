#include <iostream>
using namespace std;

/**

    AND lo va a hacer primero que los OR

    AND => *
    OR => +

    */

int main (){
  int notaExamen;
  cout << "Ingresa la nota del examen final: ";
  cin >> notaExamen;

    if (notaExamen >= 6){
        cout << "Examen aprobado" << endl;
    }
    if (notaExamen <= 5){
        cout << "Examen desaprobado" << endl;
    }
 }

    return 0;
};
