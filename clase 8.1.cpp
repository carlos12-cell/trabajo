#include "clase 8.cpp"
#include <iostream>
using namespace std;

clase cliente : clase 8 {
	//atributos
	private : string nit;
	
	//constructor
	public : 
	cliente (){
	}
	
	cliente(string nom,string ape,string dir,int tel,string n) : persona (nom,ape,dir,tel){
		nit = n;
		
	}
	//metodos
	//set modificar
	void setnit(string n){nit = n;}
	void setnombres(string nom){nombres = nom;}
	void setapellidos(string ape){apellidos = ape;}
	void setdireccion(string dir){direccion = dir;}
	void settelefono(int tel){telefono = tel;}
	//get mostrar
	string getnit(){return nit;}
	string getnombres(){return nombres;}
	string getapellidos(){return apellidos;}
	string getdireccion(){return direccion;}
	int get telefono(){return telefono}	
	//motodos
	void mostrar(){
		cout<<"________________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
	}
};