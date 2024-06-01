#include <iostream>
#include <string>
using namespace std; 

class VendingMachine {
private:
    int water, goldfish, pretzels, chocolate; 

public:
    VendingMachine() : water(20), goldfish(20), pretzels(20), chocolate(20){}  
    
    void buy(int num) 
    {
        int* item = nullptr;

        switch(num) {
            case 1:
                item = &water;
                break;
            case 2:
                item = &goldfish;
                break;
            case 3:
                item = &pretzels;
                break;
            case 4:
                item = &chocolate;
                break;
            default:
                cout << "Invalid item number." << endl;
                return;
        }

    }

};

int main() {
    VendingMachine vendingMachine;
    
        int number;
        float money;
        cout << "Enter 1 for water, 2 for goldfish, 3 for pretzels, 4 for chocolate" << endl;
        cin >> number;
        if (number < 1 || number > 4) 
        {
            cout << "Invalid selection. Please try again." << endl;
            return 1;
        }
        vendingMachine.buy(number);
        
        if(number == 1)
        {
            cout<<"water was dispensed" << endl; 
        }
        if(number ==2)
        {
            cout<<"goldfish was dispensed" << endl; 
        }
        if(number == 3)
        {
            cout<<"Pretzels were dispensed"<<endl; 
        }
        if(number == 4)
        {
            cout<<"chocolate was dispensed"<< endl;
        }
        else if (number < 1 || number > 4)
        {
            cout<<"Nothing was dispensed because invalid number"<<endl; 
        }

    return 0;
}

 