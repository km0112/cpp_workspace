#include <iostream> 
#include<fstream> 
#include <string>
using namespace std;

string firstname, lastname, email, phonenumber, line; 

//creates a new contact 
void newContact() 
{
    ofstream contact;
    contact.open("contact.txt", ios::app);
    contact<< firstname<< ""<< lastname<< " "<< email << " " << phonenumber << endl;
    contact.close();       
}

//finds a contact using a name
void findContact()
{
    ifstream contact; 
    string substring, variable; 
    bool ifFound = true; 

    cout << "Type in contact info" << line << endl; 
    cin>> variable; 
    contact.open("contact.txt"); 

    if(contact.is_open())
    {
        while(getline(contact, line))
        {
            substring = line.substr(0, line.find(" "));
            if (variable == substring)
            {
                cout << "Found:" << line << endl;
                ifFound = true;
                break;
            }
        }
        if(!ifFound)
        {
            cout << "File does not exist" << endl;
        }
    }
    else
    {
        cout << "File does not exist" << endl;
    }
    contact.close(); 
    
}


void display()
{
    ifstream contact; 
    contact.open("contact.txt");

    while(getline(contact, line))
    {
        cout << line << endl;
    }
    contact.close();
}


//This is the code that will execute the functions 
int main()
{
    ifstream contact; 
cout<< "What is the first name" << endl;
cin>> firstname;

cout<< "What is the last name" << endl;
cin >> lastname;

cout<< "what is the email" << endl;
cin>>email;

cout<< "What is the phone number" << endl;
cin>> phonenumber; 


newContact();

findContact();

display();

return 0; 






}