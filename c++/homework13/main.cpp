#include <iostream>
using namespace std;
class Income{
private:
    double income;
public:
    double gettaxrat();
    double calIncome();
    double getIncome() const {
        return income;
    }

    void setIncome(double income) {
        Income::income = income;
    }

    double getTaxrate() const {
        return taxrate ;
    }

    void setTaxrate(double taxrate) {
        Income::taxrate = taxrate;
    }

    double getWage() const {
        return wage;
    }

    void setWage(double wage) {
        Income::wage = wage;
    }

private:
    double taxrate,wage;
};
double Income::calIncome() {
   if(wage < 2000){
       taxrate=0;
       income=wage;
   }
   else if(wage > 2000 && wage < 4000){
       taxrate=0.05;
       income = wage - (wage-2000) * taxrate;
   }
   else if(wage > 2000 && wage  < 7000){
       taxrate = 0.1;
       income = wage - 2000 * 0.05 - (wage-4000) * taxrate;
   }
   else if(wage > 2000 && wage  < 12000){
       taxrate = 0.15;
       income = wage - 2000*0.05 - 3000*0.1 - (wage - 5000)*taxrate;
   }
   else if(wage > 12000){
       taxrate = 0.2;
       income = wage - 2000*0.05 - 3000*0.1 - 5000 * 0.15 -(wage-12000)*taxrate;
   }
    return income;
};
int main() {
    Income income;
    double a[5];
    for(int i=0;i<5;i++)cin>>a[i];
    for(int b=0;b<5;b++){
        income.setWage(a[b]);
        cout<<income.calIncome();
    }
    return 0;
}