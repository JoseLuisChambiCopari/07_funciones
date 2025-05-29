#include <iostream>
using namespace std;
int factorial (int);
int main() {
	int m,n,c;
	cout<<"Ingrese m: ";
	cin>>m;
	cout<<"Ingrese n: ";
	cin>>n;
	c=factorial(m) / (factorial(n) * factorial (m-n));
	cout<<c;
	return 0;
}
int factorial (int n) {
	int f;
	f=1;
	for(int i=2;i<=n;i++) {
		f=f*i;
	}
	return f;
}