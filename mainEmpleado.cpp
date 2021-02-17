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
	// instanciar un objeto
	Empleado obj = Empleado(nombres,apellidos,direccion,telefono,CodigoEmpleado,Sueldo,Cargo);
	obj.mostrar();
	// instanciar un objeto y utilizar get and set
	
/*	Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	//obj.mostrar();
	cout<<"Nit: "<<obj.getNit()<<endl;
	cout<<"Nombres: "<<obj.getNombres()<<endl;
	cout<<"Apellidos: "<<obj.getApellidos()<<endl;
	cout<<"Direccion: "<<obj.getDireccion()<<endl;
	cout<<"Telefono: "<<obj.getTelefono()<<endl;
*/	
}
