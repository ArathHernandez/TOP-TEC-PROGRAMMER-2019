#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
    int m1;
    int d1;
    int rep;
    char barra;
    int h = 0;
    string af = "AFTER";
    string pr = "PRIOR";
    string s = "IS";
    string uno = "DAY";
    string dosmas = "DAYS";

    cin >> rep;

    bool aft[rep];
    int dias[rep];
    int anio[rep];
    int m2[rep], d2[rep];

    for(int i = 0; i < rep; i++)
    {
        dias[i] = 10;
    }

    while(h < rep){

    cin >> m1 >> barra >> d1 >> barra >> anio[h];
    cin >> m2[h] >> barra >> d2[h];

    if(m1 == m2[h])
    {
        if(d1 < d2[h]){
            dias[h] = d2[h] - d1;
            aft[h] = true;}
        else if(d1 > d2[h]){
            dias[h] = d1 - d2[h];
            aft[h] = false;}
        else{
            dias[h] = 0;
            aft[h] = false;}
    }
    else if(m1 == 1 && m2[h] == 12)
    {
        dias[h] = 31 - d2[h];
        dias[h] = dias[h] + d1;
        aft[h] = false;
        anio[h]--;
    }
    else if(m1 == 12 && m2[h] == 1)
    {
        dias[h] = 31 - d1;
        dias[h] = dias[h] + d2[h];
        aft[h] = true;
        anio[h]++;
    }
    else if(m1 - 1 == m2[h])
    {
        if(m1 == 2 || m1 == 4 || m1 == 6 || m1 == 8 || m1 == 9 || m1 == 11)
        {
           dias[h] = 31 - d2[h];
           dias[h] = dias[h] + d1;
        }
        else if(m1 == 5 || m1 == 7 || m1 == 10 || m1 == 12)
        {
            dias[h] = 30 - d2[h];
            dias[h] = dias[h] + d1;
        }
        else if(m1 == 3)
        {
            if(anio[h] % 4 == 0)
            {
                dias[h] = 29 - d2[h];
                dias[h] = dias[h] + d1;
            }
            else
            {
                dias[h] = 28 - d2[h];
                dias[h] = dias[h] + d1;
            }
        }

        aft[h] = false;
    }
    else if(m2[h] - 1 == m1)
    {
        if(m2[h] == 2 || m2[h] == 4 || m2[h] == 6 || m2[h] == 8 || m2[h] == 9 || m2[h] == 11)
        {
           dias[h] = 31 - d1;
           dias[h] = dias[h] + d2[h];
        }
        else if(m2[h] == 5 || m2[h] == 7 || m2[h] == 10 || m2[h] == 12)
        {
            dias[h] = 30 - d1;
            dias[h] = dias[h] + d2[h];
        }
        else if(m2[h] == 3)
        {
            if(anio[h] % 4 == 0)
            {
                dias[h] = 29 - d1;
                dias[h] = dias[h] + d2[h];
            }
            else
            {
                dias[h] = 28 - d1;
                dias[h] = dias[ h] + d2[h];
            }
        }

        aft[h] = true;
    }

    h++;}

    for(h = 0; h < rep; h++)
    {
        if(dias[h] > 7){
            cout << h+1 << " " << "OUT OF RANGE" << endl;}
        else if(dias[h] == 0){
            cout << h+1 << " " << "SAME DAY" << endl;}
        else if(dias[h] == 1 && aft[h] == false){
            cout << h+1 << " " << m2[h] << barra << d2[h] << barra << anio[h] << " " << s << " " << dias[h] << " " << uno << " " << pr << endl;}
        else if(dias[h] == 1 && aft[h] == true){
            cout << h+1 << " " << m2[h] << barra << d2[h] << barra << anio[h] << " " << s << " " << dias[h] << " " << uno << " " << af << endl;}
        else if(aft[h] == false){
            cout << h+1 << " " << m2[h] << barra << d2[h] << barra << anio[h] << " " << s << " " << dias[h] << " " << dosmas << " " << pr << endl;}
        else if(aft[h] == true){
            cout << h+1 << " " << m2[h] << barra << d2[h] << barra << anio[h] << " " << s << " " << dias[h] << " " << dosmas << " " << af << endl;}
    }


    return 0;
}
