#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
    int a;
    int repeticion;
    int wins=0, loses=0;
    int b;
for (repeticion=0; repeticion<3; repeticion++)
{   
    b=rand()%3;
    do {cout<< "Ingrese 1 para piedra, ingrese 2 para papel, ingrese 3 para tijera: \n";
    cin>> a;
    if (a<0||a>3)
    {
        cout<< "ingrese un numero valido\n";
    }
    } while (a<0||a>3);
    if (a==b){
        cout << "empate\n";
    }
    else if ((a==1 && b==3) ||(a==2 && b==1)||(a==3 && b==2) ){
            cout <<"Gano\n";     
            wins=wins+1;
    } 
    else {
        cout << "Perdio\n";
        loses=loses+1;
    }}

cout<<"Vicotorias: " <<wins<< "\n";
cout<<"Derrotas: " << loses<< "\n";

}






