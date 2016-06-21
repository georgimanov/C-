// DataStructuresTutorial.cpp : Defines the entry point for the console application.

#include "stdafx.h"

// String Streams
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct movieStruct {
	string title;
	int year;
};

void printmovie(movieStruct movie);

int main()
{		
	movieStruct firstMovie;
	firstMovie.title = "Iron Man";
	firstMovie.year = 2008;

	movieStruct secondMovie;
	
	cout << "Provide movie title: ";
	getline(cin, secondMovie.title);
	
	cout << "Provied movie year: ";
	string input;
	getline(cin, input);
	stringstream(input) >> secondMovie.year;
	
	cout << "My favorite movie is:\n ";
	printmovie(firstMovie);
	cout << "And yours is:\n ";
	printmovie(secondMovie);

	return EXIT_SUCCESS;
}

void printmovie(movieStruct movie)
{
	cout << movie.title;
	cout << " (" << movie.year << ")\n";
}
