// binaryChop01.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
void printVector(vector<int> vec) {
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;
	return;
}

int searchInVector(int target, vector<int> volume, int left, int right) {
	int middle = (left + right) / 2;
	if (volume[middle] == target)
	{
		return middle;
	}
	else if (left>right)
	{
		return -1;
	}
	else if (volume[middle]>target)
	{
		return searchInVector(target, volume, left, (middle - 1));
	}
	else
	{
		return searchInVector(target, volume, (middle + 1), right);
	}
}

int main()
{

	int targetInt = 10;
	vector<int> volume = { 1, 4, 6, 7, 13, 22, 125 };



	cout << targetInt << " was found at position " << searchInVector(targetInt, volume, 0, volume.size());
	int blub = 0;
	cin >> blub;
	return 0;
}

