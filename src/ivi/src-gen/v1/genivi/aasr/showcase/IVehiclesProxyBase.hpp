/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.12.v201805221014.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_GENIVI_AASR_SHOWCASE_I_Vehicles_PROXY_BASE_HPP_
#define V1_GENIVI_AASR_SHOWCASE_I_Vehicles_PROXY_BASE_HPP_

#include <v1/genivi/aasr/showcase/IVehicles.hpp>



#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Deployment.hpp>
#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Struct.hpp>
#include <cstdint>
#include <string>
#include <vector>

#include <CommonAPI/Attribute.hpp>
#include <CommonAPI/Proxy.hpp>
#include <functional>
#include <future>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace genivi {
namespace aasr {
namespace showcase {

class IVehiclesProxyBase
    : virtual public CommonAPI::Proxy {
public:
    typedef CommonAPI::ObservableAttribute< ::v1::genivi::aasr::showcase::IVehicles::ListOfVehicles> VehiclesAttribute;

    typedef std::function<void(const CommonAPI::CallStatus&, const bool&)> SetFloatingPointPrecisionAsyncCallback;

    virtual VehiclesAttribute& getVehiclesAttribute() = 0;


    virtual void SetFloatingPointPrecision(const IVehicles::FloatingPointPrecision &_precision, CommonAPI::CallStatus &_internalCallStatus, bool &_rv, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> SetFloatingPointPrecisionAsync(const IVehicles::FloatingPointPrecision &_precision, SetFloatingPointPrecisionAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
};

} // namespace showcase
} // namespace aasr
} // namespace genivi
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_GENIVI_AASR_SHOWCASE_I_Vehicles_PROXY_BASE_HPP_
