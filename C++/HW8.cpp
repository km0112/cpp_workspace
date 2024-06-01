
#include <iostream>
#include <string>
using namespace std;
class VendingMachine {
private:
    int water, bodyarmour, powerade, celsius, dogtreats, goldfish;
    float wPrice, bPrice, pPrice, cPrice, dPrice, gPrice;

public:
    VendingMachine() : water(20), bodyarmour(20), powerade(20), celsius(20), 
    dogtreats(20), goldfish(20),
    wPrice(1.25), bPrice(1.25), pPrice(1.25), cPrice(2.00), dPrice(1.00), gPrice(1.00) {}

    void buy(int num, float cash) {
        float price = 0;
        int* item = nullptr;

        switch(num) {
            case 1:
                item = &water;
                price = wPrice;
                break;
            case 2:
                item = &bodyarmour;
                price = bPrice;
                break;
            case 3:
                item = &powerade;
                price = pPrice;
                break;
            case 4:
                item = &celsius;
                price = cPrice;
                break;
            case 5:
                item = &dogtreats;
                price = dPrice;
                break;
            case 6:
                item = &goldfish;
                price = gPrice;
                break;
            default:
                cout << "Invalid item number." << endl;
                return;
        }

        if (*item > 0) {
            float change = cash - price;
            if (change < 0) {
                cout << "Insufficient cash entered. Please insert more cash." << endl;
            } else {
                *item -= 1;
                cout << "Here is your change: " << change << endl;
            }
        } else {
            cout << "There are no more items of this variety remaining. Would you like to restock?" << endl;
        }
    }

    void checkInventory() {
        bool restockNeeded = false;

        if (water < 2) {
            cout << "Restock water" << endl;
            restockNeeded = true;
        }
        if (bodyarmour < 2) {
            cout << "Restock bodyarmour" << endl;
            restockNeeded = true;
        }
        if (powerade < 2) {
            cout << "Restock powerade" << endl;
            restockNeeded = true;
        }
        if (celsius < 2) {
            cout << "Restock celsius" << endl;
            restockNeeded = true;
        }
        if (dogtreats < 2) {
            cout << "Restock dogtreats" << endl;
            restockNeeded = true;
        }
        if (goldfish < 2) {
            cout << "Restock goldfish" << endl;
            restockNeeded = true;
        }

        if (!restockNeeded) {
            cout << "No items need to be restocked" << endl;
        }
    }

    void Restock(string restock) {
        if (restock == "w") {
            water = 20;
        } else if (restock == "b") {
            bodyarmour = 20;
        } else if (restock == "p") {
            powerade = 20;
        } else if (restock == "c") {
            celsius = 20;
        } else if (restock == "d") {
            dogtreats = 20;
        } else if (restock == "g") {
            goldfish = 20;
        } else {
            cout << "Invalid restock option." << endl;
        }
    }
};

int main() {
    VendingMachine vendingMachine;
    string action;
    cout << "What do you want to do? r for restock, b to buy, c to check inventory" << endl;
    cin >> action;

    if (action == "r") {
        string restock;
        cout << "What would you like to restock? (w, b, p, c, d, g)" << endl;
        cin >> restock;
        vendingMachine.Restock(restock);
    } else if (action == "b") {
        int number;
        float money;
        cout << "Enter 1 for water, 2 for bodyarmour, 3 for powerade, 4 for celsius, 5 for dog treats, 6 for goldfish" << endl;
        cin >> number;
        if (number < 1 || number > 6) {
            cout << "Invalid selection. Please try again." << endl;
            return 1;
        }
        cout << "Please insert money" << endl;
        cin >> money;
        vendingMachine.buy(number, money);
    } else if (action == "c") {
        vendingMachine.checkInventory();
    } else {
        cout << "Invalid action selected." << endl;
    }

    return 0;
}

 