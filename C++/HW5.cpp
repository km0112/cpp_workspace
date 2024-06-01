 
#include <iostream> 
#include <string>
using namespace std;
int main()
{
    int x;

    cout<<"enter an int value for the matrix size"<< endl;
    cin>>x; 



    int A [x][x];
    int B [x][x]; 
    int C [x][x]; 
//enters values for matrices A and B 
    cout<<"This is for matrix A"<<endl; 
    
    for(int f=0; f<x; f++)
    {
       for(int g=0; g<x; g++) 
       {
         cout<<"enter an int "<< endl; 
         cin>> A[f][g]; 
       }
    }

    cout<<"this is for matrix B"<<endl; 

    for(int h=0; h<x; h++)
    {
       for(int l=0; l<x; l++) 
       {
         cout<<"enter an int "<< endl; 
         cin>> B[h][l]; 
       }
    }

    for(int m=0; m<x; m++)
    {
       for(int n=0; n<x; n++) 
       {
         C[m][n] = 0; 
       }
    }
//multiplies matrices
    for (int i = 0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        {
            for (int k = 0; k<x; k++)
            {
                C[i][j] += A[i][k] * B[k][j]; 
                
            }
        }
    }
//prints matrix C 
    for(int d=0; d<x; d++)
    {
      for(int e=0; e<x; e++)
      {
          cout<< C[d][e] << " "; 
      }
      cout<<endl; 
    }
}