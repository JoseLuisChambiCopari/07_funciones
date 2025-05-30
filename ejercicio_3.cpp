#include <iostream>
using namespace std;
int numperfecto (int);
int main () {
	int num;
	cout<<"Ingrese un numero para verificar si es perfecto o no: ";
	cin>>num;
	if(num<0) {
		cout<<"El numero debe ser positivo necesariamente para la verificacion."<<endl;
	}
	else{
	    if(numperfecto(num)==1) {
		    cout<<"El numero "<<num<<" es perfecto."<<endl;
	    }else {
		    cout<<"El numero "<<num<<" no es perfecto."<<endl;
	    }	
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