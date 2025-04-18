#include "HeartAttackData.h"


/// <summary>
/// Ctor for HeartAttackData with csv file location
/// </summary>
/// <param name="path">csv file location</param>
HeartAttackData::HeartAttackData(string path) {
	this->FileLocation = path;
};

vector<HeartAttackItem> HeartAttackData::RefreshData() {
	//Read the CSV file
	ifstream heartFile(this->FileLocation);
	vector<HeartAttackItem> data;

	if (heartFile.is_open()) {
		//Read Header and discard
		string lineFromFile;
		getline(heartFile, lineFromFile);

		//Get raw data from file 
		while (getline(heartFile, lineFromFile)) {

			//Convert line into memory stream 
			istringstream streamLine(lineFromFile);

			string rawAge;
			getline(streamLine, rawAge, ',');
			string rawGender;
			getline(streamLine, rawGender, ',');
			string rawCholesterol;
			getline(streamLine, rawCholesterol, ',');
			string rawBloodPressure;
			getline(streamLine, rawBloodPressure, ',');
			string rawHeartRate;
			getline(streamLine, rawHeartRate, ',');
			string rawBMI;
			getline(streamLine, rawBMI, ',');
			string rawSmoker;
			getline(streamLine, rawSmoker, ',');
			string rawDiabetes;
			getline(streamLine, rawDiabetes, ',');
			string rawHypertension;
			getline(streamLine, rawHypertension, ',');
			string rawFamilyHistory;
			getline(streamLine, rawFamilyHistory, ',');
			string rawPhysicalActivity;
			getline(streamLine, rawPhysicalActivity, ',');
			string rawAlcoholConsumption;
			getline(streamLine, rawAlcoholConsumption, ',');
			string rawDiet;
			getline(streamLine, rawDiet, ',');
			string rawStressLevel;
			getline(streamLine, rawStressLevel, ',');
			string rawEthnicity;
			getline(streamLine, rawEthnicity, ',');
			string rawIncome;
			getline(streamLine, rawIncome, ',');
			string rawEducationLevel;
			getline(streamLine, rawEducationLevel, ',');
			string rawMedication;
			getline(streamLine, rawMedication, ',');
			string rawChestPainType;
			getline(streamLine, rawChestPainType, ',');
			string rawECGResults;
			getline(streamLine, rawECGResults, ',');
			string rawMaxHeartRate;
			getline(streamLine, rawMaxHeartRate, ',');
			string rawST_Depression;
			getline(streamLine, rawST_Depression, ',');
			string rawExerciseInducedAngina;
			getline(streamLine, rawExerciseInducedAngina, ',');
			string rawSlope;
			getline(streamLine, rawSlope, ',');
			string rawNumberOfMajorVessels;
			getline(streamLine, rawNumberOfMajorVessels, ',');
			string rawThalassemia;
			getline(streamLine, rawThalassemia, ',');
			string rawPreviousHeartAttack;
			getline(streamLine, rawPreviousHeartAttack, ',');
			string rawStrokeHistory;
			getline(streamLine, rawStrokeHistory, ',');
			string rawResidence;
			getline(streamLine, rawResidence, ',');
			string rawEmploymentStatus;
			getline(streamLine, rawEmploymentStatus, ',');
			string rawMaritalStatus;
			getline(streamLine, rawMaritalStatus, ',');
			string rawOutcome;
			getline(streamLine, rawOutcome, ',');

			HeartAttackItem row(stoi(rawAge), rawGender, stoi(rawCholesterol), stoi(rawBloodPressure), stoi(rawHeartRate), stod(rawBMI), stoi(rawSmoker),
				stoi(rawDiabetes), stoi(rawHypertension), stoi(rawFamilyHistory), stoi(rawPhysicalActivity), stoi(rawAlcoholConsumption), rawDiet,
				stoi(rawStressLevel), rawEthnicity, stoi(rawIncome), rawEducationLevel, rawMedication, rawChestPainType, rawECGResults,
				stoi(rawMaxHeartRate), stod(rawST_Depression), rawExerciseInducedAngina, rawSlope, stoi(rawNumberOfMajorVessels),
				rawThalassemia, stoi(rawPreviousHeartAttack), stoi(rawStrokeHistory), rawResidence, rawEmploymentStatus,
				rawMaritalStatus, rawOutcome);
			data.push_back(row);
		}		
	}

	return data;
};


