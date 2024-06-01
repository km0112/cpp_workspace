#include <iostream> 
#include <string>
using namespace std; 

struct Contact
    {
        string FName;
        string LName;
        string email;
        string phoneNumber;
        struct Contact* link; 
    };
    
struct Contact* createAndAddContact(struct Contact* head)
{
    //creates new node 
    struct Contact* temp = (struct Contact*)malloc(sizeof(struct Contact));

    //construct data in new node 

    cout<<"What is the contact's first name?"<<endl;
    string Fname; 
    cin>>Fname; 
    temp->FName = Fname; 

    cout<<"What is the contact's last name?"<<endl; 
    string Lname; 
    cin>>Lname; 
    temp->LName = Lname;  

    cout<<"what is the contacts email?"<<endl;
    string em; 
    cin>> em; 
    temp->email = em; 
    
    cout<<"What is the contact's number?"<<endl;
    string num; 
    cin>>num; 
    temp->phoneNumber = num; 
    
    temp->link = NULL; 
    
//sets current head to new temp variable

struct Contact* temp2 = head; 

//sets previous head to newly created temp 
head = temp; 

//sets link inside of head to make it point to position of temp2 
head->link = temp2;  
   
//the above 3 steps sets the newely created node as the new head of the list 
    
return head; 
    
}

void displayContacts(struct Contact* head)
{
    if(head == NULL)
    {
        cout<<"There is no data yet"<<endl; 
    }

    struct Contact* start = head;

    //prints out data of each node then links to next one
    //stops when link of next node is NULL bc end of list
    while(start!=NULL)
    {
        cout<<"phone number: "<<start->phoneNumber<<endl; 
        cout<<"First Name: "<<start->FName<<endl; 
        cout<<"Last Name: "<<start->LName<<endl;  
        cout<<"email: "<<start->email<<endl; 
        cout<<endl; 
        //goes to next link 
        start = start->link; 
    }
    
}

void searchContact(Contact* head, string name)
{
    //while loop that accesses every node
    struct Contact* temp3 = head; 
    
    while(temp3 != NULL)
    {
        if(temp3->FName == name || temp3->LName == name)
        {
            cout<<"phone number: "<<temp3->phoneNumber<<endl; 
            cout<<"First Name: "<<temp3->FName<<endl; 
            cout<<"Last Name: "<<temp3->LName<<endl;  
            cout<<"email: "<<temp3->email<<endl; 
            cout<<endl; 
        }
        temp3 = temp3->link;
    }
    //within loop, access both first name and last name and see if it matches 
    
}

int main()
{
    struct Contact* head = NULL; 
    int instruction; 
   
    string name; 
        cout<<"Type 1 to add a contact"<<endl; 
        cout<<"2 to display contacts"<<endl; 
        cout<<"3 to search for a contact"<<endl; 
        cout<<"4 to exit"<<endl; 
        cin>>instruction; 
    while(instruction != 4)
    {
        if(instruction == 1)
        {
            head = createAndAddContact(head);
        }
        
        
        if(instruction == 2)
        {
            displayContacts(head); 
        }
        
        
        else if(instruction == 3)
        {
            cout<<"enter the name of the contact"<<endl;
            cin>>name; 
            searchContact(head, name);
        }
        
        cout<<"Type 1 to add a contact"<<endl; 
        cout<<"2 to display contacts"<<endl; 
        cout<<"3 to search for a contact"<<endl; 
        cout<<"4 to exit"<<endl; 
        cin>>instruction; 
    }   
        
        
       
        
    

}
