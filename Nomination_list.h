class Nomination_list
{

  private:
    char Nomination_id[10];
    char Nomination_category[20];
    int Nomination_year;
  
  
  public:
     Nomination_list();
     Nomination_list(char n_id[],const char category[]);
     void check_nominationlist();
     void update_nominationlist();
     void displaynominationDetails();
     void setyear(int year);
     int getyear();
     ~Nomination_list();

};