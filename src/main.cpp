#include <iostream>
#include "Employe.h"
#include "Manager.h"
#include "service.h"
#include "config.h"
using namespace std;

int main()
{

   /* Employe C1({new string("David"),new string ("Richard"),new string("claudine")},
               {new string("married"),new string("single"),new string("married") });

    Manager C2({new string("David"),new string ("Richard"),new string("claudine")},
               {new string("married"),new string("single"),new string("married") },
               {new int(1700),new int(1300),new int(1300)});
*/
Employe C1;
lire_data(C1);
    C1.display();
/*
    C2.display();
    service S;
    S.to_delete(C2);

    C2.display();
*/
}
