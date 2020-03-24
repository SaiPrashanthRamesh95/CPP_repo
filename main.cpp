// Chapter10practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <deque>
#include <queue>
#include <list>
#include <iterator>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::list;

int main() {

	vector<string> ccpvec_1 = { "2eq","qe", "qewq" };
	vector<string> ccpvec_2 = { "2eq","qe", "qewq" };
	vector<int> ivec_1 = { 0,1,2,3,4,5 };
	fill_n(ivec_1.begin(), ivec_1.size(), 0);
	for (const auto& a : ivec_1) {
		cout << a << endl;
	}

	//auto iter_1 = back_inserter(ccpvec_1);
	//*iter_1 = "LEL";

	//replace(ccpvec_1.begin(), ccpvec_1.end(), string("qe"), string("KEK"));

	//fill(ccpvec_1.begin(), ccpvec_1.end(), "LOL");
	/*if (equal(ccpvec_1.cbegin(), ccpvec_1.cend(), ccpvec_2.cbegin())) {
		cout << "KEK";
	}
	else {
		cout << "eke" << endl;
	}
	*/
	//for (const auto& a : ccpvec_1) {
		//cout << a << endl;
	//}

	//vector<double> vec = { 0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0 };
	//double sum = accumulate(vec.cbegin(), vec.cend(), 0);
	//cout << sum;
	/*
	list<string> slis;
	string s1;
	string s2;
	while (cin >> s1 && s1 != "*&^") {
		slis.push_back(s1);
	}
	cout << "These are the elements of slis: " << endl;
	for (const auto& a : slis) {
		cout << a << " , ";
	}
	cout << endl;
	cout << "Now input what string u wanna check: ";
	cin >> s2;
	auto result = count(slis.cbegin(), slis.cend(), s2);
	cout << "The result is " << result << endl;
	*/
	/*
	vector<int> ivec;
	int i;
	int i_2;
	while (cin >> i && i != 0) {
		ivec.push_back(i);
	}
	cout << "These are the elements of ivec: " << endl;
	for (const auto& a : ivec) {
		cout << a << " , ";
	}
	cout << endl;
	cout << "Now input what number u wanna check: ";
	cin >> i_2;
	auto result = count(ivec.cbegin(), ivec.cend(), i_2);
	cout << "The result is " << result << endl;
	*/
	/*
	int val = 42;
	vector<int> vec = { 0,1,2,3,4,5,6,32,34,43433,23 };
	auto result = find(vec.cbegin(), vec.cend(), val); //returns an iterator to the element that matches val
	//if not, vec.cend() is returned
	cout << "The value " << val
		<< (result == vec.cend() ? " is not present" : " is present.") << endl;
		*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
