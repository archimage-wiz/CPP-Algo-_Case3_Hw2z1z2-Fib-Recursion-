
#include "fibonachchi.h"


unsigned long long Fibonachchi::GetFibNumWithMemory(int num){
    
    if (num == 0) {
        return 0;
    }
    if (num == 1) {
        return 1;
    }
    if (num >= 2) {
        if (FibNumbers.size() < num) { FibNumbers.resize(num); }
        FibNumbers[num-2] = FibNumbers[num-2] != 0 ? FibNumbers[num-2] : GetFibNumWithMemory(num - 2);
        FibNumbers[num-1] = FibNumbers[num-1] != 0 ? FibNumbers[num-1] : GetFibNumWithMemory(num - 1);
        return FibNumbers[num-2] + FibNumbers[num-1];
    }
    return 0;
}

unsigned long long Fibonachchi::GetFibNum(int num){
    
    if (num == 0) {
        return 0;
    }
    if (num == 1) {
        return 1;
    }
    if (num >= 2) {
        return GetFibNum(num - 2) + GetFibNum(num - 1);
    }
    return 0;
}

int Fibonachchi::GetFibNumFR(int length, unsigned long long num1, unsigned long long num2){ 
    if (length == 1 && num1 == 0) cout << num1 << " ";
    if (length > 1 && num1 == 0 && num2 == 1) cout << num1 << " " << num2 << " ";
    if (length > 2){
        unsigned long long num_sum = num1 + num2;
        cout << num_sum << " ";
        GetFibNumFR(length-1, num2, num_sum);
    }
    return 0;
}

Fibonachchi::Fibonachchi(/* args */)
{
}

Fibonachchi::~Fibonachchi()
{
}
