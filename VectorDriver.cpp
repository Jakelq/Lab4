/* Edited by Jacob Leuquire
 * October 8, 2018
 * File goes over some basic uses of a vector
 */

#include "VectorDriver.h"

int main() {
  /*
  cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);

  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
 */
 
  cout << endl << "		BEGIN MY CODE	" << endl << endl;
  vector<short> first_vector(0);

  cout << "New empty vector: ";
  print(first_vector);
  cout << endl << endl;

  cout << "Adding 10 random numbers to end of vector" << endl << "Vector: ";
  add_numbers(first_vector);
  print(first_vector);
  cout << endl << endl;

  cout << "Adding 10 random numbers to end of vector" << endl << "Vector: ";
  add_numbers(first_vector);
  print(first_vector);
  cout << endl << endl;

  cout << "Elements of vector in even index locations: ";
  print_even(first_vector);
  cout << endl << endl;

  int n = 0;
  cout << "Test if a number is in the vector" << endl << "Insert value n: ";
  cin >> n;
  cout << endl;
  if (is_present(first_vector, n) == true)
  {
	  cout << "True";
  }
  else
  {
	  cout << "False";
  }
  cout << endl << endl;
  
  system("pause");
  cout << endl;

  vector<short> second_vector(5);
  second_vector = { 21, 65, 17, 12, 94 };
  cout << "Print values of second_vector" << endl << endl;
  print(second_vector);
  cout << endl << endl;

  cout << "Print sorted values of second_vector" << endl << endl;
  std::sort(second_vector.begin(), second_vector.end());
  print(second_vector);
  cout << endl << endl;


  system("pause");

  return 0;
}
