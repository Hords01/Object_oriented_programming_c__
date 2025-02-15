//
// Created by emirk on 2/14/25.
//

#include "AccountActivity.h"

double AccountActivity::get_quantity() const {
    return quantity;
}

const std::string& AccountActivity::get_date() const {
    return date;
}

const std::string& AccountActivity::get_comment() const {
    return comment;
}

const Integer& AccountActivity::get_customeridentifier() const {
    return customeridentifier;
}

void AccountActivity::set_quantity(double quantity_) {
    quantity = quantity_;
}

void AccountActivity::set_date(const std::string& date_) {
    date = date_;
}

void AccountActivity::set_comment(const std::string& comment_) {
    comment = comment_;
}

void AccountActivity::set_customeridentifier(const Integer &customeridentifier_) {
    customeridentifier = customeridentifier_;
}

AccountActivity::AccountActivity(): CommonDataClass{}, quantity{}, date{}, comment{} {}




