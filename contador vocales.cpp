#include<iostream>
#include<string>
#include<ctype.h>

using namespace std;

int iterador(int letras, string texto){

    int contador = 0;
    char letra;

    for(int i = 0; i <= letras; i++){
        letra = tolower(texto[i]);
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        contador ++;
    }

}
    return contador;
}


int main(){
    int longitud;
    string cadena;

    cout << "Ingrese un texto: ";
    cin >> cadena;

    longitud = cadena.size();

    int contador = iterador(longitud, cadena);

    cout << contador << endl;

    return 0;
}
