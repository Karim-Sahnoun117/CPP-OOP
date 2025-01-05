#ifndef EMPLOYE_H_INCLUDED
#define EMPLOYE_H_INCLUDED

#include <vector>
#include<string>
using namespace std ;
class Employe {

vector<string *> name ;
vector<string *> state;//status (single or married)

public :
    Employe (){}
    Employe (vector<string *>i,vector<string *>j):name(i),state(j){}

public :


vector<string *>& get_name(){return name;}
vector<string *>& get_state(){return state;}
virtual void display()const;

};

#endif // BASE_H_INCLUDED
