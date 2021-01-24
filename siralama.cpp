//Ortalama Deger, En Kucuk ve En Buyuk Degerler
//Medyan, Mod, Ranj Degeri ve Siralama
#include <iostream>
#include <time.h>
using namespace std;

void siralama(int N, int a[])
{
    int k;
    cout << endl
         << "Sirali Degerler= ";
    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < N - 1; i++)
            if (a[i] > a[i + 1])
            {
                k = a[i + 1];
                a[i + 1] = a[i];
                a[i] = k;
            }
    }
    for (int i = 0; i < N; i++)
        cout << a[i] << " ";
}
void en_kucuk(int a[])
{
    cout << endl;
    cout << "En Kucuk Deger= " << a[0];
}
void en_buyuk(int N, int a[])
{
    cout << endl
         << "En Buyuk Deger= " << a[N - 1];
}
void ranj(int N, int a[])
{
    cout << endl
         << "Ranj= " << a[N - 1] - a[0];
}
void medyan(int N, int a[])
{
    cout << endl
         << "Medyan= " << (a[(N - 1) / 2] + a[(N) / 2]) / 2;
}
void mod(int N, int a[])
{
    int x = 0, y = 0, b, c = 0;
    for (int j = 0; j < (N - 1); j++)
    {
        x = 0;
        for (int i = j + 1; i < (N - 1); i++)
        {
            if (a[j] == a[i])
            {
                x = x + 1;
                b = i;
            }
        }
        if (x > y)
        {
            y = x;
            c = b;
        }
    }
    cout << endl
         << "En sik tekrar eden deger= " << a[c];
    cout << endl;
    cout << y + 1 << " "
         << "kadar tekrar edildi";
}
void ortalama(int N, int a[])
{
    int toplam = 0;
    for (int i = 0; i < N; i++)
    {
        toplam = toplam + a[i];
    }
    cout << endl
         << "Ortalama Deger= " << (toplam / N) << endl;
}
int main()
{
    srand(time(0));
    int a[1000];
    int N;
    cout << "N degerini giriniz N maksimum 1000 olabilir" << endl;
    cin >> N;
    cout << "dizi degerleri= ";
    for (int i = 0; i < N; i++)
    {
        a[i] = rand() % 255;
        cout << a[i] << " ";
    }
    siralama(N, a);
    en_kucuk(a);
    en_buyuk(N, a);
    ranj(N, a);
    medyan(N, a);
    mod(N, a);
    ortalama(N, a);

    system("pause");
    return 0;
}