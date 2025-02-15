//
// Created by emirk on 2/14/25.
//
#pragma once

#ifndef BILLS_H
#define BILLS_H

#include "CommonDataClass.h"
#include "../Containers.h"

class Bills : public CommonDataClass {
private:
    std::string customer;
    std::string account;
    double quantity;
    std::string date;
    std::string duedate;
    Integer customeridentifier;

public:
    [[nodiscard]] const std::string& get_customer() const;
    [[nodiscard]] const std::string& get_account() const;
    [[nodiscard]] double get_quantity() const;
    [[nodiscard]] const std::string& get_date() const;
    [[nodiscard]] const std::string& get_duedate() const;
    [[nodiscard]] const Integer& get_customeridentifier() const;

    [[nodiscard]] CustomerInfoPtr getCustomerInfo() const;
    [[nodiscard]] AccountInfoPtr getAccountInfo() const;

    void set_customer(const std::string& customer_);
    void set_account(const std::string& account_);
    void set_quantity(double quantity_);
    void set_date(const std::string& date_);
    void set_duedate(const std::string& duedate_);
    void set_customeridentifier(const Integer& customeridentifier_);


    Bills();

};



#endif //BILLS_H
