// {CPP-2022-P5}: Convert Days To Years Months And Days
// Source Code: github.com/mrtechtroid/yt


#include <iostream>
using namespace std;

int main(){
    int days,months,years;
    cout << "Days:";
    cin >> days;
    years = days/365;
    days = days % 365;
    months = days/30;
    days = days % 30;
    cout << "Days:" << days << " Months:" << months << " Years:" << years << endl;


    return 0;
}