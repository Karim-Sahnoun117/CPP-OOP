#include<iostream>
#include <vector>
#include "Manager.h"

void Manager ::display()const  {

cout<<"======================"<<endl;
Employe::display();
for (size_t i =0;i<salary.size();++i){

    cout <<"the salary of "<<i<<"="<<*salary[i]<<endl;

}
}
