# Cplusplus-Program

# Summary.
I created an application that allows users to see how their investments will grow over time. 

# What I did particularly well.
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

# Where I could enhance this code and how this will improve the efficeinecy and security
I think the code could have used error handling to effectively validate user input

# Challanges I faced when writing the code, how I overcome them and tools or resources I added to my support network
There wasn't much road_blocks during the development of my code, however, I was a little lost when I was designing the .h header file because it was almost my first time including a header file in a C++ program. I had to use the academic support service to further help myself,  and they explained in details how to include header files, I learned that classes should be declared in the header file and the define later in the source code per standard coding practices. 

# Skills I learned from this project that is tranferable to other projects or course work
Skills I learned from this project are how to include .h file properly, how to declare functions properly and do some calculations that were required during the development of the code. Although, throughout this course I deeply learned how to integrate C++ and Python!!!! lol, it took me time to fully digest how it works and now I can easily refer to the file path and do my configuration how I want it or as specified.
Thanks for reading :)
