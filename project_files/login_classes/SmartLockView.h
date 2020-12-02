//
// Created by Rebecca on 28/09/2020.
//

#ifndef MOBILE_BANKING_APP_SMARTLOCKVIEW_H
#define MOBILE_BANKING_APP_SMARTLOCKVIEW_H

#include <string>

#include "../general_purpose_classes/InputManager.h"
#include "SmartLock.h"

using namespace std;

class SmartLockView : public InputManager {
public:
    explicit SmartLockView(SmartLock* smart) {
        smartLock = smart;
    }
    virtual ~SmartLockView() = default;

    bool wantToRemember(const string& titolarCode);

private:
    bool isCorrectInput(const string &input) override;
    void display() override;

    //SmartLockView DOES NOT own this object
   SmartLock* smartLock;
};

#endif //MOBILE_BANKING_APP_SMARTLOCKVIEW_H
