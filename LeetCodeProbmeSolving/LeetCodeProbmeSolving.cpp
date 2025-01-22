// LeetCodeProbmeSolving.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
// 26. Remove Duplicates from Sorted Array;
int removeDuplicates(vector<int>& nums) {
	vector<int> NewVector;
	int k = 1;

	for ( short i = 1; i < nums.size(); i++)
	{
		
			if(nums[i] != nums[i-1]) {
				nums[k] = nums[i];
				k++;
			}		
	}

	for (short i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << endl;
	}
	cout << "-" << endl;
	return k;
}
int main()
{
	vector<int> nums = { 1};
	cout << removeDuplicates(nums) << endl;
}
