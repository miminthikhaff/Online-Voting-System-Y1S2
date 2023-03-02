class Register_voter 
{

  private:
    char Email[20];
    char Password[10];
    int voter_id;


  public:
     Register_voter();
     Register_voter(char v_email[],const char v_password[]);
     void seteid(int id);
     int getid();
     void displayDetails();
     void cast_vote();
     void view_profile();
     void change_password();
     void check_Awards();
     void view_nominationlist();
     ~Register_voter();

};