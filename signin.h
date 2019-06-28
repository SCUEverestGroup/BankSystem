#ifndef SIGNIN_H
#define SIGNIN_H

class SignIn{
    public:
        SignIn():islocked(true){};
        void Init_Signin_UI();//初始登陆界面UI
        void User_Opertation_UI();
        void Manager_Operation_UI();
        bool JudgeType();//判断用户类型
        User* ReturnUser(string ID, string Key);//返回User对象指针
        Manager* ReturnManager(string ID,string Key);//返回Manager对象指针
        void UserSignin(User* usr);//用户登陆后的操作
        void ManagerSignin(Manager* usr);//管理者登陆后的操作
        int UserChoice(User* usr);//用户选择操作
        int ManagerChoice(Manager* usr);//管理者选择操作

        void SigninAction();//总的注册流程函数

    private:
        string ID;
        string Key;
        bool islocked;//是否已经认证解锁过
        bool isuser;
        bool ismanager;
};

#endif // !#define ·