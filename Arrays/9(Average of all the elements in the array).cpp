//Average of all the elements in the array
//Problem Statement: Given an array, we have to find the average of all the elements in the array.

#include<bits/stdc++.h>
using namespace std;
int avg(vector<int> arr) {
	double sum = 0;
	for (int i = 0; i < arr.size(); i++) {
		sum += (double)arr[i];
	}
	double average = sum / n;
	cout << "The average is "<<average;

}
