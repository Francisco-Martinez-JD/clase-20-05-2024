#include <iostream>
using namespace std;
int main (){
int numero;
int factorial=1;
cout << "Ingrese un numero para calcular su factorial\n";
cin >> numero;

if (numero<0){
    cout << "El factorial de un numero negativo no existe\n";
}
else {
    cout << "El factorial de "<< numero << " es: ";
     while (numero>0)
    {
        factorial= factorial*numero;
        numero --;
    }
    cout<< factorial;
}
}
