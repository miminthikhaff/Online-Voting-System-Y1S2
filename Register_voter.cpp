#include<iostream>
#include<cstring>
#include"Register_voter.h"
using namespace std; 
 
Register_voter::Register_voter()
{
    strcpy(Email,"");
    strcpy(Password,"");
    voter_id =0;
}
Register_voter::Register_voter(char v_email[],const char v_password[])
{
    strcpy(Email,v_email);
    strcpy(Password,v_password);
}
void Register_voter::seteid(int id)
{
   voter_id = id;
}
int Register_voter::getid()
{
  return voter_id;
}
void Register_voter::displayDetails()
{
  cout <<"!--------Register Details--------!"<<endl;
  cout <<"Email        :" << Email << endl;
  cout <<"Password     :" << Password << endl;
  cout <<"Voter ID     :" <<  voter_id << endl<< endl;
}
void Register_voter::check_Awards()
{
  cout <<"Gold"<<endl;
  cout <<"Silver"<<endl;
  cout <<"Bronze"<<endl;
}
void Register_voter::view_profile()
{
  cout <<"Edit voter details" << endl;
}
void Register_voter::change_password()
{
   cout <<"Create new password" << endl;
}
Register_voter::~Register_voter()
{
   cout << "Delete Register_voter" << endl;
}
