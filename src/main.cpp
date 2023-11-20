//******************************************************************************
// File name:   main.cpp
// Author:      CS Faculty
// Date:        11/17/23
// Class:       CS150-xx (xx is your section number)
// Assignment:  In class coding of C-strings
// Purpose:     Working with strings, files, and functions
// Hours:       
//******************************************************************************

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void twodArray();
bool isEqual (const char word1[], const char word2[]);

int main () {
  const string STRING_FILE_NAME = "data/dictionary.txt";
  const int MAX_STRING_SIZE = 32;
  
  ifstream inFile;
  char aDictionaryWord[MAX_STRING_SIZE], aWord[MAX_STRING_SIZE];

  inFile.open (STRING_FILE_NAME);
  if (inFile.fail ()) {
    cout << "Error Opening File" << endl;
    exit (EXIT_FAILURE);
  }

  cout << "Enter a word: ";
  cin >> aWord;

  while (inFile >> aDictionaryWord) {
    if (isEqual (aWord, aDictionaryWord)) {
      cout << aWord << " is a dictionary word" << endl;
    }
  }

  inFile.close ();

  //twodArray();

  return EXIT_SUCCESS;
}

bool isEqual (const char word1[], const char word2[]) {
  bool bIsSame = true;
  int len1 = strlen (word1);
  int len2 = strlen (word2);

  if (len1 != len2) {
    bIsSame = false;
  } else {
    for (int i = 0; i < len1 && bIsSame == true; i++) {
      if (word1[i] != word2[i]) {
        bIsSame = false;
      }
    }
  }

  return bIsSame;
}

void twodArray() {
  const int NUM_OF_STUDENTS = 3;
  const int NUM_OF_ASSIGNMENTS = 4;
  double sum = 0;
  int testScores[NUM_OF_STUDENTS][NUM_OF_ASSIGNMENTS] = {
    {100, 100, 100, 100},
    {50, 50, 50, 50},
    {0, 0, 0, 0}
  };
  /*{
    96, 57, 93, 92, 98, 54, 90, 50, 51, 53, 67, 96, 75, 99, 54, 100, 88, 
    99, 84, 62, 82, 89, 76, 77, 100, 50, 54, 65, 79, 63, 59, 81, 85, 55, 
    88, 64, 52, 60, 67, 80, 61, 94, 52, 65, 75, 100, 59, 54, 73, 94, 96, 
    89, 64, 92, 76, 76, 97, 78, 89, 53, 63, 54, 68, 82, 72, 97, 67, 76, 85, 97,
    58, 80, 75, 83, 83, 52, 67, 90, 60, 77, 91, 80, 67, 58, 68, 98, 96, 64, 76, 
    68, 85, 81, 96, 74, 84, 94, 67, 68, 66, 59, 52, 88, 52, 73, 70, 57, 87, 60, 
    84, 63, 92, 68, 88, 65, 53, 50, 51, 93, 56, 95, 96, 83, 78, 65, 61, 59, 86, 
    53, 65, 53, 80, 68, 64, 87, 78, 53, 88, 68, 100, 84, 79, 83, 90, 81
  }*/

  for (int i = 0; i < NUM_OF_STUDENTS; i++) {
    cout << "Assignment: " <<  i + 1 << ": ";
    for (int j = 0; j < NUM_OF_ASSIGNMENTS; j++) {
      sum += testScores[i][j];
    }
    cout << sum / NUM_OF_ASSIGNMENTS << endl;
  }

  cout << endl;

  for (int j = 0; j < NUM_OF_ASSIGNMENTS; j++) {
    cout << "Student: " <<  j + 1 << ": ";
    for (int i = 0; i < NUM_OF_STUDENTS; i++) {
      sum += testScores[i][j];
    }
    cout << sum / NUM_OF_STUDENTS << endl;
  }

  cout << endl;

}