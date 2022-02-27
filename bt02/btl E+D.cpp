#include <iostream>
//#include <algorithm> //sort, swap, minmax, reverse,...
#include <cmath> // cac ham toan hoc,sin cos tan,pow,sqrt,ceil round floor trunc, abs...
#include <cstdio> //freopen, printf,scanf,...(cac ham ve file or in(out)put)
#include <iomanip> //setprecision
//#include <string>
//#include <vector>
//#include <bits/stdc++.h>
using namespace std;
#define forup(i,a,b) for(int i=a;i<b;i++)
#define fordown(i,a,b) for(int i=a;i>=b;i--)
typedef long long ll;
typedef double db;
typedef float fl;
#define MONEY_PER_HOUR_TYPE1 12000
#define MONEY_PER_HOUR_TYPE2 16000
#define MONEY_PER_HOUR_TYPE3 20000
#define MONEY_PER_HOUR_TYPE4 25000
int salaryOfWorker(int numWorkingHour){
    int money=0;
    if(numWorkingHour>100){
        money=100*MONEY_PER_HOUR_TYPE1;
        numWorkingHour-=100;
        if(numWorkingHour>50){
            money+=50*MONEY_PER_HOUR_TYPE2;numWorkingHour-=50;
            if(numWorkingHour>50){
                money+=50*MONEY_PER_HOUR_TYPE3;numWorkingHour-=50;
                if(numWorkingHour>0)money+=numWorkingHour*MONEY_PER_HOUR_TYPE4;
            }
            else money+=numWorkingHour*MONEY_PER_HOUR_TYPE3;
        }
        else money+=numWorkingHour*MONEY_PER_HOUR_TYPE2;
    }
    else money= numWorkingHour*MONEY_PER_HOUR_TYPE1;
    return money;
}
int insuranceMoney(int salary){
    return round(salary*0.09);
}
#define PERCENT_TAX_TYPE1 0.1
#define PERCENT_TAX_TYPE2 0.15
#define PERCENT_TAX_TYPE3 0.2
int taxMoney(int salary){
    int tax=0;
    if(salary>1000000){
        salary-=1000000;
        if(salary<=500000)tax+=round(salary*PERCENT_TAX_TYPE1);
        else{
            tax+=500000*PERCENT_TAX_TYPE1;salary-=500000;
            if(salary<=500000)tax+=round(salary*PERCENT_TAX_TYPE2);
            else{
                tax+=500000*PERCENT_TAX_TYPE2;salary-=500000;
                if(salary>0)tax+=round(salary*PERCENT_TAX_TYPE3);
            }
        }
    }
    return tax;
}
int salaryAfterTax_and_Insur(int salary){
    return salary-taxMoney(salary-insuranceMoney(salary))-insuranceMoney(salary);
}
#define PERCENT_INTEREST_PER_MONTH 0.02
int loanAfterOneYear(int loan){
    for(int i=1;i<=12;i++){
        loan+=round(loan*PERCENT_INTEREST_PER_MONTH);
    }
    return loan;
}
void loanAfterOneMonth(int &loan,int istreamMoney,int &countMonth){
    if(loan<=istreamMoney){
        cout<<" "<<countMonth<<" "<<loan<<" ";loan=0;
    }
    else{
        loan-=istreamMoney;
        cout<<round(loan*PERCENT_INTEREST_PER_MONTH)<<endl;
        loan+=round(loan*PERCENT_INTEREST_PER_MONTH);
        cout<<" "<<loan<<endl;
        countMonth++;
    }
}
int main()
{
    cout<<fixed<<setprecision(2);
    int numWorkingHour,loan,grantOfParents,pay4LifePerMonth;
    cin>>loan>>grantOfParents>>pay4LifePerMonth;
    int countMonth=0;
    loanAfterOneMonth(loan,0,countMonth);cout<<endl;
    while (cin>>numWorkingHour&&loan>0){
        int income=salaryAfterTax_and_Insur(salaryOfWorker(numWorkingHour));
        cout<<countMonth<<" "<<income<<endl;
        int istreamMoney=income+grantOfParents-pay4LifePerMonth;
        loanAfterOneMonth(loan,istreamMoney,countMonth);
        cout<<endl;
    }
    return 0;
}
