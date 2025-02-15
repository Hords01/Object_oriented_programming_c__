//
// Created by emirk on 2/14/25.
//

#include "Bills.h"
#include "../Controller.h"

const std::string& Bills::get_customer() const {
    return customer;
}

const std::string& Bills::get_account() const {
    return account;
}

double Bills::get_quantity() const {
    return quantity;
}

const std::string& Bills::get_date() const {
    return date;
}

const std::string& Bills::get_duedate() const {
    return duedate;
}

const Integer &Bills::get_customeridentifier() const {
    return customeridentifier;
}

void Bills::set_customer(const std::string& customer_) {
    customer = customer_;
}

void Bills::set_account(const std::string& account_) {
    account = account_;
}

void Bills::set_quantity(double quantity_) {
    quantity = quantity_;
}

void Bills::set_date(const std::string& date_) {
    date = date_;
}

void Bills::set_duedate(const std::string& duedate_) {
    duedate = duedate_;
}

void Bills::set_customeridentifier(const Integer &customeridentifier_) {
    customeridentifier = customeridentifier_;
}



Bills::Bills(): CommonDataClass{}, customer{}, account{}, quantity{}, date{}, duedate{} {}

CustomerInfoPtr Bills::getCustomerInfo() const {
    auto CustomerInfo = Controller::ContMan().getCustomerInfo().search(
              [this](CustomerInfoPtr &m) {
        return m->get_identifier() == _identifier;
    });
    if (CustomerInfo.empty()) {
        throw CustomerInfoNoRecord();

    }
    if (CustomerInfo.size() > 1) {
        throw CustomerInfoAlreadyExists();
    }
    return CustomerInfo[0];
}

AccountInfoPtr Bills::getAccountInfo() const {
    auto AccountInfo = Controller::ContMan().getAccountInfo().search(
              [this](AccountInfoPtr &m) {
                  return m->get_identifier() == _identifier;
              });
    if (AccountInfo.empty()) {
        throw AccountInfoNoRecord();

    }
    if (AccountInfo.size() > 1) {
        throw AccountInfoAlreadyExists();
    }
    return AccountInfo[0];
}



