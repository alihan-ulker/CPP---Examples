//Dik Ucgen kontrolu icin
#include <iostream>
#include <cmath>
using namespace std;

int main() {

bas:
    int x, y, z, h;
    
    char sonuc;
    
    cout << "Ucgenin 1. kenarini giriniz." << endl;
    cin >> x;
    
    cout << "Ucgenin 2. kenarini giriniz." << endl;
    cin >> y;
    
    //hipotenus hesabi
    h = (x * x) + (y * y);
    
    cout << "Hipotenüs"<< endl;
    
    //hipotenusun karekok u
    cout << sqrt(h) <<endl;
    
    
    z = sqrt(h);
    
    //Ucgenin dik aci kontrolu
    if (z * z == (x * x) + (y * y))
    
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
    
    system("pause");
    return 0;
}
