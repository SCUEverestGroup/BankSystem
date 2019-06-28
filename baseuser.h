#ifndef BASEUSER_H
#define BASEUSER_H

class BaseUser{
    public:
        string ID_Account;
        string Key;
        string Name;
        string Sex;
        string ID_Number;
        string Phone_Number;
        string Email_Address;
        string Home_Address;
        string Zip_code;

    private:

};

class User:private BaseUser{
    public:
        void Deposite_Money();//存款
        void Withdraw_Money();//取款
        void Add_Info();//增加信息
        void Delete_Info();//删除信息
        void Modify_Info();//修改信息
        void Report_Loss();//挂失
        void Relate_Account();//关联信息
        void Retrieve_Password();//取回密码
        /*Retrieve_Password 调用函数 */
        //void Email_Certification();//邮箱认证
        //void Phone_Certification();//电话认证
        void Appeal();//申诉

        void Logout();//注销账户

    private:
        double Deposite_Amount;//存款金额
        int Credit_Level;//信用等级
        string Card_Num;//银行卡号
};

class Manager:private BaseUser{
    public:
        void Verify_New_Account();//审核新账户
        void Process_Report_Loss();//处理挂失信息
        void Pro_Relate_Account();//处理关联账户
        void Process_Appeal();//处理申诉
        void Process_Logout();//处理挂失

    private:
        int power;//权限
        int isManager;//是否管理者
};

#endif  