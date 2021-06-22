#include<iostream>
using namespace std;
int main()
{
int c;
float matriz1[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float matriz2[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float suma[10],resta[10],producto[10],division[10];


cout<<"OPERACIONES BASICAS CON MATRICES:\n\n";
cout<<"¿QUE OPERACION DESEAS REALIZAR? \n";
cout<<"1. Suma \n";
cout<<"2. Resta \n";
cout<<"3. Multiplicacion \n";
cout<<"4. Division \n";
cout<<"\n";

//PRESENTACIÓN DE LAS MATRICES
cout<<"LAS MATRICES SON:\n";

for (int i=0;i<10;i++)
{
	cout<<matriz1[i]<<" - ";
}
cout<<"\n";

for (int i=0;i<10;i++)
{
	cout<<matriz2[i]<<" - ";
}

cout<<"\n\n";
cout<<"******************\n\n";

cout<<"ELIJA LA OPERACION QUE DESEA REALIZAR:\n\n";
cin>>c;
cout<<"\n";


