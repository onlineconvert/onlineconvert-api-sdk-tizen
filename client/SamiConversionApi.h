#ifndef SamiConversionApi_H_
#define SamiConversionApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiConversion.h"
using Tizen::Base::String;
#include "SamiError.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiConversionApi {
public:
  SamiConversionApi();
  virtual ~SamiConversionApi();

  
  IList* 
  jobsJobIdConversionsGetWithCompletion(String* token, String* key, String* jobId, void (* handler)(IList*, SamiError*));
  
  SamiConversion* 
  jobsJobIdConversionsPostWithCompletion(SamiConversion* body, String* token, String* key, String* jobId, void (* handler)(SamiConversion*, SamiError*));
  
  SamiConversion* 
  jobsJobIdConversionsConversionIdGetWithCompletion(String* token, String* key, String* jobId, String* conversionId, void (* handler)(SamiConversion*, SamiError*));
  
  SamiConversion* 
  jobsJobIdConversionsConversionIdDeleteWithCompletion(String* token, String* key, String* jobId, String* conversionId, void (* handler)(SamiConversion*, SamiError*));
  
  static String getBasePath() {
    return L"http://api2.online-convert.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiConversionApi_H_ */
