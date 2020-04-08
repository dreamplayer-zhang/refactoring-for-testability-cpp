#ifndef CPP_REFACTORING_WEBINAR_MYPINMANAGER_HPP
#define CPP_REFACTORING_WEBINAR_MYPINMANAGER_HPP

#include "PinManager.hpp"

struct MyPinManager : public PinManager
{
    void setPin(int pin) override;
    void clearPin(int pin) override;
};

#endif // CPP_REFACTORING_WEBINAR_MYPINMANAGER_HPP
