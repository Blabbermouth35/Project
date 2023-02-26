#include <iostream>
#include <string>
#include <cmath>

using namespace  std;
 
int main() {

    double pi = 3.14;
    cout << "Radius: ";
    int radius;
    cin >> radius;
    double radius_2 = pow(radius, 2);
    double cirlcle_area = pi * radius_2;
    cout << "Area = " << cirlcle_area;
    return 0;
} 