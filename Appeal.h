//
//  Appeal.h
//  BankSystem
//
//  Created by Soptq on 2019/6/29.
//  Copyright © 2019 Soptq. All rights reserved.
//

#ifndef APPEAL_H
#define APPEAL_H

class Appeal{
public:
    std::string tid;
    std::string userid;
    std::string content;
    Appeal(std::string mtid, std::string muserid, std::string mcontent){
        tid = mtid;
        userid = muserid;
        content = mcontent;
    }
};

#endif /* Appeal_h */
