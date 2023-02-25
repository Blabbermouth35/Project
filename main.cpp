#include <iostream>

using namespace std;

int main() {
    int sales = 95000;
    double state_tax = sales / 100 * 4;
    double country_tax = sales / 100 * 2;
    cout << "sales = " << sales << endl
         << "State Tax = " << state_tax << endl
         << "Country Tax = " << country_tax << endl
         << "Profits = " << sales - state_tax - country_tax;
    return 0;
}