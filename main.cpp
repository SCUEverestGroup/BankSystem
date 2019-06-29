//
//  main.cpp
//  BankSystem
//
//  Created by Soptq on 2019/6/28.
//  Copyright © 2019 Soptq. All rights reserved.
//


#include <iostream>
#include <vector>

#include "Interface.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // test interface
//    Interface interface;
//    cout << (interface.isManager("000001") ? "true" : "false") << endl;
//    cout << (interface.isManager("241457") ? "true" : "false") << endl;
//    // test userinterface
//    UserInterface user;
//    cout << (user.login("241457", "password") ? "true" : "false") << endl;
//    user.showUser();
//    string id1 = interface.signUpNewUser("asdfgh", "James", "Male", "10003020402034578", "817-5574", "James@gmail.com", "Wall Street 1st", "10220");
//    cout << id1 << endl;
//    string id2 = interface.signUpNewUser("qwerty", "Anita", "female", "1000348762938141x", "453-1236", "Anita@foxmail.com", "XinHua Road", "10102");
//    cout << id2 << endl;
//    user.login(id1, "asdfgh");
//    user.showUser();
//    user.login(id2, "qwerty");
//    user.depositeMoney("100");
//    user.withdrawMoney("50");
//    user.appeal("test appeal");
//    user.addCard("510108200012");
//    user.addCard("123123123123");
//    user.addCard("123456");
//    user.reportLoss("510108200012");
//    user.reportLoss("123123123123");
//    user.updateZipInfo("10221");
//    user.removeCard("123456");
//    user.depositeMoney("1.4");
//    user.revertReportLoss("123123123123");
//    // test managerinterface
    ManagerInterface manager;
    manager.login("000001", "123456");
    manager.showManager();
    vector<Appeal*> group = manager.getAppeal();
    cout << group[0]->content << endl;
//    manager.processReport_Loss("710303", "510108200012", "1234567890");
    manager.processAppeal("889521");
    return 0;
}
