#include "HeartAttackItem.h"


/// <summary>
/// Simple Ctor for Heart Attack Item
/// </summary>
HeartAttackItem::HeartAttackItem() {};

/// <summary>
/// All Fields Ctor for Heart Attack Item
/// </summary>
HeartAttackItem::HeartAttackItem(int _age, string _gender, int _cholesterol, int _bloodpressure, int _heartrate, double _bmi, int _smoker,
	int _diabetes, int _hypertension, int _familyhistory, int _physicalactivity, int _alcoholconsumption, string _diet,
	int _stresslevel, string _ethnicity, int _income, string _educationlevel, string _medication, string _chestpaintype, string _ecgresults,
	int _maxheartrate, double _st_depression, string _exerciseinducedangina, string _slope, int _numberofmajorvessels,
	string _thalassemia, int _previousheartattack, int _strokehistory, string _residence, string _employmentstatus,
	string _maritalstatus, string _outcome)
{
	this->Age = _age;
	this->Gender = _gender == "Male" ? 1 : 2;
	this->Cholesterol = _cholesterol;
	this->BloodPressure = _bloodpressure;
	this->HeartRate = _heartrate;
	this->BMI = _bmi;
	this->Smoker = _smoker;
	this->Diabetes = _diabetes;
	this->Hypertension = _hypertension;
	this->FamilyHistory = _familyhistory;
	this->PhysicalActivity = _physicalactivity;
	this->AlcoholConsumption = _alcoholconsumption;
	this->Diet = _diet == "Healthy" ? 1 : _diet == "Moderate" ? 2 : 3;
	this->StressLevel = _stresslevel;
	this->Ethnicity = _ethnicity == "Asian" ? 1 : _ethnicity == "Black" ? 2 : _ethnicity == "Hispanic" ? 3 : _ethnicity == "White" ? 4 : 5;
	this->Income = _income;
	this->EducationLevel = _educationlevel == "HighSchool" ? 1 : _educationlevel == "College" ? 2 : 3;
	this->Medication = _medication == "Yes" ? true : false;
	this->ChestPainType = _chestpaintype == "Asymptomatic" ? 1 : _chestpaintype == "Atypical" ? 2 : _chestpaintype == "Non - anginal" ? 3 : 4;
	this->ECGResults = _ecgresults == "LV hypertrophy" ? 1 : _ecgresults == "Normal" ? 2 : 3;
	this->MaxHeartRate = _maxheartrate;
	this->ST_Depression = _st_depression;
	this->ExerciseInducedAngina = _exerciseinducedangina == "Yes" ? true : false;
	this->Slope = _slope == "Downslope" ? 1 : _slope == "Flat" ? 2 : 3;
	this->NumberOfMajorVessels = _numberofmajorvessels;
	this->Thalassemia = _thalassemia == "Fixed defect" ? 1 : _thalassemia == "Normal" ? 2 : 3;
	this->PreviousHeartAttack = _previousheartattack;
	this->StrokeHistory = _strokehistory;
	this->Residence = _residence == "Rural" ? 1 : _residence == "Suburban" ? 1 : 3;
	this->EmploymentStatus = _employmentstatus == "Employed" ? 1 : _employmentstatus == "Retired" ? 2 : 3;
	this->MaritalStatus = _maritalstatus == "Single" ? 1 : _maritalstatus == "Married" ? 2 : _maritalstatus == "Divorced" ? 3 : 4;
	this->Outcome = _outcome == "No Heart Attack" ? 1 : 2;
}


