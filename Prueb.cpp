#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <conio.h>
#include <string.h>

using namespace std;

char   vacio[1];
char  Nomb [150];
char apellido [150];
char horaen [20]; 
float horasa;
void separador (char ch );
void saludo ();
int menu ();
int mesas();
int cantP ();
void mesas2();
void Mderec ();
void Mizq   ();
void Marrib ();
void Mcent   ();
void entradas();
void platof();
void postres();
void bebidas();
void volver();
void reserva();
void reporte();
void pago();
float cuenta;
float precio;
float legal;
float Itbis;

int main(){
    saludo ();
    mesas ();
    reporte();
    
    return 0;
}

void separador ( char ch ){
    int x ;
    for ( x = 1 ; x <= 35 ; x++ ){
        cout << ch ;
    }
}
void saludo (){
    separador ('=') ;
    cout << endl << " === Rapid In Restaurant ===" << endl ;
    separador ('=') ;
    cout << endl << endl ;
}





int mesas (){
	char opcion;
	printf("Mesas Disponibles: \n\n");
	
    cout << "         1. Derecha                 " << endl ;
    cout << "         2. Izquierda               " << endl ;
    cout << "         3. Arriba                  " << endl ;
    cout << "         4. Centro                  " << endl ;
    
    cout << endl << "Cual mesa usted desea observar? " ;
    cin >> opcion ;
    
	switch (opcion){
    case '1':
        system("cls");
        Mderec();
    break;
    case '2':
        system("cls");
        Mizq();

    break;
    case '3':
        system("cls");
        Marrib();

    break;
    case'4':
        system("cls");
        Mcent();
    break;
    default:
        cout << endl << "Valor incorrecto, intente de nuevo " << endl ;
	    }
    reserva();

     return opcion ;
}
	void Mderec(){
			int op1, cantP; 
			char Nom [200], vacio[1], apellido[200] ;

            cout << endl << " ############## Numero de Mesa de la Derecha ############## " << endl << endl ;

            cout << "            1. Mesa 1                   " << endl ;
            cout << "            2. Mesa 2          		 " << endl ;
            cout << "            3. Mesa 3     				 " << endl ;
            cout << "            4. Mesa 4                   " << endl ;


            cout << endl << "¿Cual Mesa Usted desea? " ;
            cin >> op1 ;
            
			cout << endl << "" ;
            cin.getline(vacio,sizeof(vacio));
            
			cout << endl << "Ingrese el Nombre del Cliente: " ;
            cin.getline(Nom,sizeof(Nom));
            
            cout << endl << "Ingrese el Apellido del Cliente: " ;
            cin.getline(apellido,sizeof(apellido));
            
            
            cout << endl << "Para Cuantas Personas ? " ;
            cin >> cantP ;

            switch(op1){
            case 1:
                cout << endl << " Usted se puede Sentar en la Mesa " << op1 << " Para el Cliente " << Nom <<" "<< apellido<< endl;
            break;
            case 2:
                cout << endl << " Usted se puede Sentar en la Mesa " << op1 << " Para el Cliente " << Nom <<" "<< apellido<< endl;

            break;
            case 3:

				cout << endl << " Usted se puede Sentar en la Mesa " << op1 << " Para el Cliente " << Nom <<" "<< apellido<< endl;
            break;
            case 4:
				cout << endl << " Usted se puede Sentar en la Mesa " << op1 << " Para el Cliente " << Nom <<" "<< apellido<< endl;
            break;
            default:
            cout << endl << "Valor incorrecto, intente de nuevo " << endl ;
            }
        getch();  
    }
    void Mizq (){

        int op2, cantP ;
        char Nom [200], vacio[1], apellido[200] ;

    cout << endl << "############## Numero de Mesa de la Izquierda ##############" << endl << endl ;

    		cout << "            1. Mesa 5                   " << endl ;
            cout << "            2. Mesa 6          		 " << endl ;
            cout << "            3. Mesa 7     				 " << endl ;
            cout << "            4. Mesa 8                   " << endl ;
   
    cout << endl << "¿Cual Mesa Usted desea? " ;
    	cin >> op2 ;
    	
    	cout << endl << "" ;
            cin.getline(vacio,sizeof(vacio));
            
			cout << endl << "Ingrese el Nombre del Cliente: " ;
            cin.getline(Nom,sizeof(Nom));
            
            cout << endl << "Ingrese el Apellido del Cliente: " ;
            cin.getline(apellido,sizeof(apellido));
    	
    cout << endl << "Para Cuantas Personas ? " ;
        cin >> cantP ;

        switch(op2){
            case 1:
                cout << endl << " Usted se puede Sentar en la Mesa " << op2 << " Para el Cliente " << Nom <<" "<< apellido<< endl;
            break;
            case 2:
                cout << endl << " Usted se puede Sentar en la Mesa " << op2 << " Para el Cliente " << Nom <<" "<< apellido<< endl;

            break;
            case 3:

				cout << endl << " Usted se puede Sentar en la Mesa " << op2 << " Para el Cliente " << Nom <<" "<< apellido<< endl;
            break;
            case 4:
				cout << endl << " Usted se puede Sentar en la Mesa " << op2 << " Para el Cliente " << Nom <<" "<< apellido<< endl;
            break;
            default:
            cout << endl << "Valor incorrecto, intente de nuevo " << endl ;
            }
        getch();

    }
    void Marrib (){

        int op3, cantP ;
        char Nom [200], vacio[1], apellido[200] ;

    cout << endl << "############## Numero de Mesa de la Arriba ##############" << endl << endl ;

    		cout << "            1. Mesa 9                   " << endl ;
            cout << "            2. Mesa 10          		 " << endl ;
            cout << "            3. Mesa 11     				 " << endl ;
            cout << "            4. Mesa 12                   " << endl ;
   
    cout << endl << "¿Cual Mesa Usted desea? " ;
    	cin >> op3 ;
    	
    	cout << endl << "" ;
            cin.getline(vacio,sizeof(vacio));
            
			cout << endl << "Ingrese el Nombre del Cliente: " ;
            cin.getline(Nom,sizeof(Nom));
            
            cout << endl << "Ingrese el Apellido del Cliente: " ;
            cin.getline(apellido,sizeof(apellido));
    	
    cout << endl << "Para Cuantas Personas ? " ;
        cin >> cantP ;

        switch(op3){
            case 1:
                cout << endl << " Usted se puede Sentar en la Mesa " << op3 << " Para el Cliente " << Nom <<" "<< apellido<< endl;
            break;
            case 2:
                cout << endl << " Usted se puede Sentar en la Mesa " << op3 << " Para el Cliente " << Nom <<" "<< apellido<< endl;

            break;
            case 3:

				cout << endl << " Usted se puede Sentar en la Mesa " << op3 << " Para el Cliente " << Nom <<" "<< apellido<< endl;
            break;
            case 4:
				cout << endl << " Usted se puede Sentar en la Mesa " << op3 << " Para el Cliente " << Nom <<" "<< apellido<< endl;
            break;
            default:
            cout << endl << "Valor incorrecto, intente de nuevo " << endl ;
            }
        getch();   

    }
    void Mcent (){

        int op4, cantP ;
        char Nom [200], vacio[1], apellido[200] ;

    cout << endl << "############## Numero de Mesa de la Centro ##############" << endl << endl ;

    		cout << "            1. Mesa 13                   " << endl ;
            cout << "            2. Mesa 14          		 " << endl ;
            cout << "            3. Mesa 15     				 " << endl ;
            cout << "            4. Mesa 16                   " << endl ;
   
    cout << endl << "¿Cual Mesa Usted desea? " ;
    	cin >> op4 ;
    	
    	cout << endl << "" ;
            cin.getline(vacio,sizeof(vacio));
            
			cout << endl << "Ingrese el Apellido del Cliente: " ;
            cin.getline(Nom,sizeof(Nom));
            
            cout << endl << "Ingrese el Apellido del Cliente: " ;
            cin.getline(apellido,sizeof(apellido));
    	
    cout << endl << "Para Cuantas Personas ? " ;
        cin >> cantP ;

        switch(op4){
            case 1:
                cout << endl << " Usted se puede Sentar en la Mesa " << op4 << " Para el Cliente " << Nom <<" "<< apellido<< endl;
            break;
            case 2:
                cout << endl << " Usted se puede Sentar en la Mesa " << op4 << " Para el Cliente " << Nom <<" "<< apellido<< endl;

            break;
            case 3:

				cout << endl << " Usted se puede Sentar en la Mesa " << op4 << " Para el Cliente " << Nom <<" "<< apellido<< endl;
            break;
            case 4:
				cout << endl << " Usted se puede Sentar en la Mesa " << op4 << " Para el Cliente " << Nom <<" "<< apellido<< endl;
            break;
            default:
            cout << endl << "Valor incorrecto, intente de nuevo " << endl ;
          }
        getch();
        
    }
    
    
    int menu(){
    char opcion ;

    printf("Estos son nuestros tiempos: \n\n");

    cout << "         1. Entradas                " << endl ;
    cout << "         2. Plato Fuerte            " << endl ;
    cout << "         3. Postres                 " << endl ;
    cout << "         4. Bebidas                 " << endl ;

    cout << endl << "Cual desea observar? " ;
    cin >> opcion ;

    switch (opcion){
    case '1':
        system("cls");
        entradas();
    break;
    case '2':
        system("cls");
        platof();
    break;
    case '3':
        system("cls");
        postres();
    break;
    case'4':
        system("cls");
        bebidas();
    break;
    default:
        cout << endl << "Valor incorrecto, intente de nuevo " << endl ;
    }
    volver();

     return opcion ;
    }
    void entradas(){

            int op5, orden;
            float cuenta = 0;
			
			float precio = 0;

			
            cout << endl << "################### ENTRADAS #####################" << endl << endl ;

            cout << "1. Ensalada de Nopalitos                      $40   " << endl ;
            cout << "2. Crema de Aguacate al Tequila               $50 " << endl ;
            cout << "3. Tostaditas de Queso de Cabra y Tomate      $40" << endl ;
            cout << "4. Frijoles Rancheros                         $35   "<< endl ;

            cout << endl << "¿Que entrada desea? " ;
            cin >> op5 ;

			cout << endl << "Ingrese el precio: " ;
			cin >> precio ;

            cout << endl << "Cuantas ordenes desea? " ;
            cin >> orden ;

            switch(op5){
            case 1:
                cuenta = precio * orden ;
                cout << endl << "    Subtotal: $" << cuenta << endl;
            break;
            case 2:

                cuenta = precio * orden ;
                cout << endl << "    Subtotal: $" << cuenta << endl;

            break;
            case 3:

              cuenta = precio * orden ;
              cout << endl << "    Subtotal: $" << cuenta << endl;
            break;
            case 4:
                cuenta = precio * orden ;
                cout << endl << "    Subtotal: $" << cuenta << endl;
            break;
            default:
            cout << endl << "Valor incorrecto, intente de nuevo " << endl ;
            }
    }
    void platof (){

        int op6, enchiladas, cochinita, kilos, orden ;
        float cuenta = 0;
	
		float precio = 0;
		
	
    cout << endl << "################ PLATO FUERTE ##################" << endl << endl ;

    cout << "1. Cerdo en Salsa Verde                       $80              " << endl ;
    cout << "2. Enchiladas (Suizas, verdes, Rojas)         $120/$95/$95     " << endl ;
    cout << "3. Cochinita Pibil (Orden de Tacos/Kilos)     $75/$300         " << endl ;
    cout << "4. Mole Poblano                               $80              "<< endl ;
    cout << "5. Pozole (Rojo, Blanco, Verde                $90              "<< endl ;
    cout << "6. Chiles Rellenos                            $80              "<< endl ;
    cout << endl << "¿Que platillo desea? " ;
    cin >> op6 ;

        switch(op6){
            case 1:
        cout << endl << "Cuantas ordenes desea? " ;
        cin >> orden ;
        
        cout << endl << "Ingrese el precio: " ;
		cin >> precio ;
        
        cuenta = precio * orden ;
        cout << endl << "    Subtotal: $" << cuenta << endl;
        break;
            case 2:
        cout << endl << "De cuales enchiladas desea?" << endl ;

        cout << "1. Suizas    $120   " << endl ;
        cout << "2. Rojas     $95    " << endl ;
        cout << "3. Verdes    $95    " << endl ;
        cin >> enchiladas ;
		
		cout << endl << "Ingrese el precio: " ;
		cin >> precio ;
		
        cout << "Cuantas ordenes desea? " << endl ;
        cin >> orden ;

        switch(enchiladas){
            case 1:
            cuenta = precio * orden ;
            cout << endl << "    Subtotal: $" << cuenta << endl;
            break;
            case 2:
                cuenta = precio * orden ;
                cout << endl << "    Subtotal: $" << cuenta << endl;
            break;
            case 3:
                cuenta = precio * orden ;
                cout << endl << "    Subtotal: $" << cuenta << endl;
            break;
            default:
                cout << endl << "Valor incorrecto, intente de nuevo " << endl ;
        }
        break;
            case 3:
            cout << "Que desea? "<< endl ;

            cout << "1. Orden de Tacos (4/orden)   $75  " << endl ;
            cout << "2. Por Kilo                   $300 " << endl ;
            cin >> cochinita ;

            switch(cochinita){
            case 1:
                cuenta = precio * orden ;
                cout << endl << "    Subtotal: $" << cuenta << endl;
            break;
            case 2:
                cout << "Cuantos kilos desea? (Ingresar valor en kg) " << endl ;
                cin >> kilos ;

                cuenta = precio * kilos ;
                cout << endl << "    Subtotal: $" << cuenta << endl;
                break;
            default:
                cout << endl << "Valor incorrecto, intente de nuevo " << endl;
            }
        case 4:
        	
        	cout << endl << "Ingrese el precio: " ;
			cin >> precio ;
        	
             cout << endl << "Cuantas ordenes desea? " ;
            cin >> orden ;
            cuenta = precio * orden ;
            cout << endl << "    Subtotal: $" << cuenta << endl;
        break;
        case 5:
        	
        	cout << endl << "Ingrese el precio: " ;
			cin >> precio ;
		
            cout << endl << "Cuantas ordenes desea? " ;
            cin >> orden ;
            cuenta = precio * orden ;
            cout << endl << "    Subtotal: $" << cuenta << endl;
        break;
        case 6:
        	
        	cout << endl << "Ingrese el precio: " ;
			cin >> precio ;
			
            cout << endl << "Cuantas ordenes desea? " ;
            cin >> orden ;
            cuenta = precio * orden ;
            cout << endl << "    Subtotal: $" << cuenta << endl;
        break;
        default:
            cout << endl << "Valor incorrecto, intente de nuevo " << endl ;
        }

    }
    void postres(){
        int op7, orden;
        float cuenta = 0;
        float precio = 0;
		

    cout << endl << "################ POSTRES ####################" << endl << endl ;

    cout << "1. Pastel                              $35              " << endl ;
    cout << "2. Brownies con Helado                 $15    " << endl ;
    cout << "3. Flan Napolitano                     $35         " << endl ;
    cout << "4. Gelatina de Mosaico                 $25              "<< endl ;

    cout << endl << "¿Que postre desea? " ;
    cin >> op7 ;
	
	cout << endl << "Ingrese el precio: " ;
	cin >> precio ;
		
    cout << endl << "Cuantas ordenes desea? " ;
    cin >> orden ;

    switch(op7){
    case 1:
        cuenta = precio * orden ;
        cout << endl << "    Subtotal: $" << cuenta << endl;
    break;
    case 2:
        cuenta = precio * orden ;
        cout << endl << "    Subtotal: $" << cuenta << endl;
    break;
    case 3:
        cuenta = precio * orden ;
        cout << endl << "    Subtotal: $" << cuenta << endl;
    break;
    case 4:
        cuenta = precio * orden ;
        cout << endl << "    Subtotal: $" << cuenta << endl;
    break;
    default:
            cout << endl << "Valor incorrecto, intente de nuevo " << endl ;
    	}
    	
    }
    
    void bebidas(){

            int op8, orden;
            float cuenta = 0;
            float precio = 0;

    cout << endl << "################ BEBIDAS ####################" << endl << endl ;

    cout << "1. Refresco                   $20              " << endl ;
    cout << "2. Agua Fresca                $25    " << endl ;

    cout << endl << "¿Que bebida desea? " ;
    cin >> op8 ;
    
    cout << endl << "Ingrese el precio: " ;
	cin >> precio ;

    cout << endl << "Cuantas desea? " ;
    cin >> orden ;

            switch(op8){
                cin >> cuenta;
        case 1:
            cuenta = precio * orden ;
            cout << endl << "    Subtotal: $" << cuenta << endl;
        break;
        case 2:
            cuenta = precio * orden ;
            cout << endl << "    Subtotal: $" << cuenta << endl;
        break;
        default:
            cout << endl << "Valor incorrecto, intente de nuevo " << endl ;
        }
       
    }
    
    void reserva(){
    int reserva;
    cout << endl << "Desea Confirma su Reservacion?" << endl;
    cout << "1. Si " << endl ;
    cout << "2. No " << endl ;
        cin >> reserva ;

        if (reserva == 1){
        system("cls");
        void separador( char ch);
        saludo();
        menu();
        }
        if (reserva == 2){
        cout<< " Gracias Vuelva Pronto";
        }      
    }
    
    void volver(){
    int volver;
    cout << endl << "Desea seguir ordenando?" << endl;
    cout << "1. Si " << endl ;
    cout << "2. No " << endl ;
        cin >> volver ;

        if (volver == 1){
        system("cls");
        void separador( char ch);
        saludo();
        menu();
        }
        if (volver == 2){
        	saludo();
        	void reporte();
        }
    }
    


