#include <iostream>
#include <string.h>
#include <fstream>


using namespace std;

struct serials {
    int id;
    string name;
    int rating;
    int year;
    string scenario;
};


int main()
{
    setlocale(LC_ALL, "Russian");
    ifstream fin;
    fin.open("file.txt");
    /* if (!fin)
     {
         cout << "Shit happens"<<endl;
     }
     else
     {
         cout << "All good"<< endl;
     }*/
    serials *cat = new  serials[4];

    for (int i = 0; i < 4; i++)
    {
        fin >> cat[i].id;
        fin >> cat[i].name;
        fin >> cat[i].rating;
        fin >> cat[i].year;
        fin >> cat[i].scenario;

    }
    fin.close();
    for (int i = 0; i < 4; i++)
        cout << cat[i].id << "\t" << cat[i].name << "\t " << cat[i].rating << "\t" << cat[i].year << "\t" << cat[i].scenario << endl;

    int d;
    cout << "Введите номер изменяемой строки" << endl;
    cin >> d;
    cout << "Внесите изменения" << endl;
    cout << "Name" << "\t"; cin >> cat[d - 1].name;  cout << endl;
    cout << "Rating" << "\t";  cin >> cat[d - 1].rating;  cout << endl;
    cout << "Year" << "\t";  cin >> cat[d - 1].year;  cout << endl;
    cout << "Scenario" << "\t"; cin >> cat[d - 1].scenario;  cout << endl;

    for (int i = 0; i < 4; i++)
        cout << cat[i].id << "\t" << cat[i].name << "\t" << cat[i].rating << "\t" << cat[i].year << "\t" << cat[i].scenario << endl;

    int s = 0;
    for (int i = 0; i < 4; i++)  s = s + cat[i].rating;  s = s / 4;
    cout << "Средний рейтинг:  " << s << endl;

    char n[9];
    cout << "Введите название файла для вывода  "; cin >> n;

    std::ofstream fout;
    fout.open(n);
    /* if (!fout)
     {
         cout << "Shit happens"<<endl;
     }
     else
     {
         cout << "All good"<< endl;
     }
    */
    for (int i = 0; i < 4; i++)
    {
        fout << cat[i].id << "\t";
        fout << cat[i].name << "\t";
        fout << cat[i].rating << "\t";
        fout << cat[i].year << "\t";
        fout << cat[i].scenario << "\n";

    }
    fout.close();
    delete[]cat; cat = NULL;

    return 0;
}
