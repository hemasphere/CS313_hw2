#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>

#include "buildStack.h"
#include "reverseStack.h"

using namespace std;

int main() {

    //Question 6
    string str = "Chuck Norris breathes air … five times a day";
    cout << str << " becomes: " << endl;
    reverseStack(str);
    cout << endl;
    return 0;
}