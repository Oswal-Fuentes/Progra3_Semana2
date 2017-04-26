#include <iostream>

using namespace std;
/*
La funcion muestras el menu y valida la entrada que sea
 correcta y retorna la opcion elegida por el usuario
*/
int menu();

int main(){

  bool salir=false;
  while(!salir){    
    switch(menu()){
      case 1:{
        int num1,num2;
	cout<<"Escriba un numero: ";
        cin>>num1;
        cout<<"Escriba un numero: ";
	cin>>num2;
  	cout<<"El resultado es: "<<num1 * num2<<endl;

        break;
      }
     case 2:{
       int num3,num4;
       cout<<"Escriba un numero: ";
       cin>>num3;
       cout<<"Escriba un numero: ";
       cin>>num4;
       cout<<"El resultado es: "<<num3 + num4<<endl;
       break;
     }
     case 3:{

       break;
     }
     case 4:
	salir=true;
     break;

    }
  }

  return 0;
}

int menu(){
  int opcion;
  bool valido=false;
  do{
 
    cout<<"-----MENU-----"<<endl
    <<"1.- Multiplicar dos numeros"<<endl
    <<"2.- Sumar dos numeros"<<endl
    <<"3.- Calcular Factorial"<<endl
    <<"4.- Salir"<<endl;

  cout<<"Ingrese una opcion: ";
  cin>>opcion;

  if(opcion>0 && opcion < 5)
    valido=true;
  else{
    cout<<"Opcion no valida, intente de nuevo..."<<endl;
  }

  }while(!valido);

  return opcion;
}

