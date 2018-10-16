/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Rafe Cooley
 * Date: October 1, 2017 (the future)
 *
 *
 * Edited by Jacob Leuquire
 * October 8, 2018
 */
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <algorithm>
// <ctime> from stackoverflow on "making new random vector values"
#include <ctime>		

using std::cout;
using std::cin;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

// print our vector in a fancy way
void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}

/* Add 10 random numbers from 0-999 to the end of the vector
 * Create random seed for rand(), push_back 10 times, each creating a random number from 0-999
 */
void add_numbers(vector<short> &data)
{
	// To start from new random seed, srand() included
	srand(time(NULL));
	for (ulong i = 0; i < 10; i++)
	{
		data.push_back(rand() % 1000);
	}
}

/* Print all elements in the vector stored at an even index
 * Takes a vector, stores size, iterates through elements, printing values at an even index
 */
void print_even(const vector<short> &data)
{
	short size = data.size();
	ulong n = 0;
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		ulong max = 0;
		// this IF is to ensure that no matter initial even/odd size status, vector size is divisible by 2
		if (data.size() % 2 == 0)			
		{
			max = data.size();
		}
		else
		{
			max = data.size() - 1;
		}
		cout << "<";
		for (ulong i = 0; i < max/2; i++)
			{
				n = (i * 2);
				cout << data.at(n) << ", ";
			}
		// '\b' came from stackoverflow on "removing last character in string"
		cout << '\b' << '\b' << ">";		
	}
}

/* Checks to see if the value given is stored in the vector
 * Uses * operator to iterate through vector elements
 */
bool is_present(const vector<short> &data, short value)
{
	bool condition = false;
	vector<short>::const_iterator iter = data.begin();
	while (iter != data.end())
	{
		if (*iter == value)
		{
			condition = true;
		}
		iter++;
	}
	return condition;
}
