class Persona{
	
	private:
		string nombres, apellidos, cedula;
		int aa,ma,da,an,mn,dn,a,m,d; 
		float p, altura, masa;
		
	public:
		Persona (){
				
		}
		void ingresar()
		{
			cout<<"\n\ningrese los datos"<<endl<<endl;
			cout<<"degite su numero de cedula: ";cin>>cedula;
			cout<<"escriba sus nombres ";getline(cin,nombres);
			cout<<"y apellidos:  ";getline(cin,apellidos);
			cout<<"digite su peso:  ";cin>>p;
			cout<<"digite su estatura: ";cin>>altura;
			cout<<"digite su fecha de nacimiento(aa mm dd):  ";cin>>an;cin>>mn;cin>>dn;
		}
		
		void mostrar()
		{
		cout<<"\n                      Datos                   \n\n";	
		cout<<"CEDULA"<<"\t";
		cout<<"NOMBRES Y"<<"\t";
		cout<<"APELLIDOS"<<"\t";
		cout<<"PESO"<<"\t";
		cout<<"ESTATURA"<<"\t";
		cout<<"FECHA DE NACIMIENTO"<<endl;
		
		cout<<cedula<<"\t";
		cout<<nombres<<"\t";
		cout<<apellidos<<"\t";
		cout<<p<<"\t";
		cout<<altura<<"\t";
		cout<<an<<"\t";
		cout<<mn<<"\t";
		cout<<dn<<"\t";
		
		}

