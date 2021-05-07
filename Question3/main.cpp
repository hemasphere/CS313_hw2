#include <iostream>
#include <string>
#include <algorithm>
#include <time.h>
#include <chrono>

#include "stackAndLinkedList.h"

using std::chrono::system_clock;
using std::chrono::steady_clock;
using std::chrono::duration_cast;
using std::chrono::seconds;
using std::chrono::milliseconds;

using namespace std;

template <typename Func>
long long TimeFunc(Func f)
{
    auto begin = steady_clock::now();
    f();
    auto end = steady_clock::now();

    return duration_cast<milliseconds>(end - begin).count();
}

int main() {
    srand(time(0));
    int size = 1000000;
    stack<int> s1(size);

    linkedStackType<int> s2;

    auto s1milliseconds = TimeFunc([&]() {BuildStack(size,s1); });
    cout << "array based stack time: " << s1milliseconds << endl;
    auto s2milliseconds = TimeFunc([&]() {BuildList(size,s2); });
    cout << "linked list based stack time: " << s2milliseconds << endl;


    return 0;
}