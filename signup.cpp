#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <cstdio>
#include"signup.h"
//#include"baseuser.h" 
#include"uitool.h"
#include"User.h"
#include "bank.h"
#include"BankPersonnel.hpp"

using namespace std;

void SignUp::Sign_Up_Info(){
    //调用API导入所填写注册信息到数据库中
    setCursorLocation(13, 7);
    setTextColor(3);
    cout << "Type In Name   ";
    cin >> Name;

    string Key1 = "123123", Key2 = "321321";
    bool is_Same_Key = false;
    while(!is_Same_Key){
            setCursorLocation(13, 9);
            char* password;
            int length=6;
            password =new char[7];
            int count=0;
            char* p =NULL;
                    
            cout << "Type In Key, then Type In Enter to Confirm";
                    
            p=password;
            count=0;
            setCursorLocation(16, 10);
            while (((*p = getch()) != 13) && count < length) {     
                putch('*');
                fflush(stdin);
                p++;
                count++;
            }
            password[count]='\0';
            Key1 = password;

            setCursorLocation(13, 11);
            cout << "Type In Key Again to Confirm";

            p=password;
            count=0;
            setCursorLocation(16, 12);
            while (((*p = getch()) != 13) && count < length) {     
                putch('*');
                fflush(stdin);
                p++;
                count++;
            }
            password[count]='\0';
            Key2 = password;
            if(Key1!=Key2){
                setCursorLocation(13, 8);
                cout << "Diffrent Key";
                setCursorLocation(13, 9);
                cout << "                                            ";
                setCursorLocation(13, 10);
                cout << "                                            ";
                setCursorLocation(13, 11);
                cout << "                                            ";
                setCursorLocation(13, 12);
                cout << "                                            ";
                is_Same_Key=false;
            }
            else{
                is_Same_Key = true;
                Key = Key1;
                break;
            }
                
    }
   


    setCursorLocation(13, 13);
    cout << "Type In Sex    ";
    cin >> Sex;
    
    setCursorLocation(13, 14);
    cout << "Type In Your ID Card Number.";
    setCursorLocation(13, 15);
    cin >> ID_Card;

    setCursorLocation(13, 16);
    cout << "Type In Your Telephone Number.";
    setCursorLocation(13, 17);
    cin >> Phone;

    setCursorLocation(13, 18);
    cout << "Type In Your Email Address.";
    setCursorLocation(13, 19);
    cin >> Email;

    setCursorLocation(13, 20);
    cout << "Type In Your Home Address.";
    setCursorLocation(13, 21);
    cin >> Address;

    setCursorLocation(13, 22);
    cout << "Type In Your Zip Code AND Submit.";
    setCursorLocation(13, 23);
    cin >> Zip;

    /*上传数据至数据库中*/
    User usr1(Key, Name, Sex, ID_Card, Phone, Email, Address, Zip);
    string id=bank.signUp(usr1);
    setCursorLocation(13, 24);
    if(id!=""){
        cout << "Submit Successfully!!";
        setCursorLocation(13, 25);
        cout << "Please Remember Your ID:  " << id;
    }
    
    system("Pause");

    

}

void SignUp::Init_Signup_UI(){
    //初始化注册界面
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
    setCursorLocation(13, 6);
    setBackgroundColor();
    cout << "Sign Up UI";
}

void SignUp::Sign_Action(){
    Init_Signup_UI();
    Sign_Up_Info();
}

