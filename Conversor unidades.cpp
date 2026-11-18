#include <iostream>

using namespace std;

double convertir (double valor, int origen, int destino){
	if (origen > destino){
		return 1024*valor;
	}else if (origen < destino){
		return valor/1024;
	}
}
int main (){
	int n,r=0;
double resultado;
float v=0;
char si= 's';
while (si=='s' || si == 'S'){
cout<<"\nIngrese la unidad de origen y la unidad destino para la conversion";
cout<<"\n\t1)=Bytes\n\t2)=Kilobytes\n\t3)=Megabytes\n\t4)=Gigabytes\n\t5)=Terabytes";
  cout<<"\n[Ingrese unidad origen]:"<<endl;
  cin>>n;
  cout<<"\n[Ingrese unidad destino]:"<<endl;
  cin>>r;
if(n<=0 || n>5 || r<=0 || r>5){
	cout<<"\n[ERROR] INGRESE UN NUMERO ENTRE 1 A 5"<<endl;
}else{
cout<<"\n[Ingrese valor]:"<<endl;
  cin>>v;

resultado = convertir (v,n,r);
cout<<"El valor de convertir "<<n<<" a "<<r<<" es "<<resultado;
cout<<"\nDesea repetir?(s/n)"<<endl;
cin>>si;
}
}
}
