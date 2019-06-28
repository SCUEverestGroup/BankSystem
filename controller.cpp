#include <bits/stdc++.h>
//#include<windows.h>
#include "controller.h"
#include "uitool.h"
#include "signup.h"
#include "signin.h"
#include "baseuser.h"
using namespace std;


void controller::welcome(){//欢迎界面
    //setwindowsize(40, 32);
}

void controller::initUI(){//初始化系统，读入数据库信息

}

int controller::ModeSelect(){//Sign in/up 功能选择界面函数 返回1为注册 返回2为登陆

}

void controller::SignUp_Operation(){//注册行为函数
   // SignUp su;
                   //调用signup.cpp中代码段
    //SigninAction();
}

void controller::SignIn_Operation(){//登陆行为函数
    SignIn p;
    p.SigninAction(); //调用signin.cpp中函数
}


void controller::run(){
    welcome();//欢迎界面
    initUI();//初始化系统
    int choice=ModeSelect();//功能选择
    while(choice){
        if(choice==1){
            SignUp_Operation();//注册
            initUI();
            choice=ModeSelect();
        }
        else if(choice==2){
            SignIn_Operation();//登陆
            initUI();
            choice=ModeSelect();
        }
        else{//退出系统
            break;
        }
    }
   
    

    
}
