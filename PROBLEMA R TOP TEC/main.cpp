#include <iostream>
#include <map>
#include <stdlib.h>

using namespace std;

int main()
{
    int izq = 0;
    int der = 0;
    char mov;
    int movimientos;
    int numero;
    int h = 0;
    bool first = true;
    int conteoIzq, conteoDer;

    map <int, int> books;

    cin >> movimientos;

    while(h < movimientos)
    {
        cin >> mov;
        cin >>numero;

        if(first == true)
        {
            books[numero] = 0;
            first = false;
        }
        else if(mov == 'L')
        {
            --izq;
            books[numero] = izq;
        }
        else if(mov == 'R')
        {
            ++der;
            books[numero] = der;
        }
        else
        {
            conteoIzq = books[numero] + abs(izq);
            conteoDer = der - books[numero];

            if(conteoIzq < conteoDer)
            {
                cout << conteoIzq << endl;
            }
            else
            {
                cout << conteoDer << endl;
            }
        }

        h++;
    }

    return 0;
}
