#include "doctor.h"
#include <iostream>
#include <string>
using namespace std;

void DoctorClass::showDoctorsSurname() {
	cout << "doctor's surname is " << surname << '\n';
}

void DoctorClass::addDoctorsSurname() {
	cin >> surname;
}