
#include "SamiJob.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiJob::SamiJob() {
    init();
}

SamiJob::~SamiJob() {
    this->cleanup();
}

void
SamiJob::init() {
    pId = null;
    pToken = null;
    pType = null;
    pStatus = null;
    pProcess = null;
    pTest = null;
    pConversion = null;
    pInput = null;
    pCallback = null;
    pServer = null;
    pCreated_at = null;
    pModified_at = null;
    
}

void
SamiJob::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
    if(pToken != null) {
        
        delete pToken;
        pToken = null;
    }
    if(pType != null) {
        
        delete pType;
        pType = null;
    }
    if(pStatus != null) {
        
        delete pStatus;
        pStatus = null;
    }
    if(pProcess != null) {
        
        delete pProcess;
        pProcess = null;
    }
    if(pTest != null) {
        
        delete pTest;
        pTest = null;
    }
    if(pConversion != null) {
        pConversion->RemoveAll(true);
        delete pConversion;
        pConversion = null;
    }
    if(pInput != null) {
        pInput->RemoveAll(true);
        delete pInput;
        pInput = null;
    }
    if(pCallback != null) {
        
        delete pCallback;
        pCallback = null;
    }
    if(pServer != null) {
        
        delete pServer;
        pServer = null;
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


SamiJob*
SamiJob::fromJson(String* json) {
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
SamiJob::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pTokenKey = new JsonString(L"token");
        IJsonValue* pTokenVal = null;
        pJsonObject->GetValue(pTokenKey, pTokenVal);
        if(pTokenVal != null) {
            
            pToken = new String();
            jsonToValue(pToken, pTokenVal, L"String", L"String");
        }
        delete pTokenKey;
        JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
        JsonString* pStatusKey = new JsonString(L"status");
        IJsonValue* pStatusVal = null;
        pJsonObject->GetValue(pStatusKey, pStatusVal);
        if(pStatusVal != null) {
            
            pStatus = new SamiStatus();
            jsonToValue(pStatus, pStatusVal, L"SamiStatus", L"SamiStatus");
        }
        delete pStatusKey;
        JsonString* pProcessKey = new JsonString(L"process");
        IJsonValue* pProcessVal = null;
        pJsonObject->GetValue(pProcessKey, pProcessVal);
        if(pProcessVal != null) {
            
            pProcess = new Boolean(false);
            jsonToValue(pProcess, pProcessVal, L"Boolean", L"Boolean");
        }
        delete pProcessKey;
        JsonString* pTestKey = new JsonString(L"test");
        IJsonValue* pTestVal = null;
        pJsonObject->GetValue(pTestKey, pTestVal);
        if(pTestVal != null) {
            
            pTest = new Boolean(false);
            jsonToValue(pTest, pTestVal, L"Boolean", L"Boolean");
        }
        delete pTestKey;
        JsonString* pConversionKey = new JsonString(L"conversion");
        IJsonValue* pConversionVal = null;
        pJsonObject->GetValue(pConversionKey, pConversionVal);
        if(pConversionVal != null) {
            pConversion = new ArrayList();
            
            jsonToValue(pConversion, pConversionVal, L"IList", L"SamiConversion");
        }
        delete pConversionKey;
        JsonString* pInputKey = new JsonString(L"input");
        IJsonValue* pInputVal = null;
        pJsonObject->GetValue(pInputKey, pInputVal);
        if(pInputVal != null) {
            pInput = new ArrayList();
            
            jsonToValue(pInput, pInputVal, L"IList", L"SamiInputFile");
        }
        delete pInputKey;
        JsonString* pCallbackKey = new JsonString(L"callback");
        IJsonValue* pCallbackVal = null;
        pJsonObject->GetValue(pCallbackKey, pCallbackVal);
        if(pCallbackVal != null) {
            
            pCallback = new String();
            jsonToValue(pCallback, pCallbackVal, L"String", L"String");
        }
        delete pCallbackKey;
        JsonString* pServerKey = new JsonString(L"server");
        IJsonValue* pServerVal = null;
        pJsonObject->GetValue(pServerKey, pServerVal);
        if(pServerVal != null) {
            
            pServer = new String();
            jsonToValue(pServer, pServerVal, L"String", L"String");
        }
        delete pServerKey;
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

SamiJob::SamiJob(String* json) {
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
SamiJob::asJson ()
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
SamiJob::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    
    JsonString *pTokenKey = new JsonString(L"token");
    pJsonObject->Add(pTokenKey, toJson(getPToken(), "String", ""));

    
    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    
    JsonString *pStatusKey = new JsonString(L"status");
    pJsonObject->Add(pStatusKey, toJson(getPStatus(), "SamiStatus", ""));

    
    JsonString *pProcessKey = new JsonString(L"process");
    pJsonObject->Add(pProcessKey, toJson(getPProcess(), "Boolean", ""));

    
    JsonString *pTestKey = new JsonString(L"test");
    pJsonObject->Add(pTestKey, toJson(getPTest(), "Boolean", ""));

    
    JsonString *pConversionKey = new JsonString(L"conversion");
    pJsonObject->Add(pConversionKey, toJson(getPConversion(), "SamiConversion", "array"));

    
    JsonString *pInputKey = new JsonString(L"input");
    pJsonObject->Add(pInputKey, toJson(getPInput(), "SamiInputFile", "array"));

    
    JsonString *pCallbackKey = new JsonString(L"callback");
    pJsonObject->Add(pCallbackKey, toJson(getPCallback(), "String", ""));

    
    JsonString *pServerKey = new JsonString(L"server");
    pJsonObject->Add(pServerKey, toJson(getPServer(), "String", ""));

    
    JsonString *pCreated_atKey = new JsonString(L"created_at");
    pJsonObject->Add(pCreated_atKey, toJson(getPCreatedAt(), "DateTime", ""));

    
    JsonString *pModified_atKey = new JsonString(L"modified_at");
    pJsonObject->Add(pModified_atKey, toJson(getPModifiedAt(), "DateTime", ""));

    
    return pJsonObject;
}

String*
SamiJob::getPId() {
    return pId;
}
void
SamiJob::setPId(String* pId) {
    this->pId = pId;
}

String*
SamiJob::getPToken() {
    return pToken;
}
void
SamiJob::setPToken(String* pToken) {
    this->pToken = pToken;
}

String*
SamiJob::getPType() {
    return pType;
}
void
SamiJob::setPType(String* pType) {
    this->pType = pType;
}

SamiStatus*
SamiJob::getPStatus() {
    return pStatus;
}
void
SamiJob::setPStatus(SamiStatus* pStatus) {
    this->pStatus = pStatus;
}

Boolean*
SamiJob::getPProcess() {
    return pProcess;
}
void
SamiJob::setPProcess(Boolean* pProcess) {
    this->pProcess = pProcess;
}

Boolean*
SamiJob::getPTest() {
    return pTest;
}
void
SamiJob::setPTest(Boolean* pTest) {
    this->pTest = pTest;
}

IList*
SamiJob::getPConversion() {
    return pConversion;
}
void
SamiJob::setPConversion(IList* pConversion) {
    this->pConversion = pConversion;
}

IList*
SamiJob::getPInput() {
    return pInput;
}
void
SamiJob::setPInput(IList* pInput) {
    this->pInput = pInput;
}

String*
SamiJob::getPCallback() {
    return pCallback;
}
void
SamiJob::setPCallback(String* pCallback) {
    this->pCallback = pCallback;
}

String*
SamiJob::getPServer() {
    return pServer;
}
void
SamiJob::setPServer(String* pServer) {
    this->pServer = pServer;
}

DateTime*
SamiJob::getPCreatedAt() {
    return pCreated_at;
}
void
SamiJob::setPCreatedAt(DateTime* pCreated_at) {
    this->pCreated_at = pCreated_at;
}

DateTime*
SamiJob::getPModifiedAt() {
    return pModified_at;
}
void
SamiJob::setPModifiedAt(DateTime* pModified_at) {
    this->pModified_at = pModified_at;
}



} /* namespace Swagger */

