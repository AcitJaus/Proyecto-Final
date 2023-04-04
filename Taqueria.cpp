#include <iostream>
#include<stdio.h>
#include<windows.h>
#include<locale.h>
#include<stdlib.h>

using namespace std;

void Menu_G();
void Menu_T();
void Menu_B();
void Menu_P();

struct Cliente {
    string nombre;
    string direccion;
    string telefono;
};


void Consulta(){
	const int NUM_CLIENTES = 1;
    Cliente clientes[NUM_CLIENTES];

    // Registrar clientes
    for (int i = 0; i < NUM_CLIENTES; i++) {
        cout << "Ingrese el nombre del cliente " << i+1 << ": ";
        getline(cin, clientes[i].nombre);
        Sleep(500);
        system("cls");
        
        cout << "Ingrese la dirección del cliente " << i+1 << ": ";
        getline(cin, clientes[i].direccion);
        Sleep(500);
        system("cls");
        
        cout << "Ingrese el teléfono del cliente " << i+1 << ": ";
        getline(cin, clientes[i].telefono);
         Sleep(500);
         system("cls");
    }
     Sleep(500);
     system("cls");

    // Consultar información de los clientes
    int num_cliente;
    

    cout << "Información del cliente " << num_cliente+1 << ":" << endl;
    cout << "Nombre: " << clientes[num_cliente].nombre << endl;
    cout << "Dirección: " << clientes[num_cliente].direccion << endl;
    cout << "Teléfono: " << clientes[num_cliente].telefono << endl;
    Sleep(1500);
    system("cls");
	do {
        cout << "Ingrese el número de cliente que desea consultar (1-" << NUM_CLIENTES << "): ";
        cin >> num_cliente;
    } while (num_cliente < 1 || num_cliente > NUM_CLIENTES);

    num_cliente--; // Convertir a índice del arreglo
    Sleep(500);
    system("cls");
	
}

void Menu_G(){
	int opc;
	cout<<"\t\t\tBienvenido al menu principal!\n"<<endl;
	cout<<"\n1.-Tacos \n2.-Bebidas \n3.-Postres "<<endl;
	Sleep(700);
	cout<<"\nElige una opcion: "<<endl;
	cin>>opc;
	if(opc=1){
		Menu_T();
	}
	else if (opc=2){
		Menu_B;
	}
	else if (opc=3){
		Menu_P();
	}
	else
	{
		cout<<"Opcion Incorrecta"<<endl;
	}
}

void Menu_B(){
    cout << "1. Refresco Familia Coca-Cola - $22.50" << endl;
    cout << "2. Refresco Familia Pepsi - $24.00" << endl;
    cout << "3. Agua Fresca - $18.00" << endl;
    cout << "4. Cerveza - $23.50" << endl;
}

void Menu_P(){
    cout << "1. Pastel mini Chocolate - $42.50" << endl;
    cout << "2. Pastel mini Vainilla - $44.00" << endl;
    cout << "3. Flan Napolitano - $28.00" << endl;
    cout << "4. Pay de Queso - $33.50" << endl;
}
    
void Menu_T(){
    
    cout << "1. Tacos de Asada - $15.50" << endl;
    cout << "2. Tacos de Pollo - $12.00" << endl;
    cout << "3. Tacos de Bistec - $13.00" << endl;
    cout << "4. Tacos de Chorizo - $13.50" << endl;
}

void Bienvenida(){
	cout<<"\t\t\tBIENVENIDO A LA TAQUERIA LOS PRIMOS!"<<endl;
	Sleep(2000);
	system("cls");
	
}

int main() {
	system("color F9");
	setlocale(LC_ALL,"");
    const int NUM_CLIENTES = 1;
    Cliente clientes[NUM_CLIENTES];
    Bienvenida();

    // Registrar clientes
    for (int i = 0; i < NUM_CLIENTES; i++) {
        cout << "Ingrese el nombre del cliente " << i+1 << ": ";
        getline(cin, clientes[i].nombre);
        Sleep(500);
        system("cls");
        
        cout << "Ingrese la dirección del cliente " << i+1 << ": ";
        getline(cin, clientes[i].direccion);
        Sleep(500);
        system("cls");
        
        cout << "Ingrese el teléfono del cliente " << i+1 << ": ";
        getline(cin, clientes[i].telefono);
         Sleep(500);
         system("cls");
         Menu_G();
    }
     Sleep(500);
     system("cls");

    // Consultar información de los clientes
    int num_cliente;
    

    cout << "Información del cliente " << num_cliente+1 << ":" << endl;
    cout << "Nombre: " << clientes[num_cliente].nombre << endl;
    cout << "Dirección: " << clientes[num_cliente].direccion << endl;
    cout << "Teléfono: " << clientes[num_cliente].telefono << endl;
    Sleep(1500);
    system("cls");
    Menu_G();

    return 0;
}

// Angel Vladimir Cholico Torres 
// Diego Enrique Cortes Aviña