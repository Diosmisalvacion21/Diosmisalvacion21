#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

void potencia(float matriz1[5][5], float resultado[5][5])
{

cout<<"POTENCIA DE MATRICES \n \n ";
int fila=5, colum=5;

 cout<<"\nLa matriz original\n \n ";
      for(int i=0;i<fila;i++)
      {
        for(int j=0;j<colum;j++)
        {
           	cout<<"\t"<<matriz1[i][j];
        }
        cout<<endl;
      } 
      
 for(int i=0;i<fila;i++)
      {
        for(int j=0;j<colum;j++)
        {
            for(int k=0;k<fila;k++)
            {
            	resultado[i][j]+=matriz1[i][k]*matriz1[k][j];
			}
        }
      } 
}

void mostrar4( float resultado[5][5])
{
      cout<<"\nLa matriz en potencia es\n \n ";
      int fila=5, colum=5;
      for(int b=0;b<fila;b++)
      {
        for(int c=0;c<colum;c++)
        {
           	cout<<"\t"<<resultado[b][c];
        }
        cout<<endl;
      } 
}


