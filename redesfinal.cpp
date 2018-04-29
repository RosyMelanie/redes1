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
char mostrartecla(char n[10])
{
	int longitud,puerto,almacena;
    cout<<"Introduce una palabra: ";
    cin>>n;
    longitud=strlen(n);
    for (int i=0;i<longitud;i++){
	    almacena=aleatorio(puerto);
		
		cout<<"Aplicacion"<<endl;	
	    cout<<"|"<<n[i]<<"|"<<endl; 
		system ("pause");
		cout<<endl;
		
		cout<<"Aplicacion"<<endl;	
	    cout<<"|"<<n[i]<<"|"<<endl; 
	    cout<<"Transporte"<<endl;
	    cout<<"|80|"<<almacena<<"|"<<n[i]<<"|"<<endl;
	    system ("pause");
	    cout<<endl;
	    
	    cout<<"Aplicacion"<<endl;	
	    cout<<"|"<<n[i]<<"|"<<endl; 
	    cout<<"Transporte"<<endl;
	    cout<<"|80|"<<almacena<<"|"<<n[i]<<"|"<<endl;
	    cout<<"Internet"<<endl;
	    cout<<"|192.168.1.2|60.15.18.2"<<"|80|"<<almacena<<"|"<<n[i]<<"|"<<endl;
	    system ("pause");
	    cout<<endl;
	    
	    cout<<"Aplicacion"<<endl;	
	    cout<<"|"<<n[i]<<"|"<<endl; 
	    cout<<"Transporte"<<endl;
	    cout<<"|80|"<<almacena<<"|"<<n[i]<<"|"<<endl;
	    cout<<"Internet"<<endl;
	    cout<<"|192.168.1.2|"<<"|60.15.18.2|"<<"|80|"<<almacena<<"|"<<n[i]<<"|"<<endl;
	    cout<<"Acceso a la Red"<<endl;
	    cout<<"|0A:F2:C0:7C:18:A1|FC:84:7B:1B:16:A8"<<"|192.168.1.2|60.15.18.2"<<"|80|"<<almacena<<"|"<<n[i]<<"|"<<endl;
	    system ("pause");
	    system("cls");
	    
	    cout<<"Desencapsulamiento"<<endl;
	    
	    cout<<"Aplicacion"<<endl;	
	    cout<<"|"<<n[i]<<"|"<<endl; 
	    cout<<"Transporte"<<endl;
	    cout<<"|80|"<<almacena<<"|"<<n[i]<<"|"<<endl;
	    cout<<"Internet"<<endl;
	    cout<<"|192.168.1.2|"<<"|60.15.18.2|"<<"|80|"<<almacena<<"|"<<n[i]<<"|"<<endl;
	    cout<<"Acceso a la Red"<<endl;
	    cout<<"|0A:F2:C0:7C:18:A1|FC:84:7B:1B:16:A8"<<"|192.168.1.2|60.15.18.2"<<"|80|"<<almacena<<"|"<<n[i]<<"|"<<endl;
	    system ("pause");
	    
	    cout<<"Aplicacion"<<endl;	
	    cout<<"|"<<n[i]<<"|"<<endl; 
	    cout<<"Transporte"<<endl;
	    cout<<"|80|"<<almacena<<"|"<<n[i]<<"|"<<endl;
	    cout<<"Internet"<<endl;
	    cout<<"|192.168.1.2|60.15.18.2"<<"|80|"<<almacena<<"|"<<n[i]<<"|"<<endl;
	    system ("pause");
	    cout<<endl;
	    
	    cout<<"Aplicacion"<<endl;	
	    cout<<"|"<<n[i]<<"|"<<endl; 
	    cout<<"Transporte"<<endl;
	    cout<<"|80|"<<almacena<<"|"<<n[i]<<"|"<<endl;
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
	int longitud,almacena,puerto;
    cout<<"Introduce una palabra: ";
    cin>>n;
    longitud=strlen(n);
    for (int i=0;i<longitud;i++){
    	almacena=aleatorio(puerto);
		cout<<"Aplicación"<<endl;	
	    cout<<"|"<<n[i]<<"|"<<endl;
	    Sleep(2000);
    
        cout<<endl<<"Aplicacion"<<endl;
        cout<<"|"<<n[i]<<"|"<<"\n";
    	cout<<"Transporte"<<endl;
    	cout<<"|80|"<<almacena<<"|"<<n[i]<<"|"<<"\n";;
		Sleep(2000);
		
		cout<<endl<<"Aplicacion"<<endl;
    	cout<<"|"<<n[i]<<"|"<<"\n";
    	cout<<"Transporte"<<endl;
    	cout<<"|80|"<<almacena<<"|"<<n[i]<<"|"<<"\n";
		cout<<"Internet"<<endl;
		cout<<"|192.168.1.2||60.15.18.2||80|"<<almacena<<"|"<<n[i]<<"|"<<"\n";
		Sleep(2000);
		     	
		cout<<endl<<"Aplicacion"<<endl;
    	cout<<"|"<<n[i]<<"|"<<"\n";
    	cout<<"Transporte"<<endl;
    	cout<<"|80|"<<almacena<<"|"<<n[i]<<"|"<<"\n";
		cout<<"Internet"<<endl;
		cout<<"|192.168.1.2||60.15.18.2||80|"<<almacena<<"|"<<n[i]<<"|"<<"\n";
		cout<<"Acceso a la red"<<endl;
		cout<<"|40-B0-34-97-CB-B5||3E-A0-67-EF-B9-17||192.168.1.2||60.15.18.2||80|"<<almacena<<"|"<<n[i]<<"|"<<"\n";
		Sleep(2000);		             
		system("cls");	
					 
		cout<<"Desencapsulamiento"<<endl;
		cout<<endl<<"Aplicacion"<<endl;
    	cout<<"|"<<n[i]<<"|"<<"\n";
    	cout<<"Transporte"<<endl;
        cout<<"|80|"<<almacena<<"|"<<n[i]<<"|"<<"\n";
		cout<<"Internet"<<endl;
		cout<<"|192.168.1.2||60.15.18.2||80|"<<almacena<<"|"<<n[i]<<"|"<<"\n";
		cout<<"Acceso a la red"<<endl;
		cout<<"|40-B0-34-97-CB-B5||3E-A0-67-EF-B9-17||192.168.1.2||60.15.18.2||80|"<<almacena<<"|"<<n[i]<<"|"<<"\n";
		Sleep(2000);	 
		             
		cout<<endl<<"Aplicacion"<<endl;
   		cout<<"|"<<n[i]<<"|"<<"\n";
    	cout<<"Transporte"<<endl;
    	cout<<"|80|"<<almacena<<"|"<<n[i]<<"|"<<"\n";
		cout<<"Internet"<<endl;
		cout<<"|192.168.1.2||60.15.18.2||80|"<<almacena<<"|"<<n[i]<<"|"<<"\n";
		Sleep(2000);  
			  
		cout<<endl<<"Aplicacion"<<endl;
        cout<<"|"<<n[i]<<"|"<<"\n";
    	cout<<"Transporte"<<endl;
    	cout<<"|80|"<<almacena<<"|"<<n[i]<<"|"<<"\n";;
		Sleep(2000);
		
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
