#include <iostream>
using namespace std; 
void calcularCocienteyResto (int, int);
int main(){
    int a, b;
    cout <<"INGRESE LOS NUMEROS"<<endl;
    do {
        cout<<"Primer numero: ";
        cin>>a;
        cout<<"Segundo numero: ";
        cin>>b;
        if (a<=0 || b<=0) {
            cout<<"Los numeros deben ser positivo para el calculo."<<endl;
            cout<<"---------------------------------------------"<<endl;
        }
    } while (a<=0 || b<=0);
    calcularCocienteyResto (a, b);
    return 0;
}

void calcularCocienteyResto (int a, int b){
	int num_mayor,num_menor,resto,cociente;
	cociente=0;
	if (a>b) {
        num_mayor=a;
        num_menor=b;
    }else {
        num_mayor=b;
        num_menor=a;
    }
    while (num_mayor>=num_menor) {
        num_mayor=num_mayor-num_menor;
        cociente=cociente + 1;
    }
    resto=num_mayor;
    cout<<"El cociente es: "<<cociente<<endl;
    cout<<"El resto es: "<<resto;
}