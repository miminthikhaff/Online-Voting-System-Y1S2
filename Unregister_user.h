class Unregister_user
{

  protected:
    char Name[20];
    char Email[20];
    char Password[10];
    int PhoneNumber;
    char NIC[15];


  public:
    Unregister_user();
    Unregister_user(char u_name[],const char u_email[],const char u_password [],int u_number,const char v_nic[]);
    void check_ads();
    void view_notices();
    void displayuserdetails(); 
    void contectSupporrtservice();
    ~Unregister_user();

};