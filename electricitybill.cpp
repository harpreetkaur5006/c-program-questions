#include <iostream>
using namespace std;

class ElectricityBill {
    string name;
    int units;

public:
    void input() {
        getline(cin, name);
        cin >> units;
    }

    void displayBill() {
        int total = units * 5;
        cout << "Customer Name: " << name << endl;
        cout << "Total Bill: ₹" << total << endl;
    }
};

int main() {
    ElectricityBill customer;
    customer.input();
    customer.displayBill();
    return 0;
}