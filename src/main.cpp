#include <iostream>
#include "NumberArrayADT.h"

int main() {
    // 1. Default constructor test
    NumberArrayADT arr1;
    arr1.print();

    // 2. Paramerized constructor & mutator test
    NumberArrayADT arr2(5);
    arr2.setNumber(0, 10.5);
    arr2.setNumber(1, 22.1);
    arr2.setNumber(2, 5.3);
    arr2.setNumber(3, 44.8);
    arr2.setNumber(4, 15.0);
    arr2.print();

    // 3. Accessor and bounds checking tests
    std::cout << "Element at index 2:" << arr2.getNumber(2) << std::endl;
    arr2.getNumber(-1); // invalid low index
    arr2.setNumber(10, 99.9); // invalid high index

    // 4. Statistics tests
    std::cout << "Min: " << arr2.getMin() << std::endl;
    std::cout << "Max: " << arr2.getMax() << std::endl;
    std::cout << "Average: " << arr2.getAverage() << std::endl;

    // 5. Destructor scope test
    {
        NumberArrayADT temp(2);
        temp.setNumber(0, 1.0);
        temp.setNumber(1, 2.0);
    } // temp goes out of scope here; destructor runs automatically

    return 0;
}