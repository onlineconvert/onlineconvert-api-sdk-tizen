/*
 * SamiConversion.h
 * 
 * 
 */

#ifndef SamiConversion_H_
#define SamiConversion_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiObject.h"
using Tizen::Base::String;


namespace Swagger {

class SamiConversion: public SamiObject {
public:
    SamiConversion();
    SamiConversion(String* json);
    virtual ~SamiConversion();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiConversion* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* pId);
    
    String* getPTarget();
    void setPTarget(String* pTarget);
    
    String* getPCategory();
    void setPCategory(String* pCategory);
    
    SamiObject* getPOptions();
    void setPOptions(SamiObject* pOptions);
    

private:
    String* pId;
    String* pTarget;
    String* pCategory;
    SamiObject* pOptions;
    
};

} /* namespace Swagger */

#endif /* SamiConversion_H_ */
