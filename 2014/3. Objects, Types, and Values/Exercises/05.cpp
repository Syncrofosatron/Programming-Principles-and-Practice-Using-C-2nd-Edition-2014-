// Author: Neeraj Mishra nmcnemis@gmail.com

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    cout << "Enter 2 floating point values: ";
    float val1, val2;
    cin >> val1 >> val2;
    cout << "\n";

    double val1_f, val2_f;
    val1_f = val1;
    val2_f = val2;

    if (val1_f > val2_f)
    {
        cout << val2_f << " is smaller. \n";
        cout << val1_f << " is larger. \n";
    }
    else
    {
        cout << val1_f << " is smaller. \n";
        cout << val2_f << " is larger. \n";
    }

    cout << "Sum is: " << val1_f + val2_f;
    cout << "\n";
    cout << "Difference is: " << val2_f - val1_f;
    cout << "\n";
    cout << "Product is: " << val1_f * val2_f;
    cout << "\n";
    cout << "Ratio is: " << val1_f << ":" << val2_f;
}

// The output seems to be the same for this and the previous (04) exercise.
// I think we will see difference when the outputs will be different by adding decimal values.