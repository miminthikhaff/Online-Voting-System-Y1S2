#include<iostream>
#include<cstring>
#include"Unregister_user.h"
using namespace std;

Unregister_user::Unregister_user()
{
    strcpy(Name,"");
    strcpy(Email,"");
    strcpy(Password,"");
    PhoneNumber=0;
    strcpy(NIC,"");
}
Unregister_user::Unregister_user(char u_name[],const char u_email[],const char u_password [],int u_number,const char v_nic[])
{
    strcpy(Name,u_name);
    strcpy(Email,u_email);
    strcpy(Password,u_password);
    PhoneNumber=u_number;
    strcpy(NIC,v_nic);
}
void Unregister_user::check_ads()
{
  cout <<"Create add " << endl;
  cout <<"Popular adds" << endl;
}
void Unregister_user::displayuserdetails()
{
  cout <<"!--------Unregister_user Details--------!"<<endl;
  cout <<"Name         :" << Name << endl;
  cout <<"Email        :" << Email << endl;
  cout <<"Phone_Number :" << PhoneNumber << endl;
  cout <<"NIC_Number   :" << NIC << endl<< endl;
}
Unregister_user::~Unregister_user()
{
  cout << "Delete Unregister_user" << endl;
}