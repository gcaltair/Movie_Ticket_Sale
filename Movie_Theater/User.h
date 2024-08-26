//
// Created by G on 2024/8/26.
//

#ifndef CPPLAB_USER_H
#define CPPLAB_USER_H
#include <iostream>
#include <string>

class User {
private:
    std::string userID;
    std::string user_name;
    std::string user_gender;
    std::string phone_number;
    std::string password;
    std::string email_address;
    double account_balance; //’Àªß”‡∂Ó
public:
    bool login(std::string enterID,std::string enteredPassword);

    void modifyPersonalInfo();

    void setIdentity(const std::string& userID);

    void setUserName(const std::string& userName);

    void setUserGender(const std::string& userGender);

    void setPhoneNumber(const std::string& phoneNumber);

    void setPassword(const std::string& password);

    void setEmailAddress(const std::string& emailAddress);

    void setAccountBalance(double accountBalance);
    //’Àªß”‡∂Ó
    const std::string& getIdentity() const;

    const std::string& getUserName() const;

    const std::string& getUserGender() const;

    const std::string& getPhoneNumber() const;

    const std::string& getPassword() const;

    const std::string& getEmailAddress() const;

    double getAccountBalance() const;
};



#endif //CPPLAB_USER_H
