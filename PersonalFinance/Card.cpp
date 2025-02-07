#include "Card.h"


    std::string Card::getCardNumber()const
    {
        return this->card_number;
    }
    bool Card::getDebetSign()const
    {
        return this->is_debit;
    }
    std::string Card::getAccountNumber()const
    {
        return this->account_number;
    }
    float Card::getBalance()const
    {
        return this->balance;
    }
    void Card::setBalance(float balance)
    {
        this->balance = balance;
    }
    float Card::operator+(const float sum) const
    {
        return this->balance + sum;

    }
    float Card::operator-(const float sum) const
    {
        return this->balance - sum;
    }
