#ifndef PATIENT_CLASS
#define PATIENT_CLASS

#include "dateClass.h"
#include <iostream>
#include <string>
using namespace std;



class PatientClass {
private:
	DateClass birthDate;

public:
	string name;
	string surname;
	string diagnosis;
	void showPatientsName();
	void addPatientsName();


};

#endif