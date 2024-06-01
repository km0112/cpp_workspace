#include <iostream> 
#include <string>
using namespace std; 

//(two) 2x2 matrices
//adds them together
//accepts four integer numbers (twice) 
//from the user to populate A and B
//create a third matrix, C[2][2]
//prints the contents of C 
int main()
{
    int A [2][2]; 
    int B [2][2];
    int C [2][2]; 

    cout<< "enter 8 integers" << endl;
    cin>> A[0][0];
    cin>> A[0][1];
    cin>> A[1][0]; 
    cin>> A[1][1];
    cin>> B[0][0];
    cin>> B[0][1];
    cin>> B[1][0];
    cin>> B[1][1]; 




    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            C[i][j] = A[i][j] + B[i] [j]; 
        }
    
    }

    cout << C[0][0] << "," << C[0][1] << endl;
    cout << C[1][0] << "," << C[1][1] << endl; 

} 