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
    Interface interface;
    cout << (interface.isManager("000001") ? "true" : "false") << endl;
    cout << (interface.isManager("241457") ? "true" : "false") << endl;
    UserInterface user;
    user.login("241457", "password");
    user.showUser();
    user.depositeMoney("100");
    user.withdrawMoney("50");
    user.appeal("test");
    user.addCard("5101082000");
    user.addCard("123123123123");
    user.reportLoss("5101082000");
    ManagerInterface manager;
    manager.login("000001", "123456");
    manager.showManager();
    return 0;
}
