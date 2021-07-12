#include<iostream>
#include<stdlib.h>
using namespace std;

void producto(float matriz1[5][5], float matriz2[5][5], float resultado[5][5])
{

cout<<"Obetener el producto de las dos matrices ";
int filas=5, colum=5;
      for(int i=0; i<filas; ++i)
      {
      	for(int j=0; j<colum; ++j)
      	{
      	    for(int z=0; z<filas; ++z)
      	    {
                resultado[i][j] += matriz1[i][z] * matriz2[z][j];      	    	
			  }
		}
	  }
}

void mostrar3( float resultado[5][5])
{
    cout<<"\nEl producto de las dos matrices es :\n \n ";
    int filas=5, colum=5;
      for(int b=0;b<filas;b++)
      {
        for(int c=0;c<colum;c++)
        {
            cout<<"\t"<<resultado[b][c];
        }
        cout<<endl;
      } 

}

