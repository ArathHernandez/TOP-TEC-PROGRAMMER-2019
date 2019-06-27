#include <iostream>
using namespace std;

int main()
{
    int lineas = 1;
    int contadorRenglones = 0;
    int contadorColumnas = 0;
    int sumadorColumnas = 0;
    int sumadorRenglones = 0;

    while(lineas > 0)
    {
        contadorRenglones = 0;
        contadorColumnas = 0;
        cin >> lineas;

        if(lineas > 0)
        {
            int matriz[lineas][lineas];

            for(int i = 0; i < lineas; i++)
            {
                for(int j = 0; j < lineas; j++)
                {
                    cin >> matriz[i][j];
                }
            }

            for(int i = 0; i < lineas; i++)
            {
                for(int j = 0; j < lineas; j++)
                {
                    if(matriz[i][j] == 1)
                    {
                        sumadorColumnas++;
                    }

                    if(matriz[j][i] == 1)
                    {
                        sumadorRenglones++;
                    }
                }

                if(sumadorColumnas % 2 == 0)
                {
                    contadorColumnas++;
                }

                if(sumadorRenglones % 2 == 0)
                {
                    contadorRenglones++;
                }

                sumadorColumnas = 0;
                sumadorRenglones = 0;
            }

            if(contadorColumnas != contadorRenglones || (contadorColumnas < lineas - 1 || contadorRenglones < lineas - 1))
            {
                cout << "Corrupt" << endl;
            }
            else if(contadorColumnas == contadorRenglones && contadorColumnas == lineas)
            {
                cout << "OK" << endl;
            }
            else if(contadorColumnas == contadorRenglones && contadorColumnas == lineas - 1 && contadorRenglones == lineas - 1)
            {
                int sumaCardiacaRen = 0;
                int sumaCardiacaCol = 0;
                int Columna, Renglon;

                for(int i = 0; i < lineas; i++)
                {
                    for(int j = 0; j < lineas; j++)
                    {
                        if(matriz[i][j] == 1)
                        {
                            sumaCardiacaCol++;
                        }

                        if(matriz[j][i] == 1)
                        {
                            sumaCardiacaRen++;
                        }
                    }

                    if(sumaCardiacaCol % 2 != 0)
                    {
                        Renglon = i;
                    }

                    if(sumaCardiacaRen % 2 != 0)
                    {
                        Columna = i;
                    }

                    sumaCardiacaCol = 0;
                    sumaCardiacaRen = 0;
                }

                cout << "Change bit ("<< Renglon+1 << "," << Columna+1 << ")" << endl;
            }
        }
    }


    return 0;
}
