#include<stdio.h>
#include<string.h>
#include<json-c/json.h>
#include "functions.h"

int main ()
{
    char buffer [12000] = {'\0'};
    FILE *fp = NULL;

    struct json_object *parsed_json;        //object to hold parsed JSON

    //struct to hold the objects
    struct json_object *service;
    struct json_object *variation;

    struct json_object *variation_array; //for individual variation array

    struct json_object *value;
    struct json_object *service_id;
    struct json_object *label;
    struct json_object *variation_code;
    struct json_object *amount;

   

    fp = fopen("payment.json", "r");

    if (fp == NULL)
    {
    printf("File could not be opened\n");
    exit (-1);
    }

    fread(buffer, 12000, 1, fp);
    fclose(fp);
    

    parsed_json = json_tokener_parse(buffer);

    json_object_object_get_ex(parsed_json, "service", &service);
    json_object_object_get_ex(parsed_json, "variation", &variation);


    int array_value = services();      //calling the function to check for the required service

  
    size_t no_of_variation = 0; //getting number of objects in variation object array

    no_of_variation = json_object_array_length(variation);

    for (int i=0; i<no_of_variation; ++i)
    {
        variation_array = json_object_array_get_idx(variation, i);

        json_object_object_get_ex(variation_array, "service_id", &service_id);

        //condition to check for the point where value correspond

       if (json_object_get_int(service_id) == array_value)
        {   
        json_object_object_get_ex(variation_array, "value", &value);
        json_object_object_get_ex(variation_array, "label", &label);
        json_object_object_get_ex(variation_array, "variation_code", &variation_code);
        json_object_object_get_ex(variation_array, "amount", &amount);
        
        printf("\n\n");

        printf("value : %d\n", json_object_get_int(value));
        //printf("service_id : %d\n", json_object_get_int(service_id));
        printf("label : %s\n", json_object_get_string(label));
        printf("variation_code : %s\n", json_object_get_string(variation_code));
        printf("amount : %d\n\n", json_object_get_int(amount));

    }

    }
        int val = 0;
        printf("\n\n");
        printf("Enter the value for your choice of payment from the options listed: ");
        scanf("%d", &val);


        for (int i=0; i<no_of_variation; ++i)     //Looping through the varitaion array again to get the details of a particular package
    {
        variation_array = json_object_array_get_idx(variation, i);

        json_object_object_get_ex(variation_array, "value", &value);


        if (json_object_get_int(value)==val)
        {

            json_object_object_get_ex(variation_array, "value", &value);
            json_object_object_get_ex(variation_array, "label", &label);
            json_object_object_get_ex(variation_array, "variation_code", &variation_code);
            json_object_object_get_ex(variation_array, "amount", &amount);

            printf("Your selected payment details is: \n");
            printf("value : %d\n", json_object_get_int(value));
            //printf("service_id : %d\n", json_object_get_int(service_id));
            printf("label : %s\n", json_object_get_string(label));
            printf("variation_code : %s\n", json_object_get_string(variation_code));
            printf("amount : %d\n\n", json_object_get_int(amount));
        }

        

    }
    

    return 0;

}
