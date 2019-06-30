#include <bits/stdc++.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include "controller.h"
#include "uitool.h"
#include "signup.h"
#include "signin.h"
#include "baseuser.h"
using namespace std;


void controller::welcome(){//欢迎界面
    setwindowsize(62, 32);
    setCursorLocation(13, 10);
    cout << "Welcome to Bank Management System!";
    setCursorLocation(13, 20);
    cout << "Press Any Key To Start.....";
    setCursorLocation(13, 21);
    system("Pause");
}

void controller::initUI(){//初始化系统，读入数据库信息
    system("cls");
    for (int i = 1; i <= 60; ++i){
        setCursorLocation(i, 1);
        cout << "=";
        Sleep(10);
    }
    for (int i = 2; i <= 30; ++i){
        setCursorLocation(1, i);
        cout << "||";
        setCursorLocation(59, i);
        cout << "||";
        Sleep(10);
    }
    for (int i = 2; i <= 58; ++i){
        setCursorLocation(i, 30);
        cout << "=";
        Sleep(10);
    }
   
}

int controller::ModeSelect(){//Sign in/up 功能选择界面函数 返回1为Signin 返回2为signup
    setTextColor(3);
    setCursorLocation(13, 10);
    cout << "Use Directgion Key to Choose An Operation.";
    
    setBackgroundColor();
    setCursorLocation(13, 13);
    cout << ">1.Sign In";

    setTextColor(3);
    setCursorLocation(13, 14);
    cout << "2.Sign Up";

    setTextColor(3);
    setCursorLocation(13, 15);
    cout << "3.Exit";

    bool isenter = false;
    int mode = 1;
    int ch = 1;
    while(ch=getch()){
        switch(ch){
            case 72://up
                if(mode>1){// 之前是2,3选项
                    switch(mode){
                        case 2:
                            setCursorLocation(13, 13);
                            setBackgroundColor();
                            cout << ">1.Sign In";

                            setCursorLocation(13, 14);
                            setTextColor(3);
                            cout << "2.Sign Up ";
                            --mode;
                            break;
                        case 3:
                            setCursorLocation(13, 14);
                            setBackgroundColor();
                            cout << ">2.Sign Up";

                            setCursorLocation(13, 15);
                            setTextColor(3);
                            cout << "3.Exit ";
                            --mode;
                            break;                            
                    }
                }
                break;
            case 80://down
                if(mode<3){//之前是1选项
                    switch(mode){
                        case 1:
                            setCursorLocation(13, 14);
                            setBackgroundColor();
                            cout << ">2.Sign Up";

                            setCursorLocation(13, 13);
                            setTextColor(3);
                            cout << "1.Sign In ";
                            ++mode;
                            break;
                        case 2:
                            setCursorLocation(13, 15);
                            setBackgroundColor();
                            cout << ">3.Exit";

                            setCursorLocation(13, 14);
                            setTextColor(3);
                            cout << "2.Sign Up ";
                            ++mode;
                            break;                           
                    }
                }
                break;
            case 13:
                isenter = true;
                break;
            default:
                break;
        }
        if(isenter)
            break;
    }
    setCursorLocation(31, 31);
    return mode;
}

void controller::SignUp_Operation(){//注册行为函数
    SignUp *ptr = new SignUp;
    ptr->Sign_Action();
    delete ptr;
    //调用signup.cpp中代码段
    //SigninAction();
}

void controller::SignIn_Operation(){//登陆行为函数
    SignIn* ptr=new SignIn;
    ptr->SigninAction(); //调用signin.cpp中函数
    delete ptr;
}


void controller::run(){
    welcome();//欢迎界面
    initUI();//初始化系统
    int choice=ModeSelect();//功能选择
    while(choice){
        if(choice==1){
	        SignIn_Operation();//登陆
            initUI();
            choice=ModeSelect();
        }
        else if(choice==2){
            SignUp_Operation();//注册
            initUI();
            choice=ModeSelect();
        }
        else{//退出系统
            
            break;
        }
    }
   
    

    
}
