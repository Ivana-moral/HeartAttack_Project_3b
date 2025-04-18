// DIM_Hearts.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>
#include "HeartAttackData.h"
#include "AdjacentListGraph.h"
using namespace std;

struct Patient{
    float BMI;
    float StressLevel;
    int HAO; // Heart Attack Outcome

    Patient(float BMI, int HAO){
        this->BMI = BMI;
        this->HAO = HAO;
    }
};

int main()
{
    cout << "Hello World!" << endl;
    string path = "C:/Users/maria/OneDrive/Desktop/Tortura_de_Vatos/heart_attack_dataset.csv";
    HeartAttackData HAData(path);
    vector<HeartAttackItem> data = HAData.RefreshData();
    cout << "Data Loaded : " << data.size() << endl;
    AdjacentListGraph demo; 
    demo.DynamicMapOne("Age", data);
    demo.DynamicMapTwo("Age", "Gender", data);
    demo.DynamicMapThree("Age", "Gender", "Ethnicity", data);
}


