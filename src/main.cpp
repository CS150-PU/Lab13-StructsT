//******************************************************************************
// File name:   main.cpp
// Author:      
// Date:        
// Class:       
// Assignment:  
// Purpose:     
// Hours:       
//******************************************************************************

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int MAX_WORDS = 50;

struct Word {
	string mWord;
	string mDefinition;
	string mExampleUsage;
};

void readWord (ifstream &inFile, Word &sWord);

void readAllWords (Word sWords[], int &numWords, string fileName);

void displayWord (const Word &sWord);

void displayAllWords (const Word sWords[], int numWords);

void removeWord (Word sWords[], int &numWords, const Word &sWord);

/***********************************************************************
Function:			main

Description:	A simple driver that shows the use of a simple dictionary.

Parameters:		None

Returned:			return status
***********************************************************************/
int main () {
	const string FILE_NAME = "data/dictionary.txt";
	const Word SODIUM = { "sodium", "", "" };
	const Word COMPUTER = { "computer", "", "" };
	const Word CABBAGE = { "cabbage", "", "" };
	const Word NO_WORD = { "", "", "" };

	Word sWords[MAX_WORDS];
	int numWords = 0;

	readAllWords (sWords, numWords, FILE_NAME);
  cout << "DISPLAYING THE ORIGINAL DICTIONARY" << endl;
	displayAllWords (sWords, numWords);
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl << endl;
  cout << "REMOVED THE WORD " << SODIUM.mWord << endl;
	removeWord (sWords, numWords, SODIUM);
	displayAllWords (sWords, numWords);
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl << endl;
  cout << "REMOVED THE WORD " << COMPUTER.mWord << endl;
	removeWord (sWords, numWords, COMPUTER);
	displayAllWords (sWords, numWords);
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl << endl;
  cout << "REMOVED THE WORD " << CABBAGE.mWord << endl;
	removeWord (sWords, numWords, CABBAGE);
	displayAllWords (sWords, numWords);
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl << endl;
  cout << "REMOVED THE WORD " << CABBAGE.mWord << endl;
	removeWord (sWords, numWords, CABBAGE);
	displayAllWords (sWords, numWords);

	return EXIT_SUCCESS;
}

/***********************************************************************
Function:			readWord

Description:	Reads a single word's information from an open file. The
							word, defintion, and usage are each on a separate line in
							the file. getline accepts an open file reference and
							a string variable. Characters up until the newline
							character (or end of file) are read into the string
							variable. The newline character is removed from the
							stream.

Parameters:		inFile - stream to use for data input
							sWord	 - the word to be read

Returned:			None
***********************************************************************/
void readWord (ifstream &inFile, Word &sWord) {

}

/***********************************************************************
Function:			readAllWords

Description:	Opens the file and then reads each word from the 
              file one at a time using the function readWord.
              Then closes the file.
							HINT: You can check for the end of the file using 
              inFile.eof (). For example,
              while (!inFile.eof()) {

              }
              will stop once the end of the file is reached

Parameters:		sWords	 - the array of words
							numWords - number of words in the array
							fileName - name of text file to open and read from

Returned:			None
***********************************************************************/
void readAllWords (Word sWords[], int &numWords, string fileName) {

}

/***********************************************************************
Function:			displayWord

Description:	Displays a single word's information from the dictionary 
              in the form:
              Word: ....
              Definition: ...
              Sample Usage: ...

Parameters:		sWord	 - the word to be displayed

Returned:			None
***********************************************************************/
void displayWord (const Word &sWord) {

}

/***********************************************************************
Function:			displayAllWords

Description:	Displays all the words, definitions, and sample usages

Parameters:		sWords	 - the array of words
							numWords - number of words in the array

Returned:			None
***********************************************************************/
void displayAllWords (const Word sWords[], int numWords) {

}

/***********************************************************************
Function:			removeWord

Description:	Removes a word from the dictionary if it exists. If the
							word does not exist, do nothing.

Parameters:		sWords	 - the array of words
							numWords - number of words in the array
							sWord		 - word to be removed if it exists

Returned:			None
***********************************************************************/
void removeWord (Word sWords[], int &numWords, const Word &sWord) {

}