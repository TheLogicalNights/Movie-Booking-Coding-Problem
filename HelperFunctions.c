#include "header.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : init
// Parameters    : structure pointer,structure pointer,structure pointer
// Return Value  : None 
// Description   : it takes structre pointers as patrameter and initialize that structures
// Author        : Swapnil Ramesh Adhav
// Date          : 25th April 2021
//                                                                                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void init(SHOW1 *s1,SHOW2 *s2,SHOW3 *s3)
{
    int i = 0;
    //Initialization of the structure
    for(i=0;i<9;i++)
    {
        s1->A[i] = 0;
        s2->A[i] = 0;
        s3->A[i] = 0;

        s1->B[i] = 0;
        s2->B[i] = 0;
        s3->B[i] = 0;

        s1->C[i] = 0;
        s2->C[i] = 0;
        s3->C[i] = 0;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : chkSeatsForShow1
// Parameters    : structure pointer,String,integer pointer
// Return Value  : integer 
// Description   : it takes structre pointer,string and integer pointer as patrameter and check whether seats for that perticular show are available or not
// Author        : Swapnil Ramesh Adhav
// Date          : 25th April 2021
//                                                                                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int chkSeatsForShow1(SHOW1 objs1,char cSeats[],int *iRequiredSeats)
{
    int i = 0;
    int iSeatAvailableFlag = 0;
    for(i=0;cSeats[i]!='\0';i++)
    {
        if(i%3==0)
        {
            *iRequiredSeats += 1;
            int iSeatNo = 0;
            switch(cSeats[i])
            {
                case 'A': iSeatNo = cSeats[i+1]-'0';
                          if(objs1.A[iSeatNo-1]==0)
                          {
                            iSeatAvailableFlag++;
                          }
                         break;
                case 'B': iSeatNo = cSeats[i+1]-'0';
                          if(objs1.B[iSeatNo-1]==0)
                          {
                            iSeatAvailableFlag++;
                          }
                         break;
                case 'C': iSeatNo = cSeats[i+1]-'0';
                          if(objs1.C[iSeatNo-1]==0)
                          {
                            iSeatAvailableFlag++;
                          }
                         break;
                default: printf("------------------------------------------------------------------------------------\n");
                         printf("Sorry...! There is no such row available(%c), Please try another one.....\n",cSeats[i]);
                         printf("------------------------------------------------------------------------------------\n"); 
                        break;
            }
        }
    }
     
    return iSeatAvailableFlag;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : bookTicketOfShow1
// Parameters    : structure pointer,String,structure pointer
// Return Value  : None 
// Description   : it takes structre pointer ,string and integer pointer as patrameter and book ticket for that show
// Author        : Swapnil Ramesh Adhav
// Date          : 25th April 2021
//                                                                                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void bookTicketOfShow1(SHOW1 * s1,char cSeats[],TOTALSALE *saleobj)
{
    int i = 0;
    int iSubTotal = 0;
    float iServiceTax = 0.0;
    float iSwachhBharatCess = 0.0;
    float iKrishiKalyanCess = 0.0;
    float iTotalAmount = 0.0;
    int iSeatNo = 0;
    for(i=0;cSeats[i]!='\0';i++)
    {
        iSeatNo = 0;
        if(i%3==0)
        {
            switch(cSeats[i])
            {
                case 'A': iSeatNo = cSeats[i+1]-'0';
                          s1->A[iSeatNo] = 1;
                          iSubTotal += 320; 
                          break;
                case 'B': iSeatNo = cSeats[i+1]-'0';
                          s1->B[iSeatNo] = 1;
                          iSubTotal += 280;
                          break;
                case 'C': iSeatNo = cSeats[i+1]-'0';
                          s1->C[iSeatNo] = 1;
                          iSubTotal += 240;
                          break;
            }
        }
    }
    iServiceTax = iSubTotal * 0.14;
    iSwachhBharatCess = iSubTotal * 0.005;
    iKrishiKalyanCess = iSubTotal * 0.005;
    iTotalAmount = iSubTotal + iServiceTax + iKrishiKalyanCess;

    saleobj->iRevenue += iTotalAmount;
    saleobj->iServiceTax += iServiceTax;
    saleobj->iSwachhBharatCess += iSwachhBharatCess;
    saleobj->iKrishiKalyanCess += iKrishiKalyanCess;

    printf("--------------------------------------------------\n");
    printf("Successfully Booked - Show 1\n");
    printf("Subtotal: Rs. %d\n",iSubTotal);
    printf("Service Tax @14percent: Rs. %.2f\n",iServiceTax);
    printf("Swachh Bharat Cess @0.5percent: Rs. %.2f\n",iSwachhBharatCess);
    printf("Krishi Kalyan Cess @0.5percent: Rs. %.2f\n",iKrishiKalyanCess);
    printf("Total: Rs.%.2f\n",iTotalAmount);
    printf("--------------------------------------------------\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : chkSeatsForShow2
// Parameters    : structure pointer,String,integer pointer
// Return Value  : integer 
// Description   : it takes structre pointer,string and integer pointer as patrameter and check whether seats for that perticular show are available or not
// Author        : Swapnil Ramesh Adhav
// Date          : 25th April 2021
//                                                                                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int chkSeatsForShow2(SHOW2 objs2,char cSeats[],int *iRequiredSeats)
{
    int i = 0;
    int iSeatAvailableFlag = 0;
    for(i=0;cSeats[i]!='\0';i++)
    {
        if(i%3==0)
        {
            *iRequiredSeats += 1;
            int iSeatNo = 0;
            switch(cSeats[i])
            {
                case 'A': iSeatNo = cSeats[i+1]-'0';
                          if(objs2.A[iSeatNo-1]==0)
                          {
                            iSeatAvailableFlag++;
                          }
                         break;
                case 'B': iSeatNo = cSeats[i+1]-'0';
                          if(objs2.B[iSeatNo-1]==0)
                          {
                            iSeatAvailableFlag++;
                          }
                         break;
                case 'C': iSeatNo = cSeats[i+1]-'0';
                          if(objs2.C[iSeatNo-1]==0)
                          {
                            iSeatAvailableFlag++;
                          }
                         break;
                default: printf("------------------------------------------------------------------------------------\n");
                         printf("Sorry...! There is no such row available(%c), Please try another one.....\n",cSeats[i]);
                         printf("------------------------------------------------------------------------------------\n"); 
                        break;
            }
        }
    }
     
    return iSeatAvailableFlag;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : bookTicketOfShow2
// Parameters    : structure pointer,String,structure pointer
// Return Value  : None 
// Description   : it takes structre pointer ,string and integer pointer as patrameter and book ticket for that show
// Author        : Swapnil Ramesh Adhav
// Date          : 25th April 2021
//                                                                                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void bookTicketOfShow2(SHOW2 * s2,char cSeats[],TOTALSALE *saleobj)
{
    int i = 0;
    int iSubTotal = 0;
    float iServiceTax = 0.0;
    float iSwachhBharatCess = 0.0;
    float iKrishiKalyanCess = 0.0;
    float iTotalAmount = 0.0;
    int iSeatNo = 0;
    for(i=0;cSeats[i]!='\0';i++)
    {
        if(i%3==0)
        {
            switch(cSeats[i])
            {
                case 'A': iSeatNo = cSeats[i+1]-'0';
                          s2->A[iSeatNo] = 1;
                          iSubTotal += 320; 
                         break;
                case 'B': iSeatNo = cSeats[i+1]-'0';
                          s2->B[iSeatNo] = 1;
                          iSubTotal += 280;
                         break;
                case 'C': iSeatNo = cSeats[i+1]-'0';
                          s2->C[iSeatNo] = 1;
                          iSubTotal += 240;
                         break;
            }
        }
    }
    iServiceTax = iSubTotal * 0.14;
    iSwachhBharatCess = iSubTotal * 0.005;
    iKrishiKalyanCess = iSubTotal * 0.005;
    iTotalAmount = iSubTotal + iServiceTax + iKrishiKalyanCess;

    saleobj->iRevenue += iTotalAmount;
    saleobj->iServiceTax += iServiceTax;
    saleobj->iSwachhBharatCess += iSwachhBharatCess;
    saleobj->iKrishiKalyanCess += iKrishiKalyanCess;

    printf("--------------------------------------------------\n");
    printf("Successfully Booked - Show 1\n");
    printf("Subtotal: Rs. %d\n",iSubTotal);
    printf("Service Tax @14percent: Rs. %.2f\n",iServiceTax);
    printf("Swachh Bharat Cess @0.5percent: Rs. %.2f\n",iSwachhBharatCess);
    printf("Krishi Kalyan Cess @0.5percent: Rs. %.2f\n",iKrishiKalyanCess);
    printf("Total: Rs.%.2f\n",iTotalAmount);
    printf("--------------------------------------------------\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : chkSeatsForShow3
// Parameters    : structure pointer,String,integer pointer
// Return Value  : integer 
// Description   : it takes structre pointer,string and integer pointer as patrameter and check whether seats for that perticular show are available or not
// Author        : Swapnil Ramesh Adhav
// Date          : 25th April 2021
//                                                                                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int chkSeatsForShow3(SHOW3 objs3,char cSeats[],int *iRequiredSeats)
{
    int i = 0;
    int iSeatAvailableFlag = 0;
    for(i=0;cSeats[i]!='\0';i++)
    {
        if(i%3==0)
        {
            *iRequiredSeats += 1;
            int iSeatNo = 0;
            switch(cSeats[i])
            {
                case 'A': iSeatNo = cSeats[i+1]-'0';
                          if(objs3.A[iSeatNo-1]==0)
                          {
                            iSeatAvailableFlag++;
                          }
                         break;
                case 'B': iSeatNo = cSeats[i+1]-'0';
                          if(objs3.B[iSeatNo-1]==0)
                          {
                            iSeatAvailableFlag++;
                          }
                         break;
                case 'C': iSeatNo = cSeats[i+1]-'0';
                          if(objs3.C[iSeatNo-1]==0)
                          {
                            iSeatAvailableFlag++;
                          }
                         break;
                default: printf("------------------------------------------------------------------------------------\n");
                         printf("Sorry...! There is no such row available(%c), Please try another one.....\n",cSeats[i]);
                         printf("------------------------------------------------------------------------------------\n"); 
                        break;
            }
        }
    }
     
    return iSeatAvailableFlag;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : bookTicketOfShow3
// Parameters    : structure pointer,String,structure pointer
// Return Value  : None 
// Description   : it takes structre object ,string and integer pointer as patrameter and book ticket for that show
// Author        : Swapnil Ramesh Adhav
// Date          : 25th April 2021
//                                                                                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void bookTicketOfShow3(SHOW3 * s3,char cSeats[],TOTALSALE *saleobj)
{
    int i = 0;
    int iSubTotal = 0;
    float iServiceTax = 0.0;
    float iSwachhBharatCess = 0.0;
    float iKrishiKalyanCess = 0.0;
    float iTotalAmount = 0.0;
    int iSeatNo = 0;
    for(i=0;cSeats[i]!='\0';i++)
    {
        if(i%3==0)
        {
            switch(cSeats[i])
            {
                case 'A': iSeatNo = cSeats[i+1]-'0';
                          s3->A[iSeatNo] = 1;
                          iSubTotal += 320; 
                         break;
                case 'B': iSeatNo = cSeats[i+1]-'0';
                          s3->B[iSeatNo] = 1;
                          iSubTotal += 280;
                         break;
                case 'C': iSeatNo = cSeats[i+1]-'0';
                          s3->C[iSeatNo] = 1;
                          iSubTotal += 240;
                         break;
            }
        }
    }
    iServiceTax = iSubTotal * 0.14;
    iSwachhBharatCess = iSubTotal * 0.005;
    iKrishiKalyanCess = iSubTotal * 0.005;
    iTotalAmount = iSubTotal + iServiceTax + iKrishiKalyanCess;

    saleobj->iRevenue += iTotalAmount;
    saleobj->iServiceTax += iServiceTax;
    saleobj->iSwachhBharatCess += iSwachhBharatCess;
    saleobj->iKrishiKalyanCess += iKrishiKalyanCess;

    printf("--------------------------------------------------\n");
    printf("Successfully Booked - Show 1\n");
    printf("Subtotal: Rs. %d\n",iSubTotal);
    printf("Service Tax @14percent: Rs. %.2f\n",iServiceTax);
    printf("Swachh Bharat Cess @0.5percent: Rs. %.2f\n",iSwachhBharatCess);
    printf("Krishi Kalyan Cess @0.5percent: Rs. %.2f\n",iKrishiKalyanCess);
    printf("Total: Rs.%.2f\n",iTotalAmount);
    printf("--------------------------------------------------\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : displaySeatingArrangement
// Parameters    : structure object,structure object,structure object
// Return Value  : integer 
// Description   : it takes structre objects as patrameter and displays the details of available seats
// Author        : Swapnil Ramesh Adhav
// Date          : 25th April 2021
//                                                                                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void displaySeatingArrangement(SHOW1 s1,SHOW2 s2,SHOW3 s3)
{
    int i = 0;
    printf("-------------------------------------------\n");
    printf("Show 1 Running in Audi 1:\nAll Available Seats:\n");
    printf("-------------------------------------------\n");

    for(i=0;i<9;i++)
    {
        if(s1.A[i]==0)
        {
            printf("A%d\t",i+1);
        }        
    }
    printf("\n");
    for(i=0;i<9;i++)
    {
        if(s1.B[i]==0)
        {
            printf("B%d\t",i+1);
        }
    }
    printf("\n");
    for(i=0;i<9;i++)
    {
        if(s1.C[i]==0)
        {
            printf("C%d\t",i+1);
        }
    }

    printf("\n-------------------------------------------\n");
    printf("Show 2 Running in Audi 1:\nAll Available Seats:\n");
    printf("-------------------------------------------\n");

    for(i=0;i<9;i++)
    {
        if(s2.A[i]==0)
        {
            printf("A%d\t",i+1);
        }        
    }
    printf("\n");
    for(i=0;i<9;i++)
    {
        if(s2.B[i]==0)
        {
            printf("B%d\t",i+1);
        }
    }
    printf("\n");
    for(i=0;i<9;i++)
    {
        if(s2.C[i]==0)
        {
            printf("C%d\t",i+1);
        }
    }

    printf("\n-------------------------------------------\n");
    printf("Show 3 Running in Audi 1:\nAll Available Seats:\n");
    printf("-------------------------------------------\n");

    for(i=0;i<9;i++)
    {
        if(s3.A[i]==0)
        {
            printf("A%d\t",i+1);
        }        
    }
    printf("\n");
    for(i=0;i<9;i++)
    {
        if(s3.B[i]==0)
        {
            printf("B%d\t",i+1);
        }
    }
    printf("\n");
    for(i=0;i<9;i++)
    {
        if(s3.C[i]==0)
        {
            printf("C%d\t",i+1);
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : displayTotalSales
// Parameters    : structure object
// Return Value  : integer 
// Description   : it takes structre object as patrameter and display the details of total sale
// Author        : Swapnil Ramesh Adhav
// Date          : 25th April 2021
//                                                                                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void displayTotalSales(TOTALSALE saleobj)
{
    printf("--------------------------------------------------\n");
    printf("Revenue: Rs. %.2f\n",saleobj.iRevenue);
    printf("Service Tax : Rs . %.2f\n",saleobj.iServiceTax);
    printf("Swachh Bharat Cess: Rs. %.2f\n",saleobj.iSwachhBharatCess);
    printf("Krishi Kalyan Cess: Rs. %.2f",saleobj.iKrishiKalyanCess);
    printf("\n--------------------------------------------------\n");   
}
