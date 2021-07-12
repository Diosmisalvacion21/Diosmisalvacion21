#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

void ingresar(float matriz1[5][5], float matriz2[5][5])
{

cout<<"Ingresar y mostrar los valores de los arreglos o matrices \n \n";
      cout<<"\n ENTRADA DE MATRIZ NUMERO 1:\n \n";
      for(int i=0;i<5;i++)
      {
        for(int j=0;j<5;j++)
        {
            cout<<"\ns["<<i<<"]["<<j<<"]=  ";
            cin>>matriz1[i][j];
        }
      } 
      
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

void mostrar(float matriz1[5][5])
{
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

void mostrar2( float matriz2[5][5])
{
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



