#pragma once
#include "StackImplementation.h"
#include <exception>
#include <list>

class ListStack : public IStackImplementation  {

    private:

        std::list<ValueType> lst;

    public:

        void push(const ValueType& value) override {
            lst.push_back(value);
        }

        void pop() override {
            if (!lst.empty()) {
                lst.pop_back();
            } else {
                throw "error";
            }
        }

        const ValueType& top() const override {
            if (!lst.empty()) {
                return lst.back();
            } else {
                throw "error";
            } 
        }

        bool isEmpty() const override {
            return lst.empty();
        }

        size_t size() const override {
            return lst.size();
        }
    
};