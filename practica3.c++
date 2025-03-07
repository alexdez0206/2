#include <iostream>
using namespace std;

int main () {
    int num = 0;

    cout <<"Ingrese el numero a verificar. "<<endl;
    cin >> num;

    if (num % 2 == 0){

        cout <<"El numero que ingreso no es primo. "<<endl;
    }
    else {
        cout<< "El numero "<<num<< " es un numero primo "<<endl;
    }

    return 0;

}