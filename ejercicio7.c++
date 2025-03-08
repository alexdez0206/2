#include <iostream>
using namespace std;

int main () {

int calif;

cout<<"Por favor ingrese la su calificacion para realizar el promedio"<<endl;
cin>>calif;

if (calif >= 90 ){
    cout<<"Su calificacion es muy buena. "<<endl;
} else {
    if (calif >= 70 ){
        cout<<"Su calificacion es regular." << endl;
    } else {
        if (calif <= 60 )
        cout << "Su calificacion es muy baja."<<endl;
    }
}
    return 0;

}