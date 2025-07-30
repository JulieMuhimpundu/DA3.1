#pragma once
#ifndef SUPERINTARRAY_H
#define SUPERINTARRAY_H

#include <vector>

class SuperIntArray {
private:
    int* nums;
    int numberOfNums;

public:
    SuperIntArray();
    SuperIntArray(const int arr[], int size);
    SuperIntArray(int num);
    SuperIntArray(const std::vector<int>& vec);
    SuperIntArray(const SuperIntArray& other); // Copy constructor
    ~SuperIntArray();

    int* getNums() const;
    int getSize() const;
    void add(int num);
    int get(int index) const;
    void change(int index, int newVal);

    static int getMax(const int arr[], int size);
    static int getMin(const int arr[], int size);
    static double getMean(const int arr[], int size);
};

#endif
