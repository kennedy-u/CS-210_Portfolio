//Kennedy Uzoho
//SNHU CS 210
//9-29-2021

//This program is a simple investment calculator that calculates the future value of an investment with or without monthly deposits. The user is prompted to enter the initial investment amount, monthly deposit, annual interest rate, and the number of years. The program then calculates the future value of the investment with and without monthly deposits. The user is then prompted to enter another set of values or exit the program.

#ifndef SAVINGS_H_ 

#define SAVINGS_H_ //Include guards

class savings { //Class definition

public: //Public members

    savings(double investment, double monthDeposit, double rate, int years);

    virtual ~savings();

    void reportNoMonthlyDeposits();

    void reportWithMonthlyDeposits();



private: //Private members 

    double initialDeposit;

    double monthlyDeposit;

    double interestRate;

    int numYears;

};

#endif //SAVINGS_H_ 