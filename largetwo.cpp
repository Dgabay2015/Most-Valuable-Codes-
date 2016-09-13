#include <iostream>;
#include <array>;
#include <string>;
#include<vector>;
#pragma once
using namespace std;

vector<double> vector_get(int n)
{
	int i;
	double d;
	vector<double> v;

	for (i = 0; i < n; ++i)
	{
		cout << "Enter value " << i + 1 << ": ";
		cin >> d;
		v.push_back(d);
	}
	return v;
}
void vector_print(vector<double> v)
{
	size_t i;
	for (i = 0; i < v.size() - 1; ++i)
	{
		cout << v[i] << ", ";
	}
	cout << v[i] << endl;
}

void twoLarge(vector<double> v)
{
	int L1=0;
	int L2=0;
	for (int i = 0; i <= (v.size()-1); i++)
	{
		if (v[i] > L1)
		{
			L2 = L1;
			L1 = v[i];
		}
		else if (L2 < v[i])
		{
			L2 = v[i];
		}
	}
	cout << "The two largest numbers are :   " << L1 << "  and , " << L2 << endl;
}

int main()
{
	int n;
	vector<double> a;
	cout << "Please enter how many values would you like to enter?: ";
	cin >> n;			// number of values in list n
	a = vector_get(n);  // making list of n integers
	cout << "The list of numbers consists of: ";
	vector_print(a);
	twoLarge(a);		//calling function to get largest 2
	cout<<"Bla bla bla"<<endl;
	return 0;
}
