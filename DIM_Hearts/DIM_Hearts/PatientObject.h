//
// Created by Daniel Lipszyc on 4/19/25.
//

#ifndef HEARTATTACK_PROJECT_3B_PATIENTOBJECT_H
#define HEARTATTACK_PROJECT_3B_PATIENTOBJECT_H
struct Patient{
    int BMI;
    int StressLevel;
    int HAO; // Heart Attack Outcome

    Patient(int BMI, int HAO, int stressLevel);


};
#endif //HEARTATTACK_PROJECT_3B_PATIENTOBJECT_H
