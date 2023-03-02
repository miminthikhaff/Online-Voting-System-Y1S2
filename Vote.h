class Vote
{

  private:
    int  vote_no;
    char voter_id[10];
    char voter_name[20];
  
  
  public:
    Vote();
    Vote(const char v_id[],const char v_name[]);
    void setvoteno(int no);
    int getvoteno();
    void displaydetails();
    void checkvote_list();
    void countvote();
    void votedetails();
   ~Vote();

};