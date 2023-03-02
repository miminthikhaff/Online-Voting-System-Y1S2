
#include<iostream>
#include<cstring>
#include"Nomination_list.h"
using namespace std;

Nomination_list::Nomination_list()
{
  strcpy(Nomination_id,"");
  strcpy(Nomination_category,"");
  Nomination_year =0;
}
Nomination_list::Nomination_list(char n_id[],const char category[])
{
  strcpy(Nomination_id,n_id);
  strcpy(Nomination_category,category);
}
void Nomination_list::setyear(int year)
{
   Nomination_year = year;
}
int Nomination_list::getyear()
{
   return  Nomination_year;
}
void Nomination_list::displaynominationDetails()
{
  cout <<"!--------Nomination_list Details--------!"<<endl;
  cout <<"Nomination_ID         :" << Nomination_id << endl;
  cout <<"Nomination Category   :" << Nomination_category << endl;
  cout <<" Nomination Year      :" << Nomination_year << endl;
}
void Nomination_list::check_nominationlist()
{
  cout <<"Check previous Nomination List" <<endl;
  cout <<"Check Newest Nomination List" <<endl<<endl;
}
void Nomination_list::update_nominationlist()
{
  cout <<"Update Newest Nornimation List Details" <<endl;
}
Nomination_list::~Nomination_list()
{
   cout << "Delete Nomination_list" << endl;
}