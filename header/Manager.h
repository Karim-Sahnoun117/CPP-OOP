#ifndef MANAGER_H_INCLUDED
#define MANAGER_H_INCLUDED
#include <vector>
#include "Employe.h"
class Manager : public Employe {
public :

vector<int *>salary;
Manager(){}
Manager(vector<string *>i,vector<string *>j,vector<int *>_salary):Employe(i,j),salary(_salary){}

void display()const override;

};

#endif // DERIVE_H_INCLUDED
