//====================================================
//PROGRAMA: OPERACIONES BASICAS
// AUTO : STALIN FRANCIS
// VESION: 1.02
//==================================================
#include<iostream>
#include<stdlib.h>
using namespace std;
#include "colaborador1.h"     // EN ESTE ARCHIVO VA LA FUNCION DE imprimir()
#include "colaborador2.h"     // EN ESTE ARCHIVO VA LA FUNCION DE sumar()
#include "colaborador3.h"     // EN ESTE ARCHIVO VA LA FUNCION DE restar()
#include "colaborador4.h"     // EN ESTE ARCHIVO VA LA FUNCION DE dividir()
#include "colaborador5.h"     // EN ESTE ARCHIVO VA LA FUNCION DE multipicar()

void mostrar(float (*r)[5])
{
cout<<endl<<endl;
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	      cout<<r[i][j]<<" ";
	}
cout<<"\n";
	}



}

//FUCION PRINCIPAL
int main()
{
	int op,flag;
	float matriz1[5][5],matriz2[5][5],resultado[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
	do{
	system("clear");
	cout<<"OPERACIONES CON MATRICES EN 2 DIMENSIO"<<endl<<endl;
	cout<<"1.- Ingresar los valores de las matrices \n";
	cout<<"2.- Obtener el producto de las dos matrices \n";
	cout<<"3.- Mostrar la potencias 2 de la primera matriz \n"; 
	cout<<"4.- Mostrar la transpuesta de la primera matriz \n";
	cout<<"5.- Calcular la media y varianza y compararlas \n";
	cout<<"0.- Salir del menu \n";
        cout<<" Ingrese una opción : "; cin>>op;
	switch(op){
		case 1:
	cout<<"ESTA FUNCION PERMITE INGRESAR EL VALOR A LAS MATRICES";
		ingresar(matriz1,matriz2);
		mostrar1(matriz1);
		mostrar2(matriz2);
		break;
	    case 2:
	    
	// ESTA FUNCION PERMITE CALCULAR EL PRODUCTO ENTRE DOS MATRICES.
		producto(matriz1,matriz2,resultado);
		mostrar3(resultado);
		break;
		case 3:
			
	// ESTA FUNCION PERMITE OBTENER LA POTENCIA 2 DE UNA MATRIZ.
		potencia(matriz1,resultado);
		mostrar4(resultado);
		break;
		case 4:
			
	// ESTA FUNCION CALCULA LA TRANSPUESTA DE LA PRIMERA MATRIZ
		transpuesta(matriz1,resultado);
		mostrar5(resultado);
		break;
		case 5:
			
	//CUADO CALCULA Y MUESTRA LAS MEDIA Y VARIANZA DE LAS DOS MATRICES
		mediayvarianza(matriz1,matriz2);
		break;

		}
		  if(op!=0){
			    cout << "Opcion no permitida !\n" <<  "Press Enter to continue\n";
    // pause the program until user input
	           flag=cin.ignore().get();
		  }		  
	if(op==0){
	cout<<"Salimos del Sistema: "<<endl;

	}
	}while(op!=0);

	return(0);

}



//COLABORADOR1_Jordy_Jorkael_Angulo_Bone

void ingresar(float (*m1)[5], float (*m2)[5])
{

cout<<"Ingresar y mostrar los valores de los arreglos o matrices \n \n";
      float matriz1[5][5];
      cout<<"\n ENTRADA DE MATRIZ NUMERO 1:\n \n";
      for(int i=0;i<5;i++)
      {
        for(int j=0;j<5;j++)
        {
            cout<<"\ns["<<i<<"]["<<j<<"]=  ";
            cin>>matriz1[i][j];
        }
      } 
      
      float matriz2[5][5];
      cout<<"\n ENTRADA DE MATRIZ NUMERO 2:\n \n";
      for(int h=0;h<5;h++)
      {
        for(int k=0;k<5;k++)
        {
            cout<<"\ns["<<h<<"]["<<k<<"]=  ";
            cin>>matriz2[h][k];
        }
      } 

}

void mostrar1(float (*m1)[5])
{
float matriz1[5][5];
cout<<"\nLa matriz numero 1 es\n \n ";
      for(int i=0;i<5;i++)
      {
        for(int j=0;j<5;j++)
        {
            cout<<"\t"<<matriz1[i][j];
        }
        cout<<endl;
      } 

}

void mostrar2( float (*m2)[5])
{
float matriz2[5][5];
cout<<"\nLa matriz numero 2 es\n \n";
      for(int h=0;h<5;h++)
      {
        for(int k=0;k<5;k++)
        {
            cout<<"\t"<<matriz2[h][k];
        }
        cout<<endl;
      } 
}



//COLABORADOR2_Emerson_Heredia

void producto(float (*m1)[5], float (*m2)[5], float (*r)[5])
{

cout<<"Obetener el producto de las dos matrices ";
int filas=5, colum=5;
      for(int i=0; i<filas; ++i)
      {
      	for(int j=0; j<colum; ++j)
      	{
      	    for(int z=0; z<filas; ++z)
      	    {
                r[i][j] += m1[i][z] * m2[z][j];      	    	
			  }
		}
	  }
}
void mostrar3( float (*r)[5])
{
    cout<<"\nEl producto de las dos matrices es :\n \n ";
    int filas=5, colum=5;
      for(int b=0;b<filas;b++)
      {
        for(int c=0;c<colum;c++)
        {
            cout<<"\t"<<r[b][c];
        }
        cout<<endl;
      } 
}


//COLABORADOR3_Edis_Sosa_Quiñonez

void potencia(float (*m1)[5], float (*r)[5])
{
cout<<"POTENCIA DE MATRICES \n \n ";
int fila=5, colum=5;

 cout<<"\nLa matriz original\n \n ";
      for(int i=0;i<fila;i++)
      {
        for(int j=0;j<colum;j++)
        {
           	cout<<"\t"<<m1[i][j];
        }
        cout<<endl;
      } 
      
 for(int i=0;i<fila;i++)
      {
        for(int j=0;j<colum;j++)
        {
            for(int k=0;k<fila;k++)
            {
            	r[i][j]+=m1[i][k]*m1[k][j];
			}
        }
      } 
}

void mostrar4( float (*r)[5])
{
      cout<<"\nLa matriz en potencia es\n \n ";
      int fila=5, colum=5;
      for(int b=0;b<fila;b++)
      {
        for(int c=0;c<colum;c++)
        {
           	cout<<"\t"<<r[b][c];
        }
        cout<<endl;
      } 
}


//COLABORADOR4_Luis_Abrahan_Quiñonez_Caicedo

void transpuesta(float (*m1)[5], float (*r)[5])
{

cout<<"Obtener la transpuesta de una matriz";

cout<<"\nMatriz Normal\n";
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<m1[i][j]<<" ";
		}
		cout<<"\n";
	}

}
void mostrar5( float (*r)[5])
{

cout<<"Obtener la transpuesta de una matriz";

cout<<"\nMatriz Transpuesta\n";
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<r[j][i]<<" ";
		}
		cout<<"\n";
	}
}


//COLABORADOR5
void mediayvarianza(float (*m1)[5], float (*m2)[5])
{

cout<<"Determinar  cual de las 2 matrices tiene la mayor media y varianza";
float x,a=0,m,arr[30],a2=0,v;
    int c=0,l;
    cout<<" ¿Cuantos numero va a ingresa <30? : "; cin>>l;

do{

      cout<<"Ingrese el valor de x : "; cin>>x;
      arr[c]=x;
      c=c+1;
      a=a+x;

}while(c<l);

m=a/l;
c=0;
do{

a2=a2+(arr[c]-m)*(arr[c]-m);
c=c+1;


}while(c<l);
v=a2/l;

cout<<" La media es "<<m<<" La virianza es  "<<v<<endl;
}
