#include <iostream>
using namespace std;
int verificar (int);
int main() {
	int n;
	cout<<"Ingrese un numero para la verificacion: ";
	cin>>n;
	if (n<0){
		cout<<"Todos los negativos no pueden ser primos";
	} else if (verificar(n)==1) {
		cout<<"El numero es primo";
	} else {
		cout<<"El numero no es primo";
	}
	return 0;
}

int verificar(int n) {
	int i,divis;
	divis=0;
	for(i=1; i<=n; i++) {
        if (n%i==0) {
            divis=divis+1;
        }
    }
    if (divis==2){
    	return 1;
	}
	return 0;
}