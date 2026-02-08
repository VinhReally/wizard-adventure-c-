#include<iostream>
#include "wizard.h"
#include<string>
using namespace std;

int main()
{
    cout << "=== WIZARD ADVENTURE V1 ===" << endl;
    wizard a[100];
    int n;

    typeMultiple(a, n);
    coutWizards(a, n);
    return 0;
}
