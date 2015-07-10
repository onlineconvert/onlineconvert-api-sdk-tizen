/*
 * SamiLink.h
 * 
 * 
 */

#ifndef SamiLink_H_
#define SamiLink_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiLink: public SamiObject {
public:
    SamiLink();
    SamiLink(String* json);
    virtual ~SamiLink();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiLink* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* pId);
    
    String* getPUri();
    void setPUri(String* pUri);
    

private:
    String* pId;
    String* pUri;
    
};

} /* namespace Swagger */

#endif /* SamiLink_H_ */
