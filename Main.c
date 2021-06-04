#include "HelperFunctions.c"

int main()
{
    SHOW1 s1obj;
    SHOW2 s2obj;
    SHOW3 s3obj;
    TOTALSALE saleobj;
    int iAvailableSeats = 0;
    char seats[80] = {'\0'};
    int iShow = 0;
    int iRequiredSeats = 0;
    int iOption = 0;
    int i = 0;
    init(&s1obj,&s2obj,&s3obj);

    while(iOption!=4)
    {
        iAvailableSeats = 0;
        iRequiredSeats = 0;
        printf("\n\n--------------------------------------------------\n");
        printf("1)Total Sales\n2)Book Seats\n3)Display Available seats\n4)Exit");
        printf("\n--------------------------------------------------\n");
        printf("Enter Your Choice...\n");
        scanf("%d",&iOption);
        switch(iOption)
        {
            case 1: displayTotalSales(saleobj);
                    break;
            
            case 2: printf("Enter show number : \n");
                    scanf("%d",&iShow);
                    switch(iShow)
                    {
                        case 1: printf("Enter seats :\n");
                                scanf(" %[^'\n']s",seats);
                                iAvailableSeats = chkSeatsForShow1(s1obj,seats,&iRequiredSeats);
                                if(iAvailableSeats==iRequiredSeats)
                                {
                                    bookTicketOfShow1(&s1obj,seats,&saleobj);                   
                                }
                                else
                                {
                                    printf("Seats are not available\n");
                                }
                                break;
                        
                        case 2: printf("Enter seats :\n");
                                scanf(" %[^'\n']s",seats);
                                iAvailableSeats = chkSeatsForShow2(s2obj,seats,&iRequiredSeats);
                                if(iAvailableSeats==iRequiredSeats)
                                {
                                    bookTicketOfShow2(&s2obj,seats,&saleobj);                   
                                }
                                else
                                {
                                    printf("Seats are not available\n");
                                }
                                break;
                        
                        case 3: printf("Enter seats :\n");
                                scanf(" %[^'\n']s",seats);
                                iAvailableSeats = chkSeatsForShow3(s3obj,seats,&iRequiredSeats);
                                if(iAvailableSeats==iRequiredSeats)
                                {
                                    bookTicketOfShow3(&s3obj,seats,&saleobj);                   
                                }
                                else
                                {
                                    printf("Seats are not available\n");
                                }
                                break;
                                break;
                        
                        default: break;
                    }
                    break;
            
            case 3: displaySeatingArrangement(s1obj,s2obj,s3obj);
                    printf("\n");
                    break;
            
            case 4:   printf("\n---------------------------------\n"); 
                      printf("Good bye...! Thank You for using my application.....");
                      printf("\n-------------------------------\n"); 
                    break;
            default : printf("\n---------------------------------\n"); 
                      printf("Sorry...! Invalid Choice,,,,");
                      printf("\n-------------------------------\n"); 
                      break;
        }    
    }
}