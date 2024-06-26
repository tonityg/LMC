﻿#pragma once
#include <exception>

class InstanceException : public std::exception
{
    const char* message_;
    
public:
    explicit InstanceException(const char* msg) : message_(msg) { }
    
    [[nodiscard]] const char* what() const noexcept override { return message_; }
};
