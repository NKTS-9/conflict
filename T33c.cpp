#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>
#include <cstdlib>
#include <math.h>

using namespace std;

struct serials
{
    int id;
    string name;
    int rating;
    int year;
    string scenario;
};


void Read(serials cat[]);
void Display(serials cat[], int r);
void Edit(serials cat[]);
int Search(serials cat[]);
void Save(serials cat[], int s);


int Menu()
{
    system("cls");

    cout << endl;
    cout << "1: Read" << endl
        << "2: Display" << endl
        << "3: Edit" << endl
        << "4: Search" << endl
        << "5: Save" << endl
        << "0: Exit" << endl
        << endl << " CODE: ";
    char ch;
    ch = _getch();
    return ch;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    serials* cat = new  serials[4];
    int i = 1, s=0, r = 1; 

    while (i == 1) {
        char ch = Menu();
        switch (ch) {
        case '1': Read(cat); break;
        case '2': Display(cat, r); break;
        case '3': Edit(cat); break;
        case '4': s=Search(cat); break;
        case '5': Save(cat, s); break;
        case '0': {delete[]cat; cat = NULL; exit(1); } break;
        }
    }

}

void Read(serials cat[]) {

    ifstream Input;
    Input.open("file.txt");
    if (!Input) {
        cout << "Read: Error " << endl
            << "Press any key" << endl;
        _getch();
    }
    else {
        for (int i = 0; i <= 4; i++) {
            cat[i].id = i + 1;
            Input >> cat[i].id
             >> cat[i].name
             >> cat[i].rating
             >> cat[i].year
             >> cat[i].scenario;
        }
        Input.close();
        cout << "Read: Success!" << endl << "Press any key.";
        _getch();
    }
}


void Display(serials cat[], int r)
{
    if (r == 1) {
        cout << "\Serislas: \n" << endl;
        cout.setf(std::ios::left);
        cout.fill('-'); cout.width(15); cout << "|1.ID|";
        cout.fill('-'); cout.width(15); cout << "|2.Name|";
        cout.fill('-'); cout.width(15); cout << "|3.Rating|";
        cout.fill('-'); cout.width(15); cout << "|4.Year|";
        cout.fill('-'); cout.width(15); cout << "|5.Scenario|" << endl;


        for (int i = 0; i < 4; i++) {
            cout.fill('.'); cout.width(15); cout << cat[i].id;
            cout.fill('.'); cout.width(15); cout << cat[i].name;
            cout.fill('.'); cout.width(15); cout << cat[i].rating;
            cout.fill('.'); cout.width(15); cout << cat[i].year;
            cout.fill('.'); cout.width(15); cout << cat[i].scenario << endl;
        }

        cout << endl << "Press any key.";
        _getch();
    }
    else {
        cout << endl << "OTKA3AHO ";
        cout << endl << "Press any key.";
        _getch();
    }
}
void Edit(serials cat[]) 
{
    int line;
    do {
        cout << "\n Enter line ";
        cin >> line;
        line = line - 1;
    } while (line < 0 || line >= 4);

    int i = 1;
    while (i == 1) {
        cout << "\n Enter colomn ";
        int column;
        cin >> column;

        cout << "Change ";

        switch (column) {
        case 1: {cout << cat[line].id << ": "; cin >> cat[line].id;  i = 0; } break;
        case 2: {cout << cat[line].name << ": "; cin >> cat[line].name; i = 0;   } break;
        case 3: {cout << cat[line].rating << ": "; cin >> cat[line].rating; i = 0; } break;
        case 4: {cout << cat[line].year << ": "; cin >> cat[line].year; i = 0; } break;
        case 5: {cout << cat[line].scenario << ": "; cin >> cat[line].scenario; i = 0;  } break;
                               
        default: cout << "Error!";
        }
        
    }
}

int Search(serials cat[]){
    int s = 0;
    for (int i = 0; i < 4; i++)  s = s + cat[i].rating;  s = s / 4;
    cout << "Средний рейтинг:  " << s << endl << "Press any key.";

    _getch();
    return s;

}




void Save(serials cat[], int s) {


    
   string n; n = _getch();
    cout << "Введите название файла для вывода  "; cin >> n;

    std::ofstream  Output;
    Output.open(n);
    /* if (!fout)
     {
         cout << "Shit happens"<<endl;
     }
     else
     {
         cout << "All good"<< endl;
     }
    */
    Output.fill(' '); Output.width(15); Output << "№";
    Output.fill(' '); Output.width(15); Output << "1. name";
    Output.fill(' '); Output.width(15); Output << "2. rating";
    Output.fill(' '); Output.width(15); Output << "3. year";
    Output.fill(' '); Output.width(15); Output << "4. scenario" << endl;

    for (int i = 0; i <= 3; i++) {
        Output.fill(' '); Output.width(15); Output << cat[i].id;
        Output.fill('_'); Output.width(15); Output << cat[i].name;
        Output.fill('_'); Output.width(15); Output << cat[i].rating;
        Output.fill('_'); Output.width(15); Output << cat[i].year;
        Output.fill('_'); Output.width(15); Output << cat[i].scenario << endl;
    }
    Output << "\nRating: " << endl;
    Output.fill(' '); Output.width(15); Output << s;
   
     Output.close();

 
    cout<< "Save: Success!" << "\nPress any key.";
    _getch();
}