// Funkce02.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;


double Mocnina(int a, int n)
{
    double mocnina = 1;

    for (int i = 0; i < n; i++)  
    {
        mocnina *= a;
    }

    return mocnina;
 
}


int CifernySoucet(int n)
{
    int cifSoucet = 0;
    while (n > 0)
    {
        cifSoucet += n % 10;
        n /= 10;
    }


    return cifSoucet;
}


int main()
{

    char volba;
    cout << "\n1=Mocnina, 2=Ciferny soucet, 3=Konec: ";
    cin >> volba;
    while (volba != '3')
    {
        switch (volba)
        {
        case '1':
        {
            int a{ 0 }, n{ 0 };
            cout << "Zadej cislo a: ";
            cin >> a;

            cout << endl;

            cout << "Zadej cislo n: ";
            cin >> n;
          
            cout << "\n\nMocnina " <<a << " na " << n <<  " je: " << Mocnina(a,n) << endl << endl;

        }
        break;
        case '2':
        {
            int n;
            cout << "Zadej nezaporne cislo: ";
            cin >> n;
          
            cout << "\n\nCiferny soucet " << n <<  " je: " << CifernySoucet(n) << endl << endl;
        }
        break;
        default:
        {
            cout << "Nevybrana moznost";
        }
        break;
        }
        cout << "\n1=Mocnina, 2=Ciferny soucet, 3=Konec: ";
        cin >> volba;
    }
    
}

