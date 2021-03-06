#ifndef SamiInputApi_H_
#define SamiInputApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiError.h"
#include "SamiInputFile.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiInputApi {
public:
  SamiInputApi();
  virtual ~SamiInputApi();

  
  IList* 
  jobsJobIdInputGetWithCompletion(String* xOcToken, String* xOcApiKey, String* jobId, void (* handler)(IList*, SamiError*));
  
  SamiInputFile* 
  jobsJobIdInputPostWithCompletion(SamiInputFile* body, String* xOcToken, String* xOcApiKey, String* jobId, void (* handler)(SamiInputFile*, SamiError*));
  
  SamiInputFile* 
  jobsJobIdInputFileIdGetWithCompletion(String* xOcToken, String* xOcApiKey, String* jobId, String* fileId, void (* handler)(SamiInputFile*, SamiError*));
  
  SamiInputFile* 
  jobsJobIdInputFileIdDeleteWithCompletion(String* xOcToken, String* xOcApiKey, String* jobId, String* fileId, void (* handler)(SamiInputFile*, SamiError*));
  
  static String getBasePath() {
    return L"http://api2.online-convert.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiInputApi_H_ */
