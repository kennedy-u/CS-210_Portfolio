//Kennedy Uzoho
//CS 210
//9-29-2021

//This program is a simple investment calculator that calculates the future value of an investment with or without monthly deposits. The user is prompted to enter the initial investment amount, monthly deposit, annual interest rate, and the number of years. The program then calculates the future value of the investment with and without monthly deposits. The user is then prompted to enter another set of values or exit the program.

#include <iostream>

#include "Investment.h"

using namespace std;

int main()

{

    while (1)

    {

        //Print heading

        cout << "*************************************" << endl;

        cout << "*************Data Input**************" << endl;

        cout << "Initial Investment Amount: " << endl;

        cout << "Monthly Deposit: " << endl;

        cout << "Annual Interest: " << endl;

        cout << "Number of years: " << endl;

        system("PAUSE");

        cout << endl;

        //Get the inputs from user

        cout << "*************************************" << endl;

        cout << "*************Data Input**************" << endl;

        cout << "Initial Investment Amount: $";

        double investment, monthlydeposit, interestrate;

        int years;

        cin >> investment;

        cout << "Monthly Deposit: $";

        cin >> monthlydeposit;

        cout << "Annual Interest: %";

        cin >> interestrate;

        cout << "Number of years: ";

        cin >> years;


        system("PAUSE");

        //Create savings object using the given inputs

        savings mysavings = savings(investment, monthlydeposit, interestrate, years);

        cout << endl;

        //Invoke the report methods

        mysavings.reportNoMonthlyDeposits();

        cout << endl;



        //call monthly deposit report, if it has monthly deposit at least $1

        if (monthlydeposit > 0) {

            mysavings.reportWithMonthlyDeposits();

        }



        //Get the user choice if they want to try another

        cout << endl << "Do you want to try another? (y/n): ";

        string choice;

        cin >> choice;

        //If user doesnot want to try another, break the loop

        if (choice != "y") {

            break;

        }

        cout << endl;

    }

    return 0;

}
