#include <iostream>
using namespace std;

struct Customer {
    int customerId;
    string name;
    string phone;
};

struct Order {
    int orderId;
    string product;
    float price;
    Customer cust;
};

int main() {
    Order o;

    cout << "Enter Order ID: ";
    cin >> o.orderId;

    cout << "Enter Product Name: ";
    cin >> o.product;

    cout << "Enter Price: ";
    cin >> o.price;

    cout << "Enter Customer ID: ";
    cin >> o.cust.customerId;

    cout << "Enter Customer Name: ";
    cin >> o.cust.name;

    cout << "Enter Customer Phone: ";
    cin >> o.cust.phone;

    cout << "\nOrder Details\n";
    cout << "Order ID: " << o.orderId << endl;
    cout << "Product: " << o.product << endl;
    cout << "Price: " << o.price << endl;
    cout << "Customer ID: " << o.cust.customerId << endl;
    cout << "Customer Name: " << o.cust.name << endl;
    cout << "Customer Phone: " << o.cust.phone << endl;

    return 0;
}