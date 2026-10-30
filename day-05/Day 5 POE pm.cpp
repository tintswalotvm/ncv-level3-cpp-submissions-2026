

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Product
{
private:
    string productName;
    double price;
    int quantity;

public:
    void setProduct(string name, double p, int q)
    {
        productName = name;
        price = p;
        quantity = q;
    }

    string getProductName()
    {
        return productName;
    }

    double getPrice()
    {
        return price;
    }

    int getQuantity()
    {
        return quantity;
    }

    double calculateTotal()
    {
        return price * quantity;
    }
};

// Non-member function 1
void GetProductData(Product &p)
{
    string name;
    double price;
    int quantity;

    cout << "Enter product name: ";
    getline(cin >> ws, name);

    cout << "Enter product price: R";
    cin >> price;

    cout << "Enter quantity: ";
    cin >> quantity;

    p.setProduct(name, price, quantity);
}

// Non-member function 2
void DisplayProduct(Product p)
{
    cout << "\nProduct Name: " << p.getProductName();
    cout << "\nPrice: R" << p.getPrice();
    cout << "\nQuantity: " << p.getQuantity();
    cout << "\nTotal: R" << p.calculateTotal();
    cout << endl;
}

// Non-member function 3
void prodCompare(Product p1, Product p2)
{
    string name1 = p1.getProductName();
    string name2 = p2.getProductName();

    if (!name1.empty() && !name2.empty())
    {
        if (name1[0] == name2[0])
        {
            cout << "\nBoth product names start "
                 << "with the same character." << endl;
        }
        else
        {
            cout << "\nProduct names do not start "
                 << "with the same character." << endl;
        }
    }
    else
    {
        cout << "\nCannot compare empty product names.";
    }
}

int main()
{
    Product product1, product2, product3;

    cout << fixed << setprecision(2);

    cout << "----- COMPUTER ACCESSORIES -----" << endl;

    cout << "\nEnter Product 1 Details" << endl;
    GetProductData(product1);

    cout << "\nEnter Product 2 Details" << endl;
    GetProductData(product2);

    cout << "\nEnter Product 3 Details" << endl;
    GetProductData(product3);

    cout << "\n----- PRODUCT DETAILS -----" << endl;

    DisplayProduct(product1);
    DisplayProduct(product2);
    DisplayProduct(product3);

    double grandTotal;

    grandTotal = product1.calculateTotal()
               + product2.calculateTotal()
               + product3.calculateTotal();

    cout << "\nGrand Total: R" << grandTotal << endl;

    cout << "\n----- PRODUCT COMPARISON -----" << endl;

    prodCompare(product1, product2);

    return 0;
}
