// {CPP-2022-P7}: Check Whether A Year Is A Leap Year Or Not
// Source Code: github.com/mrtechtroid/yt


#include <iostream>
using namespace std;

int main(){
    int year;
    cout << "Year:";
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        cout << "Its A Leap Year" << endl;
    } else {
        cout << "Its Not A Leap Year" << endl;
    }

    return 0;
}