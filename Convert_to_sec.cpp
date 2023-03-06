#include <iostream>

using namespace std;

long hms_to_secs(int hrs, int mins, int secs);
int convert_Hrs_to_sec(int hrs);
int convert_mins_to_sec(int mins);

int main(){
    // declare variables to store the time
    int hours;
    int minutes;
    int secs;

    // Ask user to enter the time for conversion
    cout<<"\n\nLet's convert some time into secs!!"<<endl;
    cout<<"Enter time (Format(24hrs): HH/MM/SS)"<<endl;
    cout<<"HH: ";
    cin>>hours;
    cout<<"MM: ";
    cin>>minutes;
    cout<<"SS: ";
    cin>>secs;

    // Display time in the format HH/MM/SS
    cout<<"\t\t\t Your time is: "<<hours<<":"<<minutes<<":"<<secs<<endl;

    // Call the convert hours to secs functions to convert the hours into secs
    int Hours = convert_Hrs_to_sec(hours);

    // Call the convert mins to secs function to convert the mins to secs
    int Mins = convert_mins_to_sec(minutes);

    // Convert entire time into seconds
    long time = hms_to_secs(Hours,Mins,secs);

    // Print out the time in seconds
    cout<<"\n\t\t\tYour time in seconds is: "<<time<<"s"<<endl;
}


int convert_Hrs_to_sec(int hrs){
    int hours = hrs;
    long hours_sec = hours * 60 * 60;
    return hours_sec;
}

int convert_mins_to_sec(int mins){
    int minutes = mins;
    long mins_sec = mins * 60;
    return mins_sec;
}

long hms_to_secs(int hrs, int mins, int secs){
    long time_in_secs = hrs + mins + secs;
    return time_in_secs;
}
