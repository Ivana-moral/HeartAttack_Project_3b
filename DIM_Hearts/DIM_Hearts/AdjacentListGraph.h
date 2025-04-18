#include <string>
#include <map>
#include <vector>
#include "HeartAttackData.h"

using namespace std;

class AdjacentListGraph
{		
public:		
	map<int, vector<HeartAttackItem>> graphResult;
	map<int, vector<HeartAttackItem>> DynamicMapOne(string filter, vector<HeartAttackItem>& members);
	map<int, map<int, vector<HeartAttackItem>>> DynamicMapTwo(string filter1, string filter2, vector<HeartAttackItem>& members);
	map<int, map<int, map<int, vector<HeartAttackItem>>>> DynamicMapThree(string filter1, string filter2, string filter3, vector<HeartAttackItem>& members);
	void DynamicSort(string filter, vector<HeartAttackItem>& members);
	pair<int, int> DymanicTopBottom(string filter, vector<HeartAttackItem>& members);
	vector<HeartAttackItem> LoadData(string filter, int value, vector<HeartAttackItem>& members);
	vector<HeartAttackItem> LoadData(string filter1, int value1, string filter2, int value2, vector<HeartAttackItem>& members);
	vector<HeartAttackItem> LoadData(string filter1, int value1, string filter2, int value2, string filter3, int value3, vector<HeartAttackItem>& members);
	
};

