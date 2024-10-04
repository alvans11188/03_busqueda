#include <iostream>
#include <string>

using namespace std;

struct Polinomio{
	int coeficiente; 
	int exponente; 
};

void mostrarPolinomio(int n, Polinomio a[]){
	cout << "Se tiene el polinomio siguiente:" << endl;
	cout<<"\nP(x)=";
	for(int i=0; i<n; i++){
		cout<<a[i].coeficiente<<"x^"<<a[i].exponente;
		if (i < n-1) {
            cout<<"+";  
        }
	}  
	cout<<endl; 
}

int busquedaSec(int n, Polinomio a[], int coef, int exp) {
    int i = 0;

    while (i < n) {
        if (a[i].coeficiente == coef && a[i].exponente == exp) {
            return i;  
        }
        i++;
    }
    return -1;  
}

int main(){
	int coef, exp; 
	int result; 
	
	Polinomio pol[4]={{3,5},{2,4},{1,3},{4,2}}; 
	
	int cantpol = 4; 
	
	mostrarPolinomio(cantpol, pol);	
	
	cout<<"Digite un monomio para saber si existe en el arreglo: "<<endl; 
	cout<<"Coeficiente: "; 
	cin>>coef; 
	cout<<"Exponente: "; 
	cin>>exp; 
	
	result = busquedaSec(cantpol, pol, coef, exp); 
	
	cout<<endl; 
	if (result != -1) {
        cout << "El monomio " << coef << "x^" << exp << " existe en el polinomio." << endl;
    } 
	else {
        cout << "El monomio " << coef << "x^" << exp << " no existe en el polinomio." << endl;
    }
	return 0; 
}
