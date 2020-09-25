#include <iostream>
#include <list>

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

// Funciones auxiliares

bool ValidarHora(int);
float Factorial(int);
bool Primo(int);

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
            /*case 15:
                Problema15();
                break;
            case 17:
                Problema17();
                break;*/
            default:
                break;
            }
        }
    }while(a!=0);
    return 0;
}

void Problema2()
{
    int Dinero;
    cout << "Ingrese la cantidad de dinero a convertir (0 para salir)" << endl;
    cin >> Dinero;
    int i=1;
    while(i<11)
    {
        //Se usa un iterador para cambiar las divisiones y modulos
        switch (i)
        {
        case 1:
            cout << "50000: " << Dinero/50000 << endl;
            Dinero=Dinero%50000;
            break;
        case 2:
            cout << "20000: " << Dinero/20000 << endl;
            Dinero=Dinero%20000;
            break;
        case 3:
            cout << "10000: " << Dinero/10000 << endl;
            Dinero=Dinero%10000;
            break;
        case 4:
            cout << "5000: " << Dinero/5000 << endl;
            Dinero=Dinero%5000;
            break;
        case 5:
            cout << "2000: " << Dinero/2000 << endl;
            Dinero=Dinero%2000;
            break;
        case 6:
            cout << "1000: " << Dinero/1000 << endl;
            Dinero=Dinero%1000;
            break;
        case 7:
            cout << "500: " << Dinero/500 << endl;
            Dinero=Dinero%500;
            break;
        case 8:
            cout << "200: " << Dinero/200 << endl;
            Dinero=Dinero%200;
            break;
        case 9:
            cout << "100: " << Dinero/100 << endl;
            Dinero=Dinero%100;
            break;
        case 10:
            cout << "50: " << Dinero/50 << endl;
            Dinero=Dinero%50;
            break;
        default:
            break;
        }
        i++;
    }
    cout << "Faltante: " << Dinero << endl;
}

void Problema4()
{
    int Hora1, Hora2;
    cout << "Ingrese la primera hora" << endl;
    cin >> Hora1;
    if(!ValidarHora(Hora1))
    {
        cout << Hora1 << " es un tiempo invalido." << endl;
    }
    else
    {
        cout << "Ingrese la segunda hora" << endl;
        cin >> Hora2;
        if(!ValidarHora(Hora2))
        {
            cout << Hora2 << " es un tiempo invalido." << endl;
        }
        else
        {
            int HoraFinalProvisional=Hora1+Hora2, HoraFinal=0;
            if(HoraFinalProvisional%100>=60)
            {
                HoraFinal=(HoraFinalProvisional%100)%60;
                HoraFinal+=100;
            }
            else
            {
                HoraFinal=(HoraFinalProvisional%100)%60;
            }
            if((HoraFinalProvisional/24)>=24)
            {
                HoraFinal+=((HoraFinalProvisional/100)%24)*100;
            }
            else
            {
                HoraFinal+=(HoraFinalProvisional/100)*100;
            }
            cout << "La hora es: " << HoraFinal << endl;
        }
    }
}

bool ValidarHora(int Hora)
{
    // Se revisa que el numero ingresado sea valido como hora
    if(Hora%100>=60)
    {
        return false;
    }
    else if((Hora/100)>23 or (Hora/100)<0)
    {
        return false;
    }
    return true;
}

void Problema6()
{
    int Cantidad;
    cout << "Ingrese el numero de elementos de la aproximacion" << endl;
    cin >> Cantidad;
    float Aproximacion=0;
    for(int i=0; i<Cantidad; i++)
    {
        Aproximacion+=1/Factorial(i);
    }
    cout << "e es aproximadamente " << Aproximacion << endl;
}

float Factorial(int Numero)
{
    float Multiplicacion=1;
    for(int i=Numero; i>=0; i--)
    {
        if(i==0)
        {
            Multiplicacion*=1;
        }
        else
        {
            Multiplicacion*=i;
        }
    }
    return Multiplicacion;
}

void Problema7()
{
    int PrimerNumero=1, SegundoNumero=1, CotaSuperior, SumaTotal=0;
    cout << "Ingrese la cota superior" << endl;
    cin >> CotaSuperior;
    while(PrimerNumero+SegundoNumero<CotaSuperior)
    {
        int Total=PrimerNumero+SegundoNumero;
        if((Total)%2==0)
        {
            SumaTotal+=Total;
        }
        PrimerNumero=SegundoNumero;
        SegundoNumero=Total;
    }
    cout << "El resultado de la suma es: " << SumaTotal << endl;
}

void Problema9()
{
    string Numero;
    int Suma=0;
    cout << "Ingrese un numero" << endl;
    cin >> Numero;
    for(int i=0; i<int(Numero.size()); i++)
    {
        int Unidad=Numero[i]-'0';
        int Multiplicacion=1;
        for(int j=1; j<=Unidad; j++)
        {
            Multiplicacion*=Unidad;
        }
        Suma+=Multiplicacion;
    }
    cout << "El resultado de la suma es: " << Suma << endl;
}

void Problema11()
{
    int Numero;
    cout << "Ingrese un numero" << endl;
    cin >> Numero;
    int MCM=1;
    list<int> Numeros, Factores;
    for(int i=2; i<=Numero; i++)
    {
        Numeros.push_back(i);
    }
    int i=2;
    while (i<=Numero)
    {
        bool AlMenosUno=false;
        auto Pos=Numeros.begin();
        for(int Dato : Numeros)
        {
            if(Dato%i==0)
            {
                *Pos=*Pos/i;
                AlMenosUno=true;
            }
            Pos++;
        }
        (AlMenosUno) ? MCM*=i: i++;
    }
    cout << "El minimo comun multiplo es: " << MCM << endl;
}

void Problema12()
{
    int Numero;
    cout << "Ingrese un numero" << endl;
    cin >> Numero;
    int i=2, FactorPrimo=1;
    while(Numero!=1)
    {
        if(Numero%i!=0)
        {
            i++;
        }
        else
        {
            Numero/=i;
            FactorPrimo=i;
        }
    }
    cout << "El factor primo maximo es: " << FactorPrimo << endl;
}

void Problema13()
{
    int Numero;
    cout << "Ingrese un numero" << endl;
    cin >> Numero;
    int Suma=0;
    for(int i=2; i<Numero; i++)
    {
        if(Primo(i))
        {
            Suma+=i;
        }
    }
    cout << "El resultado de la suma es: "<< Suma << endl;
}

bool Primo(int Numero)
{
    int Factores=2;
    for(int i=2; i<=Numero/2; i++)
    {
        if(Numero%i==0)
        {
            Factores++;
        }
        if(Factores>2)
        {
            return false;
        }
    }
    return true;
}
