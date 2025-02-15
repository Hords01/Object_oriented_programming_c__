//
// Created by emirk on 2/14/25.
//
#pragma once

#ifndef ACCOUNTACTIVITY_H
#define ACCOUNTACTIVITY_H


#include "CommonDataClass.h"

class AccountActivity : public CommonDataClass {
private:
    double quantity;
    std::string date;
    std::string comment;
    Integer customeridentifier;

public:

    [[nodiscard]] double get_quantity() const;
    [[nodiscard]] const std::string& get_date() const;
    [[nodiscard]] const std::string& get_comment() const;
    [[nodiscard]] const Integer& get_customeridentifier() const;

    void set_quantity(double quantity_);
    void set_date(const std::string& date_);
    void set_comment(const std::string& comment_);
    void set_customeridentifier(const Integer& customeridentifier_);

    AccountActivity();

};



#endif //ACCOUNTACTIVITY_H
