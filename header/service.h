#ifndef SERVICE_H_INCLUDED
#define SERVICE_H_INCLUDED

class service {


public :
service(){}

~service(){}
void to_add();
void to_delete(Employe & obj);
void to_extract(Employe&obj);
private:
static tuple<vector<string*>,vector<int>>extract_to_delete(vector<string*>_tab ,string * s);//this function is called into member function to_delete
                                                                                            //in  this case
};

#endif // EXTERN_H_INCLUDED
