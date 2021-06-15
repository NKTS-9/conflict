#include <iostream>
#include <string>
#include "Serial.h"
#include "Fantasy.h"
#include "Detectiv.h"


int main()
{
    Fantasy f1;
    Fantasy f2;
    Detectiv d1;
    Detectiv d2;
    int ch;

    Serial* sl[4];
    sl[0] = &f1;
    sl[1] = &f2;
    sl[2] = &d1;
    sl[3] = &d2;

    f1.Setname("Lusifer ");
    f1.Setrating(78);
    f1.Setyear(2011);
    f2.Setname("Witcher ");
    f2.Setrating(76);
    f2.Setyear(2019);
    d1.Setname("Sherlock");
    d1.Setrating(80);
    d1.Setcountry("Great Britain");
    d2.Setname("Method  ");
    d2.Setrating(68);
    d2.Setcountry("Russian");

    int nomer;
    double rat = 0;

    for (;;)
    {
        cout << "1.Display      2.Correct     3.Average rating     4.Exit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            for (int i = 0; i < 4; i++)
            {
                sl[i]->show();
            }
            break;
        }
        case 2:
        {
            cout << "Nomer: \n";
            cin >> nomer;
            cout << "What correct:  \n";
            cin >> ch;
            switch (nomer)
            {
            case 1:
            {
                if (ch == 2)
                {
                    cout << "Enter the new rating\n";
                    int rating;
                    cin >> rating;
                    sl[0]->Setrating(rating);
                }
                if (ch == 1)
                {
                    cout << "Enter the new name\n";
                    string name;
                    cin >> name;
                    sl[0]->Setname(name);
                }
                if (ch == 3)
                {
                    cout << "Enter the new year\n";
                    int m;
                    cin >> m;
                    f1.Setyear(m);
                }
                break;
            }
            case 2:
            {
                if (ch == 2)
                {
                    cout << "Enter the new rating\n";
                    int rating;
                    cin >>rating;
                    sl[1]->Setrating(rating);
                }
                if (ch == 1)
                {
                    cout << "Enter the new name\n";
                    string name;
                    cin >> name;
                    sl[1]->Setname(name);
                }
                if (ch == 3)
                {
                    cout << "Enter the new year\n";
                    int r;
                    cin >> r;
                    f2.Setyear(r);
                }
                break;
            }
            case 3:
            {
                if (ch == 2)
                {
                    cout << "Enter the new rating\n";
                    int rating;
                    cin >> rating;
                    sl[2]->Setrating(rating);
                }
                if (ch == 1)
                {
                    cout << "Enter the new name\n";
                    string name;
                    cin >> name;
                    sl[2]->Setname(name);
                }
                if (ch == 3)
                {
                    cout << "Enter the new country\n";
                    string country;
                    cin >> country;
                    d1.Setcountry(country);
                }
                break;
            }
            case 4:
            {
                if (ch == 2)
                {
                    cout << "Enter the new rating\n";
                    int rating;
                    cin >> rating;
                    sl[3]->Setrating(rating);
                }
                if (ch == 1)
                {
                    cout << "Enter the new name\n";
                    string name;
                    cin >> name;
                    sl[3]->Setname(name);
                }
                if (ch == 3)
                {
                    cout << "Enter the new country\n";
                    string country;
                    cin >> country;
                    d2.Setcountry(country);
                }
                break;
            }
            }
            break;
        }
        case 3:
        {
            for (int i = 0; i < 4; i++)
            {
                rat = rat + sl[i]->Getrating(); 
            }
            rat = rat / 4;
            cout << "Average rating = " << rat<<endl;
            break;
        }
        }
        if (ch == 4)
        {
            break;
        }
    }
    return 0;
}

