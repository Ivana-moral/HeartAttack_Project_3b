#pragma once

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class HeartAttackItem
{

public:
	int Age;
	int Gender;  //1: Male | 2: Female
	int Cholesterol;
	int BloodPressure;
	int HeartRate;
	double BMI;
	bool Smoker;
	bool Diabetes;
	bool Hypertension;
	bool FamilyHistory;
	int PhysicalActivity;
	int AlcoholConsumption;
	int Diet;  //1:Healthy|2:Moderate|3:Unhealthy
	int StressLevel;
	int Ethnicity;  //1:Asian|2:Black|3:Hispanic|4:White|5:Others
	int Income;
	int EducationLevel;  //1:HighSchool|2:College|3:Postgraduate
	bool Medication;
	int ChestPainType;  //1:Asymptomatic|2:Atypical|3:Non-anginal|4:Typical
	int ECGResults;  //1:LV hypertrophy|2:Normal|3:ST-T abnormality
	int MaxHeartRate;
	double ST_Depression;
	bool ExerciseInducedAngina;
	int Slope;  //1:Downslope|2:Flat|3:Upslope
	int NumberOfMajorVessels;
	int Thalassemia;  //1:Fixed defect|2:Normal|3:Reversible defect
	bool PreviousHeartAttack;
	bool StrokeHistory;
	int Residence;  //1:Rural|2:Suburban|3:Urban
	int EmploymentStatus;  //1:Employed|2:Retired|3:Unemployed
	int MaritalStatus;  //1:Single|2:Married|3:Divorced|4:Widow
	int Outcome;  //1:No Heart Attack|2:Heart Attack

	HeartAttackItem();
	HeartAttackItem(int _age, string _gender, int _cholesterol, int _bloodpressure, int _heartrate, double _bmi, int _smoker,
		int _diabetes, int _hypertension, int _familyhistory, int _physicalactivity, int _alcoholconsumption, string _diet,
		int _stresslevel, string _ethnicity, int _income, string _educationlevel, string _medication, string _chestpaintype, string _ecgresults,
		int _maxheartrate, double _st_depression, string _exerciseinducedangina, string _slope, int _numberofmajorvessels,
		string _thalassemia, int _previousheartattack, int _strokehistory, string _residence, string _employmentstatus,
		string _maritalstatus, string _outcome);


	static bool CompareByAge(const HeartAttackItem& a, const HeartAttackItem& b) { return a.Age < b.Age; }
	void SortByAge(vector<HeartAttackItem>& data) {	sort(data.begin(), data.end(), CompareByAge);}

	static bool CompareByGender(const HeartAttackItem& a, const HeartAttackItem& b) { return a.Gender < b.Gender; }
	void SortByGender(vector<HeartAttackItem>& data) { sort(data.begin(), data.end(), CompareByGender); }

	static bool CompareBySmoker(const HeartAttackItem& a, const HeartAttackItem& b) { return a.Smoker < b.Smoker; }
	void SortBySmoker(vector<HeartAttackItem>& data) { sort(data.begin(), data.end(), CompareBySmoker); }

	static bool CompareByDiabetes(const HeartAttackItem& a, const HeartAttackItem& b) { return a.Diabetes < b.Diabetes; }
	void SortByDiabetes(vector<HeartAttackItem>& data) { sort(data.begin(), data.end(), CompareByDiabetes); }

	static bool CompareByHypertension(const HeartAttackItem& a, const HeartAttackItem& b) { return a.Hypertension < b.Hypertension; }
	void SortByHypertension(vector<HeartAttackItem>& data) { sort(data.begin(), data.end(), CompareByHypertension); }

	static bool CompareByEthnicity(const HeartAttackItem& a, const HeartAttackItem& b) { return a.Ethnicity < b.Ethnicity; }
	void SortByEthnicity(vector<HeartAttackItem>& data) { sort(data.begin(), data.end(), CompareByEthnicity); }

	static bool CompareByMaritalStatus(const HeartAttackItem& a, const HeartAttackItem& b) { return a.MaritalStatus < b.MaritalStatus; }
	void SortByMaritalStatus(vector<HeartAttackItem>& data) { sort(data.begin(), data.end(), CompareByMaritalStatus); }

};

