#ifndef SIGNIN_H
#define SIGNIN_H

class Signin{
    public:
        Signin();
        BaseUser* JudgeType();//判断用户类型
        void UserSignin(BaseUser* usr);//用户登陆后的操作
        void ManagerSignin(BaseUser* usr);//管理者登陆后的操作
        int UserChoice(BaseUser* usr);//用户选择操作
        int ManagerChoice(BaseUser* usr);//管理者选择操作

        void SigninAction();//总的注册流程函数

    private:
        bool isuser;
        bool ismanager;
};

#endif // !#define 