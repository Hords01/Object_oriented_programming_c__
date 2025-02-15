//
// Created by emirk on 2/14/25.
//

#include "Controller.h"

AccountInfoKazim &Controller::getAccountInfo() {
    return AccountInfo;
}

AccountActivityKazim &Controller::getAccountActivity() {
    return AccountActivity;
}

LoansKazim &Controller::getLoans() {
    return Loans;
}

CustomerInfoKazim &Controller::getCustomerInfo() {
    return CustomerInfo;
}

CurrencyConversionsKazim &Controller::getCurrencyConversions() {
    return CurrencyConversions;
}

BranchKazim &Controller::getBranch() {
    return Branch;
}

Controller::Controller() {}



Controller &Controller::ContMan() {
    static Controller object;
    return object;
}