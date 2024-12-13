#include <iostream>
#include <iomanip> // สำหรับการใช้ setw(), setprecision()
using namespace std;

int main() {
    double initialLoan, interestRate, yearlyPayment;
    
    cout << "Enter initial loan: ";
    cin >> initialLoan;
    cout << "Enter interest rate per year (%): ";
    cin >> interestRate;
    cout << "Enter amount you can pay per year: ";
    cin >> yearlyPayment;

    double prevBalance = initialLoan;
    double interest, total, payment, newBalance;

    cout << setw(13) << left << "EndOfYear#"
         << setw(13) << left << "PrevBalance"
         << setw(13) << left << "Interest"
         << setw(13) << left << "Total"
         << setw(13) << left << "Payment"
         << setw(13) << left << "NewBalance" << endl;

    cout << fixed << setprecision(2); 

    int year = 1;  
    while (prevBalance > 0) {
        interest = prevBalance * (interestRate / 100);
        total = prevBalance + interest;
        payment = (total > yearlyPayment) ? yearlyPayment : total;
        newBalance = total - payment;
        cout << setw(13) << left << year
             << setw(13) << left << prevBalance
             << setw(13) << left << interest
             << setw(13) << left << total
             << setw(13) << left << payment
             << setw(13) << left << newBalance << endl;
        prevBalance = newBalance;
        year++;
    }

    return 0;
}