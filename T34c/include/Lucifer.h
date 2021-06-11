#ifndef LUCIFER_H
#define LUCIFER_H
#include <iostream>
#include <serials.h>
#include <string.h>

class Lucifer : public serials
{
    public:
        Lucifer();
void show() { cout<< rating_<<"\n"<< year_<<"\n"<< scenario_<<"\n"<< ganre_<<"\n"<< dlit_;}
        string Getdlit_() { return dlit_; }
        void Setdlit_(string val) { dlit_ = val; }

    protected:

    private:
        string dlit_;
};

#endif // LUCIFER_H
