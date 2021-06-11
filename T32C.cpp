#include <iostream>
#include <string>

using namespace std;

class Serials 
{
 private:
    // свойства
    int id_;
    string name_;
    int rating_;
    int year_;
 public:
    Serials()      
    {
        id_ = 1;
        name_ = "Lusifer";
        rating_ = 78;
        year_ = 2016;
    }
    Serials(int id, string name, int rating, int year)
    {       
        id_ = id;
        name_ = name;
        rating_ = rating;
        year_ = year;
    };
   
    void setid(int id) { id_ = id; };
    int getid() { return id_; };

    void setname(string name) { name_ = name; };
    string getname() { return name_; };

    void setrating(int rating) { rating_ = rating; };
    int getrating() { return rating_; };

    void setyear(int year) { year_ = year; };
    int getyear() { return year_; };
};
int main()
{
    Serials lucifer;
    Serials method(2, "Method", 68, 2007);
    Serials st[2];

    cout << lucifer.getid() << "\t" <<
            lucifer.getname() << "\t" <<
            lucifer.getrating() << "\t" <<
            lucifer.getyear() << endl;
    cout << method.getid() << "\t" <<
            method.getname() << "\t" <<
            method.getrating() << "\t" <<
            method.getyear() << endl;

    int b;
    cout << "new rating lucifer: "; cin >> b;
    lucifer.setrating(b);
    cout << "new year method:  "; cin >> b;
    method.setyear(b);

    cout << lucifer.getid() << "\t" <<
        lucifer.getname() << "\t" <<
        lucifer.getrating() << "\t" <<
        lucifer.getyear() << endl;
    cout << method.getid() << "\t" <<
        method.getname() << "\t" <<
        method.getrating() << "\t" <<
        method.getyear() << endl;

  
    for (int i = 0; i < 2; i++) {  cout << " enter new serial ";
        int id; string name; int rating; int year;
        cin >> id >> name >> rating >> year;
        st[i].setid(id);
        st[i].setname(name);
        st[i].setrating(rating);
        st[i].setyear(year);
    }
    cout << lucifer.getid() << "\t" <<
        lucifer.getname() << "\t" <<
        lucifer.getrating() << "\t" <<
        lucifer.getyear() << endl;
    cout << method.getid() << "\t" <<
        method.getname() << "\t" <<
        method.getrating() << "\t" <<
        method.getyear() << endl;
    for (int i = 0; i < 2; i++) {
        cout << st[i].getid() << "\t" <<
            st[i].getname() << "\t" <<
            st[i].getrating() << "\t" <<
            st[i].getyear() << endl;
    }

    return 0;
}
