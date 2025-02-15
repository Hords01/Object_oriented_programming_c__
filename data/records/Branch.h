//
// Created by emirk on 2/14/25.
//

#pragma once

#ifndef BRANCH_H
#define BRANCH_H

#include <string>

#include "CommonDataClass.h"

class Branch : public CommonDataClass {
private:
    std::string address;
    std:: string phonenumber;

    public:
    [[nodiscard]] const std::string &get_address() const;
    [[nodiscard]] const std::string &get_phonenumber() const;

    void set_address(const std::string &address_);
    void set_phonenumber(const std::string &phonenumber_);

    Branch();


};



#endif //BRANCH_H
