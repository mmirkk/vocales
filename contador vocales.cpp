#include<iostream>
#include<string>
#include <ctype.h>

using namespace std;

int iterador(int letras, string cadena){

    int contador = 0;
    char ch;

    for(int i = 0; i <= letras; i++){
        ch = tolower(cadena[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            contador += 1;
        }
    }

    return contador;

}

int main(){

    int longitud;
    string cadena;

    cout << "Ingrese una cadena de texto para contar sus vocales: ";
    cin >> cadena;

    longitud = cadena.size();

    int contador = iterador(longitud, cadena);

    cout << contador << endl;

    return 0;
}
