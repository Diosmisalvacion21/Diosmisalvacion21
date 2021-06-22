#include<iostream>
using namespace std;
int main()
{
int c;
float matriz1[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float matriz2[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float suma[10],resta[10],producto[10],division[10];

//CREADOR: ANGULO BONE JORDY JORKAEL
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


//CREADOR : LUIS ABRAHAN QUIÑONEZ CAICEDO
//SUMA DE LAS MATRICES
if(c==1)

{
	cout<<"USTED ESCOJIO LA OPCION DE SUMA\n\n";
	cout<<"EL RESULTADO ES:\n\n";
	for (int i=0;i<10;i++)
{
	suma[i]=matriz1[i]+matriz2[i];
	cout<<suma[i]<<"\n";
}
}

cout<<"******************\n\n";
	
//CREADOR: EMERSON JOAO HEREDIA RUIZ
//RESTA DE LAS MATRICES
	if(c==2)

{
	cout<<"USTED ESCOJIO LA OPCION DE RESTA\n\n";
	cout<<"EL RESULTADO ES:\n\n";
	for (int i=0;i<10;i++)
{
	resta[i]=matriz1[i]-matriz2[i];
	cout<<resta[i]<<"\n";
}
}
//CREADOR: ROMMEL JEREMY ORTIZ NAPA
//DIVISION DE LAS MATRICES
if(c==4)
{
        cout<<"USTED ESCOJIO LA OPCION DE DIVISION \n\n";
        cout<<"EL RESULTADO ES:\n\n";
        for (int i=0;i<10;i++)
{
        division¨[i]=matriz1[i]/matriz2[i];
	cout<<division[i]<<"\n";
}
}
	
	
	return 0;
	
}
