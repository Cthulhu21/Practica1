#include <iostream>

using namespace std;

void Problema2();
void Problema4();
void Problema6();
void Problema7();
void Problema9();
void Problema11();
void Problema12();
void Problema13();
void Problema15();
void Problema17();

int main()
{
    int a;
    //Se pide el ingreso del problema a revisar
    do
    {
        cout << "Ingrese el numero del problema que desea revisar: " << endl;
        cin >> a;
        //Se verifica que se haya ingresado uno de los problemas
        if(a!=0)
        {
            // Se ejecuta la función correspondiente al problema
            switch (a)
            {
            case 2:
                Problema2();
                break;
            case 4:
                Problema4();
                break;
            case 6:
                Problema6();
                break;
            case 7:
                Problema7();
                break;
            case 9:
                Problema9();
                break;
            case 11:
                Problema11();
                break;
            case 12:
                Problema12();
                break;
            case 13:
                Problema13();
                break;
            case 15:
                Problema15();
                break;
            case 17:
                Problema17();
                break;
            default:
                break;
            }
        }
    }while(a!=0);
    return 0;
}
