#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#include<fstream>
using namespace std;
#include "colaborador1.h"
#include "colaborador2.h"
#include "colaborador3.h"
#include "colaborador4.h"
#include "colaborador5.h"
int main()
{
	//int dn, mn, an,da, ma, aa; 
	float p, altura, masa;
	Persona pepin;
	int aa,ma,da,an,mn,dn,a,m,d;
	int op,flag;
	
	do{
	system("cls");
	cout<<"**************RECOPILACION DE DATOS PERSONALES**************"<<endl<<endl;
	cout<<"1.- Ingresar y mostrar los datos personales (cedula, nombres, fecha de nacimiento, peso, estatura) \n";
	cout<<"2.- Obtener la edad del usuario.\n";
	cout<<"3.- Mostrar el indice de masa corporal y recomendaciones. \n"; 
	cout<<"4.- Guardado de los datos. \n";
	cout<<"5.- Lectura de los datos.\n";
	cout<<"0.- Salir del menu. \n";
        cout<<" Ingrese una opcion : "; cin>>op;
	switch(op){
		case 1:
	//CÓDIGO PARA CALCULAR DATOS DEL USUARIO.
	cout<<"\n Recopilacion de datos personales del usuario";
	pepin.ingresar();
    pepin.mostrar(); 
		break;
	        case 2:
	//CÓDIGO PARA CALCULAR LA EDAD DEL USUARIO.
	cout<<"\n Calcular la edad del usuario\n\n";
		pepin.digitar(aa,ma,da);
		break;
		case 3:
	//CÓDIGO PARA CALCULAR EL INDICE DE MASA CORPORAL.
	cout<<"\ncalcular el indice de masa corporal\n\n";
		pepin.set_masa(p);
		break;
		case 4:
	//CÓDIGO PARA GUARAR LOSDATOS EN ARCHIVO TXT.
	cout<<"\nEsta opcion permite guardar los datos en un archivo de texto\n\n";
		pepin.save();
		break;
		case 5:
	//CÓDIGO PARA MOSTRAR LOS DATOS DEL ARCHIVO.
	cout<<"\nmostrar los datos del archivo de texto\n\n";
		pepin.lectura();
		break;
		
		}
		  if(op!=0){
			    cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";
    // pause the program until user input
	           flag=cin.ignore().get();
		  }		  
	if(op==0){
	cout<<"Salimos del Sistema: "<<endl;

	}
	}while(op!=0);
	
	system("pause");

	return(0);

}
