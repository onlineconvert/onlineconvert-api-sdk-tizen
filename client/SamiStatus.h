/*
 * SamiStatus.h
 * 
 * 
 */

#ifndef SamiStatus_H_
#define SamiStatus_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiStatus: public SamiObject {
public:
    SamiStatus();
    SamiStatus(String* json);
    virtual ~SamiStatus();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiStatus* fromJson(String* obj);

    
    String* getPCode();
    void setPCode(String* pCode);
    
    String* getPInfo();
    void setPInfo(String* pInfo);
    

private:
    String* pCode;
    String* pInfo;
    
};

} /* namespace Swagger */

#endif /* SamiStatus_H_ */
