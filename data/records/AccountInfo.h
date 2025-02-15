//
// Created by emirk on 2/14/25.
//
#pragma once

#ifndef ACCOUNTINFO_H
#define ACCOUNTINFO_H


#include "CommonDataClass.h"

class AccountInfo : public CommonDataClass {
private:
    std::string initialdate;
    std::string initialbybranch;
    std::string accountno;
    std::string comment;
    std::string currency;

public:
    [[nodiscard]] const std::string& get_initialdate() const;
    [[nodiscard]] const std::string& get_initialbybranch() const;
    [[nodiscard]] const std::string& get_accountno() const;
    [[nodiscard]] const std::string& get_comment() const;
    [[nodiscard]] const std::string& get_currency() const;

    void set_initialdate(const std::string& initialdate_);
    void set_initialbybranch(const std::string& initialbybranch_);
    void set_accountno(const std::string& accountno_);
    void set_comment(const std::string& comment_);
    void set_currency(const std::string& currency_);

    AccountInfo();


};



#endif //ACCOUNTINFO_H
