#ifndef _CL_FORWARD_H
#define _CL_FORWARD_H

#include <memory>

class Session;
class Tracker;
class TrackerConnection;

using SessionPtr = std::shared_ptr<Session>;
using SessionRef = std::weak_ptr<Session>;
using TrackerRef = std::weak_ptr<Tracker>;
using TrackerConnectionPtr = std::shared_ptr<TrackerConnection>;
using TrackerConnectionRef = std::weak_ptr<TrackerConnection>;

#endif // _CL_FORWARD_H
