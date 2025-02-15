//
// Created by emirk on 2/14/25.
//
#pragma once

#ifndef CURRENCYCONVERSIONS_H
#define CURRENCYCONVERSIONS_H

#include "CommonDataClass.h"

class CurrencyConversions : public CommonDataClass {
private:
    std::string root;
    std::string target;
    double exchangerate;
    std::string date;

public:
    [[nodiscard]] const std::string& get_root() const;
    [[nodiscard]] const std::string& get_target() const;
    [[nodiscard]] double get_exchangerate() const;
    [[nodiscard]] const std::string& get_date() const;

    void set_root(const std::string& root_);
    void set_target(const std::string& target_);
    void set_exchangerate(double exchangerate_);
    void set_date(const std::string& date_);

    CurrencyConversions();



};



#endif //CURRENCYCONVERSIONS_H
