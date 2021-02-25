#ifndef NI_TESTS_UTILITIES_DEVICEENUMERATORMOCKLIBRARY_H
#define NI_TESTS_UTILITIES_DEVICEENUMERATORMOCKLIBRARY_H

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace ni {
namespace tests {
namespace utilities {

class SysCfgMockLibrary : public ni::hardware::grpc::internal::SysCfgLibraryInterface {
 public:
  MOCK_METHOD(NISysCfgStatus, FindHardware, (), (override));
  MOCK_METHOD(NISysCfgStatus, NextResource, (NISysCfgResourceHandle * resourceHandle), (override));
  MOCK_METHOD(NISysCfgStatus, GetResourceProperty, (NISysCfgEnumResourceHandle resourceEnumHandle, NISysCfgResourceProperty propertyID, void* value), (override));
  MOCK_METHOD(NISysCfgStatus, CloseHandle, (void* sysCfgHandle), (override));
};

}  // namespace utilities
}  // namespace tests
}  // namespace ni

#endif  // NI_TESTS_UTILITIES_DEVICEENUMERATORMOCKLIBRARY_H
