//
// Created by emirk on 2/14/25.
//
#pragma once

#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Containers.h"
#include "Container.h"
#include "records/Bills.h"
#include "records/AccountInfo.h"
#include "records/AccountActivity.h"
#include "records/Loans.h"
#include "records/CustomerInfo.h"
#include "records/CurrencyConversions.h"
#include "records/Branch.h"


class Controller {
public:
    static Controller &ContMan();

    AccountInfoKazim &getAccountInfo();

    AccountActivityKazim &getAccountActivity();

    LoansKazim &getLoans();

    CustomerInfoKazim &getCustomerInfo();

    CurrencyConversionsKazim &getCurrencyConversions();

    BranchKazim &getBranch();


private:
    AccountInfoKazim AccountInfo;
    AccountActivityKazim AccountActivity;
    LoansKazim Loans;
    CustomerInfoKazim CustomerInfo;
    CurrencyConversionsKazim CurrencyConversions;
    BranchKazim Branch;

    Controller();


};



#endif //CONTROLLER_H
