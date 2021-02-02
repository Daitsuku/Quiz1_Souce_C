#include<stdio.h>
/* ดลวัต เสมอวงค์ติ๊บ , โปรแกรมคิดเงินทอนเป็นธนบัตรและเหรียญ */
void main(){

    system("cls");

    int num1, num2, num3, num4, num5, choose_option, total, money;
    num1=0;
    num2=0;
    num3=0;
    num4=0;
    num5=0;
    total=0;
    money=0;
    do{
        
        printf("[1.] Coffee (35.-)\n[2.] Rice (150.-)\n[3.] Tea (135.-)\n[4.] Milk (45.-)\n[5.] Coke (25.-)\n[0.] Exit\n");
        printf("Please enter item of menu => ");
        scanf("%d",&choose_option);

        if(choose_option == 0)
                break;
        
        switch (choose_option)
        {
        case 1:
            printf("Enter quantity => "); scanf("%d",&num1);
            total = total+(num1*35);
            printf("\n");
            break;


        case 2:
            printf("Enter quantity => "); scanf("%d",&num2);
            total = total+(num2*150);
            printf("\n");
            break;

        case 3:
            printf("Enter quantity => "); scanf("%d",&num3);
            total = total+(num3*135);
            printf("\n");
            break;

        case 4:
            printf("Enter quantity => "); scanf("%d",&num4);
            total = total+(num4*45);
            printf("\n");
            break;    

        case 5:
            printf("Enter quantity => "); scanf("%d",&num5);
            total = total+(num5*25);
            printf("\n");
            break;         

        case 0:
            break;
        
        default:
            printf("Invalid item\n");
            break;
        }

    }while(choose_option != 0);

    printf("Total price = %d\n",total);
    
    do{
        printf("Please paying (>Total price) => ");
        scanf("%d",&money);
        if (total>money){
            printf("Sorry, Try again!\n");
        }
        else{
          break;  
        }

    }while(total>money);
    money = money-total;
    printf("\n");
    exchange(money);


}

int exchange(int x){
    int y;

    y=x/1000;
    printf("1000 bath: %d\n",y);
    x = x%1000;

    y=x/500;      
    printf("500 bath: %d\n",y);    
    x = (x%500);

    y=x/100;
    printf("100 bath: %d\n",y);    
    x = (x%100);

    y=x/50;
    printf("50 bath: %d\n",y);    
    x = (x%50);

    y=x/20;
    printf("20 bath: %d\n",y);    
    x = (x%20);

    y=x/10;
    printf("10 bath: %d\n",y);    
    x = (x%10);

    y=x/5;
    printf("5 bath: %d\n",y);    
    x = (x%5);

    y=x/2;
    printf("2 bath: %d\n",y);    
    x = (x%2);

    y=x;
    printf("1 bath: %d",y);    

}