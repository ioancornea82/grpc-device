
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service implementation for the NI-FAKE Metadata
//---------------------------------------------------------------------
#include "nifake_service.h"

#include <sstream>
#include <fstream>
#include <iostream>
#include <atomic>

namespace ni {
namespace fake {
namespace grpc {

  namespace internal = ni::hardware::grpc::internal;

  NiFakeService::NiFakeService(NiFakeLibraryInterface* library, internal::SessionRepository* session_repository)
      : library_(library), session_repository_(session_repository)
  {
  }

  NiFakeService::~NiFakeService()
  {
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::Abort(::grpc::ServerContext* context, const AbortRequest* request, AbortResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      auto status = library_->Abort(vi);
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::AcceptListOfDurationsInSeconds(::grpc::ServerContext* context, const AcceptListOfDurationsInSecondsRequest* request, AcceptListOfDurationsInSecondsResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViInt32 count = request->delays().size();
      ViReal64* delays = (ViReal64*)request->delays().data();
      auto status = library_->AcceptListOfDurationsInSeconds(vi, count, delays);
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::BoolArrayOutputFunction(::grpc::ServerContext* context, const BoolArrayOutputFunctionRequest* request, BoolArrayOutputFunctionResponse* response)
  {
    try {
      return ::grpc::Status(::grpc::UNIMPLEMENTED, "TODO: This server handler has not been implemented.");
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::DoubleAllTheNums(::grpc::ServerContext* context, const DoubleAllTheNumsRequest* request, DoubleAllTheNumsResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViInt32 number_count = request->numbers().size();
      ViReal64* numbers = (ViReal64*)request->numbers().data();
      auto status = library_->DoubleAllTheNums(vi, number_count, numbers);
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::EnumArrayOutputFunction(::grpc::ServerContext* context, const EnumArrayOutputFunctionRequest* request, EnumArrayOutputFunctionResponse* response)
  {
    try {
      return ::grpc::Status(::grpc::UNIMPLEMENTED, "TODO: This server handler has not been implemented.");
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::EnumInputFunctionWithDefaults(::grpc::ServerContext* context, const EnumInputFunctionWithDefaultsRequest* request, EnumInputFunctionWithDefaultsResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViInt16 a_turtle = (ViInt16)request->a_turtle();
      auto status = library_->EnumInputFunctionWithDefaults(vi, a_turtle);
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::ExportAttributeConfigurationBuffer(::grpc::ServerContext* context, const ExportAttributeConfigurationBufferRequest* request, ExportAttributeConfigurationBufferResponse* response)
  {
    try {
      return ::grpc::Status(::grpc::UNIMPLEMENTED, "TODO: This server handler has not been implemented.");
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::FetchWaveform(::grpc::ServerContext* context, const FetchWaveformRequest* request, FetchWaveformResponse* response)
  {
    try {
      return ::grpc::Status(::grpc::UNIMPLEMENTED, "TODO: This server handler has not been implemented.");
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::GetABoolean(::grpc::ServerContext* context, const GetABooleanRequest* request, GetABooleanResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViBoolean a_boolean {};
      auto status = library_->GetABoolean(vi, &a_boolean);
      response->set_status(status);
      if (status == 0) {
        response->set_a_boolean(a_boolean);
      }
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::GetANumber(::grpc::ServerContext* context, const GetANumberRequest* request, GetANumberResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViInt16 a_number {};
      auto status = library_->GetANumber(vi, &a_number);
      response->set_status(status);
      if (status == 0) {
        response->set_a_number(a_number);
      }
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::GetAStringOfFixedMaximumSize(::grpc::ServerContext* context, const GetAStringOfFixedMaximumSizeRequest* request, GetAStringOfFixedMaximumSizeResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViChar a_string[256];
      auto status = library_->GetAStringOfFixedMaximumSize(vi, a_string);
      response->set_status(status);
      if (status == 0) {
        response->set_a_string(a_string);
      }
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::GetAStringUsingPythonCode(::grpc::ServerContext* context, const GetAStringUsingPythonCodeRequest* request, GetAStringUsingPythonCodeResponse* response)
  {
    try {
      return ::grpc::Status(::grpc::UNIMPLEMENTED, "TODO: This server handler has not been implemented.");
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::GetAnIviDanceString(::grpc::ServerContext* context, const GetAnIviDanceStringRequest* request, GetAnIviDanceStringResponse* response)
  {
    try {
      return ::grpc::Status(::grpc::UNIMPLEMENTED, "TODO: This server handler has not been implemented.");
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::GetAnIviDanceWithATwistString(::grpc::ServerContext* context, const GetAnIviDanceWithATwistStringRequest* request, GetAnIviDanceWithATwistStringResponse* response)
  {
    try {
      return ::grpc::Status(::grpc::UNIMPLEMENTED, "TODO: This server handler has not been implemented.");
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::GetArrayForPythonCodeCustomType(::grpc::ServerContext* context, const GetArrayForPythonCodeCustomTypeRequest* request, GetArrayForPythonCodeCustomTypeResponse* response)
  {
    try {
      return ::grpc::Status(::grpc::UNIMPLEMENTED, "TODO: This server handler has not been implemented.");
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::GetArrayForPythonCodeDouble(::grpc::ServerContext* context, const GetArrayForPythonCodeDoubleRequest* request, GetArrayForPythonCodeDoubleResponse* response)
  {
    try {
      return ::grpc::Status(::grpc::UNIMPLEMENTED, "TODO: This server handler has not been implemented.");
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::GetArraySizeForPythonCode(::grpc::ServerContext* context, const GetArraySizeForPythonCodeRequest* request, GetArraySizeForPythonCodeResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViInt32 size_out {};
      auto status = library_->GetArraySizeForPythonCode(vi, &size_out);
      response->set_status(status);
      if (status == 0) {
        response->set_size_out(size_out);
      }
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::GetArrayUsingIviDance(::grpc::ServerContext* context, const GetArrayUsingIviDanceRequest* request, GetArrayUsingIviDanceResponse* response)
  {
    try {
      return ::grpc::Status(::grpc::UNIMPLEMENTED, "TODO: This server handler has not been implemented.");
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::GetAttributeViBoolean(::grpc::ServerContext* context, const GetAttributeViBooleanRequest* request, GetAttributeViBooleanResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViConstString channel_name = request->channel_name().c_str();
      ViAttr attribute_id = request->attribute_id();
      ViBoolean attribute_value {};
      auto status = library_->GetAttributeViBoolean(vi, channel_name, attribute_id, &attribute_value);
      response->set_status(status);
      if (status == 0) {
        response->set_attribute_value(attribute_value);
      }
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::GetAttributeViInt32(::grpc::ServerContext* context, const GetAttributeViInt32Request* request, GetAttributeViInt32Response* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViConstString channel_name = request->channel_name().c_str();
      ViAttr attribute_id = request->attribute_id();
      ViInt32 attribute_value {};
      auto status = library_->GetAttributeViInt32(vi, channel_name, attribute_id, &attribute_value);
      response->set_status(status);
      if (status == 0) {
        response->set_attribute_value(attribute_value);
      }
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::GetAttributeViInt64(::grpc::ServerContext* context, const GetAttributeViInt64Request* request, GetAttributeViInt64Response* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViConstString channel_name = request->channel_name().c_str();
      ViAttr attribute_id = request->attribute_id();
      ViInt64 attribute_value {};
      auto status = library_->GetAttributeViInt64(vi, channel_name, attribute_id, &attribute_value);
      response->set_status(status);
      if (status == 0) {
        response->set_attribute_value(attribute_value);
      }
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::GetAttributeViReal64(::grpc::ServerContext* context, const GetAttributeViReal64Request* request, GetAttributeViReal64Response* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViConstString channel_name = request->channel_name().c_str();
      ViAttr attribute_id = request->attribute_id();
      ViReal64 attribute_value {};
      auto status = library_->GetAttributeViReal64(vi, channel_name, attribute_id, &attribute_value);
      response->set_status(status);
      if (status == 0) {
        response->set_attribute_value(attribute_value);
      }
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::GetAttributeViString(::grpc::ServerContext* context, const GetAttributeViStringRequest* request, GetAttributeViStringResponse* response)
  {
    try {
      return ::grpc::Status(::grpc::UNIMPLEMENTED, "TODO: This server handler has not been implemented.");
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::GetCalDateAndTime(::grpc::ServerContext* context, const GetCalDateAndTimeRequest* request, GetCalDateAndTimeResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViInt32 cal_type = request->cal_type();
      ViInt32 month {};
      ViInt32 day {};
      ViInt32 year {};
      ViInt32 hour {};
      ViInt32 minute {};
      auto status = library_->GetCalDateAndTime(vi, cal_type, &month, &day, &year, &hour, &minute);
      response->set_status(status);
      if (status == 0) {
        response->set_month(month);
        response->set_day(day);
        response->set_year(year);
        response->set_hour(hour);
        response->set_minute(minute);
      }
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::GetCalInterval(::grpc::ServerContext* context, const GetCalIntervalRequest* request, GetCalIntervalResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViInt32 months {};
      auto status = library_->GetCalInterval(vi, &months);
      response->set_status(status);
      if (status == 0) {
        response->set_months(months);
      }
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::GetCustomType(::grpc::ServerContext* context, const GetCustomTypeRequest* request, GetCustomTypeResponse* response)
  {
    try {
      return ::grpc::Status(::grpc::UNIMPLEMENTED, "TODO: This server handler has not been implemented.");
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::GetCustomTypeArray(::grpc::ServerContext* context, const GetCustomTypeArrayRequest* request, GetCustomTypeArrayResponse* response)
  {
    try {
      return ::grpc::Status(::grpc::UNIMPLEMENTED, "TODO: This server handler has not been implemented.");
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::GetEnumValue(::grpc::ServerContext* context, const GetEnumValueRequest* request, GetEnumValueResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViInt32 a_quantity {};
      ViInt16 a_turtle {};
      auto status = library_->GetEnumValue(vi, &a_quantity, &a_turtle);
      response->set_status(status);
      if (status == 0) {
        response->set_a_quantity(a_quantity);
        response->set_a_turtle(static_cast<ni::fake::grpc::Turtle>(a_turtle));
      }
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::ImportAttributeConfigurationBuffer(::grpc::ServerContext* context, const ImportAttributeConfigurationBufferRequest* request, ImportAttributeConfigurationBufferResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViInt32 size_in_bytes = request->configuration().size();
      ViInt8* configuration = (ViInt8*)request->configuration().c_str();
      auto status = library_->ImportAttributeConfigurationBuffer(vi, size_in_bytes, configuration);
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::InitWithOptions(::grpc::ServerContext* context, const InitWithOptionsRequest* request, InitWithOptionsResponse* response)
  {
    try {
      ViString resource_name = (ViString)request->resource_name().c_str();
      ViBoolean id_query = request->id_query();
      ViBoolean reset_device = request->reset_device();
      ViConstString option_string = request->option_string().c_str();

      auto init_lambda = [&] () -> std::tuple<int, uint32_t> {
        ViSession vi;
        int status = library_->InitWithOptions(resource_name, id_query, reset_device, option_string, &vi);
        return std::make_tuple(status, vi);
      };
      uint32_t session_id = 0;
      const std::string& session_name = request->session_name();
      auto cleanup_lambda = [&] (uint32_t id) { library_->close(id); };
      int status = session_repository_->add_session(session_name, init_lambda, cleanup_lambda, session_id);
      response->set_status(status);
      if (status == 0) {
        response->mutable_vi()->set_id(session_id);
      }
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::MultipleArrayTypes(::grpc::ServerContext* context, const MultipleArrayTypesRequest* request, MultipleArrayTypesResponse* response)
  {
    try {
      return ::grpc::Status(::grpc::UNIMPLEMENTED, "TODO: This server handler has not been implemented.");
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::MultipleArraysSameSize(::grpc::ServerContext* context, const MultipleArraysSameSizeRequest* request, MultipleArraysSameSizeResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViReal64* values1 = (ViReal64*)request->values1().data();
      ViReal64* values2 = (ViReal64*)request->values2().data();
      ViReal64* values3 = (ViReal64*)request->values3().data();
      ViReal64* values4 = (ViReal64*)request->values4().data();
      ViInt32 size = request->values1().size();
      auto status = library_->MultipleArraysSameSize(vi, values1, values2, values3, values4, size);
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::OneInputFunction(::grpc::ServerContext* context, const OneInputFunctionRequest* request, OneInputFunctionResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViInt32 a_number = request->a_number();
      auto status = library_->OneInputFunction(vi, a_number);
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::ParametersAreMultipleTypes(::grpc::ServerContext* context, const ParametersAreMultipleTypesRequest* request, ParametersAreMultipleTypesResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViBoolean a_boolean = request->a_boolean();
      ViInt32 an_int32 = request->an_int32();
      ViInt64 an_int64 = request->an_int64();
      ViInt16 an_int_enum = (ViInt16)request->an_int_enum();
      ViReal64 a_float = request->a_float();
      auto a_float_enum_imap_it = floatenum_input_map_.find(request->a_float_enum());

      if (a_float_enum_imap_it == floatenum_input_map_.end()) {
        return ::grpc::Status(::grpc::INVALID_ARGUMENT, "The value for a_float_enum was not specified or out of range.");
      }
      auto a_float_enum = static_cast<ViReal64>(a_float_enum_imap_it->second);

      ViInt32 string_size = request->a_string().size();
      ViConstString a_string = request->a_string().c_str();
      auto status = library_->ParametersAreMultipleTypes(vi, a_boolean, an_int32, an_int64, an_int_enum, a_float, a_float_enum, string_size, a_string);
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::PoorlyNamedSimpleFunction(::grpc::ServerContext* context, const PoorlyNamedSimpleFunctionRequest* request, PoorlyNamedSimpleFunctionResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      auto status = library_->PoorlyNamedSimpleFunction(vi);
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::Read(::grpc::ServerContext* context, const ReadRequest* request, ReadResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViReal64 maximum_time = request->maximum_time();
      ViReal64 reading {};
      auto status = library_->Read(vi, maximum_time, &reading);
      response->set_status(status);
      if (status == 0) {
        response->set_reading(reading);
      }
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::ReadFromChannel(::grpc::ServerContext* context, const ReadFromChannelRequest* request, ReadFromChannelResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViConstString channel_name = request->channel_name().c_str();
      ViInt32 maximum_time = request->maximum_time();
      ViReal64 reading {};
      auto status = library_->ReadFromChannel(vi, channel_name, maximum_time, &reading);
      response->set_status(status);
      if (status == 0) {
        response->set_reading(reading);
      }
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::ReturnANumberAndAString(::grpc::ServerContext* context, const ReturnANumberAndAStringRequest* request, ReturnANumberAndAStringResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViInt16 a_number {};
      ViChar a_string[256];
      auto status = library_->ReturnANumberAndAString(vi, &a_number, a_string);
      response->set_status(status);
      if (status == 0) {
        response->set_a_number(a_number);
        response->set_a_string(a_string);
      }
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::ReturnDurationInSeconds(::grpc::ServerContext* context, const ReturnDurationInSecondsRequest* request, ReturnDurationInSecondsResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViReal64 timedelta {};
      auto status = library_->ReturnDurationInSeconds(vi, &timedelta);
      response->set_status(status);
      if (status == 0) {
        response->set_timedelta(timedelta);
      }
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::ReturnListOfDurationsInSeconds(::grpc::ServerContext* context, const ReturnListOfDurationsInSecondsRequest* request, ReturnListOfDurationsInSecondsResponse* response)
  {
    try {
      return ::grpc::Status(::grpc::UNIMPLEMENTED, "TODO: This server handler has not been implemented.");
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::ReturnMultipleTypes(::grpc::ServerContext* context, const ReturnMultipleTypesRequest* request, ReturnMultipleTypesResponse* response)
  {
    try {
      return ::grpc::Status(::grpc::UNIMPLEMENTED, "TODO: This server handler has not been implemented.");
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::SetCustomType(::grpc::ServerContext* context, const SetCustomTypeRequest* request, SetCustomTypeResponse* response)
  {
    try {
      return ::grpc::Status(::grpc::UNIMPLEMENTED, "TODO: This server handler has not been implemented.");
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::SetCustomTypeArray(::grpc::ServerContext* context, const SetCustomTypeArrayRequest* request, SetCustomTypeArrayResponse* response)
  {
    try {
      return ::grpc::Status(::grpc::UNIMPLEMENTED, "TODO: This server handler has not been implemented.");
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::StringValuedEnumInputFunctionWithDefaults(::grpc::ServerContext* context, const StringValuedEnumInputFunctionWithDefaultsRequest* request, StringValuedEnumInputFunctionWithDefaultsResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      auto a_mobile_o_s_name_imap_it = mobileosnames_input_map_.find(request->a_mobile_o_s_name());

      if (a_mobile_o_s_name_imap_it == mobileosnames_input_map_.end()) {
        return ::grpc::Status(::grpc::INVALID_ARGUMENT, "The value for a_mobile_o_s_name was not specified or out of range.");
      }
      auto a_mobile_o_s_name = static_cast<ViConstString>((a_mobile_o_s_name_imap_it->second).c_str());

      auto status = library_->StringValuedEnumInputFunctionWithDefaults(vi, a_mobile_o_s_name);
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::TwoInputFunction(::grpc::ServerContext* context, const TwoInputFunctionRequest* request, TwoInputFunctionResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViReal64 a_number = request->a_number();
      ViString a_string = (ViString)request->a_string().c_str();
      auto status = library_->TwoInputFunction(vi, a_number, a_string);
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::Use64BitNumber(::grpc::ServerContext* context, const Use64BitNumberRequest* request, Use64BitNumberResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViInt64 input = request->input();
      ViInt64 output {};
      auto status = library_->Use64BitNumber(vi, input, &output);
      response->set_status(status);
      if (status == 0) {
        response->set_output(output);
      }
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::WriteWaveform(::grpc::ServerContext* context, const WriteWaveformRequest* request, WriteWaveformResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      ViInt32 number_of_samples = request->waveform().size();
      ViReal64* waveform = (ViReal64*)request->waveform().data();
      auto status = library_->WriteWaveform(vi, number_of_samples, waveform);
      response->set_status(status);
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiFakeService::Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response)
  {
    try {
      auto session = request->vi();
      ViSession vi = session_repository_->access_session(session.id(), session.name());
      session_repository_->remove_session(vi);
      return ::grpc::Status::OK;
    }
    catch (internal::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

} // namespace grpc
} // namespace fake
} // namespace ni

