#ifndef SIGNIN_H
#define SIGNIN_H
#include "User.h"
//#include "bank.h"
#include <string>
using namespace std;
class SignIn{
    public:
        SignIn():islocked(true){};
        void Init_Signin_UI();//初始登陆界面UI
        void User_Opertation_UI();
        void Manager_Operation_UI();
        bool JudgeType();//判断用户类型
        User* ReturnUser();//返回User对象指针
        Manager* ReturnManager();//返回Manager对象指针
        void UserSignin();//用户登陆后的操作
        void ManagerSignin();//管理者登陆后的操作
        int UserChoice();//用户选择操作
        int ManagerChoice();//管理者选择操作

        void SigninAction();//总的注册流程函数
        /*User */
        void SeeInfor();
        void Deposite_Money();//存款
        void Withdraw_Money();//取款
        void Tranfer_Money();//转账
        void Add_Info();//增加信息
        void Delete_Info();//删除信息
        void Modify_Info();//修改信息
        void Report_Loss();//挂失
        void Relate_Card();//关联卡号
        void Retrieve_Password();//取回密码
        void Appeal();//申诉
        void Logout();//注销账户      
        /*Manager */
        void Verify_New_Account();//审核新账户
        void Process_Report_Loss();//处理挂失信息
        void Pro_Relate_Account();//处理关联账户
        void Process_Appeal();//处理申诉
        void Process_Logout();//处理挂失
        void SignUp_Manager();//注册管理员

    private:
        string ID;
        string Key;
        bool islocked;//是否已经认证解锁过
        bool isuser;
        bool ismanager;
};

#endif // !#define ·
