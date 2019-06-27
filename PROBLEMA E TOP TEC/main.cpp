#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct team
{
    float probSemi;
    float probFinal;
    float probCampeon;
    string name;
    float vsBrazil;
    float vsChile;
    float vsNigeria;
    float vsDenmark;
    float vsHolland;
    float vsYugoslavia;
    float vsArgentina;
    float vsEngland;
    float vsItaly;
    float vsNorway;
    float vsFrance;
    float vsParaguay;
    float vsGermany;
    float vsMexico;
    float vsRomania;
    float vsCroatia;
};

team equipos[16];

int main()
{
    for(int i = 0; i < 16; i++)
    {
        cin >> equipos[i].name;

        while(equipos[i].name.length() < 10)
        {
            equipos[i].name = equipos[i].name + " ";
        }
    }

    for(int i = 0; i < 16; i++)
    {
        cin >> equipos[i].vsBrazil;
        cin >> equipos[i].vsChile;
        cin >> equipos[i].vsNigeria;
        cin >> equipos[i].vsDenmark;
        cin >> equipos[i].vsHolland;
        cin >> equipos[i].vsYugoslavia;
        cin >> equipos[i].vsArgentina;
        cin >> equipos[i].vsEngland;
        cin >> equipos[i].vsItaly;
        cin >> equipos[i].vsNorway;
        cin >> equipos[i].vsFrance;
        cin >> equipos[i].vsParaguay;
        cin >> equipos[i].vsGermany;
        cin >> equipos[i].vsMexico;
        cin >> equipos[i].vsRomania;
        cin >> equipos[i].vsCroatia;
    }

    //// SEMIFINAL ////

    equipos[0].probSemi = (equipos[0].vsChile * ((equipos[0].vsNigeria * equipos[2].vsDenmark) + (equipos[0].vsDenmark * equipos[3].vsNigeria))) / 10000;
    equipos[1].probSemi = (equipos[1].vsBrazil * ((equipos[1].vsNigeria * equipos[2].vsDenmark) + (equipos[1].vsDenmark * equipos[3].vsNigeria))) / 10000;

    equipos[2].probSemi = (equipos[2].vsDenmark * ((equipos[2].vsBrazil * equipos[0].vsChile) + (equipos[2].vsChile * equipos[1].vsBrazil))) / 10000;
    equipos[3].probSemi = (equipos[3].vsNigeria * ((equipos[3].vsBrazil * equipos[0].vsChile) + (equipos[3].vsChile * equipos[1].vsBrazil))) / 10000;

    equipos[4].probSemi = (equipos[4].vsYugoslavia * ((equipos[4].vsArgentina * equipos[6].vsEngland) + (equipos[4].vsEngland * equipos[7].vsArgentina))) / 10000;
    equipos[5].probSemi = (equipos[5].vsHolland * ((equipos[5].vsArgentina * equipos[6].vsEngland) + (equipos[5].vsEngland * equipos[7].vsArgentina))) / 10000;

    equipos[6].probSemi = (equipos[6].vsEngland * ((equipos[6].vsHolland * equipos[4].vsYugoslavia) + (equipos[6].vsYugoslavia * equipos[5].vsHolland))) / 10000;
    equipos[7].probSemi = (equipos[7].vsArgentina * ((equipos[7].vsHolland * equipos[4].vsYugoslavia) + (equipos[7].vsYugoslavia * equipos[5].vsHolland))) / 10000;

    equipos[8].probSemi = (equipos[8].vsNorway * ((equipos[8].vsFrance * equipos[10].vsParaguay) + (equipos[8].vsParaguay * equipos[11].vsFrance))) / 10000;
    equipos[9].probSemi = (equipos[9].vsItaly * ((equipos[9].vsFrance * equipos[10].vsParaguay) + (equipos[9].vsParaguay * equipos[11].vsFrance))) / 10000;

    equipos[10].probSemi = (equipos[10].vsParaguay * ((equipos[10].vsItaly * equipos[8].vsNorway) + (equipos[10].vsNorway * equipos[9].vsItaly))) / 10000;
    equipos[11].probSemi = (equipos[11].vsFrance * ((equipos[11].vsItaly * equipos[8].vsNorway) + (equipos[11].vsNorway * equipos[9].vsItaly))) / 10000;

    equipos[12].probSemi = (equipos[12].vsMexico * ((equipos[12].vsRomania * equipos[14].vsCroatia) + (equipos[12].vsCroatia * equipos[15].vsRomania))) / 10000;
    equipos[13].probSemi = (equipos[13].vsGermany * ((equipos[13].vsRomania * equipos[14].vsCroatia) + (equipos[13].vsCroatia * equipos[15].vsRomania))) / 10000;

    equipos[14].probSemi = (equipos[14].vsCroatia * ((equipos[14].vsGermany * equipos[12].vsMexico) + (equipos[14].vsMexico * equipos[13].vsGermany))) / 10000;
    equipos[15].probSemi = (equipos[15].vsRomania * ((equipos[15].vsGermany * equipos[12].vsMexico) + (equipos[15].vsMexico * equipos[13].vsGermany))) / 10000;

    //// FINAL //////

    equipos[0].probFinal = (equipos[0].probSemi * ((equipos[0].vsHolland * equipos[4].probSemi) + (equipos[0].vsYugoslavia * equipos[5].probSemi) + (equipos[0].vsArgentina * equipos[6].probSemi) + (equipos[0].vsEngland * equipos[7].probSemi))) / 10000;
    equipos[1].probFinal = (equipos[1].probSemi * ((equipos[1].vsHolland * equipos[4].probSemi) + (equipos[1].vsYugoslavia * equipos[5].probSemi) + (equipos[1].vsArgentina * equipos[6].probSemi) + (equipos[1].vsEngland * equipos[7].probSemi))) / 10000;
    equipos[2].probFinal = (equipos[2].probSemi * ((equipos[2].vsHolland * equipos[4].probSemi) + (equipos[2].vsYugoslavia * equipos[5].probSemi) + (equipos[2].vsArgentina * equipos[6].probSemi) + (equipos[2].vsEngland * equipos[7].probSemi))) / 10000;
    equipos[3].probFinal = (equipos[3].probSemi * ((equipos[3].vsHolland * equipos[4].probSemi) + (equipos[3].vsYugoslavia * equipos[5].probSemi) + (equipos[3].vsArgentina * equipos[6].probSemi) + (equipos[3].vsEngland * equipos[7].probSemi))) / 10000;

    equipos[4].probFinal = (equipos[4].probSemi * ((equipos[4].vsBrazil * equipos[0].probSemi) + (equipos[4].vsChile * equipos[1].probSemi) + (equipos[4].vsNigeria * equipos[2].probSemi) + (equipos[4].vsDenmark * equipos[3].probSemi))) / 10000;
    equipos[5].probFinal = (equipos[5].probSemi * ((equipos[5].vsBrazil * equipos[0].probSemi) + (equipos[5].vsChile * equipos[1].probSemi) + (equipos[5].vsNigeria * equipos[2].probSemi) + (equipos[5].vsDenmark * equipos[3].probSemi))) / 10000;
    equipos[6].probFinal = (equipos[6].probSemi * ((equipos[6].vsBrazil * equipos[0].probSemi) + (equipos[6].vsChile * equipos[1].probSemi) + (equipos[6].vsNigeria * equipos[2].probSemi) + (equipos[6].vsDenmark * equipos[3].probSemi))) / 10000;
    equipos[7].probFinal = (equipos[7].probSemi * ((equipos[7].vsBrazil * equipos[0].probSemi) + (equipos[7].vsChile * equipos[1].probSemi) + (equipos[7].vsNigeria * equipos[2].probSemi) + (equipos[7].vsDenmark * equipos[3].probSemi))) / 10000;

    equipos[8].probFinal = (equipos[8].probSemi * ((equipos[8].vsGermany * equipos[12].probSemi) + (equipos[8].vsMexico * equipos[13].probSemi) + (equipos[8].vsRomania * equipos[14].probSemi) + (equipos[8].vsCroatia * equipos[15].probSemi))) / 10000;
    equipos[9].probFinal = (equipos[9].probSemi * ((equipos[9].vsGermany * equipos[12].probSemi) + (equipos[9].vsMexico * equipos[13].probSemi) + (equipos[9].vsRomania * equipos[14].probSemi) + (equipos[9].vsCroatia * equipos[15].probSemi))) / 10000;
    equipos[10].probFinal = (equipos[10].probSemi * ((equipos[10].vsGermany * equipos[12].probSemi) + (equipos[10].vsMexico * equipos[13].probSemi) + (equipos[10].vsRomania * equipos[14].probSemi) + (equipos[10].vsCroatia * equipos[15].probSemi))) / 10000;
    equipos[11].probFinal = (equipos[11].probSemi * ((equipos[11].vsGermany * equipos[12].probSemi) + (equipos[11].vsMexico * equipos[13].probSemi) + (equipos[11].vsRomania * equipos[14].probSemi) + (equipos[11].vsCroatia * equipos[15].probSemi))) / 10000;

    equipos[12].probFinal = (equipos[12].probSemi * ((equipos[12].vsItaly * equipos[8].probSemi) + (equipos[12].vsNorway * equipos[9].probSemi) + (equipos[12].vsFrance * equipos[10].probSemi) + (equipos[12].vsParaguay * equipos[11].probSemi))) / 10000;
    equipos[13].probFinal = (equipos[13].probSemi * ((equipos[13].vsItaly * equipos[8].probSemi) + (equipos[13].vsNorway * equipos[9].probSemi) + (equipos[13].vsFrance * equipos[10].probSemi) + (equipos[13].vsParaguay * equipos[11].probSemi))) / 10000;
    equipos[14].probFinal = (equipos[14].probSemi * ((equipos[14].vsItaly * equipos[8].probSemi) + (equipos[14].vsNorway * equipos[9].probSemi) + (equipos[14].vsFrance * equipos[10].probSemi) + (equipos[14].vsParaguay * equipos[11].probSemi))) / 10000;
    equipos[15].probFinal = (equipos[15].probSemi * ((equipos[15].vsItaly * equipos[8].probSemi) + (equipos[15].vsNorway * equipos[9].probSemi) + (equipos[15].vsFrance * equipos[10].probSemi) + (equipos[15].vsParaguay * equipos[11].probSemi))) / 10000;

    //// CAMPEON /////

    equipos[0].probCampeon = (equipos[0].probFinal * ((equipos[0].vsItaly * equipos[8].probFinal) + (equipos[0].vsNorway * equipos[9].probFinal) + (equipos[0].vsFrance * equipos[10].probFinal) + (equipos[0].vsParaguay * equipos[11].probFinal) + (equipos[0].vsGermany * equipos[12].probFinal) + (equipos[0].vsMexico * equipos[13].probFinal) + (equipos[0].vsRomania * equipos[14].probFinal) + (equipos[0].vsCroatia * equipos[15].probFinal))) / 10000;
    equipos[1].probCampeon = (equipos[1].probFinal * ((equipos[1].vsItaly * equipos[8].probFinal) + (equipos[1].vsNorway * equipos[9].probFinal) + (equipos[1].vsFrance * equipos[10].probFinal) + (equipos[1].vsParaguay * equipos[11].probFinal) + (equipos[1].vsGermany * equipos[12].probFinal) + (equipos[1].vsMexico * equipos[13].probFinal) + (equipos[1].vsRomania * equipos[14].probFinal) + (equipos[1].vsCroatia * equipos[15].probFinal))) / 10000;
    equipos[2].probCampeon = (equipos[2].probFinal * ((equipos[2].vsItaly * equipos[8].probFinal) + (equipos[2].vsNorway * equipos[9].probFinal) + (equipos[2].vsFrance * equipos[10].probFinal) + (equipos[2].vsParaguay * equipos[11].probFinal) + (equipos[2].vsGermany * equipos[12].probFinal) + (equipos[2].vsMexico * equipos[13].probFinal) + (equipos[2].vsRomania * equipos[14].probFinal) + (equipos[2].vsCroatia * equipos[15].probFinal))) / 10000;
    equipos[3].probCampeon = (equipos[3].probFinal * ((equipos[3].vsItaly * equipos[8].probFinal) + (equipos[3].vsNorway * equipos[9].probFinal) + (equipos[3].vsFrance * equipos[10].probFinal) + (equipos[3].vsParaguay * equipos[11].probFinal) + (equipos[3].vsGermany * equipos[12].probFinal) + (equipos[3].vsMexico * equipos[13].probFinal) + (equipos[3].vsRomania * equipos[14].probFinal) + (equipos[3].vsCroatia * equipos[15].probFinal))) / 10000;
    equipos[4].probCampeon = (equipos[4].probFinal * ((equipos[4].vsItaly * equipos[8].probFinal) + (equipos[4].vsNorway * equipos[9].probFinal) + (equipos[4].vsFrance * equipos[10].probFinal) + (equipos[4].vsParaguay * equipos[11].probFinal) + (equipos[4].vsGermany * equipos[12].probFinal) + (equipos[4].vsMexico * equipos[13].probFinal) + (equipos[4].vsRomania * equipos[14].probFinal) + (equipos[4].vsCroatia * equipos[15].probFinal))) / 10000;
    equipos[5].probCampeon = (equipos[5].probFinal * ((equipos[5].vsItaly * equipos[8].probFinal) + (equipos[5].vsNorway * equipos[9].probFinal) + (equipos[5].vsFrance * equipos[10].probFinal) + (equipos[5].vsParaguay * equipos[11].probFinal) + (equipos[5].vsGermany * equipos[12].probFinal) + (equipos[5].vsMexico * equipos[13].probFinal) + (equipos[5].vsRomania * equipos[14].probFinal) + (equipos[5].vsCroatia * equipos[15].probFinal))) / 10000;
    equipos[6].probCampeon = (equipos[6].probFinal * ((equipos[6].vsItaly * equipos[8].probFinal) + (equipos[6].vsNorway * equipos[9].probFinal) + (equipos[6].vsFrance * equipos[10].probFinal) + (equipos[6].vsParaguay * equipos[11].probFinal) + (equipos[6].vsGermany * equipos[12].probFinal) + (equipos[6].vsMexico * equipos[13].probFinal) + (equipos[6].vsRomania * equipos[14].probFinal) + (equipos[6].vsCroatia * equipos[15].probFinal))) / 10000;
    equipos[7].probCampeon = (equipos[7].probFinal * ((equipos[7].vsItaly * equipos[8].probFinal) + (equipos[7].vsNorway * equipos[9].probFinal) + (equipos[7].vsFrance * equipos[10].probFinal) + (equipos[7].vsParaguay * equipos[11].probFinal) + (equipos[7].vsGermany * equipos[12].probFinal) + (equipos[7].vsMexico * equipos[13].probFinal) + (equipos[7].vsRomania * equipos[14].probFinal) + (equipos[7].vsCroatia * equipos[15].probFinal))) / 10000;

    equipos[8].probCampeon = (equipos[8].probFinal * ((equipos[8].vsBrazil * equipos[0].probFinal) + (equipos[8].vsChile * equipos[1].probFinal) + (equipos[8].vsNigeria * equipos[2].probFinal) + (equipos[8].vsDenmark * equipos[3].probFinal) + (equipos[8].vsHolland * equipos[4].probFinal) + (equipos[8].vsYugoslavia * equipos[5].probFinal) + (equipos[8].vsArgentina * equipos[6].probFinal) + (equipos[8].vsEngland * equipos[7].probFinal))) / 10000;
    equipos[9].probCampeon = (equipos[9].probFinal * ((equipos[9].vsBrazil * equipos[0].probFinal) + (equipos[9].vsChile * equipos[1].probFinal) + (equipos[9].vsNigeria * equipos[2].probFinal) + (equipos[9].vsDenmark * equipos[3].probFinal) + (equipos[9].vsHolland * equipos[4].probFinal) + (equipos[9].vsYugoslavia * equipos[5].probFinal) + (equipos[9].vsArgentina * equipos[6].probFinal) + (equipos[9].vsEngland * equipos[7].probFinal))) / 10000;
    equipos[10].probCampeon = (equipos[10].probFinal * ((equipos[10].vsBrazil * equipos[0].probFinal) + (equipos[10].vsChile * equipos[1].probFinal) + (equipos[10].vsNigeria * equipos[2].probFinal) + (equipos[10].vsDenmark * equipos[3].probFinal) + (equipos[10].vsHolland * equipos[4].probFinal) + (equipos[10].vsYugoslavia * equipos[5].probFinal) + (equipos[10].vsArgentina * equipos[6].probFinal) + (equipos[10].vsEngland * equipos[7].probFinal))) / 10000;
    equipos[11].probCampeon = (equipos[11].probFinal * ((equipos[11].vsBrazil * equipos[0].probFinal) + (equipos[11].vsChile * equipos[1].probFinal) + (equipos[11].vsNigeria * equipos[2].probFinal) + (equipos[11].vsDenmark * equipos[3].probFinal) + (equipos[11].vsHolland * equipos[4].probFinal) + (equipos[11].vsYugoslavia * equipos[5].probFinal) + (equipos[11].vsArgentina * equipos[6].probFinal) + (equipos[11].vsEngland * equipos[7].probFinal))) / 10000;
    equipos[12].probCampeon = (equipos[12].probFinal * ((equipos[12].vsBrazil * equipos[0].probFinal) + (equipos[12].vsChile * equipos[1].probFinal) + (equipos[12].vsNigeria * equipos[2].probFinal) + (equipos[12].vsDenmark * equipos[3].probFinal) + (equipos[12].vsHolland * equipos[4].probFinal) + (equipos[12].vsYugoslavia * equipos[5].probFinal) + (equipos[12].vsArgentina * equipos[6].probFinal) + (equipos[12].vsEngland * equipos[7].probFinal))) / 10000;
    equipos[13].probCampeon = (equipos[13].probFinal * ((equipos[13].vsBrazil * equipos[0].probFinal) + (equipos[13].vsChile * equipos[1].probFinal) + (equipos[13].vsNigeria * equipos[2].probFinal) + (equipos[13].vsDenmark * equipos[3].probFinal) + (equipos[13].vsHolland * equipos[4].probFinal) + (equipos[13].vsYugoslavia * equipos[5].probFinal) + (equipos[13].vsArgentina * equipos[6].probFinal) + (equipos[13].vsEngland * equipos[7].probFinal))) / 10000;
    equipos[14].probCampeon = (equipos[14].probFinal * ((equipos[14].vsBrazil * equipos[0].probFinal) + (equipos[14].vsChile * equipos[1].probFinal) + (equipos[14].vsNigeria * equipos[2].probFinal) + (equipos[14].vsDenmark * equipos[3].probFinal) + (equipos[14].vsHolland * equipos[4].probFinal) + (equipos[14].vsYugoslavia * equipos[5].probFinal) + (equipos[14].vsArgentina * equipos[6].probFinal) + (equipos[14].vsEngland * equipos[7].probFinal))) / 10000;
    equipos[15].probCampeon = (equipos[15].probFinal * ((equipos[15].vsBrazil * equipos[0].probFinal) + (equipos[15].vsChile * equipos[1].probFinal) + (equipos[15].vsNigeria * equipos[2].probFinal) + (equipos[15].vsDenmark * equipos[3].probFinal) + (equipos[15].vsHolland * equipos[4].probFinal) + (equipos[15].vsYugoslavia * equipos[5].probFinal) + (equipos[15].vsArgentina * equipos[6].probFinal) + (equipos[15].vsEngland * equipos[7].probFinal))) / 10000;


    for(int i = 0; i < 16; i++)
    {
        cout << equipos[i].name << " " << "p=";
        cout << setprecision(2) << fixed << equipos[i].probCampeon << "%" << endl;
    }

    return 0;
}
