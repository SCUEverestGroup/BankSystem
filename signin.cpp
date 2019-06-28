#include <bits/stdc++.h>
#include "signin.h"
#include "baseuser.h"
using namespace std;

BaseUser* Signin::JudgeType(){
    //输入ID 密码
    int usertype;
    BaseUser *usr;
    //数据库查找返回usertype & usr
    
    if(usertype==1){//user
        isuser = true;
        ismanager = false;
        return usr ;
    }
    else{//manager
        isuser = false;
        ismanager = true;
        return usr;
    }
}

int Signin::UserChoice(BaseUser* usr){

}
int Signin::ManagerChoice(BaseUser* usr){

}

void Signin::UserSignin(BaseUser* usr ){
    int choice = UserChoice(usr);
    switch (choice)
    {
    case 1:
        /* code */
        break;
    
    default:
        break;
    }
}

void Signin::ManagerSignin(BaseUser* usr){

}

void Signin::SigninAction(){
    BaseUser* usr = JudgeType();//判定用户类型
    if(isuser){
        UserSignin(usr);//用户登录
    }
    else{
        ManagerSignin(usr);//管理员登陆
    }
}

