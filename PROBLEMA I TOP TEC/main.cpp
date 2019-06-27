#include <iostream>
using namespace std;

int main()
{
    long long int saltos;
    int ranas;
    long long int derecha, izquierda;
    long long int distancia;
    int h = 0;

    cin >> ranas;

    while(h < ranas)
    {
        distancia = 0;

        cin >> derecha;
        cin >> izquierda;
        cin >> saltos;

        if(saltos == 0)
        {
            distancia = 0;
        }
        else if(saltos ==  1)
        {
            distancia = derecha;
        }
        else if(saltos % 2 == 0)
        {
            distancia = (derecha - izquierda) * (saltos / 2);
        }
        else
        {
            distancia = (derecha - izquierda) * (saltos / 2) + derecha;
        }

        cout << distancia << endl;

        h++;
    }

    return 0;
}
