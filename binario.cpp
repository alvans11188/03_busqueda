#include <iostream> 
using namespace std; 

int busquedaBinaria(int[], int, int); 

int main(){
	int n, S, dato;
 
	cout << "PROGRAMA PARA BUSCAR ELEMENTOS EN UN ARREGLO "<< endl; 
	cout <<"Digite la cantidad de elementos del arreglo: "<< endl; 
	cin>>n; 
	
	int a[n]; 
	cout << "Ingrese los elementos de su areglo"<<endl;
	for(int i=0; i<n; i++){
	   cout<<"Elemento "<< 1+i << " : ";
	   cin>>a[i]; 
	}
	
	cout<<"\nEscriba el elemento a buscar en el arreglo: ";
	cin>>dato; 
	
	S = busquedaBinaria(a, n, dato); 
	
	if(S >= 0){
		cout<<"El elemento existe en el arreglo y se encuentra en el indice :" << S<<endl; 
	}
	else{
		cout<<"No se encuentra en el arreglo. "<<endl;
		cout<<"El elemento se deberia ubicar en: "<<-S<<endl; 
	}
	
	return 0; 
}

int busquedaBinaria(int a[], int n, int dato){
	int izq =0; 
	int der = n; 
	int cen = 0; 
	int m;
	int pos = -1; 
	
	while(izq <= der && cen==0){
	    m = (izq + der)/2;
	    if(a[m] == dato){
	    	cen = 1;
		pos = m;  
	    	
	    }
	    else{
	    	if(dato > a[m]){
	    		izq = m+1; 
		    }
		    else{
		    	der = m -1; 
		    }
	    }
	}
	
	if(cen == 1){
		pos = m; 
	}
	else{
		pos = -izq; 
	}
	return pos; 
}
