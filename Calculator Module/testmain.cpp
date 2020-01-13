// Test Main
// testmain.cpp

#include<iostream>
using namespace std;
#include "tester.h"

int main() {
    int passed = 0;
    passed += testSuite(5, 3, 125);
    passed += testSuite(5, -3, 0.008);
    cout << passed << " Tests Passed" << endl;
}

/*
 OUTPUT
 
 Raise to Power Test Passed
 Find Exponent Test Passed
 Raise to Power Test Failed
 Find Exponent Test Failed
 2 Tests Passed
 */
