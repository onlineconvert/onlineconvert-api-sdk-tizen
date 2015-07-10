/*
 * SamiJob.h
 * 
 * 
 */

#ifndef SamiJob_H_
#define SamiJob_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiConversion.h"
#include "SamiStatus.h"
using Tizen::Base::DateTime;
using Tizen::Base::String;
using Tizen::Base::Collection::IList;
using Tizen::Base::Boolean;
#include "SamiInputFile.h"


namespace Swagger {

class SamiJob: public SamiObject {
public:
    SamiJob();
    SamiJob(String* json);
    virtual ~SamiJob();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiJob* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* pId);
    
    String* getPToken();
    void setPToken(String* pToken);
    
    String* getPType();
    void setPType(String* pType);
    
    SamiStatus* getPStatus();
    void setPStatus(SamiStatus* pStatus);
    
    Boolean* getPProcess();
    void setPProcess(Boolean* pProcess);
    
    Boolean* getPTest();
    void setPTest(Boolean* pTest);
    
    IList* getPConversion();
    void setPConversion(IList* pConversion);
    
    IList* getPInput();
    void setPInput(IList* pInput);
    
    String* getPCallback();
    void setPCallback(String* pCallback);
    
    String* getPServer();
    void setPServer(String* pServer);
    
    DateTime* getPCreatedAt();
    void setPCreatedAt(DateTime* pCreated_at);
    
    DateTime* getPModifiedAt();
    void setPModifiedAt(DateTime* pModified_at);
    

private:
    String* pId;
    String* pToken;
    String* pType;
    SamiStatus* pStatus;
    Boolean* pProcess;
    Boolean* pTest;
    IList* pConversion;
    IList* pInput;
    String* pCallback;
    String* pServer;
    DateTime* pCreated_at;
    DateTime* pModified_at;
    
};

} /* namespace Swagger */

#endif /* SamiJob_H_ */
