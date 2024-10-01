#include <iostream>
#include <string>
#include "Preson.h"

using namespace std;

class Patient : public Person {
protected:
    string diagnosis;
    int id;
public:
    Patient() : id(0), diagnosis("") {}

    Patient(const string &name, int age, int id, const string &diagnosis)
            : Person(name, age), id(id), diagnosis(diagnosis) {}

    void set_diagnosis(const string &diagnosis) {
        this->diagnosis = diagnosis;
    }

    string get_diagnosis() const {
        return diagnosis;
    }

    void set_id(int id) {
        this->id = id;
    }

    int get_id() const {
        return id;
    }

    void display() const {
        Person::display();
        cout << "id : " << id << endl;
        cout << "Diagnosis : " << diagnosis << endl;
    }
};
