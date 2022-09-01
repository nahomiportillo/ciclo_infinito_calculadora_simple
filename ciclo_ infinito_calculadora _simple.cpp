#include <iostream>
#include <string>
using namespace std; 

int main(void){
    while(true){
        int res=0, num1=0, num2=0;
        string menu = "¿Que operaciones desea realizar?\n\t1. Suma\n\t2. Resta\n\t3. Multiplicacion\n\t4. Division\n";    
    
        while(res!=4){
            cout << menu;
            cin >> res;
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;

            switch (res)
            {
            case 1:
                cout << "El resultado es: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "El resultado es: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "El resultado es: " << num1 * num2 << endl;
                break;
            case 4:
                if(num2!=0){
                    cout << "El resultado es: " << num1 / num2 << endl;
                }else{
                    cout << "No se puede dividir por Cero" << endl;
                }
                break;
            default:
                cout << "Por favor ingrese una opcion correcta" << endl;
                break;
            }
        }
    
    }


}