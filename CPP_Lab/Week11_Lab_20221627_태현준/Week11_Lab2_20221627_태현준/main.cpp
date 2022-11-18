#include <iostream>
#include "dynamic-array.hpp"

using std::cout;
using std::endl;

// I will fix this file to test your implementation.

int main() {
    double arr1[3] = { 1.2, 3.3, 5.4 };
    double arr2[3] = { 2.7, 4.8, 7.5 };
    DynamicArray<double> *da1 = new DynamicArray<double>(arr1, 3);
    auto da2 = new DynamicArray<double>(arr2, 3); // Type deduction!

    da1->Append(da2);
    da1->Print(); // Should print "1.2, 3.3, 5.4, 2.7, 4.8, 7.5"

    auto da3 = da1->Subseq(3, 2);
    da3->Print(); // Should print "2.7, 4.8"

    auto da4 = da1->Subseq(3, 5); // '5' is a valid argument for 'n'.
    da4->Print(); // Should print "2.7, 4.8, 7.5"

    auto da5 = da1->Subseq(-1, 3);
    da5->Print();


    delete da1;
    delete da2;
    delete da3;
    delete da4;
    delete da5;

    return 0;
}