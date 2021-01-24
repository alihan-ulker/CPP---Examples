//Dik Ucgen kontrolu icin
#include <iostream>
using namespace std;

void pisagor()
{
bas:
    int x, y, z;
    char sonuc;
    cout << "Ucgenin iki kenarini giriniz." << endl;
    cin >> x >> y;
    cout << "Ucgenin hipotenusunu giriniz." << endl;
    cin >> z;
    if (z * z == x * x + y * y)
        cout << "Dik acili ucgen!!!" << endl;

    cout << "Devam etmek istiyor musunuz? (E/H)" << endl;

    cin >> sonuc;

    if (sonuc == 'E')
    {
        goto bas;
    }
    else
    {
        exit;
    }
}

int main()
{
    pisagor();

    system("pause");
    return 0;
}