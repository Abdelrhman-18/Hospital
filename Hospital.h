#include <iostream>
#include <string>
#include "Patient.h"
#include "Appointment.h"
#include "Doctor.h"

using namespace std;

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
