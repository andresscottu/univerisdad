#include <iostream>
#include <string.h>

using namespace std; 

int main(){

	// Configuration data
	string usersNames[5], usersPasswords[5]; 

	usersNames[0] = "admin"; 
	usersPasswords[0] = "admin"; 

	// Login 
	int loginOption = 0;  
	string userName, userPassword; 
	bool credentialValidation = false;  

	cout<<"Bienvenido a el software de facturación POS"<<endl; 
	
	while (loginOption != 2){
		cout<<"\n 1. Iniciar sección  \n 2. Salir de la aplicación \n Ingrese la opción que desee: ";  
		cin>>loginOption; 

		switch(loginOption){
			case 1: 
				while (loginOption != 2){
					cout<<"Nombre de usuario: "; 	
					cin>>userName; 
					cout<<"Contraseña: "; 
					cin>>userPassword; 

					for(int i=0; i<5; i++){
						if(userName == usersNames[i] && userPassword == usersPasswords[i]){
							credentialValidation = true; 
						}
					}	

					if(credentialValidation){
						// Codigo de Samuel -> borrar comentario cuando lo tenga escrito 

							


					} else{
						cout<<"Nombre de usuario o contraseña incorrectos"<<endl; 
					}
				}
				break; 
			case 2: 
				cout<<"Saliendo del programa..."<<endl; 
				break; 
			default: 
				cout<<"Opción incorrecta"<<endl; 
				break; 
		}
	}


	return 0; 
}
