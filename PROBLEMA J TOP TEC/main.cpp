#include <iostream>
using namespace std;

int main()
{
    int flats;
    int contador = 0;
    int revisionMas = 0;
    int revisionMenos = 0;

    cin >> flats;

    int luces[flats];
    int visitados[flats];

    for(int i = 0; i < flats; i++)
    {
        cin >> luces[i];
        visitados[i] = 0;
    }

    for(int i = 1; i < flats - 1; i++)
    {
        if(luces[i] == 0 && luces[i-1] == 1 && luces[i+1] == 1)
        {
            luces[i+1] = 0;
            contador++;
        }

    }

    cout << contador << endl;

    return 0;
}
