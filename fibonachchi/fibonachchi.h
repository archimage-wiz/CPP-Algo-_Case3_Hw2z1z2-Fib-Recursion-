#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Fibonachchi
{
    
private:
    
public:
    vector<unsigned long long> FibNumbers;

    Fibonachchi(/* args */);
    ~Fibonachchi();

    unsigned long long GetFibNum(int num);
    unsigned long long GetFibNumWithMemory(int num);

    // FR is faster recursion using 2 numbers
    /// with ability to print sequence.
    int GetFibNumFR(int num, unsigned long long num1 = 0, unsigned long long num2 = 1); 


};

