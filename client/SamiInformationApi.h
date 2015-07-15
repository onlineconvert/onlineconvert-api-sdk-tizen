#ifndef SamiInformationApi_H_
#define SamiInformationApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiConversion.h"
using Tizen::Base::Long;
using Tizen::Base::String;
#include "SamiStatus.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiInformationApi {
public:
  SamiInformationApi();
  virtual ~SamiInformationApi();

  
  IList* 
  conversionsGetWithCompletion(String* category, String* target, Long* page, void (* handler)(IList*, SamiError*));
  
  IList* 
  statusesGetWithCompletion( void (* handler)(IList*, SamiError*));
  
  static String getBasePath() {
    return L"http://api2.online-convert.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiInformationApi_H_ */
