#include <iostream> 
#include <string>
using namespace std; 

//6 hw 40%
//2 midterms 40%
// 1 final


// int numHw, numMidterms, numFinals; 
// cout << "How many Homework assignments do you have? " << endl; 
// cin>>numHw; 

// cout<<"How many midterms do you have?"<< endl; 
// cin>>numMidterms;

// cout<<"How many Finals do you have?" << endl; 

// float avgHw, avgMidterm, avgFinal; 

int main(){
float hw1;
float hw2;
float hw3;
float hw4;
float hw5;
float hw6;
float hwPoints;

cout << "input hw grades" << endl; 
cin >> hw1; 
cin >> hw2;
cin >> hw3; 
cin >> hw4;
cin >> hw5;
cin >> hw6; 

hwPoints = ((hw1+hw2+hw3+hw4+hw5+hw6)/6)*0.4; 

float m1,m2,mPoints; 

cout << " input midterm grades " << endl; 
cin>>m1;
cin>>m2; 

mPoints = ((m1+m2)/2)* 0.40; 

float final,fPoints;
cout<<"input grade for final" << endl; 
cin>>final; 

fPoints = (final*0.2); 

float totalGrade; 

totalGrade= (hwPoints+mPoints+fPoints);
//this gives percentage (not in decimal point form). Gives score out of 100

if(totalGrade >=91)
{
    cout<< "Grade = [A]" << endl; 
}

else if(totalGrade>=81 && totalGrade < 91)
{
    cout<< "Grade = [B]" << endl; 
}

else if(totalGrade >=71 && totalGrade < 81)
{
    cout<< "Grade = [C]" << endl; 
}

else if(totalGrade >=61 && totalGrade < 70)
{
    cout<< "Grade = [D]" << endl; 
}

else
{
    cout << "Grade = [F]" << endl; 
}
}

