#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    int T;

    cin >> T;

    cin.ignore();
    string horas;
    string minutos;
    int hours;
    int minuts;
    int rep[T];

    for(int i = 0; i < T; i++)
    {
        getline(cin, horas, ':');
        getline(cin, minutos, '\n');

        hours = atoi(horas.c_str());
        minuts = atoi(minutos.c_str());

        for(int g = 0; g < 25; g++){
        if(minuts == 0)
        {
            if(hours == g)
            {
                if(hours > 12)
                rep[i] = hours - 12;
                else
                    rep[i] = hours + 12;
            }
        }
        else
            rep[i] = 0;}
    }

    for(int i = 0; i < T; i++)
    {
        cout << rep[i] << endl;
    }

    return 0;
}
