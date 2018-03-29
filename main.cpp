//Author: Mustafa Nasafi
#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>

using namespace std;

int main()
{

  string word;
  vector <string> v;
  ifstream in("example.txt");
  char first = ' ', last = ' ', current;
  

  //Read from the file opened by in, and the first letter (either upper or
  //lower case) should be assigned to first and the last letter (again in
  //either case) from the file to the variable last


  // check for error opening file
  if ( in.fail() )
  {
      cerr << "Error opening file" << endl;
      exit(1);
  }

  while( !in.eof() )
  {
      in >> word;
      v.push_back( word );


  } // end while

  
  // return first character from vector v
  first = v.at(0);

  // get last character from vector v
  last = v [ v.size() -1 ];


  //Then, finally, this displays the censored version:
  cout << first << "**" << last << endl;

  // sample output
  // John is awesome ---> J**e

  return 0;

} // end main
