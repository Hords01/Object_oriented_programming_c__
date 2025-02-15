//
// Created by emirk on 2/14/25.
//

#include "CurrencyConversions.h"

const std::string& CurrencyConversions::get_root() const {
    return root;
}

const std::string& CurrencyConversions::get_target() const {
    return target;
}

double CurrencyConversions::get_exchangerate() const {
    return exchangerate;
}

const std::string &CurrencyConversions::get_date() const {
    return date;
}

void CurrencyConversions::set_root(const std::string &root_) {
    root = root_;
}

void CurrencyConversions::set_target(const std::string &target_) {
    target = target_;
}

void CurrencyConversions::set_exchangerate(double exchangerate_) {
    exchangerate = exchangerate_;
}

void CurrencyConversions::set_date(const std::string &date_) {
    date = date_;
}

CurrencyConversions::CurrencyConversions(): CommonDataClass{}, root{}, target{}, exchangerate{}, date{} {}




