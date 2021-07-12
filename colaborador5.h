#include<iostream>
#include<stdlib.h>
using namespace std;

void mediayvarianza(float (*m1)[5], float (*m2)[5])
{

cout<<"Determinar  cual de las 2 matrices tiene la mayor media y varianza \n \n";
float x,a=0,m,arr[30],a2=0,v;
    int c=0,l;
    cout<<" ¿Cuantos numero va a ingresa <30? : "; cin>>l;
    cout<<endl<<endl;

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

cout<<"\n La media es "<<m<<" La virianza es "<<v<<endl<<endl;




}
