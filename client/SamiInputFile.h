/*
 * SamiInputFile.h
 * 
 * 
 */

#ifndef SamiInputFile_H_
#define SamiInputFile_H_

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

class SamiInputFile: public SamiObject {
public:
    SamiInputFile();
    SamiInputFile(String* json);
    virtual ~SamiInputFile();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInputFile* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* pId);
    
    String* getPType();
    void setPType(String* pType);
    
    String* getPSource();
    void setPSource(String* pSource);
    
    String* getPFilename();
    void setPFilename(String* pFilename);
    
    Integer* getPSize();
    void setPSize(Integer* pSize);
    
    DateTime* getPCreatedAt();
    void setPCreatedAt(DateTime* pCreated_at);
    
    DateTime* getPModifiedAt();
    void setPModifiedAt(DateTime* pModified_at);
    

private:
    String* pId;
    String* pType;
    String* pSource;
    String* pFilename;
    Integer* pSize;
    DateTime* pCreated_at;
    DateTime* pModified_at;
    
};

} /* namespace Swagger */

#endif /* SamiInputFile_H_ */
