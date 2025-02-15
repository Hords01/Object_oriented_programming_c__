//
// Created by emirk on 2/14/25.
//
#pragma once

#ifndef LOANS_H
#define LOANS_H

#include "CommonDataClass.h"

class Loans : public CommonDataClass {
private:
    double loansamount;
    double principalamount;
    double interestrate;

public:
    [[nodiscard]] double get_loansamount() const;
    [[nodiscard]] double get_principalamount() const;
    [[nodiscard]] double get_intestrate() const;


    void set_loansamount(double loansamount_);
    void set_principalamount(double principalamount_);
    void set_interestrate(double interestrate_);

    Loans();

};



#endif //LOANS_H
