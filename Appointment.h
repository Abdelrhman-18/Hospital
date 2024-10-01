#include <iostream>
#include <string>

using namespace std;

class Appointment {
public:
    Patient obj1;
    Doctor obj2;
    string date;

    Appointment() : date("") {}

    Appointment(const Patient &p, const Doctor &d, const string &date)
            : obj1(p), obj2(d), date(date) {}

    void display() const {
        cout << "Name of the Patient : " << obj1.get_name() << endl;
        cout << "Name of the Doctor : " << obj2.get_name() << endl;
        cout << "Date : " << date << endl;
    }

};