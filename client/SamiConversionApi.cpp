#include "SamiConversionApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiConversionApi::SamiConversionApi() {

}

SamiConversionApi::~SamiConversionApi() {

}

void
jobsJobIdConversionsGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiConversion");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

IList* 
SamiConversionApi::jobsJobIdConversionsGetWithCompletion(String* token, String* key, String* jobId, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&jobsJobIdConversionsGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
    headerParams->Add(new String("token"), token);
  
  
    headerParams->Add(new String("key"), key);
  
  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/jobs/{job_id}/conversions");

  
  String s_jobId(L"{");
  s_jobId.Append(L"job_id");
  s_jobId.Append(L"}");
  url.Replace(s_jobId, stringify(jobId, L"String*"));
  

  client->execute(SamiConversionApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
jobsJobIdConversionsPostProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiConversion* out = new SamiConversion();
    jsonToValue(out, pJson, L"SamiConversion*", L"SamiConversion");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiConversion* 
SamiConversionApi::jobsJobIdConversionsPostWithCompletion(SamiConversion* body, String* token, String* key, String* jobId, void (* success)(SamiConversion*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&jobsJobIdConversionsPostProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
    headerParams->Add(new String("token"), token);
  
  
    headerParams->Add(new String("key"), key);
  
  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(body != null) {
    mBody = new String(body->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"/jobs/{job_id}/conversions");

  
  String s_jobId(L"{");
  s_jobId.Append(L"job_id");
  s_jobId.Append(L"}");
  url.Replace(s_jobId, stringify(jobId, L"String*"));
  

  client->execute(SamiConversionApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
jobsJobIdConversionsConversionIdGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiConversion* out = new SamiConversion();
    jsonToValue(out, pJson, L"SamiConversion*", L"SamiConversion");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiConversion* 
SamiConversionApi::jobsJobIdConversionsConversionIdGetWithCompletion(String* token, String* key, String* jobId, String* conversionId, void (* success)(SamiConversion*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&jobsJobIdConversionsConversionIdGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
    headerParams->Add(new String("token"), token);
  
  
    headerParams->Add(new String("key"), key);
  
  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/jobs/{job_id}/conversions/{conversion_id}");

  
  String s_jobId(L"{");
  s_jobId.Append(L"job_id");
  s_jobId.Append(L"}");
  url.Replace(s_jobId, stringify(jobId, L"String*"));
  
  String s_conversionId(L"{");
  s_conversionId.Append(L"conversion_id");
  s_conversionId.Append(L"}");
  url.Replace(s_conversionId, stringify(conversionId, L"String*"));
  

  client->execute(SamiConversionApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
jobsJobIdConversionsConversionIdDeleteProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiConversion* out = new SamiConversion();
    jsonToValue(out, pJson, L"SamiConversion*", L"SamiConversion");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiConversion* 
SamiConversionApi::jobsJobIdConversionsConversionIdDeleteWithCompletion(String* token, String* key, String* jobId, String* conversionId, void (* success)(SamiConversion*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&jobsJobIdConversionsConversionIdDeleteProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
    headerParams->Add(new String("token"), token);
  
  
    headerParams->Add(new String("key"), key);
  
  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/jobs/{job_id}/conversions/{conversion_id}");

  
  String s_jobId(L"{");
  s_jobId.Append(L"job_id");
  s_jobId.Append(L"}");
  url.Replace(s_jobId, stringify(jobId, L"String*"));
  
  String s_conversionId(L"{");
  s_conversionId.Append(L"conversion_id");
  s_conversionId.Append(L"}");
  url.Replace(s_conversionId, stringify(conversionId, L"String*"));
  

  client->execute(SamiConversionApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
