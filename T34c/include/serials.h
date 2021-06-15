#ifndef SERIALS_H
#define SERIALS_H
#include <iostream>
#include <string.h>

class serials
{
    public:
        serials();
virtual void show() { cout<< rating_<<"\n"<< year_<<"\n"<< scenario_<<"\n"<< ganre_<<"\n";}
        int Getrating_() { return rating_; }
        void Setrating_(int val) { rating_ = val; }
        int Getyear_() { return year_; }
        void Setyear_(int val) { year_ = val; }
        string Getscenario_() { return scenario_; }
        void Setscenario_(string val) { scenario_ = val; }
        string Getganre_() { return ganre_; }
        void Setganre_(string val) { ganre_ = val; }

    protected:
        int rating_;
        int year_;
        string scenario_;
        string ganre_;

    private:
};

#endif // SERIALS_H
