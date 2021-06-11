#include <iostream>
#ifndef Coffe_H_INCLUDED
#define Coffe_H_INCLUDED

using namespace std;

class coffeverca
{
    bool pw_;
    bool gr_;
    bool ck_;
    bool ml_;


 public:
    coffeverca()
    {


        pw_ = 0;
        gr_ = 0;
        ck_ = 0;
        ml_ = 0;

    };
    void dis() {
        pw_ = !pw_; int b = pw_;
        if (b==0)
        {
           gr_ = 0;
           ck_ = 0;
           ml_ = 0;
        }
    };
 
    void rd() {
        int b = pw_; int c = ml_;
        if (b != 0)
        {
            if (c != 0)
                ml_ = 0;
            gr_ = !gr_;
        }
        else
            gr_ = 0;
    };
    void wk() {
        int b = pw_; int c = gr_;
        if (b != 0 && c != 0)
        {
            ck_ = !ck_;  gr_ = 0;
        }
        else
            ck_ = 0;
    };
    void ex() {
        int b = pw_; int c = ck_; int i = gr_;
        if (b != 0 && c != 0)
        {
            ml_ = !ml_;  ck_ = 0;
        }
        else {
            if (b != 0 && i != 0) cout << "-"<<endl;
           
            else
            {

                if (b != 0)
                {
                    ml_ = !ml_;
                }
                else
                {
                    ml_ = 0;
                }
            }
        }
            
    };
    void en() {
        int b = pw_; int c = ml_;
        if (b != 0 && c != 0)   ml_ = 0;
        c = ck_;
        if (b != 0 && c != 0)   ck_ = 0;

    };
    void status() {
        cout << pw_ << "\t" << gr_ << "\t" << ck_ << "\t" << ml_ << "\n";
    }

};
#endif