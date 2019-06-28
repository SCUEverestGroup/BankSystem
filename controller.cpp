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

int controller::ModeSelect(){//Sign in/up 选择函数 返回1为注册 返回2为登陆

}

void controller::SignUp(){//注册行为函数
    //调用signup.cpp中代码段
}

void controller::SignIn(){//登陆行为函数
    //调用signin.cpp中函数
}

void controller::initUI(){//初始化系统，读入数据库信息

}

void controller::run(){
    welcome();//欢迎界面
    initUI();//初始化系统
    int choice=ModeSelect();
    if(choice==1){
        SignUp();//注册
    }
    else{
        SignIn();//登陆
    }

    
}
