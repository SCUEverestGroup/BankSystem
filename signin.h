#ifndef SIGNIN_H
#define SIGNIN_H

class Signin{
    public:
        Signin();
        bool JudgeType();//判断用户类型
        User* ReturnUser(string ID, string Key);
        Manager* ReturnManager(string ID,string Key);
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

#endif // !#define 