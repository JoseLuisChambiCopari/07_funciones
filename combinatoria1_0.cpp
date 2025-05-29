#include <iostream>
using namespace std;
int factorial(int);
int main() {
	int m, n, c;
	cout<<"Ingrese m: ";
	cin>>m;
	cout<<"Ingrese n: ";
	cin>>n;
	if (n>m) {
		cout<<"n no puede ser mayor que m.";
	} else{
		c = factorial(m) / (factorial(n) * factorial(m - n));
		cout<<c;
	}
	return 0;
}

int factorial(int n) {
	int f=1;
	for (int i=2;i<=n;i++) {
		f = f*i;
	}
	return f;
}