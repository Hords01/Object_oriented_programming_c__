//
// Created by emirk on 2/14/25.
//
#pragma once

#ifndef COMMONDATACLASS_H
#define COMMONDATACLASS_H

#include "../Common.h"

class CommonDataClass {
protected:
    Integer _identifier;

public:
    [[nodiscard]] Integer get_identifier() const;
    void set_identifier(const Integer& identifier);

    CommonDataClass();

};



#endif //COMMONDATACLASS_H
