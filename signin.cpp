#include <bits/stdc++.h>
#include <windows.h>
#include <cstdio>
#include "signin.h"
#include <conio.h>
#include <time.h>
#include "baseuser.h"
#include "uitool.h"
using namespace std;

void SignIn::Init_Signin_UI(){
    //界面
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

    setCursorLocation(13, 8);
    setBackgroundColor();
    cout << "Sign In UI";
}

void SignIn::User_Opertation_UI(){
//User 操作界面
}

void SignIn::Manager_Operation_UI(){
//Manager操作界面
}

bool SignIn::JudgeType(){
    bool usertype = false;
    while(islocked){
            setCursorLocation(13, 10);//输入ID 密码 并记录在ID KEY中
            setTextColor(3);
            cout << "Type In ID";

            setCursorLocation(16, 11);
            cin >> ID;

            setCursorLocation(13, 14);
            
            char* password;
            int length=6;
        	password =new char[7];
        	int count=0;
        	char* p =NULL;
        	
        	cout << "Type In Key, then Type In Enter to Confirm";
        	
        	p=password;
        	count=0;
        	
            setCursorLocation(16, 15);
            while (((*p = getch()) != 13) && count < length) {
                // ���ﲻ��'\n'(10), new line
                // ����'\r'(13), reback. ���ǰ��»س���,�������������linux��.
                // ��Ҫ����getch��������й�.
                putch('*');
                fflush(stdin);
 
                p++;
                count++;
        	}
        	password[count]='\0';
        	
        	Key = password;
            //cout << Key;
            islocked = false;

    /*
        ========调用API===========
        正确则islocked=false
        ===========================
    */
            if(islocked){
                setCursorLocation(13, 9);
                cout << "ID or Key error! Please Type In Again!";
                system("Pause");
                system("cls");
            }
            else{
                setCursorLocation(13, 9);
                //数据库查找返回usertype user则为true;
                // manager则为false;
                usertype = false;
                if(usertype){//user
                    cout << "User Load In Successfully!";
                }
                else cout<<"Manager Load In Successfully!";
                
                system("Pause");
                system("cls");
                
            }
    }
    //islocked = false;
    //usertype =true;
    return usertype;
}

User* SignIn::ReturnUser(string ID, string Key){
    //User *usr = NULL;
    User *usr = new User(ID, Key);
    /*
    ========================
    通过数据库API返回用户指针 
    ========================
    */
    return usr;
}

Manager* SignIn::ReturnManager(string ID, string Key){
    Manager *usr=new Manager(ID,Key);

   /*
   ===========================
   通过数据库API返回管理员指针 
   ===========================
   */
   
    return usr;
};

int SignIn::UserChoice(User* usr){
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
    
    setTextColor(3);
    setCursorLocation(13,7);
    std::cout <<"Use Direction Key to Choose Mode ";
    setCursorLocation(13, 8);
    std::cout <<"And Tap Enter to Confirm:";

    setCursorLocation(13,10);
    setBackgroundColor();
    cout << ">1.Deposite Money";

    setTextColor(3);
    setCursorLocation(13,11);
    cout << "2.Withdraw_Money";
    
    setTextColor(3);
    setCursorLocation(13,12);
    cout << "3.Add_Info";

    setTextColor(3);
    setCursorLocation(13,13);
    cout << "4.Delete_Info";

    setTextColor(3);
    setCursorLocation(13,14);
    cout << "5.Modify_Info";

    setTextColor(3);
    setCursorLocation(13,15);
    cout << "6.Report_Loss";

    setTextColor(3);
    setCursorLocation(13,16);
    cout << "7.Relate_Account";

    setTextColor(3);
    setCursorLocation(13,17);
    cout << "8.Retrieve_Password";
    
    setTextColor(3);
    setCursorLocation(13,18);
    cout << "9.Appeal";

    setTextColor(3);
    setCursorLocation(13,19);
    cout << "10.Logout";

    setTextColor(3);
    setCursorLocation(13,20);
    cout << "11.Exit";

    int choice=1; 
    bool isenter=false;
     /*这插入一个选择函数 ,选择要进行操作的类型并返回相应序号*/
    int ch=1;
    while(ch=getch()){
        switch(ch){
            case 72:
                if(choice>1){
                    switch(choice){
                        case 2:
                            setCursorLocation(13,10);
                            setBackgroundColor();
                            cout << ">1.Deposite Money";

                            setTextColor(3);
                            setCursorLocation(13,11);
                            cout << "2.Withdraw_Money ";
                            --choice;
                            break;

                        case 3:
                        
                            setCursorLocation(13,11);
                            setBackgroundColor();
                            cout << ">2.Withdraw_Money";
                            
                            setTextColor(3);
                            setCursorLocation(13,12);
                            cout << "3.Add_Info ";
                            --choice;
                            break;

                        case 4:
                            
                            setCursorLocation(13,12);
                            setBackgroundColor();
                            cout << ">3.Add_Info";

                            setTextColor(3);
                            setCursorLocation(13,13);
                            cout << "4.Delete_Info ";   
                            --choice;
                            break;

                        case 5:
                            
                            setCursorLocation(13,13);
                            setBackgroundColor();
                            cout << ">4.Delete_Info";

                            setTextColor(3);
                            setCursorLocation(13,14);
                            cout << "5.Modify_Info ";        
                            --choice;
                            break;       

                        case 6:
                            
                            setCursorLocation(13,14);
                            setBackgroundColor();
                            cout << ">5.Modify_Info";

                            setTextColor(3);
                            setCursorLocation(13,15);
                            cout << "6.Report_Loss ";        
                            --choice;
                            break;

                        case 7:

    
                            setCursorLocation(13,15);
                            setBackgroundColor();
                            cout << ">6.Report_Loss";

                            setTextColor(3);
                            setCursorLocation(13,16);

                            cout << "7.Relate_Account ";
                            --choice;
                            break;

                        case 8:
                            
                            setCursorLocation(13,16);
                            setBackgroundColor();
                            cout << ">7.Relate_Account";

                            setTextColor(3);
                            setCursorLocation(13,17);
                            cout << "8.Retrieve_Password ";
                            --choice;
                            break;

                        case 9:
                            
                            setCursorLocation(13,17);
                            setBackgroundColor();
                            cout << ">8.Retrieve_Password";
                            
                            setTextColor(3);
                            setCursorLocation(13,18);
                            cout << "9.Appeal ";
                            --choice;
                            break; 

                        case 10:
                            
                            setCursorLocation(13,18);
                            setBackgroundColor();
                            cout << ">9.Appeal";

                            setTextColor(3);
                            setCursorLocation(13,19);
                            cout << "10.Logout ";
                            --choice;
                            break;
                        case 11:
                            
                            setCursorLocation(13,19);
                            setBackgroundColor();
                            cout << ">10.Logout";

                            setTextColor(3);
                            setCursorLocation(13,20);
                            cout << "11.Exit ";
                            --choice;
                            break;                   
                    
       
                    }
                }
                break;
            case 80://downward
                if(choice <11){
                    switch(choice){
                        case 1:
                            setCursorLocation(13,10);
                            setTextColor(3);
                            cout << "1.Deposite Money ";

                            setCursorLocation(13,11);
                            setBackgroundColor();
                            cout << ">2.Withdraw_Money";
                            ++choice;
                            break;

                        case 2:
                        
                            setCursorLocation(13,11);
                            setTextColor(3);
                            cout << "2.Withdraw_Money ";
                            
                            setCursorLocation(13,12);
                            setBackgroundColor();
                            cout << ">3.Add_Info";
                            ++choice;
                            break;

                        case 3:
                            
                            setCursorLocation(13,12);
                            setTextColor(3);
                            cout << "3.Add_Info ";

                            setBackgroundColor();
                            setCursorLocation(13,13);
                            cout << ">4.Delete_Info";   
                            ++choice;
                            break;

                        case 4:
                            
                            setCursorLocation(13,13);
                            setTextColor(3);
                            cout << "4.Delete_Info ";

                            setBackgroundColor();
                            setCursorLocation(13,14);
                            cout << ">5.Modify_Info";        
                            ++choice;
                            break;       

                        case 5:
                            
                            setCursorLocation(13,14);
                            setTextColor(3);
                            cout << "5.Modify_Info ";

                            setBackgroundColor();
                            setCursorLocation(13,15);
                            cout << ">6.Report_Loss";        
                            ++choice;
                            break;

                        case 6:

    
                            setCursorLocation(13,15);
                            setTextColor(3);
                            cout << "6.Report_Loss ";

                            setBackgroundColor();
                            setCursorLocation(13,16);
                            cout << ">7.Relate_Account";
                            ++choice;
                            break;

                        case 7:
                            
                            setCursorLocation(13,16);
                            setTextColor(3);
                            cout << "7.Relate_Account ";

                            setBackgroundColor();
                            setCursorLocation(13,17);
                            cout << ">8.Retrieve_Password";
                            ++choice;
                            break;

                        case 8:
                            
                            setCursorLocation(13,17);
                            setTextColor(3);
                            cout << "8.Retrieve_Password ";
                            
                            setBackgroundColor();
                            setCursorLocation(13,18);
                            cout << ">9.Appeal";
                            ++choice;
                            break; 

                        case 9:
                            
                            setCursorLocation(13,18);
                            setTextColor(3);
                            cout << "9.Appeal ";

                            setBackgroundColor();
                            setCursorLocation(13,19);
                            cout << ">10.Logout";
                            ++choice;
                            break;
                        case 10:
                            
                            setCursorLocation(13,19);
                            setTextColor(3);
                            cout << "10.Logout ";

                            setBackgroundColor();
                            setCursorLocation(13,20);
                            cout << ">11.Exit";
                            ++choice;
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
    setCursorLocation(39, 31);
    return choice;
}

int SignIn::ManagerChoice(Manager* usr){
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
    
    setTextColor(3);
    setCursorLocation(13,7);
    std::cout <<"Use Direction Key to Choose Mode ";
    setCursorLocation(13, 8);
    std::cout <<"And Tap Enter to Confirm:";

    setCursorLocation(13,10);
    setBackgroundColor();
    cout << ">1.Verify_New_Account";

    setTextColor(3);
    setCursorLocation(13,11);
    cout << "2.Process_Report_Loss";
    
    setTextColor(3);
    setCursorLocation(13,12);
    cout << "3.Pro_Relate_Account";

    setTextColor(3);
    setCursorLocation(13,13);
    cout << "4.Process_Appeal";

    setTextColor(3);
    setCursorLocation(13,14);
    cout << "5.Process_Logout";

    setTextColor(3);
    setCursorLocation(13,15);
    cout << "6.Exit";

    int choice=1; 
    bool isenter=false;
     /*这插入一个选择函数 ,选择要进行操作的类型并返回相应序号*/
    int ch=1;
    while(ch=getch()){
        switch(ch){
            case 72://up
                if(choice>1){
                    switch(choice){
                        case 2:
                            setCursorLocation(13,10);
                            setBackgroundColor();
                            cout << ">1.Verify_New_Account";

                            setTextColor(3);
                            setCursorLocation(13,11);
                            cout << "2.Process_Report_Loss ";
                            --choice;
                            break;
                        case 3:
                            setCursorLocation(13,11);
                            setBackgroundColor();
                            cout << ">2.Process_Report_Loss";

                            setTextColor(3);
                            setCursorLocation(13,12);
                            cout << "3.Pro_Relate_Account ";
                            --choice;
                            break;
                        case 4:
                            setCursorLocation(13,12);
                            setBackgroundColor();
                            cout << ">3.Pro_Relate_Account";

                            setTextColor(3);
                            setCursorLocation(13,13);
                            cout << "4.Process_Appeal ";
                            --choice;
                            break;
                        case 5:
                            setCursorLocation(13,13);
                            setBackgroundColor();
                            cout << ">4.Process_Appeal";

                            setTextColor(3);
                            setCursorLocation(13,14);
                            cout << "5.Process_Logout ";
                            --choice;
                            break;                        
                        case 6:
                            setCursorLocation(13,14);
                            setBackgroundColor();
                            cout << ">5.Process_Logout";

                            setTextColor(3);
                            setCursorLocation(13,15);
                            cout << "6.Exit ";
                            --choice;
                            break;         
                    }
                }
                break;
            case 80://downward
                if(choice <6){
                    switch(choice){
                        case 1:
                            setCursorLocation(13,10);
                            setTextColor(3);
                            cout << "1.Verify_New_Account ";

                            setCursorLocation(13,11);
                            setBackgroundColor();
                            cout << ">2.Process_Report_Loss";
                            ++choice;
                            break;                   
                        case 2:
                            setCursorLocation(13,11);
                            setTextColor(3);
                            cout << "2.Process_Report_Loss ";

                            setCursorLocation(13,12);
                            setBackgroundColor();
                            cout << ">3.Pro_Relate_Account";
                            ++choice;
                            break;                             
                        case 3:
                            setCursorLocation(13,12);
                            setTextColor(3);
                            cout << "3.Pro_Relate_Account ";

                            setCursorLocation(13,13);
                            setBackgroundColor();
                            cout << ">4.Process_Appeal";
                            ++choice;
                            break;                              
                        case 4:
                            setCursorLocation(13,13);
                            setTextColor(3);
                            cout << "4.Process_Appeal ";

                            setCursorLocation(13,14);
                            setBackgroundColor();
                            cout << ">5.Process_Logout";
                            ++choice;
                            break; 
                        case 5:
                            setCursorLocation(13,14);
                            setTextColor(3);
                            cout << "5.Process_Logout ";

                            setCursorLocation(13,15);
                            setBackgroundColor();
                            cout << ">6.Exit";
                            ++choice;
                            break;                         
                    }
                }
                break;
           case 13:
               setTextColor(3);
               isenter = true;
               break;
            default:
                break;
        }
        if(isenter)
            break;
    }
    setCursorLocation(39, 31);
    return choice;
}


void SignIn::UserSignin(User* usr ){
    setTextColor(3);
    User_Opertation_UI();
    int choice = UserChoice(usr);
    bool Continue = true;
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
        case 10:
            usr->Logout();
            break;
        case 11:
            Continue = false;
            break;

        default:
            Continue = false;
            break;
        };
        /*是否继续 */
        
        if (Continue){
            choice = UserChoice(usr);
        }
        else{
            setTextColor(3);
            choice = 0;
            break;
        }
    }    
       
}

void SignIn::ManagerSignin(Manager* usr){
    setTextColor(3);
    Manager_Operation_UI();
    int choice = ManagerChoice(usr);
    bool Continue = true;
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
            case 6:
                Continue = false;
                break;
            default:
                Continue = false;
                break;
            };
            /*是否继续 */
            
            if (Continue){
                setTextColor(3);
                choice = ManagerChoice(usr);
            }
            else{
                choice = 0;
                break;
            }
        }    
}

void SignIn::SigninAction(){
    Init_Signin_UI();
    if(JudgeType()){//判定用户类型
        if(!islocked){
            User *usr = ReturnUser(ID,Key);
            if(usr==NULL){
                setCursorLocation(13, 24);
                cout << "Load User Failed.";
                system("Pause");
            }
            else  {
                UserSignin(usr);

            }    
        }   
    }
    else{
        if(!islocked){
            Manager *usr = ReturnManager(ID, Key);
            if(usr==NULL){
                setCursorLocation(13, 24);
                cout << "Load Manager Failed";
				system("Pause");
            }
            else ManagerSignin(usr);//管理员登陆

        }
    }
}
