//Kayan yazi
#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

int main()
{
x:
    system("cls");
    for (int i = 1; i < 80; i++)
    {
        system("cls");
        for (int j = 1; j < i; j++)
            cout << " ";
        cout << "Alihan ULKER";

        usleep(300);
    }

    goto x;
    system("pause");
    return 0;
}
