#include<iostream>
#include<string>
using namespace std;

struct elemental
{
    int fire;
    int water;
    int earth;
    int wind;
};
struct wizard
{
    string name;
    int power;
    int ele;
    elemental E;
};
void menuElemental();
void type(wizard* p, int& n);
int main()
{
    cout << "=== WIZARD ADVENTURE V1 ===" << endl;
    wizard a[100];
    int n;
    type(a, n);
    return 0;
}

void menuElemental()
{
    cout << "(1): Fire\n";
    cout << "(2): Water\n";
    cout << "(3): Earth\n";
    cout << "(4): Wind\n";
}

void type(wizard* p, int& n)
{
    cout << "Type number of wizards\n";
    cin >> n;
    cout << "Type wizard name\n";
    cin.ignore();
    getline(cin, p->name);
    cout << "Type " << p->name << "'s power\n";
    cin >> p->power;
    menuElemental();
    cout << "Choose " << p->name << "'s elemental\n";
    cin >> p->ele;
    switch (p->ele)
    {
        case 1: p->E.fire = 1;
        case 2: p->E.water = 1;
        case 3: p->E.earth = 1;
        case 4: p->E.wind = 1;
    }
}