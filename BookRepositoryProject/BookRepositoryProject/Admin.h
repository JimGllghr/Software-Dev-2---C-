#pragma once
#ifndef nAdmin
#define nAdmin
#include "user.h"
#include <iostream>

class Admin : public user
{
public:
	Admin(std::string nName, std::string nPassword, unsigned int nID);

	void setNext(Admin* nextParam);
	void setPrev(Admin* prevParam);

	Admin* getNext() const;
	Admin* getPrev() const;

private:

	Admin* next;
	Admin* prev;
};
#endif