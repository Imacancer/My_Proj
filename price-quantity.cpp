#include <iostream>
using namespace std;

int calculate(){
    int price;
    int quantity;
    int result;


    cout << "What is the price of the product? ";
    cin >> price;

    cout << "How many quantity? ";
    cin >> quantity;

    result = price * quantity;

    return result;
}


int main() {
  cout << calculate();
  return 0;
}

