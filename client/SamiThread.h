/*
 * SamiThread.h
 * 
 * 
 */

#ifndef SamiThread_H_
#define SamiThread_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::DateTime;
using Tizen::Base::String;
using Tizen::Base::Integer;


namespace Swagger {

class SamiThread: public SamiObject {
public:
    SamiThread();
    SamiThread(String* json);
    virtual ~SamiThread();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiThread* fromJson(String* obj);

    
    String* getPHash();
    void setPHash(String* pHash);
    
    Integer* getPStatus();
    void setPStatus(Integer* pStatus);
    
    String* getPInfo();
    void setPInfo(String* pInfo);
    
    DateTime* getPCreatedAt();
    void setPCreatedAt(DateTime* pCreated_at);
    
    DateTime* getPModifiedAt();
    void setPModifiedAt(DateTime* pModified_at);
    

private:
    String* pHash;
    Integer* pStatus;
    String* pInfo;
    DateTime* pCreated_at;
    DateTime* pModified_at;
    
};

} /* namespace Swagger */

#endif /* SamiThread_H_ */
