#pragma once
#include "Serial.h"
#include <string>

using namespace std;
class Detectiv :
	public Serial
{
public:
    Detectiv()
    {
        country = "noname";
        name = "noname";
        rating = 0;
    };

    string Getcountry() { return country; }
    void Setcountry(string s) { country = s; }
    void show()
    {
        cout << name  << "\t" << rating << "\t" << country << "\n";
    }

protected:

private:
    string country;
};

