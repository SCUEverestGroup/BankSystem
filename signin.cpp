#include <bits/stdc++.h>
#include "signin.h"
#include "baseuser.h"
using namespace std;

void SignIn::Init_Signin_UI(){
    //QT界面
}
void SignIn::User_Opertation_UI(){
//User 操作界面
}
void SignIn::Manager_Operation_UI(){
//Manager操作界面
}

bool SignIn::JudgeType(){
    //输入ID 密码 并记录在ID KEY中
    bool usertype;
    //数据库查找返回usertype user则为true; manager则为false;
    islocked = false;
    return usertype;
}

User* SignIn::ReturnUser(string ID, string Key){
    User *usr;
    /*通过数据库API返回用户指针 */
    return usr;
}

Manager* SignIn::ReturnManager(string ID, string Key){
    Manager *usr;
    //通过数据库返回指针
    return usr;
};

int SignIn::UserChoice(User* usr){
    int choice;
     /*这插入一个选择函数 ,选择要进行操作的类型并返回相应序号*/
    return choice;
}
int SignIn::ManagerChoice(Manager* usr){
    int choice;
    /*这插入一个选择函数 ,选择要进行操作的类型并返回相应序号 */
    return choice;
}

void SignIn::UserSignin(User* usr ){
    User_Opertation_UI();
    int choice = UserChoice(usr);
    while(choice){
        switch (choice)
        {
        case 1:
            usr->Deposite_Money();
            break;
        case 2:
            usr->Withdraw_Money();
            break;
        case 3:
            usr->Add_Info();
            break;
        case 4:
            usr->Delete_Info();
            break;
        case 5:
            usr->Modify_Info();
            break;
        case 6:
            usr->Report_Loss();
            break;
        case 7:
            usr->Relate_Account();
            break;
        case 8:
            usr->Retrieve_Password();
            break;
        case 9:
            usr->Appeal();
            break;
        default:
            break;
        };
        /*是否继续 */
        bool Continue = true;
        if (Continue){
            choice = UserChoice(usr);
        }
        else{
            break;
        }
    }    
       
}

void SignIn::ManagerSignin(Manager* usr){
    Manager_Operation_UI();
    int choice = ManagerChoice(usr);
        while(choice){
            switch (choice)
            {
            case 1:
                usr->Verify_New_Account();
                break;
            case 2:
                usr->Process_Report_Loss();
                break;
            case 3:
                usr->Pro_Relate_Account();
                break;
            case 4:
                usr->Process_Appeal();
                break;
            case 5:
                usr->Process_Logout();
                break;
            default:
                break;
            };
            /*是否继续 */
            bool Continue = true;
            if (Continue){
                choice = ManagerChoice(usr);
            }
            else{
                break;
            }
        }    
}

void SignIn::SigninAction(){
    Init_Signin_UI();
    if(JudgeType()){//判定用户类型
        if(!islocked){
            User *usr = ReturnUser(ID,Key);
            UserSignin(usr);
        }   
    }
    else{
        if(!islocked){
            Manager *usr = ReturnManager(ID, Key);
            ManagerSignin(usr);//管理员登陆
        }
    }
}

