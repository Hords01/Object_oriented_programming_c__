//
// Created by emirk on 2/14/25.
//

#include "Branch.h"


const std::string& Branch::get_address() const {
    return address;
}

const std::string &Branch::get_phonenumber() const {
    return phonenumber;
}

void Branch::set_address(const std::string& address_) {
    address = address_;
}

void Branch::set_phonenumber(const std::string& phonenumber_) {
    phonenumber = phonenumber_;
}

Branch::Branch(): CommonDataClass(), address{}, phonenumber{} {}

