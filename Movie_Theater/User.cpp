//
// Created by G on 2024/8/26.
//

#include "User.h"

const std::string& User::getIdentity() const {
    return identity;
}

const std::string& User::getUserName() const {
    return user_name;
}

const std::string& User::getUserGender() const {
    return user_gender;
}

const std::string& User::getPhoneNumber() const {
    return phone_number;
}

const std::string& User::getPassword() const {
    return password;
}

const std::string& User::getEmailAddress() const {
    return email_address;
}

double User::getAccountBalance() const {
    return account_balance;
}

void User::setIdentity(const std::string& identity) {
    User::identity = identity;
}

void User::setUserName(const std::string& userName) {
    user_name = userName;
}

void User::setUserGender(const std::string& userGender) {
    user_gender = userGender;
}

void User::setPhoneNumber(const std::string& phoneNumber) {
    phone_number = phoneNumber;
}

void User::setPassword(const std::string& password) {
    User::password = password;
}

void User::setEmailAddress(const std::string& emailAddress) {
    email_address = emailAddress;
}

void User::setAccountBalance(double accountBalance) {
    account_balance = accountBalance;
}
