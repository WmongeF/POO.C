#include "Persona.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona{
  private : int CodigoEmpleado;
  private : int Sueldo;
  private : string Cargo;
  public :
  Empleado(){
  }
  Empleado(string nom,string ape,string dir,int tel,int CEmpleado, int Salario, string Puesto) : Persona(nom,ape,dir,tel){ 
  CodigoEmpleado = CEmpleado;
  Sueldo = Salario;
  Cargo = Puesto;
}

  void setCodigoEmpleado(int CEmpleado){CodigoEmpleado = CEmpleado;}
  void setSueldo(int Salario){Sueldo = Salario;}
  void setCargo(string Puesto){Cargo = Puesto;}
  void setNombres(string nom){nombres = nom;}
  void setApellidos(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setTelefono(int tel){telefono = tel;}
  //get (mostrar)
  int getCodigoEmpleado(){return CodigoEmpleado;}
  int getSuelo(){return Sueldo;}
  string getCargo(){return Cargo;}
  string getNombres(){return nombres;}
  string getApellidos(){	return apellidos;}
  string getDireccion(){	return direccion;}
  int getTelefono(){	return telefono;}
  
// metodo
void mostrar(){
	cout<<"______________________"<<endl;
	cout<<CodigoEmpleado<<","<<Sueldo<<","<<Cargo<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
}
};
