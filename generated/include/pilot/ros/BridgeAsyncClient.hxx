
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_pilot_ros_Bridge_ASYNC_CLIENT_HXX_
#define INCLUDE_pilot_ros_Bridge_ASYNC_CLIENT_HXX_

#include <vnx/AsyncClient.h>
#include <automy/basic/Transform3D.hxx>
#include <pilot/GridMapData.hxx>
#include <pilot/LaserScan.hxx>
#include <pilot/Odometry.hxx>
#include <pilot/Pose2D.hxx>
#include <pilot/kinematics/differential/DriveState.hxx>
#include <vnx/Module.h>
#include <vnx/TopicPtr.hpp>


namespace pilot {
namespace ros {

class BridgeAsyncClient : public vnx::AsyncClient {
public:
	BridgeAsyncClient(const std::string& service_name);
	
	BridgeAsyncClient(vnx::Hash64 service_addr);
	
	std::vector<uint64_t> vnx_get_pending_ids() const override;
	
protected:
	void vnx_purge_request(uint64_t _request_id, const std::exception& _ex) override;
	
	void vnx_callback_switch(uint64_t _request_id, std::shared_ptr<const vnx::Value> _value) override;
	
private:
	
};


} // namespace pilot
} // namespace ros

#endif // INCLUDE_pilot_ros_Bridge_ASYNC_CLIENT_HXX_
