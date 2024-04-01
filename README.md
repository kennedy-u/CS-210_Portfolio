# CS-210 Portfolio
CS-210 Projects

## [Project 1 - Clock App](Project%201%20-%20Clock%20App)
A 12 and 24-hour console clock app written in C++.

Display 12-hour clock format where the clock does not exceed 12:59:59, display 24-hour clock format where the clock does not exceed 23:59:59,
and both clocks will synchronously  display the host current time in a proper format.

![Image](images/Clock-App.jpg)

## [Project 2 - Investment Banking App](Project%202%20-%20Investment%20Banking%20App)
Investment/compound interest console app written in C++.

An application that allows users to see how their investment will grow over time.
A screen that takes initial investment amount, monthly deposit, annual interest (compound) and number of years.

![Image](images/Investment_input.png)

A screen that displays two static reports. One for year-end balances and year-end earned interest if no additional monthly deposits are made. The second displays the year-end balances and year-end earned interest based on the monthly deposit value that was input by the yser ($50.00 in this example). See below

![Image](images/Investment_output.jpg)

## [Project 3 - Inventory Tracking App](Project%203%20-%20Inventory%20%20Tracking%20App)
Inventory tracker console app written in C++ and Python.

Reads in a given text-based file that conatains a list of purchased items for a single day, with the item being listed each time it is sold. The app will produce a list of all items sold in a given day along with the number of times each item was sold. It will display a number representing how many times a specific item was purchased in a given day and produce a text-based histogram listing all items purchased in a given day, along with a representation of the number of times each item was purchased. See below

![Image](images/Inventory_app_menu.png)  
![Image](images/Inventory_app_items_sold_option.png) 

## What I did particularly well.
I did well in including a user interface that include all the required elements. 
I designed a calculator that calculated monthly interest, interest rate for annual, and I divide the rate by 12.
Below is the code to calculate the given year and interest earned

    int currentyear = 1;

    double yearendBalance = this->initialDeposit;

    while (currentyear <= this->numYears) {

        //calulate interest monthly and find compoud interest

        int month = 1;

        double interestearned = 0.0;

        double monthendbalance = yearendBalance;

        while (month <= 12) {

            //Add monthly deposit

            monthendbalance += this->monthlyDeposit;

            //Calculate monthly interest, interest rate is for annual. so divide the rate by 12

            double monthlyinterest = monthendbalance * this->interestRate / (100 * 12);

            //Add the monthly interest to yearly interest earned

            interestearned += monthlyinterest;

            // add the interest to monthend balance

            monthendbalance += monthlyinterest;

            //Increase the month by 1

            month++;

        }

## Where I could enhance this code and how this will improve the efficeinecy and security
I think the code could have used error handling to effectively validate user input

## Challanges I faced when writing the code, how I overcome them and tools or resources I added to my support network
There wasn't much road_blocks during the development of my code, however, I was a little lost when I was designing the .h header file because it was almost my first time including a header file in a C++ program. I had to use the academic support service to further help myself,  and they explained in details how to include header files, I learned that classes should be declared in the header file and the define later in the source code per standard coding practices. 

## Skills I learned from this project that is tranferable to other projects or course work
Skills I learned from this project are how to include .h file properly, how to declare functions properly and do some calculations that were required during the development of the code. Although, throughout this course I deeply learned how to integrate C++ and Python!!!! lol, it took me time to fully digest how it works and now I can easily refer to the file path and do my configuration how I want it or as specified.
Thanks for reading :)
