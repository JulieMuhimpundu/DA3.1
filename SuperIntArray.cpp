#include "SuperIntArray.h"
#include <iostream>
#include <stdexcept>

SuperIntArray::SuperIntArray() {
    nums = nullptr;
    numberOfNums = 0;
}

SuperIntArray::SuperIntArray(const int arr[], int size) {
    numberOfNums = size;
    nums = new int[size];
    for (int i = 0; i < size; i++) {
        nums[i] = arr[i];
    }
}

SuperIntArray::SuperIntArray(int num) {
    numberOfNums = 1;
    nums = new int[1];
    nums[0] = num;
}

SuperIntArray::SuperIntArray(const std::vector<int>& vec) {
    numberOfNums = vec.size();
    nums = new int[numberOfNums];
    for (int i = 0; i < numberOfNums; i++) {
        nums[i] = vec[i];
    }
}

SuperIntArray::SuperIntArray(const SuperIntArray& other) {
    numberOfNums = other.numberOfNums;
    nums = new int[numberOfNums];
    for (int i = 0; i < numberOfNums; i++) {
        nums[i] = other.nums[i];
    }
}

SuperIntArray::~SuperIntArray() {
    delete[] nums;
}

int* SuperIntArray::getNums() const {
    return nums;
}

int SuperIntArray::getSize() const {
    return numberOfNums;
}

void SuperIntArray::add(int num) {
    int* newArray = new int[numberOfNums + 1];
    for (int i = 0; i < numberOfNums; i++) {
        newArray[i] = nums[i];
    }
    newArray[numberOfNums] = num;
    delete[] nums;
    nums = newArray;
    numberOfNums++;
}

int SuperIntArray::get(int index) const {
    if (index < 0 || index >= numberOfNums)
        throw std::out_of_range("Index out of range.");
    return nums[index];
}

void SuperIntArray::change(int index, int newVal) {
    if (index < 0 || index >= numberOfNums)
        throw std::out_of_range("Index out of range.");
    nums[index] = newVal;
}

int SuperIntArray::getMax(const int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max) max = arr[i];
    return max;
}

int SuperIntArray::getMin(const int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < min) min = arr[i];
    return min;
}

double SuperIntArray::getMean(const int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum / size;
}
