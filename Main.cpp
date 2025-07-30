#include <iostream>
#include "Highlander.h"
#include "SuperIntArray.h"
#include <vector>

void testHighlander() {
    std::cout << "---- Highlander Test ----\n";
    Highlander h1("Connor");
    std::cout << Highlander::speak() << "\n";
    std::cout << h1.status() << "\n";

    {
        Highlander h2("Duncan");
        std::cout << Highlander::speak() << "\n";
        std::cout << h2.status() << "\n";
    }

    std::cout << Highlander::speak() << "\n";
    std::cout << h1.status() << "\n\n";
}

void testSuperIntArray() {
    std::cout << "---- SuperIntArray Test ----\n";

    int data[] = { 4, 8, 15, 16 };
    SuperIntArray arr1(data, 4);
    arr1.add(23);
    arr1.add(42);

    std::cout << "Original array: ";
    for (int i = 0; i < arr1.getSize(); i++)
        std::cout << arr1.get(i) << " ";
    std::cout << "\n";

    std::cout << "Changing index 2 to 99...\n";
    arr1.change(2, 99);

    std::cout << "Modified array: ";
    for (int i = 0; i < arr1.getSize(); i++)
        std::cout << arr1.get(i) << " ";
    std::cout << "\n";

    std::cout << "Max: " << SuperIntArray::getMax(arr1.getNums(), arr1.getSize()) << "\n";
    std::cout << "Min: " << SuperIntArray::getMin(arr1.getNums(), arr1.getSize()) << "\n";
    std::cout << "Mean: " << SuperIntArray::getMean(arr1.getNums(), arr1.getSize()) << "\n\n";
}

void testCopyConstructor() {
    std::cout << "---- Copy Constructor Test ----\n";
    int data[] = { 1, 2, 3 };
    SuperIntArray original(data, 3);

    SuperIntArray copy = original;
    copy.change(0, 999);  // Only modify the copy

    std::cout << "Original: ";
    for (int i = 0; i < original.getSize(); i++)
        std::cout << original.get(i) << " ";
    std::cout << "\n";

    std::cout << "Copy: ";
    for (int i = 0; i < copy.getSize(); i++)
        std::cout << copy.get(i) << " ";
    std::cout << "\n\n";
}

int main() {
    testHighlander();
    testSuperIntArray();
    testCopyConstructor();

    return 0;
}

