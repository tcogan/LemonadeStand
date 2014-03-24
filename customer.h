#ifndef CUSTOMER_H
#define CUSTIMER_H

class customer{

        private:
                customer();                     //constructor to create a customer
                void set_prefSugar(int);        //set functions
                void set_prefLemons(int);
                void set_prefIdealPrice(int);
                int get_prefSugar();            //get functions
                int get_prefLemons();
                int get_prefIdealPrice();

        public:
               int prefSugar;          //preferred amount of sugar
                int prefLemons;         //preferred amount of lemons
                int prefIdealPrice;             //price the customer wants
};

#endif
