#include <iostream>
#include <iomanip>
using namespace std;
class Bill {
public:
    double calculateBill(int quantity, double unitPrice) { return quantity * unitPrice; }
    double calculateBill(int q1, double p1, int q2, double p2) {
        return q1 * p1 + q2 * p2;
    }
    // Two doubles select the discount overload; quantity must be an integer.
    double calculateBill(double amount, double discountPercent) {
        return amount * (1 - discountPercent / 100);
    }
};
int main() {
    Bill bill;
    cout << fixed << setprecision(2);
    cout << "One item: " << bill.calculateBill(3, 50.0) << '\n';
    cout << "Two items: " << bill.calculateBill(3, 50.0, 2, 25.0) << '\n';
    cout << "After 10% discount: " << bill.calculateBill(200.0, 10.0) << '\n';
}
