# CS-210 Portfolio
CS-210 Projects

## [Project 1 - Clock App](Project%201%20-%20Clock%20App)
A 12 and 24-hour console clock app written in C++.

Display 12-hour clock format where the clock does not exceed 12:59:59, display 24-hour clock format where the clock does not exceed 23:59:59,
and both clocks will synchronously  display the host current time in a proper format.

![Image](images/Clock-App.jpg)

## [Project 2 - Investment Banking App](Project%202%20-%20Investment%20Banking%20App)
Investment/compound interest console app written in C++.

An application that allows user to see how their investment will grow over time.
A screen that takes initial investment amount, monthly deposit, annual interest (compound) and number of years.

![Image](images/Investment_input.png)

The screen displays two static reports: the first shows year-end balances and earned interest if no additional monthly deposits are made, while the second shows year-end balances and earned interest based on the monthly deposit value entered by the user (e.g., $50.00). See below:

![Image](images/Investment_output.jpg)
[Project 2 Flowchart](docs/Project%202%20Flowchart.pdf)

<<<<<<< HEAD
## What I did particularly well.
I successfully incorporated a user interface that includes all the required elements. I designed a calculator that computes monthly interest, annual interest rate, and divides the rate by 12. Below is the code to calculate the interest earned over a given year.
=======
## [Project 3 - Inventory Tracking App](Project%203%20-%20Inventory%20%20Tracking%20App)
Inventory tracker console app written in C++ and Python.
>>>>>>> f169d443caa69b2c103062a9b622b59d58ecabab

Reads in a given text-based file that conatains a list of purchased items for a single day, with the item being listed each time it is sold. The app will produce a list of all items sold in a given day along with the number of times each item was sold. It will display a number representing how many times a specific item was purchased in a given day and produce a text-based histogram listing all items purchased in a given day, along with a representation of the number of times each item was purchased. See below

![Image](images/Inventory_app_menu.png)  
![Image](images/Inventory_app_items_sold_option.png) 
[Project 3 Programming Languages Explanation](docs/Project%203%20Programming%20Language%20Explanation.pdf)

## What I did particularly well in project 3.
Integrated interface that incorporates all the necessary elements. Specifically, I designed a calculator that computes both monthly interest and the annual interest rate, which is then divided by 12. In this repo, you’ll find the code to calculate the interest earned over a given number of years.

## Challanges I faced when writing the code and how I overcome them.
During the development and integration of my sources, I encountered minimal roadblocks. However, I faced some roadblocks when I was designing the .h header file(s). It was nearly my first time including a header files in a C++ program. To make things easier I requested assistance from the academic support service where I learned everything about header files.

Here are things I learned during that process.

Header File Purpose: Header files (.h) serve as declarations for classes, functions, and variables. They provide an interface for other parts of the program.
Separation of declaration and definition are standard practice in C++, you can declare classes and their methods in the header file and later define them later in the source code (.cpp files).

<<<<<<< HEAD
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
There weren't many roadblocks during the development of my code; however, I did encounter some confusion when designing the .h header file, as it was one of my first experiences including a header file in a C++ program. I sought help from the academic support service, where they provided a detailed explanation of how to include header files. I learned that, according to standard coding practices, classes should be declared in the header file and defined later in the source code.

## Skills I learned from this project that is tranferable to other projects or course work
From this project, I gained valuable skills, including properly including .h files, declaring functions correctly, and performing the necessary calculations during code development. Throughout this course, I also learned how to integrate C++ with Python. Although it took time to fully grasp, I can now easily reference file paths and configure settings as needed or specified.
=======
## Skills I learned from this project that are tranferable to other projects or course work.
Skills I learned from this projects include how to declare functions properly, do some calculations and logic that are required during the development of a project source code. Throughout this course I deeply learned how to integrate C++ and Python!!!! It took me some time to fully digest how these processes work. Now I can easily refer to the file path and do my configuration how I want it or as required.
Thanks for reading :)
>>>>>>> f169d443caa69b2c103062a9b622b59d58ecabab
