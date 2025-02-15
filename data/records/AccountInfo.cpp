//
// Created by emirk on 2/14/25.
//

#include "AccountInfo.h"

const std::string& AccountInfo::get_initialdate() const {
    return initialdate;
}

const std::string& AccountInfo::get_initialbybranch() const {
    return initialbybranch;
}

const std::string& AccountInfo::get_accountno() const {
    return accountno;
}

const std::string& AccountInfo::get_comment() const {
    return comment;
}

const std::string& AccountInfo::get_currency() const {
    return currency;
}

void AccountInfo::set_initialdate(const std::string& initialdate_) {
    initialdate = initialdate_;
}

void AccountInfo::set_initialbybranch(const std::string& initialbybranch_) {
    initialbybranch = initialbybranch_;
}

void AccountInfo::set_accountno(const std::string& accountno_) {
    accountno = accountno_;
}

void AccountInfo::set_comment(const std::string& comment_) {
    comment = comment_;
}

void AccountInfo::set_currency(const std::string& currency_) {
    currency = currency_;
}


AccountInfo::AccountInfo(): CommonDataClass{}, initialdate{},  initialbybranch{}, accountno{}, comment{}, currency{} {}

