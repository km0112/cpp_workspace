#include <iostream> 
#include <string>
using namespace std;

void printGreeting()
{
    cout<< "Have a great day" << endl; 
}

void divideNumbers(float x, float y)
{
    if(y==0)
    {
        cout<<"Cannot perform division" << endl; 
    }

    else
    {
        cout<< x/y << endl; 
    }
}

int factorial(int num)
{
    int total = 1; 
    if(num<0) 
    {
        return 0; 
    }

    while(num > 0)
    {
       total *= (num); 

       num = num-1; 
    }
    return total; 
}

void fibonacci(int N)
{
    int a = 0; 
    int b = 1;  
    // 0 1 1 2 3 5 8
    
    if(N < 0 || N==0)
    {
        cout<< "0" << endl; 
    }
    if(N==1)
    {
        cout << "0,1" << endl; 
    }
    if(N==2)
    {
        cout << "0,1,1" << endl; 
    }
    cout << endl; 
    cout << "0" << endl; 
    cout<< "1" << endl; 
    for(int i=2; i<N ; i++)
    {
        int result = a+b; 
        cout << result << endl;
        a = b;
        b = result; 
    }
       
}

int main()
{
    printGreeting(); 

    cout<< "please enter two decimals" << endl; 
    float x,y; 
    cin>>x;
    cin>>y; 

    cout << "the quotient of these numbers is "; 
    divideNumbers(x,y);
    cout << endl; 

    int num; 
    cout<< "Please enter an integer" << endl; 
    cin>>num; 
    cout<< "this is the factorial of that number" << factorial(num);  
    cout << endl; 

    int N; 
    cout<< " Please enter an integer" << endl; 
    cin>>N; 
    cout<< "This is the fibonnaci sequence number";
    fibonacci(N);  
    cout << endl; 





}