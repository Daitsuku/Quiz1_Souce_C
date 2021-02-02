#include<stdio.h>

/* ดลวัต เสมอวงค์ติ๊บ , โปรแกรมเมนูในการเลือกฟังก์ชั่นการทำงาน */
void main(){

    system("cls");

    int num1, num2, choose_option,i,f;
    do{
        
        printf("[1.] Multiplication\n[2.] Calculate Triangle Area\n[3.] Calculate Factorial\n[4.] Exit\n");
        printf("Please enter number of item => ");
        scanf("%d",&choose_option);

        if(choose_option == 4)
                break;
        
        switch (choose_option)
        {
        case 1:
            printf("Enter number of multiplication = "); scanf("%d",&num1);
            for (i=1 ; i<13 ; i++){
                printf("%d * %d = %d\n",num1,i,num1*i);
            }
            printf("\n");
            break;


        case 2:
            printf("Enter base: "); scanf("%d",&num1);
            printf("Enter height: "); scanf("%d",&num2);
            printf("Triangle area = %.2f\n\n",0.5*(float)num1*(float)num2);
            break;

        case 3:
            printf("Enter number: "); scanf("%d",&num1);
            f=num1;
            num2=1;
            for (i=1 ; i<=num1 ;i++){
                num2 = num2 * f;
                f= f-1;
            }
            printf("Factorial of %d = %d\n\n",num1,num2);
            
            break;

        case 4:
            break;
        
        default:
            printf("Invalid item\n");
            break;
        }

    }while(choose_option != 4);
    

}

