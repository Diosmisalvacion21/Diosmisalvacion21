//ANGULO BONE JORDY JORKAEL
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

//LUIS ABRAHAN QUIÑONEZ CAICEDO
	void digitar(int aa, int ma, int da){
		an=0;
		mn=0;
		dn=0;
	cout<<"digite la fecha actual (aa mm dd):  ";cin>>aa;cin>>ma;cin>>da;
	cout<<"digite su fecha de nacimiento (aa mm dd):  ";cin>>an;cin>>mn;cin>>dn;
	
	if(da>dn){
		d = da - dn;
	}
	else{
		da = da+30;
		ma = ma-1;
		d = da - dn;
	}
	if(ma>mn){
		m = ma - mn;
	}
	else{
		ma = ma+12;
		aa= aa-1;
		m = ma - mn;
	}
	
	a = aa - an;
	
	cout<<"Su edad es:  "<<a<<" años con "<<m<<" meses y "<<d<<" dias.";
	
}
               ******************************************
	       // ROMMEL ORTIZ NAPA //
	       ******************************************
		       void save(){
	
			ofstream archivo("datos del usiario.txt");
			archivo<<"cedula:  "<<cedula<<"\n\n";
			archivo<<"nombres:  "<<apellidos<<"\n\n";
			archivo<<"su fecha de nacimiento es: "<<an<<"/"<<mn<<"/"<<dn<<"\n\n";
			archivo<<"su índice de masa corporal es:  "<<masa<<"\n\n";
			cout<<"sus datos han sido guardados con éxito :)\n"<<"\n\n";
			cout<<"gracias por utilizar el programa, hasta la próxima\n"<<"\n\n";
			
	
		}
