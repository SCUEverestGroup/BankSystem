#ifndef SIGNUP_H
#define SIGNUP_H
#include <string> 
using namespace std;
class SignUp{
    public:
        void Sign_Up_Info();//用户注册信息
        void Init_Signup_UI();
        void Sign_Action();

    private:
        string Name;
        string Key;
        string Sex;
        string ID_Card;
        string Phone;
        string Email;
        string Address;
        string Zip;
        int Permission;
};

#endif
