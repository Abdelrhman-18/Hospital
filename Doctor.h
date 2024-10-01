#include <iostream>
#include <string>
#include "Preson.h"

using namespace std;

class Doctor : public Person {
protected:
    string specialization;
    int id;
public:
    Doctor() : specialization(""), id(0) {}

    Doctor(string name, int age, int id, string specialization)
            : Person(name, age), specialization(specialization), id(id) {}


    void set_specialization(const string &specialization) {
        this->specialization = specialization;
    }

    string get_specializatio() const {
        return specialization;
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
        cout << "Specialization : " << specialization << endl;
    }
};

