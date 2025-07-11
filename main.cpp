#include<iostream>
#include<limits>
using namespace std;

int main () {
    int inpt = 1;
    int x;
    double y;

    do {
        cout<<"Choose Your Input Option"<<endl<<endl;
        cout<<"1 for Kilometer"<<endl<<"2 for Foot"<<endl<<"3 For Miles"<<endl<<"4 For Meter"<<endl<<endl;
        cout<<"Enter Your Input (1-4): ";
        cin>>x;
        cout<<endl;

        while (cin.fail() || x < 1 || x > 4) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter 1 to 4: ";
            cin >> x;
        }

        cout<<"Enter Your Number To Convert: ";
        cin>>y;
        cout<<endl<<endl;

        while (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid number. Please enter a valid number: ";
            cin >> y;
        }

        switch (x) {
            case 1 :
                cout<<"Kilometer to Foot : "<<y * 3280.84<<endl;
                cout<<"Kilometer to Miles : "<<y * 0.621371<<endl;
                cout<<"Kilometer to Meter : "<<y * 1000<<endl;
                break;
            case 2 :
                cout<<"Foot to Kilometer : "<<y * 0.0003048<<endl;
                cout<<"Foot to Miles : "<<y * 0.000189394<<endl;
                cout<<"Foot to Meter : "<<y * 0.3048<<endl;
                break;
            case 3 :
                cout<<"Miles to Kilometer : "<<y * 1.60934<<endl;
                cout<<"Miles to Foot : "<<y * 5280<<endl;
                cout<<"Miles to Meter : "<<y * 1609.34<<endl;
                break;
            case 4 :
                cout<<"Meter to Kilometer : "<<y * 0.001<<endl;
                cout<<"Meter to Foot : "<<y * 3.28084<<endl;
                cout<<"Meter to Miles : "<<y * 0.000621371<<endl;
                break;
        }

        cout<<"\nDo you want to perform another conversion? Enter 1 for Yes, 0 for No: ";
        cin>>inpt;

        while (cin.fail() || (inpt != 0 && inpt != 1)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter 1 for Yes, 0 for No: ";
            cin >> inpt;
            cout<<endl<<endl;
        }

    } while (inpt == 1);

    return 0;
}

