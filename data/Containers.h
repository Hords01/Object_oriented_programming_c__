//
// Created by emirk on 2/14/25.
//
#pragma once

#ifndef CONTAINERS_H
#define CONTAINERS_H

#include "Container.h"

#include "Common.h"



#define DATA(V) \
using V ## Kazim = Kazim<V>; \
using V ## Ptr = V ## Kazim::Ptr; \
using V ## Vector = V ## Kazim::Vector; \
using V ## Func = V ## Kazim::Func; \
using V ## AlreadyExists = V ## Kazim::AlreadyExists; \
using V ## NoRecord = V ## Kazim::NoRecord;


DATA(Bills)
DATA(AccountInfo)
DATA(AccountActivity)
DATA(Loans)
DATA(CustomerInfo)
DATA(CurrencyConversions)
DATA(Branch)




#endif //CONTAINERS_H
