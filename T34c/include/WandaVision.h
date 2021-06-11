#ifndef WANDAVISION_H
#define WANDAVISION_H
#include <iostream>
#include <serials.h>


class WandaVision : public serials
{
    public:
        WandaVision();
   void show() { cout<< rating_<<"\n"<< year_<<"\n"<< scenario_<<"\n"<< ganre_<<"\n"<<namber_;}
        int Getnamber_() { return namber_; }
        void Setnamber_(int val) { namber_ = val; }

    protected:

    private:
        int namber_;
};

#endif // WANDAVISION_H
