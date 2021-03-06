//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service implementation for the NI-FAKE Metadata
//---------------------------------------------------------------------
#include "nifake_library.h"

#if defined(_MSC_VER)
static const char* kLibraryName = "nifake_64.dll";
#else
static const char* kLibraryName = "libnifake.so";
#endif

namespace ni {
namespace fake {
namespace grpc {

NiFakeLibrary::NiFakeLibrary() : shared_library_(kLibraryName)
{
  shared_library_.load();
  bool loaded = shared_library_.is_loaded();
  memset(&function_pointers_, 0, sizeof(function_pointers_));
  if (!loaded) {
    return;
  }
  function_pointers_.Abort = reinterpret_cast<AbortPtr>(shared_library_.get_function_pointer("niFake_Abort"));
  function_pointers_.AcceptListOfDurationsInSeconds = reinterpret_cast<AcceptListOfDurationsInSecondsPtr>(shared_library_.get_function_pointer("niFake_AcceptListOfDurationsInSeconds"));
  function_pointers_.BoolArrayOutputFunction = reinterpret_cast<BoolArrayOutputFunctionPtr>(shared_library_.get_function_pointer("niFake_BoolArrayOutputFunction"));
  function_pointers_.DoubleAllTheNums = reinterpret_cast<DoubleAllTheNumsPtr>(shared_library_.get_function_pointer("niFake_DoubleAllTheNums"));
  function_pointers_.EnumArrayOutputFunction = reinterpret_cast<EnumArrayOutputFunctionPtr>(shared_library_.get_function_pointer("niFake_EnumArrayOutputFunction"));
  function_pointers_.EnumInputFunctionWithDefaults = reinterpret_cast<EnumInputFunctionWithDefaultsPtr>(shared_library_.get_function_pointer("niFake_EnumInputFunctionWithDefaults"));
  function_pointers_.ExportAttributeConfigurationBuffer = reinterpret_cast<ExportAttributeConfigurationBufferPtr>(shared_library_.get_function_pointer("niFake_ExportAttributeConfigurationBuffer"));
  function_pointers_.FetchWaveform = reinterpret_cast<FetchWaveformPtr>(shared_library_.get_function_pointer("niFake_FetchWaveform"));
  function_pointers_.GetABoolean = reinterpret_cast<GetABooleanPtr>(shared_library_.get_function_pointer("niFake_GetABoolean"));
  function_pointers_.GetANumber = reinterpret_cast<GetANumberPtr>(shared_library_.get_function_pointer("niFake_GetANumber"));
  function_pointers_.GetAStringOfFixedMaximumSize = reinterpret_cast<GetAStringOfFixedMaximumSizePtr>(shared_library_.get_function_pointer("niFake_GetAStringOfFixedMaximumSize"));
  function_pointers_.GetAnIviDanceString = reinterpret_cast<GetAnIviDanceStringPtr>(shared_library_.get_function_pointer("niFake_GetAnIviDanceString"));
  function_pointers_.GetAnIviDanceWithATwistString = reinterpret_cast<GetAnIviDanceWithATwistStringPtr>(shared_library_.get_function_pointer("niFake_GetAnIviDanceWithATwistString"));
  function_pointers_.GetArraySizeForCustomCode = reinterpret_cast<GetArraySizeForCustomCodePtr>(shared_library_.get_function_pointer("niFake_GetArraySizeForCustomCode"));
  function_pointers_.GetArrayUsingIviDance = reinterpret_cast<GetArrayUsingIviDancePtr>(shared_library_.get_function_pointer("niFake_GetArrayUsingIviDance"));
  function_pointers_.GetAttributeViBoolean = reinterpret_cast<GetAttributeViBooleanPtr>(shared_library_.get_function_pointer("niFake_GetAttributeViBoolean"));
  function_pointers_.GetAttributeViInt32 = reinterpret_cast<GetAttributeViInt32Ptr>(shared_library_.get_function_pointer("niFake_GetAttributeViInt32"));
  function_pointers_.GetAttributeViInt64 = reinterpret_cast<GetAttributeViInt64Ptr>(shared_library_.get_function_pointer("niFake_GetAttributeViInt64"));
  function_pointers_.GetAttributeViReal64 = reinterpret_cast<GetAttributeViReal64Ptr>(shared_library_.get_function_pointer("niFake_GetAttributeViReal64"));
  function_pointers_.GetAttributeViString = reinterpret_cast<GetAttributeViStringPtr>(shared_library_.get_function_pointer("niFake_GetAttributeViString"));
  function_pointers_.GetCalDateAndTime = reinterpret_cast<GetCalDateAndTimePtr>(shared_library_.get_function_pointer("niFake_GetCalDateAndTime"));
  function_pointers_.GetCalInterval = reinterpret_cast<GetCalIntervalPtr>(shared_library_.get_function_pointer("niFake_GetCalInterval"));
  function_pointers_.GetCustomTypeArray = reinterpret_cast<GetCustomTypeArrayPtr>(shared_library_.get_function_pointer("niFake_GetCustomTypeArray"));
  function_pointers_.GetEnumValue = reinterpret_cast<GetEnumValuePtr>(shared_library_.get_function_pointer("niFake_GetEnumValue"));
  function_pointers_.GetError = reinterpret_cast<GetErrorPtr>(shared_library_.get_function_pointer("niFake_GetError"));
  function_pointers_.ImportAttributeConfigurationBuffer = reinterpret_cast<ImportAttributeConfigurationBufferPtr>(shared_library_.get_function_pointer("niFake_ImportAttributeConfigurationBuffer"));
  function_pointers_.InitWithOptions = reinterpret_cast<InitWithOptionsPtr>(shared_library_.get_function_pointer("niFake_InitWithOptions"));
  function_pointers_.Initiate = reinterpret_cast<InitiatePtr>(shared_library_.get_function_pointer("niFake_Initiate"));
  function_pointers_.MultipleArrayTypes = reinterpret_cast<MultipleArrayTypesPtr>(shared_library_.get_function_pointer("niFake_MultipleArrayTypes"));
  function_pointers_.MultipleArraysSameSize = reinterpret_cast<MultipleArraysSameSizePtr>(shared_library_.get_function_pointer("niFake_MultipleArraysSameSize"));
  function_pointers_.OneInputFunction = reinterpret_cast<OneInputFunctionPtr>(shared_library_.get_function_pointer("niFake_OneInputFunction"));
  function_pointers_.ParametersAreMultipleTypes = reinterpret_cast<ParametersAreMultipleTypesPtr>(shared_library_.get_function_pointer("niFake_ParametersAreMultipleTypes"));
  function_pointers_.PoorlyNamedSimpleFunction = reinterpret_cast<PoorlyNamedSimpleFunctionPtr>(shared_library_.get_function_pointer("niFake_PoorlyNamedSimpleFunction"));
  function_pointers_.Read = reinterpret_cast<ReadPtr>(shared_library_.get_function_pointer("niFake_Read"));
  function_pointers_.ReadFromChannel = reinterpret_cast<ReadFromChannelPtr>(shared_library_.get_function_pointer("niFake_ReadFromChannel"));
  function_pointers_.ReturnANumberAndAString = reinterpret_cast<ReturnANumberAndAStringPtr>(shared_library_.get_function_pointer("niFake_ReturnANumberAndAString"));
  function_pointers_.ReturnDurationInSeconds = reinterpret_cast<ReturnDurationInSecondsPtr>(shared_library_.get_function_pointer("niFake_ReturnDurationInSeconds"));
  function_pointers_.ReturnListOfDurationsInSeconds = reinterpret_cast<ReturnListOfDurationsInSecondsPtr>(shared_library_.get_function_pointer("niFake_ReturnListOfDurationsInSeconds"));
  function_pointers_.ReturnMultipleTypes = reinterpret_cast<ReturnMultipleTypesPtr>(shared_library_.get_function_pointer("niFake_ReturnMultipleTypes"));
  function_pointers_.SetAttributeViBoolean = reinterpret_cast<SetAttributeViBooleanPtr>(shared_library_.get_function_pointer("niFake_SetAttributeViBoolean"));
  function_pointers_.SetAttributeViInt32 = reinterpret_cast<SetAttributeViInt32Ptr>(shared_library_.get_function_pointer("niFake_SetAttributeViInt32"));
  function_pointers_.SetAttributeViInt64 = reinterpret_cast<SetAttributeViInt64Ptr>(shared_library_.get_function_pointer("niFake_SetAttributeViInt64"));
  function_pointers_.SetAttributeViReal64 = reinterpret_cast<SetAttributeViReal64Ptr>(shared_library_.get_function_pointer("niFake_SetAttributeViReal64"));
  function_pointers_.SetAttributeViString = reinterpret_cast<SetAttributeViStringPtr>(shared_library_.get_function_pointer("niFake_SetAttributeViString"));
  function_pointers_.StringValuedEnumInputFunctionWithDefaults = reinterpret_cast<StringValuedEnumInputFunctionWithDefaultsPtr>(shared_library_.get_function_pointer("niFake_StringValuedEnumInputFunctionWithDefaults"));
  function_pointers_.TwoInputFunction = reinterpret_cast<TwoInputFunctionPtr>(shared_library_.get_function_pointer("niFake_TwoInputFunction"));
  function_pointers_.Use64BitNumber = reinterpret_cast<Use64BitNumberPtr>(shared_library_.get_function_pointer("niFake_Use64BitNumber"));
  function_pointers_.WriteWaveform = reinterpret_cast<WriteWaveformPtr>(shared_library_.get_function_pointer("niFake_WriteWaveform"));
  function_pointers_.close = reinterpret_cast<closePtr>(shared_library_.get_function_pointer("niFake_close"));
  function_pointers_.error_message = reinterpret_cast<error_messagePtr>(shared_library_.get_function_pointer("niFake_error_message"));
  function_pointers_.self_test = reinterpret_cast<self_testPtr>(shared_library_.get_function_pointer("niFake_self_test"));
}

NiFakeLibrary::~NiFakeLibrary()
{
}

::grpc::Status NiFakeLibrary::check_function_exists(std::string functionName)
{
  return shared_library_.function_exists(functionName.c_str())
    ? ::grpc::Status::OK
    : ::grpc::Status(::grpc::NOT_FOUND, "Could not find the function " + functionName);
}

ViStatus NiFakeLibrary::Abort(ViSession vi)
{
  if (!function_pointers_.Abort) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_Abort.");
  }
#if defined(_MSC_VER)
  return niFake_Abort(vi);
#else
  return function_pointers_.Abort(vi);
#endif
}

ViStatus NiFakeLibrary::AcceptListOfDurationsInSeconds(ViSession vi, ViInt32 count, ViReal64 delays[])
{
  if (!function_pointers_.AcceptListOfDurationsInSeconds) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_AcceptListOfDurationsInSeconds.");
  }
#if defined(_MSC_VER)
  return niFake_AcceptListOfDurationsInSeconds(vi, count, delays);
#else
  return function_pointers_.AcceptListOfDurationsInSeconds(vi, count, delays);
#endif
}

ViStatus NiFakeLibrary::BoolArrayOutputFunction(ViSession vi, ViInt32 numberOfElements, ViBoolean anArray[])
{
  if (!function_pointers_.BoolArrayOutputFunction) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_BoolArrayOutputFunction.");
  }
#if defined(_MSC_VER)
  return niFake_BoolArrayOutputFunction(vi, numberOfElements, anArray);
#else
  return function_pointers_.BoolArrayOutputFunction(vi, numberOfElements, anArray);
#endif
}

ViStatus NiFakeLibrary::DoubleAllTheNums(ViSession vi, ViInt32 numberCount, ViReal64 numbers[])
{
  if (!function_pointers_.DoubleAllTheNums) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_DoubleAllTheNums.");
  }
#if defined(_MSC_VER)
  return niFake_DoubleAllTheNums(vi, numberCount, numbers);
#else
  return function_pointers_.DoubleAllTheNums(vi, numberCount, numbers);
#endif
}

ViStatus NiFakeLibrary::EnumArrayOutputFunction(ViSession vi, ViInt32 numberOfElements, ViInt16 anArray[])
{
  if (!function_pointers_.EnumArrayOutputFunction) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_EnumArrayOutputFunction.");
  }
#if defined(_MSC_VER)
  return niFake_EnumArrayOutputFunction(vi, numberOfElements, anArray);
#else
  return function_pointers_.EnumArrayOutputFunction(vi, numberOfElements, anArray);
#endif
}

ViStatus NiFakeLibrary::EnumInputFunctionWithDefaults(ViSession vi, ViInt16 aTurtle)
{
  if (!function_pointers_.EnumInputFunctionWithDefaults) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_EnumInputFunctionWithDefaults.");
  }
#if defined(_MSC_VER)
  return niFake_EnumInputFunctionWithDefaults(vi, aTurtle);
#else
  return function_pointers_.EnumInputFunctionWithDefaults(vi, aTurtle);
#endif
}

ViStatus NiFakeLibrary::ExportAttributeConfigurationBuffer(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[])
{
  if (!function_pointers_.ExportAttributeConfigurationBuffer) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_ExportAttributeConfigurationBuffer.");
  }
#if defined(_MSC_VER)
  return niFake_ExportAttributeConfigurationBuffer(vi, sizeInBytes, configuration);
#else
  return function_pointers_.ExportAttributeConfigurationBuffer(vi, sizeInBytes, configuration);
#endif
}

ViStatus NiFakeLibrary::FetchWaveform(ViSession vi, ViInt32 numberOfSamples, ViReal64 waveformData[], ViInt32* actualNumberOfSamples)
{
  if (!function_pointers_.FetchWaveform) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_FetchWaveform.");
  }
#if defined(_MSC_VER)
  return niFake_FetchWaveform(vi, numberOfSamples, waveformData, actualNumberOfSamples);
#else
  return function_pointers_.FetchWaveform(vi, numberOfSamples, waveformData, actualNumberOfSamples);
#endif
}

ViStatus NiFakeLibrary::GetABoolean(ViSession vi, ViBoolean* aBoolean)
{
  if (!function_pointers_.GetABoolean) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_GetABoolean.");
  }
#if defined(_MSC_VER)
  return niFake_GetABoolean(vi, aBoolean);
#else
  return function_pointers_.GetABoolean(vi, aBoolean);
#endif
}

ViStatus NiFakeLibrary::GetANumber(ViSession vi, ViInt16* aNumber)
{
  if (!function_pointers_.GetANumber) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_GetANumber.");
  }
#if defined(_MSC_VER)
  return niFake_GetANumber(vi, aNumber);
#else
  return function_pointers_.GetANumber(vi, aNumber);
#endif
}

ViStatus NiFakeLibrary::GetAStringOfFixedMaximumSize(ViSession vi, ViChar aString[256])
{
  if (!function_pointers_.GetAStringOfFixedMaximumSize) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_GetAStringOfFixedMaximumSize.");
  }
#if defined(_MSC_VER)
  return niFake_GetAStringOfFixedMaximumSize(vi, aString);
#else
  return function_pointers_.GetAStringOfFixedMaximumSize(vi, aString);
#endif
}

ViStatus NiFakeLibrary::GetAnIviDanceString(ViSession vi, ViInt32 bufferSize, ViChar aString[])
{
  if (!function_pointers_.GetAnIviDanceString) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_GetAnIviDanceString.");
  }
#if defined(_MSC_VER)
  return niFake_GetAnIviDanceString(vi, bufferSize, aString);
#else
  return function_pointers_.GetAnIviDanceString(vi, bufferSize, aString);
#endif
}

ViStatus NiFakeLibrary::GetAnIviDanceWithATwistString(ViSession vi, ViInt32 bufferSize, ViChar aString[], ViInt32* actualSize)
{
  if (!function_pointers_.GetAnIviDanceWithATwistString) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_GetAnIviDanceWithATwistString.");
  }
#if defined(_MSC_VER)
  return niFake_GetAnIviDanceWithATwistString(vi, bufferSize, aString, actualSize);
#else
  return function_pointers_.GetAnIviDanceWithATwistString(vi, bufferSize, aString, actualSize);
#endif
}

ViStatus NiFakeLibrary::GetArraySizeForCustomCode(ViSession vi, ViInt32* sizeOut)
{
  if (!function_pointers_.GetArraySizeForCustomCode) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_GetArraySizeForCustomCode.");
  }
#if defined(_MSC_VER)
  return niFake_GetArraySizeForCustomCode(vi, sizeOut);
#else
  return function_pointers_.GetArraySizeForCustomCode(vi, sizeOut);
#endif
}

ViStatus NiFakeLibrary::GetArrayUsingIviDance(ViSession vi, ViInt32 arraySize, ViReal64 arrayOut[])
{
  if (!function_pointers_.GetArrayUsingIviDance) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_GetArrayUsingIviDance.");
  }
#if defined(_MSC_VER)
  return niFake_GetArrayUsingIviDance(vi, arraySize, arrayOut);
#else
  return function_pointers_.GetArrayUsingIviDance(vi, arraySize, arrayOut);
#endif
}

ViStatus NiFakeLibrary::GetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue)
{
  if (!function_pointers_.GetAttributeViBoolean) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_GetAttributeViBoolean.");
  }
#if defined(_MSC_VER)
  return niFake_GetAttributeViBoolean(vi, channelName, attributeId, attributeValue);
#else
  return function_pointers_.GetAttributeViBoolean(vi, channelName, attributeId, attributeValue);
#endif
}

ViStatus NiFakeLibrary::GetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue)
{
  if (!function_pointers_.GetAttributeViInt32) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_GetAttributeViInt32.");
  }
#if defined(_MSC_VER)
  return niFake_GetAttributeViInt32(vi, channelName, attributeId, attributeValue);
#else
  return function_pointers_.GetAttributeViInt32(vi, channelName, attributeId, attributeValue);
#endif
}

ViStatus NiFakeLibrary::GetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64* attributeValue)
{
  if (!function_pointers_.GetAttributeViInt64) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_GetAttributeViInt64.");
  }
#if defined(_MSC_VER)
  return niFake_GetAttributeViInt64(vi, channelName, attributeId, attributeValue);
#else
  return function_pointers_.GetAttributeViInt64(vi, channelName, attributeId, attributeValue);
#endif
}

ViStatus NiFakeLibrary::GetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue)
{
  if (!function_pointers_.GetAttributeViReal64) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_GetAttributeViReal64.");
  }
#if defined(_MSC_VER)
  return niFake_GetAttributeViReal64(vi, channelName, attributeId, attributeValue);
#else
  return function_pointers_.GetAttributeViReal64(vi, channelName, attributeId, attributeValue);
#endif
}

ViStatus NiFakeLibrary::GetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 bufferSize, ViChar attributeValue[])
{
  if (!function_pointers_.GetAttributeViString) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_GetAttributeViString.");
  }
#if defined(_MSC_VER)
  return niFake_GetAttributeViString(vi, channelName, attributeId, bufferSize, attributeValue);
#else
  return function_pointers_.GetAttributeViString(vi, channelName, attributeId, bufferSize, attributeValue);
#endif
}

ViStatus NiFakeLibrary::GetCalDateAndTime(ViSession vi, ViInt32 calType, ViInt32* month, ViInt32* day, ViInt32* year, ViInt32* hour, ViInt32* minute)
{
  if (!function_pointers_.GetCalDateAndTime) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_GetCalDateAndTime.");
  }
#if defined(_MSC_VER)
  return niFake_GetCalDateAndTime(vi, calType, month, day, year, hour, minute);
#else
  return function_pointers_.GetCalDateAndTime(vi, calType, month, day, year, hour, minute);
#endif
}

ViStatus NiFakeLibrary::GetCalInterval(ViSession vi, ViInt32* months)
{
  if (!function_pointers_.GetCalInterval) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_GetCalInterval.");
  }
#if defined(_MSC_VER)
  return niFake_GetCalInterval(vi, months);
#else
  return function_pointers_.GetCalInterval(vi, months);
#endif
}

ViStatus NiFakeLibrary::GetCustomTypeArray(ViSession vi, ViInt32 numberOfElements, CustomStruct cs[])
{
  if (!function_pointers_.GetCustomTypeArray) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_GetCustomTypeArray.");
  }
#if defined(_MSC_VER)
  return niFake_GetCustomTypeArray(vi, numberOfElements, cs);
#else
  return function_pointers_.GetCustomTypeArray(vi, numberOfElements, cs);
#endif
}

ViStatus NiFakeLibrary::GetEnumValue(ViSession vi, ViInt32* aQuantity, ViInt16* aTurtle)
{
  if (!function_pointers_.GetEnumValue) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_GetEnumValue.");
  }
#if defined(_MSC_VER)
  return niFake_GetEnumValue(vi, aQuantity, aTurtle);
#else
  return function_pointers_.GetEnumValue(vi, aQuantity, aTurtle);
#endif
}

ViStatus NiFakeLibrary::GetError(ViSession vi, ViStatus* errorCode, ViInt32 bufferSize, ViChar description[])
{
  if (!function_pointers_.GetError) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_GetError.");
  }
#if defined(_MSC_VER)
  return niFake_GetError(vi, errorCode, bufferSize, description);
#else
  return function_pointers_.GetError(vi, errorCode, bufferSize, description);
#endif
}

ViStatus NiFakeLibrary::ImportAttributeConfigurationBuffer(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[])
{
  if (!function_pointers_.ImportAttributeConfigurationBuffer) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_ImportAttributeConfigurationBuffer.");
  }
#if defined(_MSC_VER)
  return niFake_ImportAttributeConfigurationBuffer(vi, sizeInBytes, configuration);
#else
  return function_pointers_.ImportAttributeConfigurationBuffer(vi, sizeInBytes, configuration);
#endif
}

ViStatus NiFakeLibrary::InitWithOptions(ViString resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViConstString optionString, ViSession* vi)
{
  if (!function_pointers_.InitWithOptions) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_InitWithOptions.");
  }
#if defined(_MSC_VER)
  return niFake_InitWithOptions(resourceName, idQuery, resetDevice, optionString, vi);
#else
  return function_pointers_.InitWithOptions(resourceName, idQuery, resetDevice, optionString, vi);
#endif
}

ViStatus NiFakeLibrary::Initiate(ViSession vi)
{
  if (!function_pointers_.Initiate) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_Initiate.");
  }
#if defined(_MSC_VER)
  return niFake_Initiate(vi);
#else
  return function_pointers_.Initiate(vi);
#endif
}

ViStatus NiFakeLibrary::MultipleArrayTypes(ViSession vi, ViInt32 outputArraySize, ViReal64 outputArray[], ViReal64 outputArrayOfFixedLength[3], ViInt32 inputArraySizes, ViReal64 inputArrayOfFloats[], ViInt16 inputArrayOfIntegers[])
{
  if (!function_pointers_.MultipleArrayTypes) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_MultipleArrayTypes.");
  }
#if defined(_MSC_VER)
  return niFake_MultipleArrayTypes(vi, outputArraySize, outputArray, outputArrayOfFixedLength, inputArraySizes, inputArrayOfFloats, inputArrayOfIntegers);
#else
  return function_pointers_.MultipleArrayTypes(vi, outputArraySize, outputArray, outputArrayOfFixedLength, inputArraySizes, inputArrayOfFloats, inputArrayOfIntegers);
#endif
}

ViStatus NiFakeLibrary::MultipleArraysSameSize(ViSession vi, ViReal64 values1[], ViReal64 values2[], ViReal64 values3[], ViReal64 values4[], ViInt32 size)
{
  if (!function_pointers_.MultipleArraysSameSize) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_MultipleArraysSameSize.");
  }
#if defined(_MSC_VER)
  return niFake_MultipleArraysSameSize(vi, values1, values2, values3, values4, size);
#else
  return function_pointers_.MultipleArraysSameSize(vi, values1, values2, values3, values4, size);
#endif
}

ViStatus NiFakeLibrary::OneInputFunction(ViSession vi, ViInt32 aNumber)
{
  if (!function_pointers_.OneInputFunction) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_OneInputFunction.");
  }
#if defined(_MSC_VER)
  return niFake_OneInputFunction(vi, aNumber);
#else
  return function_pointers_.OneInputFunction(vi, aNumber);
#endif
}

ViStatus NiFakeLibrary::ParametersAreMultipleTypes(ViSession vi, ViBoolean aBoolean, ViInt32 anInt32, ViInt64 anInt64, ViInt16 anIntEnum, ViReal64 aFloat, ViReal64 aFloatEnum, ViInt32 stringSize, ViConstString aString)
{
  if (!function_pointers_.ParametersAreMultipleTypes) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_ParametersAreMultipleTypes.");
  }
#if defined(_MSC_VER)
  return niFake_ParametersAreMultipleTypes(vi, aBoolean, anInt32, anInt64, anIntEnum, aFloat, aFloatEnum, stringSize, aString);
#else
  return function_pointers_.ParametersAreMultipleTypes(vi, aBoolean, anInt32, anInt64, anIntEnum, aFloat, aFloatEnum, stringSize, aString);
#endif
}

ViStatus NiFakeLibrary::PoorlyNamedSimpleFunction(ViSession vi)
{
  if (!function_pointers_.PoorlyNamedSimpleFunction) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_PoorlyNamedSimpleFunction.");
  }
#if defined(_MSC_VER)
  return niFake_PoorlyNamedSimpleFunction(vi);
#else
  return function_pointers_.PoorlyNamedSimpleFunction(vi);
#endif
}

ViStatus NiFakeLibrary::Read(ViSession vi, ViReal64 maximumTime, ViReal64* reading)
{
  if (!function_pointers_.Read) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_Read.");
  }
#if defined(_MSC_VER)
  return niFake_Read(vi, maximumTime, reading);
#else
  return function_pointers_.Read(vi, maximumTime, reading);
#endif
}

ViStatus NiFakeLibrary::ReadFromChannel(ViSession vi, ViConstString channelName, ViInt32 maximumTime, ViReal64* reading)
{
  if (!function_pointers_.ReadFromChannel) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_ReadFromChannel.");
  }
#if defined(_MSC_VER)
  return niFake_ReadFromChannel(vi, channelName, maximumTime, reading);
#else
  return function_pointers_.ReadFromChannel(vi, channelName, maximumTime, reading);
#endif
}

ViStatus NiFakeLibrary::ReturnANumberAndAString(ViSession vi, ViInt16* aNumber, ViChar aString[256])
{
  if (!function_pointers_.ReturnANumberAndAString) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_ReturnANumberAndAString.");
  }
#if defined(_MSC_VER)
  return niFake_ReturnANumberAndAString(vi, aNumber, aString);
#else
  return function_pointers_.ReturnANumberAndAString(vi, aNumber, aString);
#endif
}

ViStatus NiFakeLibrary::ReturnDurationInSeconds(ViSession vi, ViReal64* timedelta)
{
  if (!function_pointers_.ReturnDurationInSeconds) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_ReturnDurationInSeconds.");
  }
#if defined(_MSC_VER)
  return niFake_ReturnDurationInSeconds(vi, timedelta);
#else
  return function_pointers_.ReturnDurationInSeconds(vi, timedelta);
#endif
}

ViStatus NiFakeLibrary::ReturnListOfDurationsInSeconds(ViSession vi, ViInt32 numberOfElements, ViReal64 timedeltas[])
{
  if (!function_pointers_.ReturnListOfDurationsInSeconds) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_ReturnListOfDurationsInSeconds.");
  }
#if defined(_MSC_VER)
  return niFake_ReturnListOfDurationsInSeconds(vi, numberOfElements, timedeltas);
#else
  return function_pointers_.ReturnListOfDurationsInSeconds(vi, numberOfElements, timedeltas);
#endif
}

ViStatus NiFakeLibrary::ReturnMultipleTypes(ViSession vi, ViBoolean* aBoolean, ViInt32* anInt32, ViInt64* anInt64, ViInt16* anIntEnum, ViReal64* aFloat, ViReal64* aFloatEnum, ViInt32 arraySize, ViReal64 anArray[], ViInt32 stringSize, ViChar aString[])
{
  if (!function_pointers_.ReturnMultipleTypes) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_ReturnMultipleTypes.");
  }
#if defined(_MSC_VER)
  return niFake_ReturnMultipleTypes(vi, aBoolean, anInt32, anInt64, anIntEnum, aFloat, aFloatEnum, arraySize, anArray, stringSize, aString);
#else
  return function_pointers_.ReturnMultipleTypes(vi, aBoolean, anInt32, anInt64, anIntEnum, aFloat, aFloatEnum, arraySize, anArray, stringSize, aString);
#endif
}

ViStatus NiFakeLibrary::SetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue)
{
  if (!function_pointers_.SetAttributeViBoolean) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_SetAttributeViBoolean.");
  }
#if defined(_MSC_VER)
  return niFake_SetAttributeViBoolean(vi, channelName, attributeId, attributeValue);
#else
  return function_pointers_.SetAttributeViBoolean(vi, channelName, attributeId, attributeValue);
#endif
}

ViStatus NiFakeLibrary::SetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue)
{
  if (!function_pointers_.SetAttributeViInt32) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_SetAttributeViInt32.");
  }
#if defined(_MSC_VER)
  return niFake_SetAttributeViInt32(vi, channelName, attributeId, attributeValue);
#else
  return function_pointers_.SetAttributeViInt32(vi, channelName, attributeId, attributeValue);
#endif
}

ViStatus NiFakeLibrary::SetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue)
{
  if (!function_pointers_.SetAttributeViInt64) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_SetAttributeViInt64.");
  }
#if defined(_MSC_VER)
  return niFake_SetAttributeViInt64(vi, channelName, attributeId, attributeValue);
#else
  return function_pointers_.SetAttributeViInt64(vi, channelName, attributeId, attributeValue);
#endif
}

ViStatus NiFakeLibrary::SetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue)
{
  if (!function_pointers_.SetAttributeViReal64) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_SetAttributeViReal64.");
  }
#if defined(_MSC_VER)
  return niFake_SetAttributeViReal64(vi, channelName, attributeId, attributeValue);
#else
  return function_pointers_.SetAttributeViReal64(vi, channelName, attributeId, attributeValue);
#endif
}

ViStatus NiFakeLibrary::SetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue)
{
  if (!function_pointers_.SetAttributeViString) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_SetAttributeViString.");
  }
#if defined(_MSC_VER)
  return niFake_SetAttributeViString(vi, channelName, attributeId, attributeValue);
#else
  return function_pointers_.SetAttributeViString(vi, channelName, attributeId, attributeValue);
#endif
}

ViStatus NiFakeLibrary::StringValuedEnumInputFunctionWithDefaults(ViSession vi, ViConstString aMobileOSName)
{
  if (!function_pointers_.StringValuedEnumInputFunctionWithDefaults) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_StringValuedEnumInputFunctionWithDefaults.");
  }
#if defined(_MSC_VER)
  return niFake_StringValuedEnumInputFunctionWithDefaults(vi, aMobileOSName);
#else
  return function_pointers_.StringValuedEnumInputFunctionWithDefaults(vi, aMobileOSName);
#endif
}

ViStatus NiFakeLibrary::TwoInputFunction(ViSession vi, ViReal64 aNumber, ViString aString)
{
  if (!function_pointers_.TwoInputFunction) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_TwoInputFunction.");
  }
#if defined(_MSC_VER)
  return niFake_TwoInputFunction(vi, aNumber, aString);
#else
  return function_pointers_.TwoInputFunction(vi, aNumber, aString);
#endif
}

ViStatus NiFakeLibrary::Use64BitNumber(ViSession vi, ViInt64 input, ViInt64* output)
{
  if (!function_pointers_.Use64BitNumber) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_Use64BitNumber.");
  }
#if defined(_MSC_VER)
  return niFake_Use64BitNumber(vi, input, output);
#else
  return function_pointers_.Use64BitNumber(vi, input, output);
#endif
}

ViStatus NiFakeLibrary::WriteWaveform(ViSession vi, ViInt32 numberOfSamples, ViReal64 waveform[])
{
  if (!function_pointers_.WriteWaveform) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_WriteWaveform.");
  }
#if defined(_MSC_VER)
  return niFake_WriteWaveform(vi, numberOfSamples, waveform);
#else
  return function_pointers_.WriteWaveform(vi, numberOfSamples, waveform);
#endif
}

ViStatus NiFakeLibrary::close(ViSession vi)
{
  if (!function_pointers_.close) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_close.");
  }
#if defined(_MSC_VER)
  return niFake_close(vi);
#else
  return function_pointers_.close(vi);
#endif
}

ViStatus NiFakeLibrary::error_message(ViSession vi, ViStatus errorCode, ViChar errorMessage[256])
{
  if (!function_pointers_.error_message) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_error_message.");
  }
#if defined(_MSC_VER)
  return niFake_error_message(vi, errorCode, errorMessage);
#else
  return function_pointers_.error_message(vi, errorCode, errorMessage);
#endif
}

ViStatus NiFakeLibrary::self_test(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256])
{
  if (!function_pointers_.self_test) {
    throw ni::hardware::grpc::internal::LibraryLoadException("Could not find niFake_self_test.");
  }
#if defined(_MSC_VER)
  return niFake_self_test(vi, selfTestResult, selfTestMessage);
#else
  return function_pointers_.self_test(vi, selfTestResult, selfTestMessage);
#endif
}

}  // namespace ni
}  // namespace fake
}  // namespace grpc
