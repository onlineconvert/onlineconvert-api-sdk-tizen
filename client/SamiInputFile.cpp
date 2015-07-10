
#include "SamiInputFile.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiInputFile::SamiInputFile() {
    init();
}

SamiInputFile::~SamiInputFile() {
    this->cleanup();
}

void
SamiInputFile::init() {
    pId = null;
    pType = null;
    pSource = null;
    pFilename = null;
    pSize = null;
    pCreated_at = null;
    pModified_at = null;
    
}

void
SamiInputFile::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
    if(pType != null) {
        
        delete pType;
        pType = null;
    }
    if(pSource != null) {
        
        delete pSource;
        pSource = null;
    }
    if(pFilename != null) {
        
        delete pFilename;
        pFilename = null;
    }
    if(pSize != null) {
        
        delete pSize;
        pSize = null;
    }
    if(pCreated_at != null) {
        
        delete pCreated_at;
        pCreated_at = null;
    }
    if(pModified_at != null) {
        
        delete pModified_at;
        pModified_at = null;
    }
    
}


SamiInputFile*
SamiInputFile::fromJson(String* json) {
    this->cleanup();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
    return this;
}


void
SamiInputFile::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new String();
            jsonToValue(pId, pIdVal, L"String", L"String");
        }
        delete pIdKey;
        JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
        JsonString* pSourceKey = new JsonString(L"source");
        IJsonValue* pSourceVal = null;
        pJsonObject->GetValue(pSourceKey, pSourceVal);
        if(pSourceVal != null) {
            
            pSource = new String();
            jsonToValue(pSource, pSourceVal, L"String", L"String");
        }
        delete pSourceKey;
        JsonString* pFilenameKey = new JsonString(L"filename");
        IJsonValue* pFilenameVal = null;
        pJsonObject->GetValue(pFilenameKey, pFilenameVal);
        if(pFilenameVal != null) {
            
            pFilename = new String();
            jsonToValue(pFilename, pFilenameVal, L"String", L"String");
        }
        delete pFilenameKey;
        JsonString* pSizeKey = new JsonString(L"size");
        IJsonValue* pSizeVal = null;
        pJsonObject->GetValue(pSizeKey, pSizeVal);
        if(pSizeVal != null) {
            
            pSize = new Integer();
            jsonToValue(pSize, pSizeVal, L"Integer", L"Integer");
        }
        delete pSizeKey;
        JsonString* pCreated_atKey = new JsonString(L"created_at");
        IJsonValue* pCreated_atVal = null;
        pJsonObject->GetValue(pCreated_atKey, pCreated_atVal);
        if(pCreated_atVal != null) {
            
            pCreated_at = new DateTime();
            jsonToValue(pCreated_at, pCreated_atVal, L"DateTime", L"DateTime");
        }
        delete pCreated_atKey;
        JsonString* pModified_atKey = new JsonString(L"modified_at");
        IJsonValue* pModified_atVal = null;
        pJsonObject->GetValue(pModified_atKey, pModified_atVal);
        if(pModified_atVal != null) {
            
            pModified_at = new DateTime();
            jsonToValue(pModified_at, pModified_atVal, L"DateTime", L"DateTime");
        }
        delete pModified_atKey;
        
    }
}

SamiInputFile::SamiInputFile(String* json) {
    init();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
}

String
SamiInputFile::asJson ()
{
    JsonObject* pJsonObject = asJsonObject();

    char *pComposeBuf = new char[256];
    JsonWriter::Compose(pJsonObject, pComposeBuf, 256);
    String s = String(pComposeBuf);

    delete pComposeBuf;
    pJsonObject->RemoveAll(true);
    delete pJsonObject;

    return s;
}

JsonObject*
SamiInputFile::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    
    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    
    JsonString *pSourceKey = new JsonString(L"source");
    pJsonObject->Add(pSourceKey, toJson(getPSource(), "String", ""));

    
    JsonString *pFilenameKey = new JsonString(L"filename");
    pJsonObject->Add(pFilenameKey, toJson(getPFilename(), "String", ""));

    
    JsonString *pSizeKey = new JsonString(L"size");
    pJsonObject->Add(pSizeKey, toJson(getPSize(), "Integer", ""));

    
    JsonString *pCreated_atKey = new JsonString(L"created_at");
    pJsonObject->Add(pCreated_atKey, toJson(getPCreatedAt(), "DateTime", ""));

    
    JsonString *pModified_atKey = new JsonString(L"modified_at");
    pJsonObject->Add(pModified_atKey, toJson(getPModifiedAt(), "DateTime", ""));

    
    return pJsonObject;
}

String*
SamiInputFile::getPId() {
    return pId;
}
void
SamiInputFile::setPId(String* pId) {
    this->pId = pId;
}

String*
SamiInputFile::getPType() {
    return pType;
}
void
SamiInputFile::setPType(String* pType) {
    this->pType = pType;
}

String*
SamiInputFile::getPSource() {
    return pSource;
}
void
SamiInputFile::setPSource(String* pSource) {
    this->pSource = pSource;
}

String*
SamiInputFile::getPFilename() {
    return pFilename;
}
void
SamiInputFile::setPFilename(String* pFilename) {
    this->pFilename = pFilename;
}

Integer*
SamiInputFile::getPSize() {
    return pSize;
}
void
SamiInputFile::setPSize(Integer* pSize) {
    this->pSize = pSize;
}

DateTime*
SamiInputFile::getPCreatedAt() {
    return pCreated_at;
}
void
SamiInputFile::setPCreatedAt(DateTime* pCreated_at) {
    this->pCreated_at = pCreated_at;
}

DateTime*
SamiInputFile::getPModifiedAt() {
    return pModified_at;
}
void
SamiInputFile::setPModifiedAt(DateTime* pModified_at) {
    this->pModified_at = pModified_at;
}



} /* namespace Swagger */

