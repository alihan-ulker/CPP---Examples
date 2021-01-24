//Kare ve Dikdortgenin alan ve kenar uzunlugunu hesaplar
#include <iostream>

using namespace std;
int Menu(int kare)
{
    int s;
    cout << "Islem yapacaginiz turu seciniz" << endl;
    cout << "1: KARE" << endl;
    cout << "2: DIKDORTGEN" << endl;
    cout << "0: CIKIS" << endl;
    cin >> s;
    return s;
}
void Kare(int k)
{
    int e;
    cout << "Karenin bir kenarini giriniz :" << endl;
    cin >> e;
    int alani = (e * e);
    int uzun = (e * 4);
    cout << "Karenin Alani :" << alani << endl;
    cout << "Karenin Kenar Uzungulu :" << uzun << endl;
}
void Dikdortgen(int kenar1, int kenar2)
{
    int a, b;
    cout << "Dikdortgenin birinci kenarini giriniz :" << endl;
    cin >> a;
    cout << "Dikdortgenin ikinci kenarini giriniz :" << endl;
    cin >> b;
    int alan = (a * b);
    int uzunluk = (a + b) * 2;
    cout << "Dikdortgenin Alani :" << alan << endl;
    cout << "Dikdortgenin Kenar Uzungulu :" << uzunluk << endl;
}

int main()
{
    int a, b, e, s;

basla:
    int turSecimi = 0;
    turSecimi = Menu(s);
    if (turSecimi == 1)
    {
        system("cls");
        Kare(e);
        goto basla;
    }
    else if (turSecimi == 2)
    {
        system("cls");
        Dikdortgen(a, b);
        goto basla;
    }
    else if (turSecimi == 0)
    {
        cout << "Cikis yaptiniz." << endl;
    }
    else
    {
        cout << "Hatali giris yaptiniz." << endl;
        goto basla;
    }

    system("pause");
    return 0;
}