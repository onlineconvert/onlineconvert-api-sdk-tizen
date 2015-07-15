#ifndef SamiOutputApi_H_
#define SamiOutputApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiOutputFile.h"
using Tizen::Base::String;
#include "SamiError.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiOutputApi {
public:
  SamiOutputApi();
  virtual ~SamiOutputApi();

  
  IList* 
  jobsJobIdOutputGetWithCompletion(String* conversionId, String* inputId, String* xOcToken, String* xOcApiKey, String* jobId, void (* handler)(IList*, SamiError*));
  
  IList* 
  jobsJobIdOutputFileIdGetWithCompletion(String* xOcToken, String* xOcApiKey, String* jobId, String* fileId, void (* handler)(IList*, SamiError*));
  
  IList* 
  jobsJobIdOutputFileIdDeleteWithCompletion(String* xOcToken, String* xOcApiKey, String* jobId, String* fileId, void (* handler)(IList*, SamiError*));
  
  static String getBasePath() {
    return L"http://api2.online-convert.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiOutputApi_H_ */
