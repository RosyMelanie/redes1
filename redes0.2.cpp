#include <iostream> 
#include <string>
#include <stdlib.h>
#include <time.h>
#include <stdio.h> 
#include <windows.h> 
using namespace std;

	int aleatorio(int x)
	{  
		srand(time (NULL));
   		x=(1025 +rand()% 4097);
	} 
	
void mostrar_entero(int arreglo[], int nro_elementos) 
	{ 
	cout<<"|";
		for (int i=0; i < nro_elementos; i++){
		cout <<arreglo[i]<<".";	
		}
	cout<<"|";
	}
	
void mostrar_cadena(string arreglo[], int nro_elementos) 
	{ 
	cout<<"|";
		for (int i=0; i < nro_elementos; i++){
		cout <<arreglo[i];	
	}
	cout<<":";
	cout<<"|";
	}
char mostrartecla(char n[10])
{
	int longitud,puerto,almacena;
    cout<<"Introduce una palabra: ";
    cin>>n;
    longitud=strlen(n);
    int A[1]={80};
	int	T[4] = {192, 168, 1, 2};
	int D[4]={60, 15, 18, 2};
    string I[6]={"0A:","F2:","C8:","7C:","18:","A1"};
	string B[6]={"FC:","84:","7B:","1B:","16:","A8"};

    for (int i=0;i<longitud;i++){
	    almacena=aleatorio(puerto);
		cout<<"Aplicacion"<<endl;	
	    cout<<"|"<<n[i]<<"|"<<endl; 
		system ("pause");
		
		cout<<endl<<"Aplicacion"<<endl;
        cout<<"|"<<n[i]<<"|"<<"\n";
    	cout<<"Transporte"<<endl;
    	mostrar_entero(A,1);
		cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
		system ("pause");
		
		cout<<endl<<"Aplicacion"<<endl;
    	cout<<"|"<<n[i]<<"|"<<"\n";
    	cout<<"Transporte"<<endl;
    	mostrar_entero(A,1);
		cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
		cout<<"Internet"<<endl;
		mostrar_entero(T,4);
		mostrar_entero(D,4);
		cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
		system("pause");
		     	
		cout<<endl<<"Aplicacion"<<endl;
    	cout<<"|"<<n[i]<<"|"<<"\n";
    	cout<<"Transporte"<<endl;
    	mostrar_entero(A,1);cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
		cout<<"Internet"<<endl;
		mostrar_entero(T,4);
		mostrar_entero(D,4);
		cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
		cout<<"Acceso a la red"<<endl;
		mostrar_cadena(I,6);
		mostrar_cadena(B,6);
		mostrar_entero(T,4);
		mostrar_entero(D,4);
		mostrar_entero(A,1);
		cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
		system("pause");		             
		system("cls");
		
		cout<<"Desencapsulamiento"<<endl;
	    
	    cout<<endl<<"Aplicacion"<<endl;
    	cout<<"|"<<n[i]<<"|"<<"\n";
    	cout<<"Transporte"<<endl;
    	mostrar_entero(A,1);cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
		cout<<"Internet"<<endl;
		mostrar_entero(T,4);
		mostrar_entero(D,4);
		cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
		cout<<"Acceso a la red"<<endl;
		mostrar_cadena(I,6);
		mostrar_cadena(B,6);
		mostrar_entero(T,4);
		mostrar_entero(D,4);
		mostrar_entero(A,1);
		cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
		system("pause");
	    
	    cout<<endl<<"Aplicacion"<<endl;
    	cout<<"|"<<n[i]<<"|"<<"\n";
    	cout<<"Transporte"<<endl;
    	mostrar_entero(A,1);cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
		cout<<"Internet"<<endl;
		mostrar_entero(T,4);
		mostrar_entero(D,4);
		cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
	    system ("pause");
	    cout<<endl;
	    
	    cout<<endl<<"Aplicacion"<<endl;
    	cout<<"|"<<n[i]<<"|"<<"\n";
    	cout<<"Transporte"<<endl;
    	mostrar_entero(A,1);cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
	    system ("pause");
	    cout<<endl;
	    
	    cout<<"Aplicacion"<<endl;	
	    cout<<"|"<<n[i]<<"|"<<endl; 
		system ("pause");
		cout<<endl;
		system("cls");
	    
	}  
}
char mostrarautomatico(char n[10])
{
	int longitud,puerto,almacena;
    cout<<"Introduce una palabra: ";
    cin>>n;
    longitud=strlen(n);
    int A[1]={80};
	int	T[4] = {192, 168, 1, 2};
	int D[4]={60, 15, 18, 2};
    string I[6]={"0A:","F2:","C8:","7C:","18:","A1"};
	string B[6]={"FC:","84:","7B:","1B:","16:","A8"};

    for (int i=0;i<longitud;i++){
	    almacena=aleatorio(puerto);
		cout<<"Aplicacion"<<endl;	
	    cout<<"|"<<n[i]<<"|"<<endl; 
		Sleep(2000);
		
		cout<<endl<<"Aplicacion"<<endl;
        cout<<"|"<<n[i]<<"|"<<"\n";
    	cout<<"Transporte"<<endl;
    	mostrar_entero(A,1);
		cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
		Sleep(2000);
		
		cout<<endl<<"Aplicacion"<<endl;
    	cout<<"|"<<n[i]<<"|"<<"\n";
    	cout<<"Transporte"<<endl;
    	mostrar_entero(A,1);
		cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
		cout<<"Internet"<<endl;
		mostrar_entero(T,4);
		mostrar_entero(D,4);
		cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
		Sleep(2000);
		     	
		cout<<endl<<"Aplicacion"<<endl;
    	cout<<"|"<<n[i]<<"|"<<"\n";
    	cout<<"Transporte"<<endl;
    	mostrar_entero(A,1);cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
		cout<<"Internet"<<endl;
		mostrar_entero(T,4);
		mostrar_entero(D,4);
		cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
		cout<<"Acceso a la red"<<endl;
		mostrar_cadena(I,6);
		mostrar_cadena(B,6);
		mostrar_entero(T,4);
		mostrar_entero(D,4);
		mostrar_entero(A,1);
		cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
		Sleep(2000);		             
		system("cls");
		
		cout<<"Desencapsulamiento"<<endl;
	    
	    cout<<endl<<"Aplicacion"<<endl;
    	cout<<"|"<<n[i]<<"|"<<"\n";
    	cout<<"Transporte"<<endl;
    	mostrar_entero(A,1);cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
		cout<<"Internet"<<endl;
		mostrar_entero(T,4);
		mostrar_entero(D,4);
		cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
		cout<<"Acceso a la red"<<endl;
		mostrar_cadena(I,6);
		mostrar_cadena(B,6);
		mostrar_entero(T,4);
		mostrar_entero(D,4);
		mostrar_entero(A,1);
		cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
		Sleep(2000);
	    
	    cout<<endl<<"Aplicacion"<<endl;
    	cout<<"|"<<n[i]<<"|"<<"\n";
    	cout<<"Transporte"<<endl;
    	mostrar_entero(A,1);cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
		cout<<"Internet"<<endl;
		mostrar_entero(T,4);
		mostrar_entero(D,4);
		cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
	    Sleep(2000);
	    cout<<endl;
	    
	    cout<<endl<<"Aplicacion"<<endl;
    	cout<<"|"<<n[i]<<"|"<<"\n";
    	cout<<"Transporte"<<endl;
    	mostrar_entero(A,1);cout<<almacena<<"|"<<n[i]<<"|"<<"\n";
	    Sleep(2000);
	    cout<<endl;
	    
	    cout<<endl<<"Aplicacion"<<endl;
	    cout<<"|"<<n[i]<<"|"<<"\n";	 
	    Sleep(2000);
		system("cls");	
		Sleep(3000);   
	}
}

int main(){
	int s;
	char letra[10], palabra[10];
	cout<<"Escriba 1 si desea que avance automáticamente"<<endl;
	cout<<"Escriba 2 si quiere avanzar pulsando una tecla"<<endl;
	cout<<"Presione 0 para salir";
	cout<<endl;
	cout<<"INGRESE NUMERO: ";
	cin>>s;
	while(s!=0){
	switch(s){
		case 1:{
			mostrarautomatico(palabra);
			break;
		}
		case 2:{
    		mostrartecla(palabra);
			break;
		}

	}
	}
}
