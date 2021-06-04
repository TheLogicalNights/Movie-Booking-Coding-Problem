#include<stdio.h>
#include<string.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct show1
{
    int A[9];
    int B[9];
    int C[9];
};

struct show2
{
    int A[9];
    int B[9];
    int C[9];
};

struct show3
{
    int A[9];
    int B[9];
    int C[9];
};

struct totalsale
{
    float iRevenue;
    float iServiceTax;
    float iSwachhBharatCess;
    float iKrishiKalyanCess;
};

typedef struct show1 SHOW1;
typedef struct show2 SHOW2;
typedef struct show3 SHOW3;
typedef struct totalsale TOTALSALE;

void init(SHOW1 *s1,SHOW2 *s2,SHOW3 *s3);
int chkSeatsForShow1(SHOW1 objs1,char cSeats[],int *iRequiredSeats);
void bookTicketOfShow1(SHOW1 * s1,char cSeats[],TOTALSALE *saleobj);
int chkSeatsForShow2(SHOW2 objs2,char cSeats[],int *iRequiredSeats);
void bookTicketOfShow2(SHOW2 * s2,char cSeats[],TOTALSALE *saleobj);
int chkSeatsForShow3(SHOW3 objs3,char cSeats[],int *iRequiredSeats);
void bookTicketOfShow3(SHOW3 * s3,char cSeats[],TOTALSALE *saleobj);
void displaySeatingArrangement(SHOW1 s1,SHOW2 s2,SHOW3 s3);
void displayTotalSales(TOTALSALE saleobj);