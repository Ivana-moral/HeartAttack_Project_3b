// DIM_Hearts.cpp : This file contains the 'main' function. Program execution begins and ends there.
#pragma once
#include <iostream>
#include <string>
#include "HeartAttackData.h"
#include "RadixSort.h"
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;



int main()
{
    cout << "Hello World!" << endl;
    string path = "C:/Users/maria/OneDrive/Desktop/Tortura_de_Vatos/heart_attack_dataset.csv";
    HeartAttackData HAData(path);
    vector<int> data = HAData.ExtractColumn(5);
    cout << "Data Loaded : " << data.size() << endl;

    int arr[9999];
    copy(data.begin(), data.end(), arr);

    RadixSort demo2;
    demo2.Radix_Sort(arr, data.size());

}


