#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "IndexAPI.h"


#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Bulk index operations
//
success_response_t*
IndexAPI_bulk(apiClient_t *apiClient, list_t * request_body )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/json/bulk")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/json/bulk");




    // Body Param
    //notstring
    cJSON *localVar_request_body;
    cJSON *localVarItemJSON_request_body;
    cJSON *localVarSingleItemJSON_request_body;
    if (request_body != NULL)
    {
        localVarItemJSON_request_body = cJSON_CreateObject();
        localVarSingleItemJSON_request_body = cJSON_AddArrayToObject(localVarItemJSON_request_body, "request_body");
        if (localVarSingleItemJSON_request_body == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *request_bodyBodyListEntry;
    list_ForEach(request_bodyBodyListEntry, request_body)
    {
        localVar_request_body = _convertToJSON(request_bodyBodyListEntry->data);
        if(localVar_request_body == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_request_body, localVar_request_body);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_request_body);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/x-ndjson"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    if (apiClient->response_code == 200) {
        printf("%s\n","item updated");
    }
    if (apiClient->response_code == 0) {
        printf("%s\n","error");
    }
    //nonprimitive not container
    cJSON *IndexAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    success_response_t *elementToReturn = success_response_parseFromJSON(IndexAPIlocalVarJSON);
    cJSON_Delete(IndexAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    list_free(localVarContentType);
    free(localVarPath);
    cJSON_Delete(localVarItemJSON_request_body);
    cJSON_Delete(localVarSingleItemJSON_request_body);
    cJSON_Delete(localVar_request_body);
    free(localVarBodyParameters);
    return elementToReturn;
end:
    return NULL;

}

// Delete a document in an index
//
success_response_t*
IndexAPI_delete(apiClient_t *apiClient, delete_document_request_t * delete_document_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/json/delete")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/json/delete");




    // Body Param
    cJSON *localVarSingleItemJSON_delete_document_request;
    if (delete_document_request != NULL)
    {
        //string
        localVarSingleItemJSON_delete_document_request = delete_document_request_convertToJSON(delete_document_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_delete_document_request);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    if (apiClient->response_code == 200) {
        printf("%s\n","item updated");
    }
    if (apiClient->response_code == 0) {
        printf("%s\n","error");
    }
    //nonprimitive not container
    cJSON *IndexAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    success_response_t *elementToReturn = success_response_parseFromJSON(IndexAPIlocalVarJSON);
    cJSON_Delete(IndexAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    list_free(localVarContentType);
    free(localVarPath);
    cJSON_Delete(localVarSingleItemJSON_delete_document_request);
    free(localVarBodyParameters);
    return elementToReturn;
end:
    return NULL;

}

// Create a new document in an index
//
success_response_t*
IndexAPI_insert(apiClient_t *apiClient, insert_document_request_t * insert_document_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/json/insert")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/json/insert");




    // Body Param
    cJSON *localVarSingleItemJSON_insert_document_request;
    if (insert_document_request != NULL)
    {
        //string
        localVarSingleItemJSON_insert_document_request = insert_document_request_convertToJSON(insert_document_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_insert_document_request);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    if (apiClient->response_code == 200) {
        printf("%s\n","OK");
    }
    if (apiClient->response_code == 0) {
        printf("%s\n","error");
    }
    //nonprimitive not container
    cJSON *IndexAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    success_response_t *elementToReturn = success_response_parseFromJSON(IndexAPIlocalVarJSON);
    cJSON_Delete(IndexAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    list_free(localVarContentType);
    free(localVarPath);
    cJSON_Delete(localVarSingleItemJSON_insert_document_request);
    free(localVarBodyParameters);
    return elementToReturn;
end:
    return NULL;

}

// Replace new document in an index
//
success_response_t*
IndexAPI_replace(apiClient_t *apiClient, insert_document_request_t * insert_document_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/json/replace")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/json/replace");




    // Body Param
    cJSON *localVarSingleItemJSON_insert_document_request;
    if (insert_document_request != NULL)
    {
        //string
        localVarSingleItemJSON_insert_document_request = insert_document_request_convertToJSON(insert_document_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_insert_document_request);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    if (apiClient->response_code == 200) {
        printf("%s\n","OK");
    }
    if (apiClient->response_code == 0) {
        printf("%s\n","error");
    }
    //nonprimitive not container
    cJSON *IndexAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    success_response_t *elementToReturn = success_response_parseFromJSON(IndexAPIlocalVarJSON);
    cJSON_Delete(IndexAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    list_free(localVarContentType);
    free(localVarPath);
    cJSON_Delete(localVarSingleItemJSON_insert_document_request);
    free(localVarBodyParameters);
    return elementToReturn;
end:
    return NULL;

}

// Update a document in an index
//
success_response_t*
IndexAPI_update(apiClient_t *apiClient, update_document_request_t * update_document_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/json/update")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/json/update");




    // Body Param
    cJSON *localVarSingleItemJSON_update_document_request;
    if (update_document_request != NULL)
    {
        //string
        localVarSingleItemJSON_update_document_request = update_document_request_convertToJSON(update_document_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_update_document_request);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    if (apiClient->response_code == 200) {
        printf("%s\n","item updated");
    }
    if (apiClient->response_code == 0) {
        printf("%s\n","error");
    }
    //nonprimitive not container
    cJSON *IndexAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    success_response_t *elementToReturn = success_response_parseFromJSON(IndexAPIlocalVarJSON);
    cJSON_Delete(IndexAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    list_free(localVarContentType);
    free(localVarPath);
    cJSON_Delete(localVarSingleItemJSON_update_document_request);
    free(localVarBodyParameters);
    return elementToReturn;
end:
    return NULL;

}

