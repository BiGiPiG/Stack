#pragma once
#include "StackImplementation.h"
#include <vector>
#include <exception>

class VectorStack : public IStackImplementation  {

    private:

        std::vector<ValueType> vec;

    public:

        void push(const ValueType& value) override {
            vec.push_back(value);
        }

        void pop() override {
            if (!vec.empty()) {
                vec.pop_back();
            } else {
                throw "error";
            }
        }

        const ValueType& top() const override {
            if (!vec.empty()) {
                return vec.back();
            } else {
                throw "error";
            }
        }

        bool isEmpty() const override{
            return vec.empty();
        }

        size_t size() const {
            return vec.size();
        }

};