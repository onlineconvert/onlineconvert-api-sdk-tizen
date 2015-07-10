/*
 * SamiOutputFile.h
 * 
 * 
 */

#ifndef SamiOutputFile_H_
#define SamiOutputFile_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiObject.h"
using Tizen::Base::DateTime;
using Tizen::Base::String;
using Tizen::Base::Integer;


namespace Swagger {

class SamiOutputFile: public SamiObject {
public:
    SamiOutputFile();
    SamiOutputFile(String* json);
    virtual ~SamiOutputFile();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiOutputFile* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* pId);
    
    SamiObject* getPSource();
    void setPSource(SamiObject* pSource);
    
    String* getPUri();
    void setPUri(String* pUri);
    
    String* getPFilename();
    void setPFilename(String* pFilename);
    
    Integer* getPSize();
    void setPSize(Integer* pSize);
    
    DateTime* getPCreatedAt();
    void setPCreatedAt(DateTime* pCreated_at);
    

private:
    String* pId;
    SamiObject* pSource;
    String* pUri;
    String* pFilename;
    Integer* pSize;
    DateTime* pCreated_at;
    
};

} /* namespace Swagger */

#endif /* SamiOutputFile_H_ */
