
#include <iostream>
#include "fibonachchi/fibonachchi.h"


int main(int argc, char const *argv[]) {
    
    using namespace std;

    Fibonachchi * obj1 = new Fibonachchi();

    cout << "The febonachchi seq. 3 methods." << endl;

    for (int i = 0; i < 15; i++)
    {
        cout << obj1->GetFibNum(i) << " ";
    }
    cout << endl;

    obj1->GetFibNumFR(12);
    cout << endl;

    for (int i = 0; i < 12; i++)
    {
        cout << obj1->GetFibNumWithMemory(i) << " ";
    }

    cout << endl;

    // array print out
    cout << "// array print out" << endl;
    for (auto i : obj1->FibNumbers){
        cout << i << " ";
    }

    return 0;
}


