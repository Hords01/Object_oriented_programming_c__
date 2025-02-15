//
// Created by emirk on 2/14/25.
//

#include "CustomerInfo.h"

const std::string& CustomerInfo::get_name() const {
    return name;
}

const std::string& CustomerInfo::get_lastname() const {
    return lastname;
}

const std::string& CustomerInfo::get_idno() const {
    return idno;
}

void CustomerInfo::set_name(const std::string& name_) {
    name = name_;
}

void CustomerInfo::set_lastname(const std::string& lastname_) {
    lastname = lastname_;
}

void CustomerInfo::set_idno(const std::string& idno_) {
    idno = idno_;
}

CustomerInfo::CustomerInfo(): CommonDataClass{}, name{}, lastname{}, idno{} {}

