#include <iostream>
using namespace std;
int numperfecto (int);
int main () {
	int num;
	cout<<"Ingrese un numero para verificar: " ;
	cin>>num;
	if(numperfecto(num)==1) {
		cout<<"El numero es perfecto";
	}else {
		cout<<"El numero no es perfecto";
	}
	return 0;
}

int numperfecto (int num) {
	int i,suma ;
	suma=0;
	for(i=1; i<num; i++) {
        if (num%i==0) {
            suma=suma+i;
        }
    }
    if (suma==num) {
    	return 1;
	}else {
		return 0;
	} 
}