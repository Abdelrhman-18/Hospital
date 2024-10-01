#include <iostream>
#include "Patient.h"
#include "Doctor.h"
#include "Appointment.h"
#include "Hospital.h"

using namespace std;

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
