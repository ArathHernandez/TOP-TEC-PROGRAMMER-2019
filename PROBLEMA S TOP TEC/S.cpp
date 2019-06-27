#include <iostream>

using namespace std;

int main()
{
    int objetos, cajas, tamC;
    int u = 0;
    int h = 0;
    int contador = 0;
    int recortar = 1;
    bool salir = false;

    cin >> objetos;
    cin >> cajas;
    cin >> tamC;

    int tamCajas[cajas];
    int tamObjetos[objetos];
    int auxCajas[cajas];
    int auxObjetos[cajas];

    for(int i = 0; i < cajas; i++)
    {
        tamCajas[i] = tamC;
    }

    for(int i = 0; i < objetos; i++)
    {
        cin >> tamObjetos[i];
        auxObjetos[i] = tamObjetos[i];
    }

    while(salir != true){
        if(tamObjetos[h] <= tamCajas[u])
        {
            contador++;
            tamCajas[u] = tamCajas[u] - tamObjetos[h];
            tamObjetos[h] = -1;
            h++;
        }
        else
        {
            u++;

            if(u == cajas)
            {
                if(tamObjetos[objetos - 1] == -1){
                    salir = true;}
                else
                {
                    for(int i = recortar; i < objetos; i++)
                    {
                        tamObjetos[i] = auxObjetos[i];
                    }
                    for(int i = 0; i < cajas; i++)
                    {
                        tamCajas[i] = tamC;
                    }

                    h = recortar;
                    u = 0;

                    recortar++;
                    contador = 0;
                }
            }
        }
    }

    cout << contador << endl;

    return 0;
}
