#ifndef _CL_FORWARD_H
#define _CL_FORWARD_H

#include <memory>

class CLServer;
class TrackerConnection;

using CLServerRef = std::weak_ptr<CLServer>;
using TrackerConnectionPtr = std::shared_ptr<TrackerConnection>;
using TrackerConnectionRef = std::weak_ptr<TrackerConnection>;

#endif // _CL_FORWARD_H
