#pragma once

#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "HeartAttackItem.h"

using namespace std;

class HeartAttackData
{
private:
	string FileLocation;
public:
	vector<HeartAttackItem> RefreshData();
	HeartAttackData(string path);	


};
