#include "SamiOutputApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiOutputApi::SamiOutputApi() {

}

SamiOutputApi::~SamiOutputApi() {

}

void
jobsJobIdOutputGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiOutputFile");

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
SamiOutputApi::jobsJobIdOutputGetWithCompletion(String* conversionId, String* inputId, String* xOcToken, String* xOcApiKey, String* jobId, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&jobsJobIdOutputGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
    headerParams->Add(new String("X-Oc-Token"), xOcToken);
  
  
    headerParams->Add(new String("X-Oc-Api-Key"), xOcApiKey);
  
  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("conversion_id"), conversionId);
  
  
    queryParams->Add(new String("input_id"), inputId);
  
  

  String* mBody = null;

  

  String url(L"/jobs/{job_id}/output");

  
  String s_jobId(L"{");
  s_jobId.Append(L"job_id");
  s_jobId.Append(L"}");
  url.Replace(s_jobId, stringify(jobId, L"String*"));
  

  client->execute(SamiOutputApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
jobsJobIdOutputFileIdGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiOutputFile");

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
SamiOutputApi::jobsJobIdOutputFileIdGetWithCompletion(String* xOcToken, String* xOcApiKey, String* jobId, String* fileId, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&jobsJobIdOutputFileIdGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
    headerParams->Add(new String("X-Oc-Token"), xOcToken);
  
  
    headerParams->Add(new String("X-Oc-Api-Key"), xOcApiKey);
  
  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/jobs/{job_id}/output/{file_id}");

  
  String s_jobId(L"{");
  s_jobId.Append(L"job_id");
  s_jobId.Append(L"}");
  url.Replace(s_jobId, stringify(jobId, L"String*"));
  
  String s_fileId(L"{");
  s_fileId.Append(L"file_id");
  s_fileId.Append(L"}");
  url.Replace(s_fileId, stringify(fileId, L"String*"));
  

  client->execute(SamiOutputApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
jobsJobIdOutputFileIdDeleteProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiOutputFile");

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
SamiOutputApi::jobsJobIdOutputFileIdDeleteWithCompletion(String* xOcToken, String* xOcApiKey, String* jobId, String* fileId, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&jobsJobIdOutputFileIdDeleteProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
    headerParams->Add(new String("X-Oc-Token"), xOcToken);
  
  
    headerParams->Add(new String("X-Oc-Api-Key"), xOcApiKey);
  
  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/jobs/{job_id}/output/{file_id}");

  
  String s_jobId(L"{");
  s_jobId.Append(L"job_id");
  s_jobId.Append(L"}");
  url.Replace(s_jobId, stringify(jobId, L"String*"));
  
  String s_fileId(L"{");
  s_fileId.Append(L"file_id");
  s_fileId.Append(L"}");
  url.Replace(s_fileId, stringify(fileId, L"String*"));
  

  client->execute(SamiOutputApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
