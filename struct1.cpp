//.-  Un programa que sea capaz de almacenar los datos de  5 personas:
//nombre, dirección, teléfono, edad (usando una tabla de structs). 
//Deberá ir pidiendo los datos uno por uno. Entonces deberá aparecer un menú quepermita:
//Mostrar la lista de todos los nombres con su dirección y teléfono. Mostrar las personas menores de 24 años.

#include <iostream>
using namespace std;
    struct Persona{
        char nombre[50];
        char direccion[100];
        int telefono;
        int edad;
    };
int main(){

Persona* persona =new Persona[5];
for(int i=0;i<5; i++){
    cout<<"ingrese nombre del alumno "<<(i+1)<<endl;
    cin.getline(persona[i].nombre, 50);
    cout<<"ingrese su direccion \n";
    cin.getline(persona[i].direccion,100);
    cout<<"ingrese su telefono \n";
    cin>>persona[i].telefono;
    cout<<"ingrese la edad \n";
    cin>>persona[i].edad;
}
for (int i = 0; i < 5; i++)
{
    if(persona[i].edad<24){
        cout<<persona[i].nombre;
    }
}


}