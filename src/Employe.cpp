#include<iostream>
#include <vector>
#include "Employe.h"

using namespace std ;

void Employe::display ()const {

for (size_t i =0;i<name.size();++i){


    cout <<" person named "<<*name[i]<<" corresponds to "<<i<<endl;

    cout <<"person state "<<*state[i]<<"corresponds to "<<i<<endl;

    cout<<"======================================================="<<endl;
}

}
