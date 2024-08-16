#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <cctype> // For isdigit

using namespace std;

int main() {
    double BMI,weight,height=NULL;
    cout<<"please enter your weight in (kg)"<<endl;
    cin>>weight;
    cout<<"please enter height in meters"<<endl;
    cin>>height;
    double actualHeight = height*height;
    BMI = weight/actualHeight;
    cout<<"Your BMI is: "<<BMI;
    cout<<endl;
    cout<<"BMI VALUES\nUnderweight: less than 18.5\nNormal:      between 18.5 and 24.9\nOverweight:  between 25 and 29.9\nObese:       30 or greater"<<endl;
}

