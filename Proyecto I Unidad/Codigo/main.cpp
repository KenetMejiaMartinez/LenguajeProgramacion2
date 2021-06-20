#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");

    int Eleccion;

    cout<<"**************"<<endl;
    cout<<"MENU DE JUEGOS"<<endl; 
    cout<<"**************"<<endl; 
    cout<<"Seleccione un juego"<<endl;
    cout<<"1 - StarShip "<<endl;
    cout<<"2 - Snake"<<endl;
    cout<<"\nIngrese un numero del menu para seleccionar el juego: "<<endl;
    cin>>Eleccion;

    if (Eleccion == 1){
        starShip();
    }
    else
        if (Eleccion == 2){
            snake();
        }
        else
        {
            cout<<"Eleccion incorrecta"<<endl;        
        }

    return 0;
}
