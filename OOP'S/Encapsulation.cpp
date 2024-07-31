#include<iostream>
using namespace std;

// static members are attributes of class 
class Customer {
private:
    string name;       // name account balance these all will be the part of object 
    int account_no, balance;  // will be used when there is an object
    static int total_customer;      // static keyword is used here // It will be a part of class 
    static int total_balance;

public:
    Customer(string name, int account_no, int balance) {
        this->name = name;
        this->account_no = account_no;
        setBalance(balance);
        total_customer++; // this will work with static not by normal methods 
    }

    // Static Member function
    static void accesStatic() {
        cout << "Total number of customers: " << total_customer << endl;   // This is a class function and belongs to the class
        cout << "Total balance: " << total_balance << endl;
    }

    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
            total_balance += amount;
        }
    }

    void withdraw(int amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            total_balance -= amount;
        }
    }

    void display() const {
        cout << name << " " << account_no << " " << balance << " " << total_customer << endl;
    }

    void setBalance(int new_balance) {
        if (new_balance >= 0) {
            total_balance -= balance; // Remove the old balance from total_balance
            balance = new_balance;
            total_balance += balance; // Add the new balance to total_balance
        } else {
            cout << "Balance cannot be negative. Setting balance to 0." << endl;
            total_balance -= balance; // Remove the old balance from total_balance
            balance = 0;
            total_balance += balance; // Add the new balance to total_balance
        }
    }

    int getBalance() const {
        return balance;
    }
};

// Initialize the static variables
int Customer::total_customer = 0;
int Customer::total_balance = 0;

int main() {
    Customer A1("Rohit", 1, 10000);
    Customer A2("Mohit", 2, 20000);
    Customer A3("Mohan", 23, 30000);

    // Accessing and modifying balance directly is not allowed anymore
    // A1.balance += -10; // This will now cause a compilation error
    A1.setBalance(-10); // This will set the balance to 0 with a warning
    A1.display();

    Customer::accesStatic();

    return 0;
}
