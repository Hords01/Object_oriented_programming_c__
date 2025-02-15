//
// Created by emirk on 2/14/25.
//
#pragma once

#ifndef CUSTOMERINFO_H
#define CUSTOMERINFO_H


#include "CommonDataClass.h"

class CustomerInfo : public CommonDataClass {
private:
    std::string name;
    std::string lastname;
    std::string idno;

public:
    [[nodiscard]] const std::string& get_name() const;
    [[nodiscard]] const std::string& get_lastname() const;
    [[nodiscard]] const std::string& get_idno() const;

    void set_name(const std::string& name_);
    void set_lastname(const std::string& lastname_);
    void set_idno(const std::string& idno_);

    CustomerInfo();

};



#endif //CUSTOMERINFO_H
