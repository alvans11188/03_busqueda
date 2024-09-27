#include <iostream>
using namespace std;
int secuencialDes(int [], int, int);
int secuencialOrd(int [], int, int);

int main(){
	int n, op, dato, po; 
	
	cout<<"Ingrese los elementos de su arreglo: ";
	cin>>n; 
	
	int arreglo[n];
	for (int i=1; i<=n; i++){
		cout << "Ingrse el valor " << i << " de su arreglo: ";
		cin >> arreglo[i];
	}
	
		cout<<"\nEl arreglo es: " ; 
	for(int i=1; i<=n; i++){
		cout<<arreglo[i]<<" ";  
	} 

	do {
        cout << "\nTIPO DE BUSQUEDA" << endl;
        cout << "1- Busqueda secuencial desordenada" << endl;
        cout << "2- Busqueda secuencial ordenada " << endl;
        cout << "3- Salir" << endl;
        cin >> op;
		cout << "Que dato desea buscar: " << endl;
		cin >> dato;
        switch (op) {
        
        case 1:
        	po = secuencialDes(arreglo, n, dato);
        	
            cout << "En el arreglo: ";
            for (int i = 1; i <= n; i++) {
                cout << arreglo[i] << " ";
            }
            cout << "El valor " << dato << "Se encuentra en la posicion pos" << po << endl;
           
            
            break;

        case 2:
        	po = secuencialOrd(arreglo, n, dato);
        	
            cout << "En el arreglo: ";
            for (int i = 1; i <= n; i++) {
                cout << arreglo[i] << " ";
            }
			cout << "El valor " << dato << "Se encuentra en la posicion pos" << po << endl;
            break;
        case 3:
			cout << "Saliendo del programa...";
            
        default:
            cout << "Opción no vAlida. Intente de nuevo." << endl;
        }
    } while (op != 3);
	

    return 0;
}
int secuencialDes(int arreglo[],int n,int dato){
	int pos, i;
	pos = 0;
	i = 1;
	while (i<=n && arreglo[i] != dato){
		i=i+1;
	}
	if (i <= n ){
		pos = i;
		
	}
	return pos;
}
int secuencialOrd(int arreglo[], int n, int dato){
	int pos, i;
	i=1;
	while (i<=n && arreglo[i] < dato){
		i=i+1;
	}

	if ( i <= n || arreglo[i] != dato){
		pos = -i;
	}else{
		pos = i;
	}
	return pos;
}