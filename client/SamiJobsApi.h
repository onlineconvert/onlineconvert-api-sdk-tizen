#ifndef SamiJobsApi_H_
#define SamiJobsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Long;
#include "SamiJob.h"
using Tizen::Base::String;
#include "SamiError.h"
#include "SamiThread.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiJobsApi {
public:
  SamiJobsApi();
  virtual ~SamiJobsApi();

  
  IList* 
  jobsGetWithCompletion(String* status, String* xOcToken, String* xOcApiKey, Long* page, void (* handler)(IList*, SamiError*));
  
  SamiJob* 
  jobsPostWithCompletion(String* xOcApiKey, SamiJob* body, void (* handler)(SamiJob*, SamiError*));
  
  SamiJob* 
  jobsJobIdGetWithCompletion(String* xOcToken, String* xOcApiKey, String* jobId, void (* handler)(SamiJob*, SamiError*));
  
  SamiJob* 
  jobsJobIdDeleteWithCompletion(String* xOcToken, String* xOcApiKey, String* jobId, void (* handler)(SamiJob*, SamiError*));
  
  SamiJob* 
  jobsJobIdPatchWithCompletion(SamiJob* body, String* xOcToken, String* xOcApiKey, String* jobId, void (* handler)(SamiJob*, SamiError*));
  
  IList* 
  jobsJobIdThreadsGetWithCompletion(String* xOcToken, String* xOcApiKey, String* jobId, void (* handler)(IList*, SamiError*));
  
  static String getBasePath() {
    return L"http://api2.online-convert.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiJobsApi_H_ */
