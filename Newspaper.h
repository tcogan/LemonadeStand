
/*Isabelle Hillberg, lab7/8,
CSE20212, Newspaper.h*/

#ifndef NEWSPAPER_H
#define NEWSPAPER_H

#include<iostream>

using namespace std;

class Newspaper{
        public:
        Newspaper(); //default, uses random number generator for eventNum
        Newspaper(int); //takes input for eventNum
        void eventSelector(); //selects an event and updates variables
        void printPaper(); //prints paper, displays weather, event in town
        int getWeather(); //returns weather for the day (int for now, may have class of own later)
        int getCustNumChange(); //returns change in number of customers
        int getCustSpendingChange(); //returns change in customer spending flexibility
        int getCustFlexibility(); //returns flexibility factor

        private:
        int eventNum; //event number
        int custNumChange; //change in customer number
        int weather; //int corresponding to weather
        int custSpending; //spending flexibility
        int custFlexibility; //recipe flexibility


};
#endif
