#include <iostream>
#include "coffeverca.h"
using namespace std;


int main()
    {
    setlocale(LC_ALL, "Russian");
        coffeverca  coffeverca;

        while (1)
        {
            char ch = 0; cout << " p  - включить,  g - смолоть кофе, c - сварить кофе, m - добавить молоко, e - перейти в режим ожидания "<<endl
                << " выберите действие" << endl;
            cin >> ch;
            switch (ch) {
            case 'p':   coffeverca.dis();      break;
            case 'g':   coffeverca.rd();      break;
            case 'c':   coffeverca.wk();        break;
            case 'm':   coffeverca.ex();        break;
            case 'e':  coffeverca.en();        break;
            default:                     break;
            }

            coffeverca.status();

        }

        return 0;
    }