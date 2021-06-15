#pragma once
#include <string>
#include <iostream>

using namespace std;
class Serial
{
public:
    Serial()
    {
        rating = 0;
        name = "noname";
    }

    int Getrating() { return rating; }
    void Setrating(int r) { rating = r; }
    string Getname() { return name; }
    void Setname(string c) { name = c; }
    virtual void show()
    {
        cout << name << "\t" <<  rating << "\n";
    }

protected:
    int rating;
    string name;
};

