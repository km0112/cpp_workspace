#include <iostream> 
#include <string>
using namespace std; 

//(i) prompts the user to enter two integer values, and is able to perform basic math (+, -, *, /) on them,
//(ii) prompts the user to enter two floating point values, and is able to perform basic math on them, and
//Shooting for higher gustos? Try these challenges:

//Check+: Write a program that is able to perform advanced math operations, such as powers, sine, cosine, etc. 
//you will have to include math libraries and use the built in functions.

int main()
{
    int x,y; 
    float a,b;

    cout<<"Enter two ints"<< endl;
    cin>>x;
    cin>>y; 

    cout<<"Enter two floats"<<endl;
    cin>>a;
    cin>>b; 

    cout<< "The sum of the ints is " << x+y << endl; 
    cout<< "x minus y equals "<< x-y << endl; 
    cout<< "The product of x and y is " << x*y <<endl; 
    cout<< "The quotient of x and is " << x/y <<endl; 
    cout<< "x to the power of y is " << pow(x,y) <<endl; 
    cout<< "cosx and cosy are " << cos(x) << cos(y) << endl; 
    cout<< " sinx and siny are " << sin(x) << sin(y) <<endl; 
    cout<< " tanx and tany are " << tan(x) << tan(y)<<endl; 
    cout<< " e to the power of x and e to the power of y are " << exp(x) << exp(y) << endl; 


    cout<< "The sum of the floats is " << a+b << endl; 
    cout<< "a minus b equals "<< a-b << endl; 
    cout<< "The product of a and b is " << a*b <<endl; 
    cout<< "The quotient of a and b is " << a/b <<endl; 
    cout<< "a to the power of b is " << pow(a,b) <<endl; 
    cout<< "cosa and cosb are " << cos(a) << cos(b) << endl; 
    cout<< " sina and sinb are " << sin(a) << sin(b) <<endl; 
    cout<< " tana and tanb are " << tan(a) << tan(b)<<endl; 
    cout<< " e to the power of a and e to the power of b are " << exp(a) << exp(b) << endl; 

//(iii) prompts the user to enter two ‘string’ values (e.g., name and address) and is able to concatenate 
//these two strings and print back the result.

string activity,food,part1,part2;

cout << "What is your favorite activity?" << endl;
cin>>activity;

cout<< "What is your favorite food?" << endl; 
cin>>food; 

part1 = "Your favorite activity is ";
part2 = " and your favorite food is ";

cout<< part1+activity+part2+food << endl; 




}