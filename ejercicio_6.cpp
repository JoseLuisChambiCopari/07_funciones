#include <iostream>
using namespace std;
void mostrarFibonacci (int);
int sumaFibonacci (int);
int main() {
	int n,suma;
	cout<<"Ingrese el numero de terminos que quiere que tenga la serie Fibonacci: ";
	cin>>n;
	if (n>0) {
		cout<<"La suma de la serie: "<<endl;
	    mostrarFibonacci(n);
	    suma = sumaFibonacci(n);
	    cout<<"\nes:"<<suma;
	}else {
		cout<<"Es necesario un numero positivo para interactuar con la sumatoria de Fibonacci";
	}
	return 0;
}

void mostrarFibonacci(int n) {
	int a=0,b=1,resultado=0;
	for (int i=0;i<n;i++) {
		cout<<resultado<<", ";
		a=b;
		b=resultado;
		resultado=a+b;
	}
}

int sumaFibonacci(int n) {
	int a,b,suma,resultado;
	a=0;
	b=1;
	resultado=0;
	suma=0;
	for (int i=0;i<n;i++) {
		suma=suma+resultado;
		a=b;
		b=resultado;
		resultado=a+b;
	}
	return suma;
}