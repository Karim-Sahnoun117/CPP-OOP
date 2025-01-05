#include "config.h"
#include <iostream>
#include <fstream>
#include <string>
#include "Employe.h"
#include "Manager.h"


using namespace std ;
void lire_data (Employe & obj)
{

ifstream fichier("conf.txt");
if (!fichier.is_open()){

    cerr<<"le fichier n'est pas trouvé"<<endl;
}
string ligne ;
while(getline(fichier,ligne))

    {
        size_t pos = ligne.find('=');
        string key = ligne.substr(0,pos-1);
        if (pos != string::npos)
            {
        if(key =="nom")
              {
            string name = ligne.substr(pos+1);
            obj.get_name().push_back(new string(name));
              }
        if (key == "state" )
             {
            string state = ligne.substr(pos+1);
            obj.get_state().push_back(new string(state));
             }


            }


    }
}
