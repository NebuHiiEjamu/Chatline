#include <memory>

#include "account.hpp"

std::string&& Account::getAccess()
{
	LockGuard lock(mutex);
}

std::string_view& Account::getLogin()
{
	LockGuard lock(mutex);
	return login;
}

bool Account::isAdmin()
{
	LockGuard lock(mutex);
	return access.test(Access::kick);
}
