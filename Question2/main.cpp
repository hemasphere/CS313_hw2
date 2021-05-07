#include <iostream>
#include <algorithm>

#include "prefixStack.h"


using namespace std;

int main() {
    //Question 2
    string prefix = "*-69+31";
    cout << "The answer of " << prefix << " is " << prefixStack(prefix) << endl;

    return 0;
}