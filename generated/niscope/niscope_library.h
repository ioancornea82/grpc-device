//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for NI-SCOPE
//---------------------------------------------------------------------
#ifndef NI_SCOPE_GRPC_LIBRARY_H
#define NI_SCOPE_GRPC_LIBRARY_H

#include "niscope_library_interface.h"

#include <server/shared_library.h>

namespace ni {
namespace scope {
namespace grpc {

class NiScopeLibrary : public ni::scope::grpc::NiScopeLibraryInterface {
 public:
  NiScopeLibrary();
  virtual ~NiScopeLibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  ViStatus Abort(ViSession vi);
  ViStatus AcquisitionStatus(ViSession vi, ViInt32* acquisitionStatus);
  ViStatus ActualMeasWfmSize(ViSession vi, ViInt32 arrayMeasFunction, ViInt32* measWaveformSize);
  ViStatus ActualNumWfms(ViSession vi, ViConstString channelList, ViInt32* numWfms);
  ViStatus AddWaveformProcessing(ViSession vi, ViConstString channelList, ViInt32 measFunction);
  ViStatus AutoSetup(ViSession vi);
  ViStatus CalSelfCalibrate(ViSession vi, ViConstString channelList, ViInt32 option);
  ViStatus ClearWaveformMeasurementStats(ViSession vi, ViConstString channelList, ViInt32 clearableMeasurementFunction);
  ViStatus ClearWaveformProcessing(ViSession vi, ViConstString channelList);
  ViStatus Commit(ViSession vi);
  ViStatus ConfigureChanCharacteristics(ViSession vi, ViConstString channelList, ViReal64 inputImpedance, ViReal64 maxInputFrequency);
  ViStatus ConfigureEqualizationFilterCoefficients(ViSession vi, ViConstString channelList, ViInt32 numberOfCoefficients, ViReal64 coefficients[]);
  ViStatus ConfigureHorizontalTiming(ViSession vi, ViReal64 minSampleRate, ViInt32 minNumPts, ViReal64 refPosition, ViInt32 numRecords, ViBoolean enforceRealtime);
  ViStatus ConfigureTriggerDigital(ViSession vi, ViConstString triggerSource, ViInt32 slope, ViReal64 holdoff, ViReal64 delay);
  ViStatus ConfigureTriggerEdge(ViSession vi, ViConstString triggerSource, ViReal64 level, ViInt32 slope, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay);
  ViStatus ConfigureTriggerHysteresis(ViSession vi, ViConstString triggerSource, ViReal64 level, ViReal64 hysteresis, ViInt32 slope, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay);
  ViStatus ConfigureTriggerImmediate(ViSession vi);
  ViStatus ConfigureTriggerSoftware(ViSession vi, ViReal64 holdoff, ViReal64 delay);
  ViStatus ConfigureTriggerVideo(ViSession vi, ViConstString triggerSource, ViBoolean enableDcRestore, ViInt32 signalFormat, ViInt32 eventParameter, ViInt32 lineNumber, ViInt32 polarity, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay);
  ViStatus ConfigureTriggerWindow(ViSession vi, ViConstString triggerSource, ViReal64 lowLevel, ViReal64 highLevel, ViInt32 windowMode, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay);
  ViStatus ConfigureVertical(ViSession vi, ViConstString channelList, ViReal64 range, ViReal64 offset, ViInt32 coupling, ViReal64 probeAttenuation, ViBoolean enabled);
  ViStatus Disable(ViSession vi);
  ViStatus ExportAttributeConfigurationBuffer(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[]);
  ViStatus ExportAttributeConfigurationFile(ViSession vi, ViConstString filePath);
  ViStatus Fetch(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViReal64 waveform[], niScope_wfmInfo wfmInfo[]);
  ViStatus FetchArrayMeasurement(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 arrayMeasFunction, ViInt32 measurementWaveformSize, ViReal64 measWfm[], niScope_wfmInfo wfmInfo[]);
  ViStatus FetchBinary16(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViInt16 waveform[], niScope_wfmInfo wfmInfo[]);
  ViStatus FetchBinary32(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViInt32 waveform[], niScope_wfmInfo wfmInfo[]);
  ViStatus FetchBinary8(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViInt8 waveform[], niScope_wfmInfo wfmInfo[]);
  ViStatus FetchMeasurementStats(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 scalarMeasFunction, ViReal64 result[], ViReal64 mean[], ViReal64 stdev[], ViReal64 min[], ViReal64 max[], ViInt32 numInStats[]);
  ViStatus GetAttributeViBoolean(ViSession vi, ViConstString channelList, ViAttr attributeId, ViBoolean* value);
  ViStatus GetAttributeViInt32(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt32* value);
  ViStatus GetAttributeViInt64(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt64* value);
  ViStatus GetAttributeViReal64(ViSession vi, ViConstString channelList, ViAttr attributeId, ViReal64* value);
  ViStatus GetAttributeViString(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt32 bufSize, ViChar value[]);
  ViStatus GetEqualizationFilterCoefficients(ViSession vi, ViConstString channel, ViInt32 numberOfCoefficients, ViReal64 coefficients[]);
  ViStatus GetError(ViSession vi, ViStatus* errorCode, ViInt32 bufferSize, ViChar description[]);
  ViStatus ImportAttributeConfigurationBuffer(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[]);
  ViStatus ImportAttributeConfigurationFile(ViSession vi, ViConstString filePath);
  ViStatus InitWithOptions(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViConstString optionString, ViSession* vi);
  ViStatus InitiateAcquisition(ViSession vi);
  ViStatus LockSession(ViSession vi, ViBoolean* callerHasLock);
  ViStatus ProbeCompensationSignalStart(ViSession vi);
  ViStatus ProbeCompensationSignalStop(ViSession vi);
  ViStatus Read(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViReal64 waveform[], niScope_wfmInfo wfmInfo[]);
  ViStatus ResetDevice(ViSession vi);
  ViStatus ResetWithDefaults(ViSession vi);
  ViStatus SendSoftwareTriggerEdge(ViSession vi, ViInt32 whichTrigger);
  ViStatus SetAttributeViBoolean(ViSession vi, ViConstString channelList, ViAttr attributeId, ViBoolean value);
  ViStatus SetAttributeViInt32(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt32 value);
  ViStatus SetAttributeViInt64(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt64 value);
  ViStatus SetAttributeViReal64(ViSession vi, ViConstString channelList, ViAttr attributeId, ViReal64 value);
  ViStatus SetAttributeViString(ViSession vi, ViConstString channelList, ViAttr attributeId, ViConstString value);
  ViStatus UnlockSession(ViSession vi, ViBoolean* callerHasLock);
  ViStatus close(ViSession vi);
  ViStatus error_message(ViSession vi, ViStatus errorCode, ViChar errorMessage[256]);
  ViStatus reset(ViSession vi);
  ViStatus self_test(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]);

 private:
  using AbortPtr = ViStatus (*)(ViSession vi);
  using AcquisitionStatusPtr = ViStatus (*)(ViSession vi, ViInt32* acquisitionStatus);
  using ActualMeasWfmSizePtr = ViStatus (*)(ViSession vi, ViInt32 arrayMeasFunction, ViInt32* measWaveformSize);
  using ActualNumWfmsPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViInt32* numWfms);
  using AddWaveformProcessingPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViInt32 measFunction);
  using AutoSetupPtr = ViStatus (*)(ViSession vi);
  using CalSelfCalibratePtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViInt32 option);
  using ClearWaveformMeasurementStatsPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViInt32 clearableMeasurementFunction);
  using ClearWaveformProcessingPtr = ViStatus (*)(ViSession vi, ViConstString channelList);
  using CommitPtr = ViStatus (*)(ViSession vi);
  using ConfigureChanCharacteristicsPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViReal64 inputImpedance, ViReal64 maxInputFrequency);
  using ConfigureEqualizationFilterCoefficientsPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViInt32 numberOfCoefficients, ViReal64 coefficients[]);
  using ConfigureHorizontalTimingPtr = ViStatus (*)(ViSession vi, ViReal64 minSampleRate, ViInt32 minNumPts, ViReal64 refPosition, ViInt32 numRecords, ViBoolean enforceRealtime);
  using ConfigureTriggerDigitalPtr = ViStatus (*)(ViSession vi, ViConstString triggerSource, ViInt32 slope, ViReal64 holdoff, ViReal64 delay);
  using ConfigureTriggerEdgePtr = ViStatus (*)(ViSession vi, ViConstString triggerSource, ViReal64 level, ViInt32 slope, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay);
  using ConfigureTriggerHysteresisPtr = ViStatus (*)(ViSession vi, ViConstString triggerSource, ViReal64 level, ViReal64 hysteresis, ViInt32 slope, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay);
  using ConfigureTriggerImmediatePtr = ViStatus (*)(ViSession vi);
  using ConfigureTriggerSoftwarePtr = ViStatus (*)(ViSession vi, ViReal64 holdoff, ViReal64 delay);
  using ConfigureTriggerVideoPtr = ViStatus (*)(ViSession vi, ViConstString triggerSource, ViBoolean enableDcRestore, ViInt32 signalFormat, ViInt32 eventParameter, ViInt32 lineNumber, ViInt32 polarity, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay);
  using ConfigureTriggerWindowPtr = ViStatus (*)(ViSession vi, ViConstString triggerSource, ViReal64 lowLevel, ViReal64 highLevel, ViInt32 windowMode, ViInt32 triggerCoupling, ViReal64 holdoff, ViReal64 delay);
  using ConfigureVerticalPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViReal64 range, ViReal64 offset, ViInt32 coupling, ViReal64 probeAttenuation, ViBoolean enabled);
  using DisablePtr = ViStatus (*)(ViSession vi);
  using ExportAttributeConfigurationBufferPtr = ViStatus (*)(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[]);
  using ExportAttributeConfigurationFilePtr = ViStatus (*)(ViSession vi, ViConstString filePath);
  using FetchPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViReal64 waveform[], niScope_wfmInfo wfmInfo[]);
  using FetchArrayMeasurementPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 arrayMeasFunction, ViInt32 measurementWaveformSize, ViReal64 measWfm[], niScope_wfmInfo wfmInfo[]);
  using FetchBinary16Ptr = ViStatus (*)(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViInt16 waveform[], niScope_wfmInfo wfmInfo[]);
  using FetchBinary32Ptr = ViStatus (*)(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViInt32 waveform[], niScope_wfmInfo wfmInfo[]);
  using FetchBinary8Ptr = ViStatus (*)(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViInt8 waveform[], niScope_wfmInfo wfmInfo[]);
  using FetchMeasurementStatsPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 scalarMeasFunction, ViReal64 result[], ViReal64 mean[], ViReal64 stdev[], ViReal64 min[], ViReal64 max[], ViInt32 numInStats[]);
  using GetAttributeViBooleanPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViBoolean* value);
  using GetAttributeViInt32Ptr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt32* value);
  using GetAttributeViInt64Ptr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt64* value);
  using GetAttributeViReal64Ptr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViReal64* value);
  using GetAttributeViStringPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt32 bufSize, ViChar value[]);
  using GetEqualizationFilterCoefficientsPtr = ViStatus (*)(ViSession vi, ViConstString channel, ViInt32 numberOfCoefficients, ViReal64 coefficients[]);
  using GetErrorPtr = ViStatus (*)(ViSession vi, ViStatus* errorCode, ViInt32 bufferSize, ViChar description[]);
  using ImportAttributeConfigurationBufferPtr = ViStatus (*)(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[]);
  using ImportAttributeConfigurationFilePtr = ViStatus (*)(ViSession vi, ViConstString filePath);
  using InitWithOptionsPtr = ViStatus (*)(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViConstString optionString, ViSession* vi);
  using InitiateAcquisitionPtr = ViStatus (*)(ViSession vi);
  using LockSessionPtr = ViStatus (*)(ViSession vi, ViBoolean* callerHasLock);
  using ProbeCompensationSignalStartPtr = ViStatus (*)(ViSession vi);
  using ProbeCompensationSignalStopPtr = ViStatus (*)(ViSession vi);
  using ReadPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViReal64 timeout, ViInt32 numSamples, ViReal64 waveform[], niScope_wfmInfo wfmInfo[]);
  using ResetDevicePtr = ViStatus (*)(ViSession vi);
  using ResetWithDefaultsPtr = ViStatus (*)(ViSession vi);
  using SendSoftwareTriggerEdgePtr = ViStatus (*)(ViSession vi, ViInt32 whichTrigger);
  using SetAttributeViBooleanPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViBoolean value);
  using SetAttributeViInt32Ptr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt32 value);
  using SetAttributeViInt64Ptr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViInt64 value);
  using SetAttributeViReal64Ptr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViReal64 value);
  using SetAttributeViStringPtr = ViStatus (*)(ViSession vi, ViConstString channelList, ViAttr attributeId, ViConstString value);
  using UnlockSessionPtr = ViStatus (*)(ViSession vi, ViBoolean* callerHasLock);
  using closePtr = ViStatus (*)(ViSession vi);
  using error_messagePtr = ViStatus (*)(ViSession vi, ViStatus errorCode, ViChar errorMessage[256]);
  using resetPtr = ViStatus (*)(ViSession vi);
  using self_testPtr = ViStatus (*)(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]);

  typedef struct FunctionPointers {
    AbortPtr Abort;
    AcquisitionStatusPtr AcquisitionStatus;
    ActualMeasWfmSizePtr ActualMeasWfmSize;
    ActualNumWfmsPtr ActualNumWfms;
    AddWaveformProcessingPtr AddWaveformProcessing;
    AutoSetupPtr AutoSetup;
    CalSelfCalibratePtr CalSelfCalibrate;
    ClearWaveformMeasurementStatsPtr ClearWaveformMeasurementStats;
    ClearWaveformProcessingPtr ClearWaveformProcessing;
    CommitPtr Commit;
    ConfigureChanCharacteristicsPtr ConfigureChanCharacteristics;
    ConfigureEqualizationFilterCoefficientsPtr ConfigureEqualizationFilterCoefficients;
    ConfigureHorizontalTimingPtr ConfigureHorizontalTiming;
    ConfigureTriggerDigitalPtr ConfigureTriggerDigital;
    ConfigureTriggerEdgePtr ConfigureTriggerEdge;
    ConfigureTriggerHysteresisPtr ConfigureTriggerHysteresis;
    ConfigureTriggerImmediatePtr ConfigureTriggerImmediate;
    ConfigureTriggerSoftwarePtr ConfigureTriggerSoftware;
    ConfigureTriggerVideoPtr ConfigureTriggerVideo;
    ConfigureTriggerWindowPtr ConfigureTriggerWindow;
    ConfigureVerticalPtr ConfigureVertical;
    DisablePtr Disable;
    ExportAttributeConfigurationBufferPtr ExportAttributeConfigurationBuffer;
    ExportAttributeConfigurationFilePtr ExportAttributeConfigurationFile;
    FetchPtr Fetch;
    FetchArrayMeasurementPtr FetchArrayMeasurement;
    FetchBinary16Ptr FetchBinary16;
    FetchBinary32Ptr FetchBinary32;
    FetchBinary8Ptr FetchBinary8;
    FetchMeasurementStatsPtr FetchMeasurementStats;
    GetAttributeViBooleanPtr GetAttributeViBoolean;
    GetAttributeViInt32Ptr GetAttributeViInt32;
    GetAttributeViInt64Ptr GetAttributeViInt64;
    GetAttributeViReal64Ptr GetAttributeViReal64;
    GetAttributeViStringPtr GetAttributeViString;
    GetEqualizationFilterCoefficientsPtr GetEqualizationFilterCoefficients;
    GetErrorPtr GetError;
    ImportAttributeConfigurationBufferPtr ImportAttributeConfigurationBuffer;
    ImportAttributeConfigurationFilePtr ImportAttributeConfigurationFile;
    InitWithOptionsPtr InitWithOptions;
    InitiateAcquisitionPtr InitiateAcquisition;
    LockSessionPtr LockSession;
    ProbeCompensationSignalStartPtr ProbeCompensationSignalStart;
    ProbeCompensationSignalStopPtr ProbeCompensationSignalStop;
    ReadPtr Read;
    ResetDevicePtr ResetDevice;
    ResetWithDefaultsPtr ResetWithDefaults;
    SendSoftwareTriggerEdgePtr SendSoftwareTriggerEdge;
    SetAttributeViBooleanPtr SetAttributeViBoolean;
    SetAttributeViInt32Ptr SetAttributeViInt32;
    SetAttributeViInt64Ptr SetAttributeViInt64;
    SetAttributeViReal64Ptr SetAttributeViReal64;
    SetAttributeViStringPtr SetAttributeViString;
    UnlockSessionPtr UnlockSession;
    closePtr close;
    error_messagePtr error_message;
    resetPtr reset;
    self_testPtr self_test;
  } FunctionLoadStatus;

  ni::hardware::grpc::internal::SharedLibrary shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace grpc
}  // namespace scope
}  // namespace ni

#endif  // NI_SCOPE_GRPC_LIBRARY_H
