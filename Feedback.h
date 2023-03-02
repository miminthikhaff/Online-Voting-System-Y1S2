class Feedback
{
  
  private:
     int Feedback_id;
     char voter_name[20];
     char voter_id[10];
     char Feedback_note[50];
  

  public:
     Feedback();
     Feedback(int f_id,const char v_name[],const char v_id[],const char note[]);
     void displayFeedbackDetails();
     void viewfeedback();
     void StorefeedbackAnsweredStatus();
     ~Feedback();

};