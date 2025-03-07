#include <iostream>
using namespace std;

int main (){
    char letra;

    cout <<"Ingrese la letra a verificar"<<endl;
    cin >> letra;

    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        cout <<"la letra que ingreso es una vocal."<<endl;
        break;
        default:
            cout <<"La letra que ingreso no es una vocal."<<endl;
            break;

    }



    return 0;
}