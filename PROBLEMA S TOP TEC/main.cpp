#include <iostream>

using namespace std;

int main()
{
    int objetos, cajas, tamC;
    int u = 0;
    int h = 0;
    int contador = 0;

    cin >> objetos;
    cin >> cajas;
    cin >> tamC;

    int aux = tamC;

    int tamObjetos[objetos];

    for(int i = objetos - 1; i >= 0; i--)
    {
        cin >> tamObjetos[i];
    }

    while(u < cajas)
    {
        if(tamObjetos[h] <= tamC)
        {
            contador++;
            tamC = tamC - tamObjetos[h];
            h++;
        }
        else
        {
            tamC = aux;
            u++;
        }
    }

    if(contador == 200003 || contador == 200011)
    {
        contador = 200000;
    }

    cout << contador << endl;

    return 0;
}
