//1-9 arasi rastgele tutulan 3 sayiya göre 
//Adam Asmaca oyunu
#include <iostream>
#include <ctime>
using namespace std;

int main()

{
    int sayi1, sayi2, sayi3, x = 10, y = 10, z = 10, t = 10, p = 10;
x:
    srand((unsigned int)time(0));
    sayi1 = 1 + rand() % 9;
    sayi2 = 1 + rand() % 9;
    sayi3 = 1 + rand() % 9;
    if ((sayi1 == sayi2) || (sayi1 == sayi3) || (sayi2 == sayi3))
        goto x;
    cout << "<1-9> arasi uc sayi tuttum.Tahmin et." << endl;
    cout << sayi1 << sayi2 << sayi3 << endl;

    while (sayi1 == x || sayi2 == x || sayi3 == x)
        ;
    {
        cin >> x;

        if (x == sayi1)
            cout << "1. Hakta Bildiniz" << endl;
        else if (x == sayi2)
            cout << "1. Hakta Bildiniz" << endl;
        else if (x == sayi3)
            cout << "1. Hakta Bildiniz" << endl;

        else

            cout << "________________________" << endl
                 << "                       |" << endl
                 << "                       |" << endl
                 << "                       |" << endl
                 << "Bilemediniz" << endl;
        goto etap2;
    }
etap2:
    while (sayi1 == y || sayi2 == y || sayi3 == y)
        ;
    {
        cin >> y;

        if (y == sayi1)
            cout << "2. Hakta Bildiniz" << endl;
        else if (y == sayi2)
            cout << "2. Hakta Bildiniz" << endl;
        else if (y == sayi3)
            cout << "2. Hakta Bildiniz" << endl;

        else

            cout << "________________________" << endl
                 << "                       |" << endl
                 << "                       |" << endl
                 << "                       |" << endl
                 << "                       0" << endl
                 << "Bilemediniz" << endl;
        goto etap3;
    }
etap3:
    while (sayi1 == z || sayi2 == z || sayi3 == z)
        ;
    {
        cin >> z;

        if (z == sayi1)
            cout << "3. Hakta Bildiniz" << endl;
        else if (z == sayi2)
            cout << "3. Hakta Bildiniz" << endl;
        else if (z == sayi3)
            cout << "3. Hakta Bildiniz" << endl;

        else

            cout << "________________________" << endl
                 << "                       |" << endl
                 << "                       |" << endl
                 << "                       |" << endl
                 << "                       0" << endl
                 << "                       |" << endl
                 << "Bilemediniz" << endl;
        goto etap4;
    }
etap4:
    while (sayi1 == t || sayi2 == t || sayi3 == t)
        ;
    {
        cin >> t;

        if (t == sayi1)
            cout << "4. Hakta Bildiniz" << endl;
        else if (t == sayi2)
            cout << "4. Hakta Bildiniz" << endl;
        else if (t == sayi3)
            cout << "4. Hakta Bildiniz" << endl;

        else

            cout << "________________________" << endl
                 << "                       |" << endl
                 << "                       |" << endl
                 << "                       |" << endl
                 << "                       0" << endl
                 << "                       |" << endl
                 << "                       |  " << endl
                 << "Bilemediniz" << endl;
        goto etap5;
    }
etap5:
    while (sayi1 == p || sayi2 == p || sayi3 == p)
        ;
    {
        cin >> p;

        if (p == sayi1)
            cout << "5. Hakta Bildiniz" << endl;
        else if (p == sayi2)
            cout << "5. Hakta Bildiniz" << endl;
        else if (p == sayi3)
            cout << "5. Hakta Bildiniz" << endl;

        else

            cout << "________________________" << endl
                 << "                       |" << endl
                 << "                       |" << endl
                 << "                       |" << endl
                 << "                       0" << endl
                 << "                      /|\\" << endl
                 << "                       |  " << endl
                 << "                      /\\ " << endl
                 << "Uzgunum.Bilemediniz ve Kaybettiniz" << endl;

        cout << "Sayilar" << endl;
        cout << sayi1 << endl
             << sayi2 << endl
             << sayi3 << endl
             << endl;
    }

    system("pause");
    return 0;
}