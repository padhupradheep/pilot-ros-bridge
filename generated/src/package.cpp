
// AUTO GENERATED by vnxcppcodegen

#include <pilot/ros/BridgeBase.hxx>

#include <vnx/vnx.h>



namespace pilot {
namespace ros {


static void register_all_types() {
	vnx::register_type_code(::pilot::ros::BridgeBase::static_create_type_code());
}

static struct vnx_static_init {
	vnx_static_init() {
		register_all_types();
	}
} vnx_static_init_;

const vnx::TypeCode* const vnx_native_type_code_BridgeBase = vnx::get_type_code(vnx::Hash64(0x4deabea977d4c59bull));

} // namespace pilot
} // namespace ros
