//Girilen 10 elemanli 3 dizi grubu arasinda max degerleri bulup buyukten kucuge dogru siralar
#include <iostream>
using namespace std;

int a[10];
int b[10];
int c[10];

int eba = a[0];
int ebb = b[0];
int ebc = c[0];

void Find_Max()
{

    int i = 0;

    cout << "10'ar elemanli 3 adet sayi dizisi giriniz" << endl;
    
    cout << "Ilk grubu giriniz" << endl;

    for (i = 0; i < 10; i++)
        cin >> a[i];

    cout << "2. grubu giriniz" << endl;

    for (i = 0; i < 10; i++)
        cin >> b[i];

    cout << "3. grubu giriniz" << endl;

    for (i = 0; i < 10; i++)
        cin >> c[i];

    for (i = 0; i < 10; i++)
    {
        if (a[i] > eba)
            eba = a[i];
    }
    for (i = 0; i < 10; i++)
    {
        if (b[i] > ebb)
            ebb = b[i];
    }
    for (i = 0; i < 10; i++)
    {
        if (c[i] > ebc)
            ebc = c[i];
    }
}
void Order()
{

    int bas;
    int orta;
    int son;
    if (eba > ebb & ebb > ebc)
    {
        bas = eba;
        orta = ebb;
        son = ebc;
        cout << "Order Max " << bas << ">" << orta << ">" << son << endl;
    }
    if (eba > ebc & ebc > ebb)
    {
        bas = eba;
        orta = ebc;
        son = ebb;
        cout << "Order Max " << bas << ">" << orta << ">" << son << endl;
    }
    if (ebb > eba & eba > ebc)
    {
        bas = ebb;
        orta = eba;
        son = ebc;
        cout << "Order Max " << bas << ">" << orta << ">" << son << endl;
    }
    if (ebb > ebc & ebc > eba)
    {
        bas = ebb;
        orta = ebc;
        son = eba;
        cout << "Order Max " << bas << ">" << orta << ">" << son << endl;
    }
    if (ebc > eba & eba > ebb)
    {
        bas = ebc;
        orta = eba;
        son = ebb;
        cout << "Order Max " << bas << ">" << orta << ">" << son << endl;
    }
    if (ebc > ebb & ebb > eba)
    {
        bas = ebc;
        orta = ebb;
        son = eba;
        cout << "Order Max " << bas << ">" << orta << ">" << son << endl;
    }
}

int main()
{
    Find_Max();
    system("pause");
    Order();

    system("pause");
    return 0;
}
