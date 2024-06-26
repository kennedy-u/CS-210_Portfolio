/**
 * Kennedy Uzoho
 * CS-210
 * Project 3
 *
 * Main Method
 */


#ifndef PROJECT_1_UTILITIES_H
#define PROJECT_1_UTILITIES_H

#include <string>

using namespace std;

/**
 * Utilities class for general methods.
 */
class Utilities {
public:
	static string repeatingChar(char t_leadingChar, int t_outputLength, const string& t_input = "");
	static string alternatingChar(char t_firstChar, char t_secondChar, int t_outputLength, const string& t_input = "");
	static string generateHeader(string t_headerValue, int t_headerWidth, const string& t_errorValue = "");
	static bool validateIntegerInput(const string& t_input, int& t_number);
	static bool confirmation(const string& t_confirmationMessage);
	static void pauseUntilEnter();
	static void clearScreen();
};

#endif //PROJECT_1_UTILITIES_H