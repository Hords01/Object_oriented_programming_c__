//
// Created by emirk on 2/14/25.
//

#include "CommonDataClass.h"

Integer CommonDataClass::get_identifier() const {
    return _identifier;
}

void CommonDataClass::set_identifier(const Integer& identifier) {
    _identifier = identifier;
}

CommonDataClass::CommonDataClass(): _identifier(invalid) {}
