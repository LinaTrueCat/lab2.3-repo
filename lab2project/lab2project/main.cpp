#include "dateclass.h"
#include "doctor.h"

#include <iostream>
using namespace std;

int main()
{
    DateClass today{ 12, 11, 2018 };

    today.addDate();
    DoctorClass first{};
    first.addDoctorsSurname();
    first.showDoctorsSurname();
    DoctorClass secound{ "Shmakova" };
    secound.showDoctorsSurname();
    return 0;
}
