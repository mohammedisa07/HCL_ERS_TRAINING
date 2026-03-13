#include <iostream>
using namespace std;

class Order {
private:
    struct LineItem {
        int id;
        int qty;
    };

    LineItem items[100];
    int count;

public:
    Order() {
        count = 0;
    }

    void addLineItem(int id, int qty) {
        items[count].id = id;
        items[count].qty = qty;
        count++;
    }

    int totalItems() {
        int total = 0;
        for (int i = 0; i < count; i++) {
            total += items[i].qty;
        }
        return total;
    }

    void display() {
        cout << "\nOrder Summary\n";
        for (int i = 0; i < count; i++) {
            cout << "Item ID: " << items[i].id 
                 << " Quantity: " << items[i].qty << endl;
        }
        cout << "Total Items: " << totalItems() << endl;
    }
};

int main() {
    Order order;

    order.addLineItem(101, 2);
    order.addLineItem(102, 5);
    order.addLineItem(103, 3);

    order.display();

    return 0;
}