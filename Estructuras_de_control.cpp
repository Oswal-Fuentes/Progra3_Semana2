#include <iostream>

using namespace std;
//prototipo de funciones
void ejemplo();
//Funcion que comprara dos enteros y dice cual es mayor
void comparar(int,int);
int main(){

  cout<<"Hola Mundo"<<endl;
  int salir =1;
  while(salir ==1){
  int arreglo[5];
  //leer valores  
  for(int i = 0; i < 5; i++){
    cout<<"Escriba un numero: ";
    cin>>arreglo[i];
  }

  //imprimir valores
  cout<<endl<<"Los valores leidos son: "<<endl;
  for(int i=0;i<5;i++){
    cout<<arreglo[i]<<endl;
  }
  cout<<endl<<"Ingrese 1 para continuar,0 par salir: ";
  cin>>salir;
  }//Fin while
  ejemplo();
  int a,b;
  cout<<"Ingrese el numero a ";
  cin>>a;
  cout<<"Ingrese el numero b ";
  cin>>b;
  comparar(a,b);
return 0;
}

void comparar(int a,int b){
  if(a>b){
    cout<<a<<" es mayor que "<<b<<endl;
    }else if(a==b)
	cout<<a<<" es igual a "<<b<<endl;
    else{
      cout<<b<<" es mayor que "<<a<<endl;
    }
  }

void ejemplo(){
  cout<<"Ejemplo Funcion"<<endl;
}


