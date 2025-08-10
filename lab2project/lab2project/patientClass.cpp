#include "patientClass.h"
#include <iostream>
#include <string>
using namespace std;

void PatientClass::showPatientsName() {
	cout << "doctor's surname is " << surname << '\n';
}

void PatientClass::addPatientsName() {
	cin >> surname;
}