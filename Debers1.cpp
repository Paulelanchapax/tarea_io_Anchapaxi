#include <iostream>  //librerias importantes
#include <string>    //para usar string que es caracteres

using namespace std;   //con esto no usamos std siempre

int main() {
    
	string nombre;       //definimos nuestra "variable" que se llamara nombre
    
    int edad;            //tambien este int, osea solo acepta numeritos enteros

    // Usamos cout para mostrar mensajes en la consola
    
    cout<<"Hola mundo"<<endl<<endl;
    
    cout<<"Hola de nuevo! Ingresa tu super nombre: ";
    

    // Usamos cin para recibir la entrada del usuario
    
	cin>>nombre;    //lo qu escriba se ira a nombre

    cout<<"Ahora, ingresa tu edad: ";   //damos instrucciones, no? al usuario de saber que tiene que poner
    
	cin>>edad;   //agarramos el numero que puso y lo metemos a edad <-----

    // Combinamos en un solo unos cout
    
    
    cout<<endl<<endl;
    
    cout<<"Hola, " <<nombre<<". Esta bacan que tengas "<<edad<<" anios."<<endl;  //uso anios porque la enie no vale.

    return 0; //ponemos el return 0 para que sepa que todo esta bien y jale el codigo
    
}
