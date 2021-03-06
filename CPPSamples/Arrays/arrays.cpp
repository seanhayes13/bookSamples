#include <iostream>#include <vector>
using namespace std;
void main() { 
  /*Section 3 - Arrays*/ 
  cout << "\n\n############\nSection 3 - Containers\n############" << endl; 
  /*We start by defining the datatype the array will hold, the name of the array, and the size.*/ 
  int primes[5];
 /*Now we will add in some data, this is one way, best used with small arrays.*/ 
  primes[0] = 2; 
  primes[1] = 3; 
  primes[2] = 5; 
  primes[3] = 7; 
  primes[4] = 11; 
  cout << "primes[3] - " << primes[3] << endl;
 /*Another way to create and populate an array at the same time*/ 
  int evens[5] = { 2, 4, 6, 8, 10 }; 
  cout << "evens[2] - " << evens[2] << endl;
 /*Nested or multi-dimensional arrays are arrays within arrays. In this example we will create a nested array to hold the day time highs for each day of each month. The first array will represent the months, the second will represent the days.*/ 
  int highs[12][31]; 
  /*So if we wanted to store the high for January 1st, remember that we need to use 0 index for both, it would look like this.*/ 
  highs[0][0] = 23; 
  //Febrary 14th... highs[1][13] = 34;
 int squares[2][3] = { { 1, 2, 3 },{ 1, 4, 9 } };
 /*To create a vector you need to add #include <vector> to the top of the file first. Then you declare a vector datatype, and specify what the vector will hold, followed by the name of the vector.*/ 
  vector<int> grades;
  /*To add a value to the end of the vector, use push_back and provide the value to add.*/ 
  grades.push_back(93);
  grades.push_back(98); /*To recall a specific location, use at. Be warned that if you try to access a position that does not exist you will get an error*/
  cout << "grades at 0 - " << grades.at(0) << endl; 
  grades.push_back(403);
  /*size will give you the size of the vector*/
  cout << "grades size - " << grades.size() << endl;
  /*Removing an element comes in a couple flavors: - pop_back will remove the last element in the vector - erase can be used to remove a group of values or the value at one position.*/
  /*NOTE: Only have one of these uncommented at a time or else the erase will not work properly.*/
  //grades.pop_back(); 
  grades.erase(grades.begin() + 2);
  cout << "grades size - " << grades.size() << endl;
 system("pause");}
