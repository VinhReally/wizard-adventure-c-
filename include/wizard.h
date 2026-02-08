#pragma once	
#ifndef WIZARD_H
#define WIZARD_H

#include<string>
using namespace std;

struct elemental
{
	int fire = 0;
	int water = 0;
	int earth = 0;
	int wind = 0;
};

struct wizard
{
	string name;
	int power;
	int ele;
	elemental E;
};

void menuElemental();
void typeSingle(wizard* p);
void typeMultiple(wizard* p, int& n);
void coutWizards(wizard* p, int n);
#endif