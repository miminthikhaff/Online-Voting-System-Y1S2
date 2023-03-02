#include<iostream>
#include<cstring>
using namespace std;
#include "Unregister_user.h"
#include "Register_voter.h"
#include "Nomination_list.h"
#include "Feedback.h"
#include "Vote.h"

int main()
{
  // Unregister_user
  Unregister_user *uUser; 
  // create Unregister_user object
  uUser = new Unregister_user("Jhon","Jhon123@gmail.com","Jhon0001",077123456,"2000246862v");
  // display Unregister_user details
  uUser->displayuserdetails();
  
 
  // Register_voter
  Register_voter *rUser;
  // create Register_voter object
  rUser=new Register_voter("Register1@gmail.com","123456");
  // set Register_voter voter_id
  rUser->seteid(001);
  // display Register_voter details
  rUser->displayDetails();


  //Nomination_list
  Nomination_list *nom;
  // create Nomination_list object
  nom=new Nomination_list("N001","Awards");
  //set Nomination_list year
  nom->setyear(2021);
  // display Nomination_list details
  nom->displaynominationDetails();
  // display check_nominationlist details
  nom->check_nominationlist();

  //  Feedback
    Feedback *feed;
  // createFeedback object   
  feed= new Feedback(001,"Feedback01","001","Message");
  // display Feedback details
  feed->displayFeedbackDetails();

  //Vote
   Vote *v;
  // create Vote object
   v = new Vote("V001","Vote01");
  // set vote number 
   v->setvoteno(01);
  //display Vote Details();
   v->displaydetails();
  
  
  //delete dynamic variables
  delete  uUser;
  delete  rUser;
  delete  nom;
  delete  feed;
  delete  v;

};