/*Crear un arreglo con 10 datos enteros, realizar un menu que pregunte al usuario si quiere
imprimirlo en orden ascendente o en orden descendente.*/
#include <iostream>

 using namespace std;
 int main(){

    int opcion;
    int numeros[10] = {10,20,30,40,50,60,70,80,90,100};

do{
    cout << "Por favor seleccione la forma en la que quiera ordenar sus numeros: \n";
    cout << "1. De forma ascendente. \n2. De forma descendente. \n";
    cin >> opcion;

    switch(opcion){

        case 1:
        cout << "Los numeros son: ";
        for(int i=0; i<10; i++){
            cout << numeros[i] << ", ";
        }
        break;
        
        case 2:
        cout << "Los numeros son: ";
        for(int i=9; i>=0; i--){
            cout << numeros[i] << ", ";
        }
        break;

    }
    
    }while(opcion<1 || opcion>2);

return 0;
 }