#ifndef _USER_FORWARD_H
#define _USER_FORWARD_H

#include <memory>

class Account;
class CLConnection;
class Session;

using AccountPtr = std::shared<Account>;
using AccountRef = std::weak_ptr<Account>;
using CLConnectionPtr = std::shared_ptr<CLConnection>;
using CLConnectionPtr = std::shared_ptr<CLConnection>;
using SessionPtr = std::shared_ptr<Session>;
using SessionRef = std::weak_ptr<Session>;

#endif // _USER_FORWARD_H
