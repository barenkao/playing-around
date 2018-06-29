#include <iostream>

using namespace std;

int main() {
 cout << "Please enter variables a b c d e f, in that order: ";

 int a, b, c, d, e, f;
 int SOLUTION_OF_X, SOLUTION_OF_Y;
 cin >> a >> b >> c >> d >> e >> f;
SOLUTION_OF_X = ((c * e) - (f * b)) / ((a * e) - (d * b));
 SOLUTION_OF_Y  = ((a * f) - (d * c)) / ((a * e) - (d * b));
 cout << SOLUTION_OF_X  << "\n";
 cout << SOLUTION_OF_Y << "\n";

  /*
    Coefficients of the system
      ax + by = c
      dx + ey = f

  /*
    TODO: Write your code here

    1. Read input by
       cin >> ......;
    2. Solve for x and y
    3. Print x and y by
        cout << SOLUTION_OF_X << "\n";
        cout << SOLUTION_OF_Y << "\n";
  */
}
