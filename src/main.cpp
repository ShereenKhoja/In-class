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

  return EXIT_SUCCESS;
}

bool isEqual (const char word1[], const char word2[]) {
  return false;
}