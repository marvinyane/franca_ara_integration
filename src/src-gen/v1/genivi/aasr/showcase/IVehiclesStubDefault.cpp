/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.12.v201805221014.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1/genivi/aasr/showcase/IVehiclesStubDefault.hpp>
#include <assert.h>

namespace v1 {
namespace genivi {
namespace aasr {
namespace showcase {

IVehiclesStubDefault::IVehiclesStubDefault():
        remoteEventHandler_(this),
        interfaceVersion_(IVehicles::getInterfaceVersion()) {
}

const CommonAPI::Version& IVehiclesStubDefault::getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return interfaceVersion_;
}

IVehiclesStubRemoteEvent* IVehiclesStubDefault::initStubAdapter(const std::shared_ptr< IVehiclesStubAdapter> &_adapter) {
    CommonAPI::Stub<IVehiclesStubAdapter, IVehiclesStubRemoteEvent>::stubAdapter_ = _adapter;
    return &remoteEventHandler_;
}

 const ::v1::genivi::aasr::showcase::IVehicles::ListOfVehicles& IVehiclesStubDefault::getVehiclesAttribute() {
     return vehiclesAttributeValue_;
 }

 const ::v1::genivi::aasr::showcase::IVehicles::ListOfVehicles& IVehiclesStubDefault::getVehiclesAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
     (void)_client;
     return getVehiclesAttribute();
 }

 void IVehiclesStubDefault::setVehiclesAttribute(::v1::genivi::aasr::showcase::IVehicles::ListOfVehicles _value) {
     std::shared_ptr<IVehiclesStubAdapter> stubAdapter = CommonAPI::Stub<IVehiclesStubAdapter,
     IVehiclesStubRemoteEvent>::stubAdapter_.lock();
     if(stubAdapter) {
         stubAdapter->lockVehiclesAttribute(true);
         const bool valueChanged = (vehiclesAttributeValue_ != _value);
         if (valueChanged) {
             vehiclesAttributeValue_ = std::move(_value);
             fireVehiclesAttributeChanged(vehiclesAttributeValue_);
         }
         stubAdapter->lockVehiclesAttribute(false);
     } else {
         const bool valueChanged = trySetVehiclesAttribute(std::move(_value));
         if (valueChanged) {
             fireVehiclesAttributeChanged(vehiclesAttributeValue_);
         }
     }
}

 bool IVehiclesStubDefault::trySetVehiclesAttribute(::v1::genivi::aasr::showcase::IVehicles::ListOfVehicles _value) {
     if (!validateVehiclesAttributeRequestedValue(_value))
         return false;

     bool valueChanged;
     std::shared_ptr<IVehiclesStubAdapter> stubAdapter = CommonAPI::Stub<IVehiclesStubAdapter, IVehiclesStubRemoteEvent>::stubAdapter_.lock();
     if(stubAdapter) {
         stubAdapter->lockVehiclesAttribute(true);
         valueChanged = (vehiclesAttributeValue_ != _value);
         vehiclesAttributeValue_ = std::move(_value);
         stubAdapter->lockVehiclesAttribute(false);
     } else {
         valueChanged = (vehiclesAttributeValue_ != _value);
         vehiclesAttributeValue_ = std::move(_value);
     }

     return valueChanged;
 }

 bool IVehiclesStubDefault::validateVehiclesAttributeRequestedValue(const ::v1::genivi::aasr::showcase::IVehicles::ListOfVehicles &_value) {
     (void)_value;
     return true;
 }

 void IVehiclesStubDefault::setVehiclesAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::genivi::aasr::showcase::IVehicles::ListOfVehicles _value) {
     (void)_client;
     setVehiclesAttribute(_value);
 }

 void IVehiclesStubDefault::onRemoteVehiclesAttributeChanged() {
     // No operation in default
 }

 void IVehiclesStubDefault::RemoteEventHandler::onRemoteVehiclesAttributeChanged() {
     assert(defaultStub_ !=NULL);
     defaultStub_->onRemoteVehiclesAttributeChanged();
 }

 bool IVehiclesStubDefault::RemoteEventHandler::onRemoteSetVehiclesAttribute(::v1::genivi::aasr::showcase::IVehicles::ListOfVehicles _value) {
     assert(defaultStub_ !=NULL);
     return defaultStub_->trySetVehiclesAttribute(std::move(_value));
 }

 bool IVehiclesStubDefault::RemoteEventHandler::onRemoteSetVehiclesAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::genivi::aasr::showcase::IVehicles::ListOfVehicles _value) {
     (void)_client;
     return onRemoteSetVehiclesAttribute(_value);
 }


void IVehiclesStubDefault::SetFloatingPointPrecision(const std::shared_ptr<CommonAPI::ClientId> _client, IVehicles::FloatingPointPrecision _precision, SetFloatingPointPrecisionReply_t _reply) {
    (void)_client;
    (void)_precision;
    bool rv = false;
    _reply(rv);
}




IVehiclesStubDefault::RemoteEventHandler::RemoteEventHandler(IVehiclesStubDefault *_defaultStub)
    : 
      defaultStub_(_defaultStub) {
}

} // namespace showcase
} // namespace aasr
} // namespace genivi
} // namespace v1
