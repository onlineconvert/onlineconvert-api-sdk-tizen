#ifndef ModelFactory_H_
#define ModelFactory_H_

#include "SamiObject.h"

#include "SamiJob.h"
#include "SamiInputFile.h"
#include "SamiOutputFile.h"
#include "SamiConversion.h"
#include "SamiThread.h"
#include "SamiStatus.h"
#include "SamiLink.h"
#include "SamiError.h"

namespace Swagger {
  void*
  create(String type) {
    if(type.Equals(L"SamiJob", true)) {
      return new SamiJob();
    }
    if(type.Equals(L"SamiInputFile", true)) {
      return new SamiInputFile();
    }
    if(type.Equals(L"SamiOutputFile", true)) {
      return new SamiOutputFile();
    }
    if(type.Equals(L"SamiConversion", true)) {
      return new SamiConversion();
    }
    if(type.Equals(L"SamiThread", true)) {
      return new SamiThread();
    }
    if(type.Equals(L"SamiStatus", true)) {
      return new SamiStatus();
    }
    if(type.Equals(L"SamiLink", true)) {
      return new SamiLink();
    }
    if(type.Equals(L"SamiError", true)) {
      return new SamiError();
    }
    
    if(type.Equals(L"String", true)) {
      return new String();
    }
    if(type.Equals(L"Integer", true)) {
      return new Integer();
    }
    if(type.Equals(L"Long", true)) {
      return new Long();
    }
    if(type.Equals(L"DateTime", true)) {
      return new DateTime();
    }
    return null;
  }
} /* namespace Swagger */

#endif /* ModelFactory_H_ */
