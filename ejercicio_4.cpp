#include <iostream>
using namespace std;
int maximocomundivisor(int , int );
int minimocomunmultiplo(int , int );
int main (){
	int num1,num2,mcm,mcd;
	cout<<"---CALCULAR EL MAXIMO COMUN DIVISOR Y MINIMO COMUN MULTIPLO DE DOS NUMEROS---"<<endl;
	cout<<"Ingrese el primero numero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	mcd=maximocomundivisor(num1,num2);
	mcm=minimocomunmultiplo(num1,num2);
	cout<<"---El MCD y MCM de "<<num1<<" y "<<num2<<" es: --- "<<endl;
	cout<<"Maximo comun divisor: "<<mcd<<endl;
	cout<<"Minimo comun multiplo: "<<mcm<<endl;
}

int maximocomundivisor(int num1, int num2){
	int residuo;
	while (num2!=0) {
        residuo=num1%num2;
        num1=num2;
        num2=residuo;
    }
    return num1;
}

int minimocomunmultiplo(int num1, int num2){
	int mcd,mcm;
	mcd= maximocomundivisor(num1,num2);
    mcm=(num1*num2) / mcd;
    return mcm;
}
