#include <iostream>
using namespace std;
int factorial (int);
float sumatoria (int);
int main(){
	int n;
	float resultado;
	cout<<"Ingrese un numero para ejecutar la serie: ";
    cin>>n;
    if (n>0){
        resultado= sumatoria (n);
        cout<<"El resultado de la serie con "<<n<<" terminos es: "<<resultado;   	
	}else {
		cout<<"No se puede calcular la serie.";
	}
    return 0;
}

float sumatoria (int n){ 
	float s;
	s=0;
	for (int i=1;i<=n;i++){
		float termino=(float(factorial(i)) / (2*i));
		cout<<"Termino "<<i<<": "<<i<<"! / "<<(2*i)<<" = "<<termino<<endl;
		s=s+termino;
	}
	return s;
}

int factorial(int n){
	int f;
	f=1;
	for (int i=2;i<=n;i++){
		f=f*i;
	}
	return f;
}