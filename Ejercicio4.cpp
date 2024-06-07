/*Crear un programa que dado un arreglo y un numero entero determine cuantos numeros son menores, iguales
o mayores que el dato ingresado*/
#include <iostream>

 using namespace std;
 int main(){

    int n=0;
    int numeros[18] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    int iguales=0, bajos=0, altos=0;

    cout << "Bienvenido por favor ingrese un numero entero a comparar: \n";
    cin >> n;

    for(int i=0; i<18; i++){
    
    if(numeros[i]<n){
        bajos++;
    }
    else if(numeros[i]>n){
        altos++;
    }
    else if(numeros[i]==n){
        iguales++;
        }
}

cout << "Respecto a su numero ingresado en una escala del 1 la 18. \n";
cout << "Un total de "<< iguales << " son iguales a su numero, "<< altos << " son mayores a su numero y ";
cout << bajos << " son menores a tu numero. \n";

return 0;
 }