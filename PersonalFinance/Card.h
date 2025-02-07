#pragma once
#include "�ccount.h"
class Card :
    protected Account 
{
    // � ����� �������� ������������
    const std::string card_number{};    // ����� ����� 
    const bool is_debit{};				//������� ���������/��������� �����

public:
    Card() = delete;
    Card(const std::string& card_number, bool is_debit) :card_number{ card_number }, is_debit{ is_debit }{}
    std::string getCardNumber()const;
    bool getDebetSign()const;
    std::string getAccountNumber()const;
    float getBalance()const;
    void setBalance(float balance);
    float operator+(const float sum) const;
    float operator-(const float sum) const;

};

