#include "SamiInputApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiInputApi::SamiInputApi() {

}

SamiInputApi::~SamiInputApi() {

}

void
jobsJobIdInputGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiInputFile");

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
SamiInputApi::jobsJobIdInputGetWithCompletion(String* token, String* key, String* jobId, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&jobsJobIdInputGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
    headerParams->Add(new String("token"), token);
  
  
    headerParams->Add(new String("key"), key);
  
  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/jobs/{job_id}/input");

  
  String s_jobId(L"{");
  s_jobId.Append(L"job_id");
  s_jobId.Append(L"}");
  url.Replace(s_jobId, stringify(jobId, L"String*"));
  

  client->execute(SamiInputApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
jobsJobIdInputPostProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiInputFile* out = new SamiInputFile();
    jsonToValue(out, pJson, L"SamiInputFile*", L"SamiInputFile");

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

SamiInputFile* 
SamiInputApi::jobsJobIdInputPostWithCompletion(SamiInputFile* body, String* token, String* key, String* jobId, void (* success)(SamiInputFile*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&jobsJobIdInputPostProcessor, (void(*)(void*, SamiError*))success);
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
  
  

  String url(L"/jobs/{job_id}/input");

  
  String s_jobId(L"{");
  s_jobId.Append(L"job_id");
  s_jobId.Append(L"}");
  url.Replace(s_jobId, stringify(jobId, L"String*"));
  

  client->execute(SamiInputApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
jobsJobIdInputFileIdGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiInputFile* out = new SamiInputFile();
    jsonToValue(out, pJson, L"SamiInputFile*", L"SamiInputFile");

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

SamiInputFile* 
SamiInputApi::jobsJobIdInputFileIdGetWithCompletion(String* token, String* key, String* jobId, String* fileId, void (* success)(SamiInputFile*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&jobsJobIdInputFileIdGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
    headerParams->Add(new String("token"), token);
  
  
    headerParams->Add(new String("key"), key);
  
  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/jobs/{job_id}/input/{file_id}");

  
  String s_jobId(L"{");
  s_jobId.Append(L"job_id");
  s_jobId.Append(L"}");
  url.Replace(s_jobId, stringify(jobId, L"String*"));
  
  String s_fileId(L"{");
  s_fileId.Append(L"file_id");
  s_fileId.Append(L"}");
  url.Replace(s_fileId, stringify(fileId, L"String*"));
  

  client->execute(SamiInputApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
jobsJobIdInputFileIdDeleteProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiInputFile* out = new SamiInputFile();
    jsonToValue(out, pJson, L"SamiInputFile*", L"SamiInputFile");

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

SamiInputFile* 
SamiInputApi::jobsJobIdInputFileIdDeleteWithCompletion(String* token, String* key, String* jobId, String* fileId, void (* success)(SamiInputFile*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&jobsJobIdInputFileIdDeleteProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
    headerParams->Add(new String("token"), token);
  
  
    headerParams->Add(new String("key"), key);
  
  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/jobs/{job_id}/input/{file_id}");

  
  String s_jobId(L"{");
  s_jobId.Append(L"job_id");
  s_jobId.Append(L"}");
  url.Replace(s_jobId, stringify(jobId, L"String*"));
  
  String s_fileId(L"{");
  s_fileId.Append(L"file_id");
  s_fileId.Append(L"}");
  url.Replace(s_fileId, stringify(fileId, L"String*"));
  

  client->execute(SamiInputApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
