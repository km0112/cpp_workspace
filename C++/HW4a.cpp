#include <iostream> 
#include <string>
using namespace std; 

//Write a program that accepts exactly ten integers 
//(i) print the sum of the 10 numbers, 
//(ii) print the minimum value from the 10 numbers
//(iii) print the maximum value from the 10 numbers.

int main()
{
    int array[10]; 
    int min = INT_MAX; 
    int max = INT_MIN; 
    int sum = 0;
    int input;  
    
    for( int i=0; i<10; i++)
    {
        cout << "Enter an integer" << endl;
        cin>>input;
        array[i]=input; 
    }

     for( int i=0; i<10; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
        
        if(array[i] < min)
        {
            min = array[i]; 
        }
    }

    for( int i=0; i<10; i++)
    {
        sum = sum + array[i]; 
    }

    cout << "Your min is " << min << endl; 
    cout << "Your max is " << max << endl; 
    cout << "The sum of the array is" << sum << endl; 

    

    



}