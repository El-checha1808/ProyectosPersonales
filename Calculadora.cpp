#include <iostream> 
#include <cstdlib>

using namespace std;


class Operaciones{
	
	// Declaración de la clase Operaciones, la clase Operaciones es la plantilla para la creacion de objetos calculadora
		
	private:
		
		/*Uso de la palabra reservada private, en esta parte estoy haciendo uso del principio de encapsulamiento de la programacion 
		orientada a objetos o POO, las variables declaradas seran accesibles solo dentro de la clase Operaciones*/
		
		float num1, num2, resultado;
		char ope;
		
	public:
		
		/*Uso de la palabra reservada public, las variables declaradas seran accesibles desde cualquier parte, aun desde
		otras clases*/
		
		Operaciones(float, char, float); // Declaracion del constructor de la clase
		void operar(); // Declaracion de la funcion operar()

};

Operaciones::Operaciones(float a, char b, float c){
	
	/*Inicializacion de las variables desde el constructor de la clase, en esta parte hacemos uso del principio de 
	abstraccion donde abstraemos los atributos de una calcualdora*/
	
	num1 = a;
	ope = b;
	num2 = c;
	
}

void Operaciones::operar(){
	
	/*Metodo operar, hacemos uso del principio de abstraccion donde abstraemos la funcion de calcualra operaciones
	de una calculadora*/
	
	
	/*Uso de la estructura condicional if - else if - else, donde evaluaremos el tipo de caracter que ingrese el usuario
	para ejecutar la operacion que se desea hacer*/
	
	if (ope == '+'){
		
		resultado = num1 + num2;
		
		cout << " -> " << resultado << "\n" << endl;
		
	} else if(ope == '-'){
		
		resultado = num1 - num2;
		
		cout << " -> " << resultado << "\n" << endl;
		
	} else if(ope =='*'){
		
		resultado = num1 * num2;
		
		cout << " -> " << resultado << "\n" << endl;
		
	} else if(ope == '/'){
		
		if (num2 == 0){
			
			cout << " -> error, division entre 0" << "\n" << endl;
			
		} else {
			
			resultado = num1 / num2;
		
			cout << " -> " << resultado << "\n" << endl;
			
		}
		
	} else {
		
		cout << " -> error" << "\n" << endl;
	}
}

int main(){
	
	//Funcion main, esta es la funcion principal, es donde crearemos los objetos necesarios de la clase Operaciones
	
	// Declaracion de variables
	
	float n1, n2;
	char simb;
	char sel;
    
    do {
    	
    	// Uso de la estructura repetitiva do-while, el programa se ejecutara hasta que el usuario lo desee
    	
    	cout << "---------------------------" << endl;
		cout << "|       Calculadora       |" << endl;
		cout << "---------------------------" << endl;
		cout << "\n Operaciones permitidas: " << endl;
		cout << "\n a + b" << endl;
    	cout << " a - b" << endl;
    	cout << " a * b" << endl;
    	cout << " a / b" << endl;
    	cout << "\n -> ";
    	cin >> n1 >> simb >> n2; // lectura de los valores ingresados por el usuario
    	
    	/*Instanciamos la clase Operaciones
		Creamos el objeto op() donde enviamos los valores declarados en el constructor de la clase Operaciones*/
    	
    	Operaciones op(n1, simb, n2);
    	op.operar(); //Hacemos uso del metodo operar, accedemos a el por medio del operador punto(.)
    	
    	cout << "Continuar? s/n ";
    	cin >> sel;
    	
    	system("cls"); //Limpiador de pantall
    	
	} while(sel != 'n');
	
	return 0;
}
