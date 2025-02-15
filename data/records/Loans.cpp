//
// Created by emirk on 2/14/25.
//

#include "Loans.h"


double Loans::get_loansamount() const {
    return loansamount;
}

double Loans::get_principalamount() const {
    return principalamount;
}

double Loans::get_intestrate() const {
    return interestrate;
}

void Loans::set_loansamount(double loansamount_) {
    loansamount = loansamount_;
}

void Loans::set_principalamount(double principalamount_) {
    principalamount = principalamount_;
}

void Loans::set_interestrate(double interestrate_) {
    interestrate = interestrate_;
}


Loans::Loans(): CommonDataClass{}, loansamount{}, principalamount{}, interestrate{} {}



