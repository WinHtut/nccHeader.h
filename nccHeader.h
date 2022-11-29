//
// Created by ncc on 22/11/2022.
// Developed By WinHtut
//

#ifndef CYCLETICKET_NCC_H
#define CYCLETICKET_NCC_H

#include "stdio.h"
#include "time.h"
#include "stdlib.h"
#include "string.h"

#define SIZE 100


struct db2{

    char name[40];
    char pass[40];
}strDB[100];

struct db2 strArr;

struct database{
    // use can used realloc for mem alloc dont be kid:
    char *name[40];

    char *pass[30];



};

struct database *db;
//int Glocate=0;
//int sizeOfname[100];
//int sizeOfpw[100];

//admin

int x=0;
void allocateWithStrcpy(){

    for(int i=0; i<5 ; i++) {
        printf("Enter data:");
        scanf(" %[^\n]", &strDB[x]);
        x++;
    }

    for(int y=0; y<5 ; y++){

        printf("Data %s\n",strDB[y]);
    }

    printf("Enter data for last one:");
    scanf(" %[^\n]",&strArr);

    strDB[6] = strArr;

    printf("Last data printing: %s\n",strDB[6]);

    for(int y=0; y<10 ; y++){

        printf("by one:%c\n",strDB[6].name[y]);
    }






}

void allocateOnMemory(){

    struct database *db;
    db = (struct database*) malloc(1000*sizeof(struct database) );



        *(db + 0)->name ="winhtut";
        *(db + 1)->name =*(db+0)->name;
        *(db + 2)->name ="winhtut2";

        char *arr[40];

    printf("Enter data");
    scanf(" %[^\n]",&arr);

    strcpy(*(db + 3)->name,arr);
    *arr='0';
        if(*(db+0)->name == *(db+1)->name){
            printf("same");
        }
    printf("Enter data");
    scanf(" %[^\n]",&arr);
    strcpy(*(db + 4)->name ,arr);

    for(int y=0; y<5 ; y++){

        printf("data: %s \n",*(db+y)->name);

    }

}



void test(){

    printf("This is testing for ncc header file");
}
int numberArr[1000];

/*
 * For produce 1000 number 3d type
 *
 *
 * */
void lottery1_thousand(){

    FILE *fptr;

    fptr=fopen("lottery1_thousand.txt","w");


    if(fptr==NULL){
        printf("[-]File Opening Error!\n");
    } else{
        printf("[+]File Open Successfully!\n");

        for (int i = 0; i < 1000; ++i) {
            if( i < 10){
                int arr[3]={0,0,i};
                fprintf(fptr,"%d%d%d%c",arr[0],arr[1],arr[2],'\n');

            } else if( i<100){
                int arr2[2]={0,i};
                fprintf(fptr,"%d%d%c",arr2[0],arr2[1],'\n');

            } else{
                fprintf(fptr,"%d%c",i,'\n');

            }

        }

    }

    fclose(fptr);
}
/*
 * loading data from file to array
 * this function can use with another types
 * */
void loadingToFile(){

    int index=0;
    int number=0 ;

    FILE *fptr;
    fptr = fopen("lottery1_thousand.txt","r");

    if(fptr==NULL){
        printf("[-]File cannot open at loadingToFile Function!");
    } else {

        while (fscanf(fptr, "%d", &number )== 1) {
            numberArr[index] = number;
            index++;

        }
        printf("[+]Data loading Done");
    }

}


// finding size of array but with structure
int sizeOfArr=0;
int sizeOfStructArray(char arr[]){

    printf(" data from sizeOfStructArray %s\n",arr);

    while (arr[sizeOfArr] !='\0'){
            sizeOfArr++;
    }
    return sizeOfArr;
}

int compareCharArray(char arr1[] , char arr2[]){

    int size1 = sizeOfStructArray(arr1);
    int size2 = sizeOfStructArray(arr2);

    if( size1 != size2){
        return -1;
    }
    for(int i=0; i<size1 ; i++){

        if(arr1[i] != arr2[i]){
            return -1;
        }

    }

    return 1;

}


//int checkingUsername(char username[]){
//
//     if(Glocate==0){
//         return 1;
//     }





//}
#endif //CYCLETICKET_NCC_H
