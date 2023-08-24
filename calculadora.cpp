#include<iostream>
#include <math.h>
using namespace std;
main(){
	int opc;
	double num, num1, total;
	char opc2;
	
	do{
	
	cout<<"**********CALCULADORA**************"<<endl;
	
	cout<<"1) Suma"<<endl;
	cout<<"2) Resta"<<endl;
	cout<<"3) Multiplicacion"<<endl;
	cout<<"4) Divicion "<<endl;
	cout<<"5) Raiz cuadrada"<<endl;
	cout<<"6) Potencia"<<endl;
	cout<<"Seleccione uno"<<endl;
	cin>>opc;
	switch (opc){
		case 1:
			cout<<"Ingrese un numero: "<<endl;
			cin>>num1;
			/*if(num!=){
				cout<<"solo ingresa numeros"<<endl;
				cout<<"Ingrese un numero: "<<endl;
				cin>>num1;
			}
			*/
			cout<<"Ingrese un numero: "<<endl;
			cin>> num;
			total= num1+num;
			cout<<"La suma es  "<<total<<endl;
		break;
		case 2:
			cout<<"Ingrese un numero: "<<endl;
			cin>>num1;
			cout<<"Ingrese un numero: "<<endl;
			cin>> num;
			total=num-num1;
			cout<<"La resta es: "<<total<<endl;
		break;
		case 3:
			cout<<"Ingrese un numero: "<<endl;
			cin>>num1;
			cout<<"Ingrese un numero: "<<endl;
			cin>> num;
			total=num*num1;
			cout<< "La multiplicacion es: "<<total<<endl;
		break;
		case 4:
			cout<<"Ingrese el divisor: "<<endl;
			cin>>num1;
			cout<<"Ingrese un dividendo: "<<endl;
			cin>> num;
			if(num==0){
				cout<<"No se puede dividir entre cero";
				cout<<"Ingrese un dividendo: "<<endl;
				cin>> num;
			}
			total=num1/num;
			cout<<"La divicion es: "<<total<<endl;
		break;
		case 5:
			cout<<"Ingrese un numero: "<<endl;
			cin>>num1;
			total=sqrt(num1);
			cout<<"La raiz es: "<<total<<endl;
		break;
		
	}
	cout<<"Quiere hacer otra operacion?? s/n"<<endl;
			cin>> opc2;
}while(opc2=='s');
	
	
}

