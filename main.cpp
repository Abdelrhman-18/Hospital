#include <iostream>


using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person() : name(""), age(0) {}

    Person(const string &name, int age) : name(name), age(age) {}

    void set_name(const string &name) {
        this->name = name;
    }

    string get_name() const {
        return name;
    }

    void set_age(int age) {
        this->age = age;
    }

    int get_age() const {
        return age;
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

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

class Hospital {
public:
    Patient array_of_patients[100];
    Doctor array_of_doctors[100];
    Appointment array_of_appointments[1000];
    int patient_count = 0, doctor_count = 0, app_count = 0;

    void Add_Patient(Patient P) {
        array_of_patients[patient_count++] = P;
    }

    void Add_Doctor(Doctor D) {
        array_of_doctors[doctor_count++] = D;
    }

    void addDoctor(const Doctor &d) {
        array_of_doctors[doctor_count++] = d;
    }

    void addAppointment(const Patient &p, const Doctor &d, const string &date) {
        array_of_appointments[app_count++] = Appointment(p, d, date);
    }

    void showAppointments() const {
        for (int i = 0; i < app_count; i++) {
            array_of_appointments[i].display();
            cout << "=============================\n";
        }
    }

    void findPatientById(int id) const {
        bool found = false;
        for (int i = 0; i < patient_count; ++i) {
            if (id == array_of_patients[i].get_id()) {
                found = true;
                break;
            }
        }
        if (found) {
            cout << "The patient is present.\n";
        } else {
            cout << "The patient is not present.\n";
        }
    }

    void findDoctorById(int id) const {
        bool found = false;
        for (int i = 0; i < doctor_count; ++i) {
            if (id == array_of_doctors[i].get_id()) {
                found = true;
                break;
            }
        }
        if (found) {
            cout << "The doctor is present.\n";
        } else {
            cout << "The doctor is not present.\n";
        }
    }
};

int main() {
    Hospital h;

    Patient p1("Alice", 30, 1, "Flu");
    Patient p2("Bob", 25, 2, "Cold");
    Doctor d1("Dr. Smith", 45, 101, "Pediatrics");
    Doctor d2("Dr. Jones", 50, 102, "Dermatology");

    h.Add_Patient(p1);
    h.Add_Patient(p2);
    h.addDoctor(d1);
    h.addDoctor(d2);

    h.addAppointment(p1, d1, "10-6-2024");
    h.addAppointment(p2, d2, "15-9-2024");

    h.showAppointments();

    return 0;
}
