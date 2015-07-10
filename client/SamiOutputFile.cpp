
#include "SamiOutputFile.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiOutputFile::SamiOutputFile() {
    init();
}

SamiOutputFile::~SamiOutputFile() {
    this->cleanup();
}

void
SamiOutputFile::init() {
    pId = null;
    pSource = null;
    pUri = null;
    pFilename = null;
    pSize = null;
    pCreated_at = null;
    
}

void
SamiOutputFile::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
    if(pSource != null) {
        
        delete pSource;
        pSource = null;
    }
    if(pUri != null) {
        
        delete pUri;
        pUri = null;
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
    
}


SamiOutputFile*
SamiOutputFile::fromJson(String* json) {
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
SamiOutputFile::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pSourceKey = new JsonString(L"source");
        IJsonValue* pSourceVal = null;
        pJsonObject->GetValue(pSourceKey, pSourceVal);
        if(pSourceVal != null) {
            
            pSource = null;
            jsonToValue(pSource, pSourceVal, L"SamiObject", L"SamiObject");
        }
        delete pSourceKey;
        JsonString* pUriKey = new JsonString(L"uri");
        IJsonValue* pUriVal = null;
        pJsonObject->GetValue(pUriKey, pUriVal);
        if(pUriVal != null) {
            
            pUri = new String();
            jsonToValue(pUri, pUriVal, L"String", L"String");
        }
        delete pUriKey;
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
        
    }
}

SamiOutputFile::SamiOutputFile(String* json) {
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
SamiOutputFile::asJson ()
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
SamiOutputFile::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    
    JsonString *pSourceKey = new JsonString(L"source");
    pJsonObject->Add(pSourceKey, toJson(getPSource(), "SamiObject", ""));

    
    JsonString *pUriKey = new JsonString(L"uri");
    pJsonObject->Add(pUriKey, toJson(getPUri(), "String", ""));

    
    JsonString *pFilenameKey = new JsonString(L"filename");
    pJsonObject->Add(pFilenameKey, toJson(getPFilename(), "String", ""));

    
    JsonString *pSizeKey = new JsonString(L"size");
    pJsonObject->Add(pSizeKey, toJson(getPSize(), "Integer", ""));

    
    JsonString *pCreated_atKey = new JsonString(L"created_at");
    pJsonObject->Add(pCreated_atKey, toJson(getPCreatedAt(), "DateTime", ""));

    
    return pJsonObject;
}

String*
SamiOutputFile::getPId() {
    return pId;
}
void
SamiOutputFile::setPId(String* pId) {
    this->pId = pId;
}

SamiObject*
SamiOutputFile::getPSource() {
    return pSource;
}
void
SamiOutputFile::setPSource(SamiObject* pSource) {
    this->pSource = pSource;
}

String*
SamiOutputFile::getPUri() {
    return pUri;
}
void
SamiOutputFile::setPUri(String* pUri) {
    this->pUri = pUri;
}

String*
SamiOutputFile::getPFilename() {
    return pFilename;
}
void
SamiOutputFile::setPFilename(String* pFilename) {
    this->pFilename = pFilename;
}

Integer*
SamiOutputFile::getPSize() {
    return pSize;
}
void
SamiOutputFile::setPSize(Integer* pSize) {
    this->pSize = pSize;
}

DateTime*
SamiOutputFile::getPCreatedAt() {
    return pCreated_at;
}
void
SamiOutputFile::setPCreatedAt(DateTime* pCreated_at) {
    this->pCreated_at = pCreated_at;
}



} /* namespace Swagger */

