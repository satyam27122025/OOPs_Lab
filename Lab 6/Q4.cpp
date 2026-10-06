#include <iostream>
using namespace std;

class Ledger {
public:
    void showBalance(float balance) {
        cout << "Current Balance: Rs. " << balance << endl;
    }
};

class SavingsAccount : public Ledger {
public:
    void addInterest(float balance) {
        float interest = balance * 0.05;

        cout << "Interest: Rs. " << interest << endl;
        cout << "Total Balance: Rs. "
             << balance + interest << endl;
    }
};

class CheckingAccount : public Ledger {
public:
    void withdraw(float balance, float amount) {
        if (amount <= balance) {
            cout << "Withdrawal: Rs. " << amount << endl;
            cout << "Remaining Balance: Rs. "
                 << balance - amount << endl;
        } else {
            cout << "Insufficient Balance" << endl;
        }
    }
};

int main() {
    SavingsAccount savings;

    savings.showBalance(10000);
    savings.addInterest(10000);

    cout << endl;

    CheckingAccount checking;

    checking.showBalance(10000);
    checking.withdraw(10000, 3000);

    return 0;
}
