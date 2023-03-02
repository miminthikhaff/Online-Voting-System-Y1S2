#include<iostream>
#include<cstring>
#include"Feedback.h"
using namespace std;

Feedback::Feedback()
{
  Feedback_id=0;
  strcpy(voter_name,"");
  strcpy(voter_id,"");
  strcpy(Feedback_note,"");
}
Feedback::Feedback(int f_id,const char v_name[],const char v_id[],const char note[])
{
  Feedback_id=f_id;
  strcpy(voter_name, v_name);
  strcpy(voter_id,v_id);
  strcpy(Feedback_note,note);
}
void Feedback::displayFeedbackDetails()
{
  cout <<"!--------Feedback Details--------!"<<endl;
  cout <<"Feedback ID       :" << Feedback_id<< endl;
  cout <<"Voter Name        :" << voter_name << endl;
  cout <<"Voter ID          :" << voter_id << endl;
  cout <<"Feedback Note     :" << Feedback_note << endl<<endl;
}
Feedback::~Feedback()
{
  cout <<"Delete Feedback"<<endl;
}