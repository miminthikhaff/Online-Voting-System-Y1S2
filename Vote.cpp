#include<iostream>
#include<iostream>
#include<cstring>
#include"Vote.h"
using namespace std;

Vote::Vote()
{
    vote_no = 0;
    strcpy(voter_id,"");
    strcpy(voter_name,"");
}
Vote::Vote(const char v_id[],const char v_name[])
{
    strcpy(voter_id,v_id);
    strcpy(voter_name,v_name);
}
void  Vote::setvoteno(int no)
{
    vote_no = no;
}
int  Vote::getvoteno()
{
   return vote_no;
}
void Vote::displaydetails()
{
  cout <<"!--------Vote Details--------!"<<endl;
  cout <<"Voter ID      :" << voter_id<< endl;
  cout <<"Voter Name    :" << voter_name << endl;
  cout <<"Vote No       :" <<vote_no << endl<<endl;
}
Vote::~Vote()
 {
   cout << "Delete Vote" << endl;
 }