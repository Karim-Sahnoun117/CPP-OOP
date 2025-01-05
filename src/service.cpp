#include <vector>
#include "Manager.h"
#include "Employe.h"
#include "service.h"
#include<iostream>
#include <tuple>
using namespace std ;

void service :: to_add(){
    int L ;
cout<<"give me your keyword please : "<<endl;
cin >>L;

}

void service:: to_extract(Employe&obj){
  int i; string nom,state;

    cout << "   Menu: " << endl;
    cout << "Extract by  Name   - Enter 1 " << endl;
    cout << "Extract by  State  - Enter 2 " << endl;
    cout << "Extract by  Salary - Enter 3 " << endl;
    cin>>i;

switch (i){

case 1 :
    {

    cout<<"Enter the name please :"<<endl;
    cin >>nom;

    string * p= new string (nom);
//auto& it = find(nom.begin(), nom.end(), [](string* p) {});
for (size_t i  = 0;i<obj.get_name().size();++i )
    {
   if (*(obj.get_name()[i])==*p)

    { //affichage des coordonnées lié à cette personne

        cout<<"Suggested person number: "<<i<<endl;
             cout << "The state of " << *p << " is: " << *obj.get_state()[i] << endl;
        Manager *c = dynamic_cast<Manager*>(&obj);//le cast dynamique est applique si on veut converit les classes et c'est grace lil plymorphe

        if (c != nullptr)
        {
        cout<<"the salary of "<<*p<<" = "<<*(c->salary[i])<<endl;
        }
        else
         cout << *p << " is associated with the base class." << endl;
    }

}
   break;
    }
case 2 :
    {
    cout<<"Enter the state "<<endl;
    cin>>state ;
    string * p = new string(state);
    for (unsigned i = 0 ;i<obj.get_state().size();++i)
        {
        if (*(obj.get_state()[i])==*p)
            {
            cout<<"This state corresponds to person at index: " <<i<<endl;
            cout<<"The name of this person is: "<<*obj.get_name()[i]<<endl;

             Manager *c = dynamic_cast<Manager*>(&obj);
             if (c != nullptr)
                {
                cout<<"the salary of  "<<*obj.get_name()[i]<<" = "<<*(c->salary[i])<<endl;
                }
            }
        }
        break ;

    }
case 3 :
    {
  int salaire;
    Manager *c =dynamic_cast<Manager*>(&obj);
    cout<<"Enter the salary"<<endl;
    cin>>salaire;
    int *p= new int(salaire);
    for (unsigned i =0 ;i<c->salary.size();++i)
        {
        if (*(c->salary[i])==*p)
            {
             cout<<"This state corresponds to person at index: " <<i<<" "<<*obj.get_name()[i]<<endl;
             cout<<"the name of this person is "<<*obj.get_name()[i]<<" "<<*obj.get_state()[i]<<endl;
            }
        }
   }
}
}



void service :: to_delete(Employe & obj)

{
    string nom;int j; int nb;
    do {
cout<<"Enter the name of the element to delete: "<<endl;
cin>>nom;
string *p = new string(nom);
vector<string*>tab_nom;
vector<int>tab_index;//je peux utiliser le map


    tie(tab_nom,tab_index)=extract_to_delete(obj.get_name(),p);

     if (tab_index.empty())
        {
        cout<< "The element you entered was not found."<<endl;
        }
      else
        {
          cout << "The element was found " << tab_index.size() << " time(s)." << endl;
        //affiche des elements trouvés
        for (unsigned i =0;i<tab_nom.size();++i)
        {
        cout <<" Matching element:  "<<*tab_nom[i]<<" at index "<<tab_index[i]<<endl;
        }
            cout<<"Do you want to confirm deletion ? "<<endl;
            cout<<"Enter 1 to confirm, 0 to cancel.  "<<endl;
        cin>>nb;
        if (nb==1)
        {
         obj.get_name().erase(obj.get_name().begin()+tab_index[0]);
         obj.get_state().erase(obj.get_state().begin()+tab_index[0]);
         cout<<"Name successfully deleted."<<endl;
         cout<<"State successfully deleted."<<endl;

         Manager *c =dynamic_cast<Manager *>(&obj);
         if (c!= nullptr)
         {
            c->salary.erase(c->salary.begin()+tab_index[0]);
            cout<< "Salary successfully deleted."<<endl;
         }
            cout<<"Deletion process completed."<<endl;
        }
        }
        cout<<"Do you want to delete another element?"<<endl;
        cout<<"Enter 1 for Yes, 0 for No."<<endl;
        cin>>j;
}while(j==1) ;

}
/*methode conçu pour */
tuple<vector<string*>,vector<int>> service::extract_to_delete(vector<string*>_tab
                                          ,string * s)
{
    vector<string*>tab_name;
    vector<int>tab_i;

   for (unsigned i=0;i<_tab.size();++i)
    {
    if(*_tab[i] == *s)
        {
        tab_name.push_back(_tab[i]);
        tab_i.push_back(i);
        }
     }

    return {tab_name, tab_i};

}









