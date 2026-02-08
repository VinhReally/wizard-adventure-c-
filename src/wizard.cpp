#include<iostream>
#include "wizard.h"

using namespace std;

void menuElemental()
{
    cout << "(1): Fire\n";
    cout << "(2): Water\n";
    cout << "(3): Earth\n";
    cout << "(4): Wind\n";
}

void typeSingle(wizard* p)
{
    cin.ignore();

    cout << "Type wizard name\n";
    getline(cin, p->name);

    cout << "Type " << p->name << "'s power\n";
    cin >> p->power;

    menuElemental();
    cout << "Choose " << p->name << "'s elemental\n";
    cin >> p->ele;

    switch (p->ele)
    {
    case 1: p->E.fire = 1; break;
    case 2: p->E.water = 1; break;
    case 3: p->E.earth = 1; break;
    case 4: p->E.wind = 1; break;
    }
}

void typeMultiple(wizard* p, int& n)
{
    cout << "Type number of wizards\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        typeSingle(p + i);
    }
}

void coutWizards(wizard* p, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << (p + i)->name << " | " << (p + i)->power << " | ";
        if ((p + i)->E.fire == 1)
            cout << "Fire\n";
        else if ((p + i)->E.water == 1)
            cout << "Water\n";
        else if ((p + i)->E.water == 1)
            cout << "Earth\n";
        else
            cout << "Wind\n";
    }
}