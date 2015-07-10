
#include "SamiConversion.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiConversion::SamiConversion() {
    init();
}

SamiConversion::~SamiConversion() {
    this->cleanup();
}

void
SamiConversion::init() {
    pId = null;
    pTarget = null;
    pCategory = null;
    pOptions = null;
    
}

void
SamiConversion::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
    if(pTarget != null) {
        
        delete pTarget;
        pTarget = null;
    }
    if(pCategory != null) {
        
        delete pCategory;
        pCategory = null;
    }
    if(pOptions != null) {
        
        delete pOptions;
        pOptions = null;
    }
    
}


SamiConversion*
SamiConversion::fromJson(String* json) {
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
SamiConversion::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pTargetKey = new JsonString(L"target");
        IJsonValue* pTargetVal = null;
        pJsonObject->GetValue(pTargetKey, pTargetVal);
        if(pTargetVal != null) {
            
            pTarget = new String();
            jsonToValue(pTarget, pTargetVal, L"String", L"String");
        }
        delete pTargetKey;
        JsonString* pCategoryKey = new JsonString(L"category");
        IJsonValue* pCategoryVal = null;
        pJsonObject->GetValue(pCategoryKey, pCategoryVal);
        if(pCategoryVal != null) {
            
            pCategory = new String();
            jsonToValue(pCategory, pCategoryVal, L"String", L"String");
        }
        delete pCategoryKey;
        JsonString* pOptionsKey = new JsonString(L"options");
        IJsonValue* pOptionsVal = null;
        pJsonObject->GetValue(pOptionsKey, pOptionsVal);
        if(pOptionsVal != null) {
            
            pOptions = null;
            jsonToValue(pOptions, pOptionsVal, L"SamiObject", L"SamiObject");
        }
        delete pOptionsKey;
        
    }
}

SamiConversion::SamiConversion(String* json) {
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
SamiConversion::asJson ()
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
SamiConversion::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    
    JsonString *pTargetKey = new JsonString(L"target");
    pJsonObject->Add(pTargetKey, toJson(getPTarget(), "String", ""));

    
    JsonString *pCategoryKey = new JsonString(L"category");
    pJsonObject->Add(pCategoryKey, toJson(getPCategory(), "String", ""));

    
    JsonString *pOptionsKey = new JsonString(L"options");
    pJsonObject->Add(pOptionsKey, toJson(getPOptions(), "SamiObject", ""));

    
    return pJsonObject;
}

String*
SamiConversion::getPId() {
    return pId;
}
void
SamiConversion::setPId(String* pId) {
    this->pId = pId;
}

String*
SamiConversion::getPTarget() {
    return pTarget;
}
void
SamiConversion::setPTarget(String* pTarget) {
    this->pTarget = pTarget;
}

String*
SamiConversion::getPCategory() {
    return pCategory;
}
void
SamiConversion::setPCategory(String* pCategory) {
    this->pCategory = pCategory;
}

SamiObject*
SamiConversion::getPOptions() {
    return pOptions;
}
void
SamiConversion::setPOptions(SamiObject* pOptions) {
    this->pOptions = pOptions;
}



} /* namespace Swagger */

