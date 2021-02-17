#include "Empleado.cpp"
#include <iostream>
using namespace std;
main(){
	string nombres,apellidos,direccion,Cargo;
	int telefono,CodigoEmpleado,Sueldo;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	cout<<"Ingrese Codigo de Empleado: ";
	cin>>CodigoEmpleado;
	cout<<"Ingrese Sueldo: ";
	cin>>Sueldo;
	cout<<"Ingrese su Area de Trabajo ";
	cin>>Cargo;
	Empleado obj = Empleado(nombres,apellidos,direccion,telefono,CodigoEmpleado,Sueldo,Cargo);
	obj.mostrar();
}
