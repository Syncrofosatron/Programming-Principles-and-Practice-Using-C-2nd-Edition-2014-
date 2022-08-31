// Author: Neeraj Mishra nmcnemis@gmail.com

#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;

int main()
{
    // no suitable conversion function from "__gnu_cxx::__normal_iterator<double *,
    // std::vector<double, std::allocator<double>>>" to "double" exists.
    // So using "auto" for big and small.

    double i = 0, sum = 0, size = 0, small = 0, big = 0;
    std::vector<double> double_storage;
    std::string unit;

    int times_run = 5;

    while (times_run)
    {
        cin >> i;

        double_storage.push_back(i);

        // if (unit == "m")
        // {
        //     sum += i;
        // }

        // size = double_storage.size();
        // big = *(std::max_element(double_storage.begin(), double_storage.end()));
        // small = *(std::min_element(double_storage.begin(), double_storage.end()));
        // Why used *?: max_element´returns an iterator.
        // Link: https://stackoverflow.com/questions/9874802/how-can-i-get-the-maximum-or-minimum-value-in-a-vector
        //  cout << sum << "m " << " " << small << " " << big << " " << size << "\n";

        --times_run;
    }
        // cout << "Sum: " << sum;
        // cout << "Small: " << *(std::min_element(double_storage.begin(), double_storage.end()));;
        // cout << "Big: " << *(std::max_element(double_storage.begin(), double_storage.end()));;
        // cout << "Times: " << size;
        // cout << "\n";

        for (int i = 0; i < double_storage.size(); ++i)
        {
            cout << double_storage[i] << " ";
        }
}

// Wow, this code works better than expected.
// Because if we type input as "1m, 1 m or 1 *enter* m", it will work the same! :O
