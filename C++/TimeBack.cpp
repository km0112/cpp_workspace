#include <iostream>
#include <string>
using namespace std; 

//create an algorithm that sorts a list of given topics by type and after every work topic it puts a break. 
//Does this for any length of list 

//you need to know the length of the list 
//you need to be able to delete an item from the list then move things around again so it is resorted 
//you need to indicate how many items are completed (should be completed) at a given time 
//each task is a node in an array based list 

struct Task 
{
    string task;
    string subject; 
    float time;
};

Task sortByT5(Task taskList[], int Length, int stem, int hum) 
{
    //create list of STEM tasks
    //create list of Humanities tasks 
    //whichever list is longer, add first element of that list 

    int L1 = 0; //cannot exceed max length of list
    int L2 = 0; //cannot exceed max length of list 
    //when you add an element of a list, increment L1 or L2 by one 
    int i = 1; 

    //every odd position put a break 
    Task sortedByT5[Length+Length-1]; 
    Task STEM[stem]; 
    Task HUM[hum]; 
    int d=0;
    int c=0;  
    for(int i=0; i<Length; i++)
    {
     if(taskList[i]->subject == "Math" || "Science")
        {
            STEM[d] = taskList[i]; 
            d++;
        }

    if(taskList[i]->subject == "CS" || "Physics")
        {
            STEM[d] = taskList[i]; 
            d++; 
        }
    }

    else
    {
        HUM[c] = taskList[i]; 
        c++; 
    }

    for(int j = 0; j<Length; j++)
    {
        int k = 0; 
        if(taskList[j]->subject == "Math" || "Science")
        {
            STEM[k] = taskList[j]; 
            k++; 
        }
        if(taskList[j]->subject == "CS" || "Physics")
    }

    if(stem>hum)
    {
        sortedByT5[0] = STEM[0]; 
        L1++; 
    }

    if(hum>stem)
    {
        sortedByT5[0] = HUM[0]; 
        L2++; 
    }

if(sortedByT5[0] == HUM[0];)
{
    while(i<Length+Length-1)
    {
        if(i%2 == 1) //if position is odd, sets it to a break 
        {
            sortedByT5[i] == NULL; 
        }
        i++; 

        sortedByT5[i] = STEM[L1]; 
        L1++; 
        i++;

        if(i%2 == 1) //if position is odd, sets it to a break 
        {
            sortedByT5[i] == NULL; 
        }
        i++; 

       

        sortedByT5[i] = HUM[L2]; 
        L2++; 
        i++;

    }
}

    //every i-2 position must have a different 
    return sortedByT5[]; 
}



int main()
{
    int numSTEM = 0;
    int numHum= 0; 
    int numTasks = 0; 
    cout<<"How many tasks do you want to put in?"<<endl; 
    cin>>numTasks
    Task taskList[numTasks];

    //checks how many tasks of each subject 
    for(int i=0; i<numTasks; i++)
    {
        if(taskList[i]->subject == "Math" || "Science")
        {
            numSTEM++; 
        }

        if(taskList[i]->subject == "CS" || "Physics")
        {
            numSTEM++; 
        }

        else
        {
            numHum++; 
        }
    }

}