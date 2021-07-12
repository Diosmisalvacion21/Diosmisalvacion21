#include<iostream>
#include<stdlib.h>
using namespace std;

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
