#pragma once
#include "Serial.h"
class Fantasy : public Serial
{  public:
  Fantasy()
  {
    year = 0;
    name = "noname";
    rating = 0;
  };

    int Getyear() { return year; }
    void Setyear(int y) { year = y; }
  void show()
  {
    cout << name<< "\t" <<rating << "\t" << year << "\n";
  };

  private:
    int year;
};

