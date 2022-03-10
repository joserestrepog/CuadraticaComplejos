#include <iostream>
#include <math.h>

using namespace std;

int main(){
	  	double a=0,b=0,c=0,x1=0,x2=0;
      	system("cls");
      	cout<<"INGRESE EL VALOR DE a: ";
      	cin>>a;
      	cout<<"INGRESE EL VALOR DE b: ";
      	cin>>b;
      	cout<<"INGRESE EL VALOR DE c: ";
      	cin>>c;
      	x1=pow(b,2)-(4*a*c);
      	if(x1<0){
      		x1=sqrt(-x1);
		  	x2=(-b-x1)/(2*a);
		  	x1=(-b+x1)/(2*a);
      		cout<<"LA ECUACION CUADRATICA NO TIENE SOLUCION EN LOS REALES, EN LOS COMPLEJOS SON: "<<x1<<"i"<<" Y "<<x2<<"i"<<endl;
      		system("pause");
		  }else{
		  	x1=sqrt(x1);
		  	x2=(-b-x1)/(2*a);
		  	x1=(-b+x1)/(2*a);
		  	cout<<"LOS VALORES DE X PARA ESTA ECUACION CUADRATICA SON: "<<x1<<" Y "<<x2<<endl;
			system("pause");
		  }
		  exit(0);
}
