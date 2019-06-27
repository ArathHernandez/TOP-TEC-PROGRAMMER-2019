#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main()
{
    string parte1 ,parte2, ok1, ok2;
    int b1, b2;
    int l1, l2;
    int numero;
    int i = 0;
    int mayor;
    cin >> numero;

    for(int h = 0; h < numero; h++){

    cin >> ok1;
    cin >> ok2;

    b1 = ok1.find("1");
    b2 = ok2.find("1");

    if(b1 != -1)
        parte1 = ok1.substr(b1);
        else
            parte1 = "0";
    if(b2 != -1)
        parte2 = ok2.substr(b2);
    else
        parte2 = "0";

    l1 = parte1.length();
    l2 = parte2.length();

    reverse(parte1.begin(), parte1.end());
    reverse(parte2.begin(), parte2.end());

    if(l1 > l2){
    while(parte1.length() != parte2.length())
    {
        parte2 = parte2 + "0";
    }}
    else if(l2 > l1){
    while(parte1.length() != parte2.length())
    {
        parte1 = parte1 + "0";
    }}

    l1 = parte1.length();
    l2 = parte2.length();

    mayor=l1;

    for(i = 0; i < mayor; i++)
    {
        if(i == mayor-1)
        {
            if(parte1[i] == '0' && parte2[i] == '1')
            {
                parte1[i] = '1';
            }
            else if(parte1[i] == '1' && parte2[i] == '1')
            {
                parte1[i] = '0';
                parte1 = parte1 + "1";
            }
            else if(parte1[i] == '2' && parte2[i] == '0')
            {
                parte1[i] = '0';
                parte1 = parte1 + "1";
            }
            else if(parte1[i] == '2' && parte2[i] == '1')
            {
                parte1[i] = '1';
                parte1 = parte1 + "1";
            }
        }
        else
        {
            if(parte1[i] == '0' && parte2[i] == '1')
            {
                parte1[i] = '1';
            }
            else if(parte1[i] == '1' && parte2[i] == '1')
            {
                parte1[i] = '0';

                if(parte1[i+1] == '0')
                    parte1[i+1] = '1';
                else if(parte1[i+1] == '1')
                    parte1[i+1] = '2';
            }
            else if(parte1[i] == '2' && parte2[i] == '0')
            {
                parte1[i] = '0';

                if(parte1[i+1] == '0')
                    parte1[i+1] = '1';
                else if(parte1[i+1] == '1')
                    parte1[i+1] = '2';
            }
            else if(parte1[i] == '2' && parte2[i] == '1')
            {
                parte1[i] = '1';

                if(parte1[i+1] == '0')
                    parte1[i+1] = '1';
                else if(parte1[i+1] == '1')
                    parte1[i+1] = '2';
            }
        }
    }


    reverse(parte1.begin(), parte1.end());

    cout << h+1 << " " << parte1 << endl;

    }

    return 0;
}
