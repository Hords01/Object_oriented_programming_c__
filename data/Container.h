//
// Created by emirk on 2/14/25.
//

#pragma once

#ifndef CONTAINER_H
#define CONTAINER_H

#include "Common.h"
#include "records/Branch.h"
#include "records/CommonDataClass.h"
#include <memory>
#include <vector>
#include <functional>
#include <stdexcept>

template<class T>

class Kazim {
public:
    using Data = T;
    using Ptr = std::shared_ptr<Data>;
    using Vector = std::vector<Ptr>;
    using Func = std::function<bool(Ptr &i)>;
    using Iterator = typename Vector::iterator;

    class AlreadyExists : public std::logic_error {
    public:
        AlreadyExists(): std::logic_error("Already exists.") {}
    };
    class NoRecord : public std::logic_error {
    public:
        NoRecord() : std::logic_error("No record.") {}
    };

    Kazim() : _counter{0} {}

    Vector search(Func data) {
        Vector result;
        for (auto &i: _container) {
            if (data(i)) {
                result.push_back(i);
            }
        }
        return result;
    }

    void remove(Integer identifier) {
        for (auto i = _container.begin(); i != _container.end(); i++) {
            auto &data = *i;
            if (data->getidentifier() == identifier) {
                remove(i);
            }
        }
        throw NoRecord();
    }

    void remove(Iterator removingitemslocation) {
        _container.erase(removingitemslocation);
    }

    void append(Ptr additive) {
        if (additive-> get_identifier() == invalid) {
            _container.push_back(additive);
            additive->set_identifier(_counter++);

        } else {
            auto searchresult = search([additive](Ptr &i) {
                return i->get_identifier() == additive->get_identifier();

            });
            if (searchresult.empty()) {
                _container.push_back(additive);
                _counter = std::max(_counter, additive->get_identifier()) + 1;
            } else {
                throw AlreadyExists();
            }
        }
    }

Ptr generate_new_location() {
        return std::make_shared<Data>();
    }

private:
    Vector _container;
    Integer _counter;


};

#endif //CONTAINER_H
