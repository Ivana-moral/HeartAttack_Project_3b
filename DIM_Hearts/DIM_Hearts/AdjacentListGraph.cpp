#include "AdjacentListGraph.h"
#include <algorithm>
#include <iostream>


void AdjacentListGraph::DynamicSort(string filter, vector<HeartAttackItem>& members) {
	HeartAttackItem infoSort;
	if (filter == "Age") {infoSort.SortByAge(members);}
	if (filter == "Gender") { infoSort.SortByGender(members); }
	if (filter == "Hypertension") { infoSort.SortByHypertension(members); }
	if (filter == "Ethnicity") { infoSort.SortByEthnicity(members); }
	if (filter == "Smoker") { infoSort.SortBySmoker(members); }
	if (filter == "Diabetes") { infoSort.SortByDiabetes(members); }
	if (filter == "MaritalStatus") { infoSort.SortByMaritalStatus(members); }		
}


pair<int, int> AdjacentListGraph::DymanicTopBottom(string filter, vector<HeartAttackItem>& members) {
	pair<int, int> topBottom;
	if (filter == "Age")	
		return make_pair(members[0].Age, members[members.size()-1].Age);	
	else if (filter == "Gender")
		return make_pair(members[0].Gender, members[members.size()-1].Gender);
	else if (filter == "Hypertension")
		return make_pair(members[0].Hypertension, members[members.size()-1].Hypertension);
	else if (filter == "Ethnicity")
		return make_pair(members[0].Ethnicity, members[members.size()-1].Ethnicity);
	else if (filter == "Smoker")
		return make_pair(members[0].Smoker, members[members.size()-1].Smoker);
	else if (filter == "Diabetes")
		return make_pair(members[0].Diabetes, members[members.size()-1].Diabetes);
	else if (filter == "MaritalStatus")
		return make_pair(members[0].MaritalStatus, members[members.size()-1].MaritalStatus);
}

vector<HeartAttackItem> AdjacentListGraph::LoadData(string filter, int value, vector<HeartAttackItem>& members) {
	vector<HeartAttackItem> filteredData;
	HeartAttackItem infoSort;
	if (filter == "Age")
	{				
		infoSort.SortByAge(members);
		auto iter = find_if(members.begin(), members.end(), [value](const HeartAttackItem& item) {return item.Age == value; });
		if (iter != members.end())
		{
			int index = distance(members.begin(), iter);
			for (int i = index; i < members.size(); i++)
			{
				if (members[i].Age == value)
					filteredData.push_back(members[i]);
				else
					break;
			}
			return filteredData;
		}
	}else if (filter == "Gender")
	{
		infoSort.SortByGender(members);
		auto iter = find_if(members.begin(), members.end(), [value](const HeartAttackItem& item) {return item.Gender == value; });
		if (iter != members.end())
		{
			int index = distance(members.begin(), iter);
			for (int i = index; i < members.size(); i++)
			{
				if (members[i].Gender == value)
					filteredData.push_back(members[i]);
				else
					break;
			}
			return filteredData;
		}
	}
	else if (filter == "Hypertension")
	{
		infoSort.SortByHypertension(members);
		auto iter = find_if(members.begin(), members.end(), [value](const HeartAttackItem& item) {return item.Hypertension == value; });
		if (iter != members.end())
		{
			int index = distance(members.begin(), iter);
			for (int i = index; i < members.size(); i++)
			{
				if (members[i].Hypertension == value)
					filteredData.push_back(members[i]);
				else
					break;
			}
			return filteredData;
		}
	}
	else if (filter == "Ethnicity")
	{
		infoSort.SortByEthnicity(members);
		auto iter = find_if(members.begin(), members.end(), [value](const HeartAttackItem& item) {return item.Ethnicity == value; });
		if (iter != members.end())
		{
			int index = distance(members.begin(), iter);
			for (int i = index; i < members.size(); i++)
			{
				if (members[i].Ethnicity == value)
					filteredData.push_back(members[i]);
				else
					break;
			}
			return filteredData;
		}
	}
	else if (filter == "Smoker")
	{
		infoSort.SortBySmoker(members);
		auto iter = find_if(members.begin(), members.end(), [value](const HeartAttackItem& item) {return item.Smoker == value; });
		if (iter != members.end())
		{
			int index = distance(members.begin(), iter);
			for (int i = index; i < members.size(); i++)
			{
				if (members[i].Smoker == value)
					filteredData.push_back(members[i]);
				else
					break;
			}
			return filteredData;
		}
	}
	else if (filter == "Diabetes")
	{
		infoSort.SortByDiabetes(members);
		auto iter = find_if(members.begin(), members.end(), [value](const HeartAttackItem& item) {return item.Diabetes == value; });
		if (iter != members.end())
		{
			int index = distance(members.begin(), iter);
			for (int i = index; i < members.size(); i++)
			{
				if (members[i].Diabetes == value)
					filteredData.push_back(members[i]);
				else
					break;
			}
			return filteredData;
		}
	} 
	else if (filter == "MaritalStatus")
	{
		infoSort.SortByMaritalStatus(members);
		auto iter = find_if(members.begin(), members.end(), [value](const HeartAttackItem& item) {return item.MaritalStatus == value; });
		if (iter != members.end())
		{
			int index = distance(members.begin(), iter);
			for (int i = index; i < members.size(); i++)
			{
				if (members[i].MaritalStatus == value)
					filteredData.push_back(members[i]);
				else
					break;
			}
			return filteredData;
		}
	}	
	return members;
}




vector<HeartAttackItem> AdjacentListGraph::LoadData(string filter1, int value1, string filter2, int value2, string filter3, int value3, vector<HeartAttackItem>& members) {
	vector<HeartAttackItem> filteredData;
	filteredData = LoadData(filter1, value1, members);
	filteredData = LoadData(filter2, value2, filteredData);
	filteredData = LoadData(filter3, value3, filteredData);
	return filteredData;
}

vector<HeartAttackItem> AdjacentListGraph::LoadData(string filter1, int value1, string filter2, int value2, vector<HeartAttackItem>& members) {
	vector<HeartAttackItem> filteredData;
	filteredData = LoadData(filter1, value1, members);
	filteredData = LoadData(filter2, value2, filteredData);
	return filteredData;
}

map<int, vector<HeartAttackItem>> AdjacentListGraph::DynamicMapOne(string filter, vector<HeartAttackItem>& members) {
	map<int, vector<HeartAttackItem>> result;
	DynamicSort(filter, members);
	pair<int, int> values = DymanicTopBottom(filter, members);
	for (int i = values.first; i <= values.second; i++)
	{
		result.emplace(i, LoadData(filter, i, members));
	}
	return result;
}


map<int, map<int, vector<HeartAttackItem>>> AdjacentListGraph::DynamicMapTwo(string filter1, string filter2, vector<HeartAttackItem>& members) {
	map<int, map<int, vector<HeartAttackItem>>> result;
	map<int, vector<HeartAttackItem>> resultFilter1 = DynamicMapOne(filter1, members);	

	//Apply filter 2
	for (auto iter = resultFilter1.begin(); iter != resultFilter1.end(); ++iter) {
		map<int, vector<HeartAttackItem>> resultFilter2 = DynamicMapOne(filter2, iter->second);		
		result.emplace(iter->first, resultFilter2);
	}
	return result;
}


map<int, map<int, map<int, vector<HeartAttackItem>>>> AdjacentListGraph::DynamicMapThree(string filter1, string filter2, string filter3, vector<HeartAttackItem>& members) {
	map<int, map<int, map<int, vector<HeartAttackItem>>>> result;

	map<int, vector<HeartAttackItem>> resultFilter1 = DynamicMapOne(filter1, members);

	map<int, map<int, vector<HeartAttackItem>>> preResult;

	//Apply filter 2
	for (auto iter = resultFilter1.begin(); iter != resultFilter1.end(); ++iter) {
		map<int, vector<HeartAttackItem>> resultFilter2 = DynamicMapOne(filter2, iter->second);

		for (auto iter2 = resultFilter2.begin(); iter2 != resultFilter2.end(); ++iter2) {
			map<int, vector<HeartAttackItem>> resultFilter3 = DynamicMapOne(filter3, iter2->second);
			preResult.emplace(iter2->first, resultFilter3);
		}
		result.emplace(iter->first, preResult);
	}

	return result;

}
