
#include "SamiThread.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiThread::SamiThread() {
    init();
}

SamiThread::~SamiThread() {
    this->cleanup();
}

void
SamiThread::init() {
    pHash = null;
    pStatus = null;
    pInfo = null;
    pCreated_at = null;
    pModified_at = null;
    
}

void
SamiThread::cleanup() {
    if(pHash != null) {
        
        delete pHash;
        pHash = null;
    }
    if(pStatus != null) {
        
        delete pStatus;
        pStatus = null;
    }
    if(pInfo != null) {
        
        delete pInfo;
        pInfo = null;
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


SamiThread*
SamiThread::fromJson(String* json) {
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
SamiThread::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pHashKey = new JsonString(L"hash");
        IJsonValue* pHashVal = null;
        pJsonObject->GetValue(pHashKey, pHashVal);
        if(pHashVal != null) {
            
            pHash = new String();
            jsonToValue(pHash, pHashVal, L"String", L"String");
        }
        delete pHashKey;
        JsonString* pStatusKey = new JsonString(L"status");
        IJsonValue* pStatusVal = null;
        pJsonObject->GetValue(pStatusKey, pStatusVal);
        if(pStatusVal != null) {
            
            pStatus = new Integer();
            jsonToValue(pStatus, pStatusVal, L"Integer", L"Integer");
        }
        delete pStatusKey;
        JsonString* pInfoKey = new JsonString(L"info");
        IJsonValue* pInfoVal = null;
        pJsonObject->GetValue(pInfoKey, pInfoVal);
        if(pInfoVal != null) {
            
            pInfo = new String();
            jsonToValue(pInfo, pInfoVal, L"String", L"String");
        }
        delete pInfoKey;
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

SamiThread::SamiThread(String* json) {
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
SamiThread::asJson ()
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
SamiThread::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pHashKey = new JsonString(L"hash");
    pJsonObject->Add(pHashKey, toJson(getPHash(), "String", ""));

    
    JsonString *pStatusKey = new JsonString(L"status");
    pJsonObject->Add(pStatusKey, toJson(getPStatus(), "Integer", ""));

    
    JsonString *pInfoKey = new JsonString(L"info");
    pJsonObject->Add(pInfoKey, toJson(getPInfo(), "String", ""));

    
    JsonString *pCreated_atKey = new JsonString(L"created_at");
    pJsonObject->Add(pCreated_atKey, toJson(getPCreatedAt(), "DateTime", ""));

    
    JsonString *pModified_atKey = new JsonString(L"modified_at");
    pJsonObject->Add(pModified_atKey, toJson(getPModifiedAt(), "DateTime", ""));

    
    return pJsonObject;
}

String*
SamiThread::getPHash() {
    return pHash;
}
void
SamiThread::setPHash(String* pHash) {
    this->pHash = pHash;
}

Integer*
SamiThread::getPStatus() {
    return pStatus;
}
void
SamiThread::setPStatus(Integer* pStatus) {
    this->pStatus = pStatus;
}

String*
SamiThread::getPInfo() {
    return pInfo;
}
void
SamiThread::setPInfo(String* pInfo) {
    this->pInfo = pInfo;
}

DateTime*
SamiThread::getPCreatedAt() {
    return pCreated_at;
}
void
SamiThread::setPCreatedAt(DateTime* pCreated_at) {
    this->pCreated_at = pCreated_at;
}

DateTime*
SamiThread::getPModifiedAt() {
    return pModified_at;
}
void
SamiThread::setPModifiedAt(DateTime* pModified_at) {
    this->pModified_at = pModified_at;
}



} /* namespace Swagger */

