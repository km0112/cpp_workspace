#include <iostream> 
#include <string>
using namespace std; 

//accepts an indefinite 
//set of numbers until the user enters “-1”
//(i) the sum of all numbers entered 
//(ii) the minimum value seen across all numbers 
//(iii) the maximum value across all numbers

int main()
{
    int input; 
    int total = 0; 
    int min = INT_MAX; 
    int max = INT_MIN; 
    while(input != -1)
    {
        cout<< "enter an integer" << endl; 
        cin>>input; 

        if(input == -1)
        {
            break; 
        }
            total = total+input; 

            if(input < min)
            {
            min = input;
            }

            if(input > max)
            {
                max = input; 
            }
        
    }

    cout<< "the sum of the numbers is" << total << endl;
    cout<< "the min of the numbers is"<< min << endl;
    cout<< "the max of the numbers is"<< max<<endl; 
}