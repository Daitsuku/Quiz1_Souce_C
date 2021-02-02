#include<stdio.h>
/* ดลวัต เสมอวงค์ติ๊บ , โปรแกรมคำนวณหาค่าดัชนีมวลกาย */ 
void main(){
    system("cls");

    int w;
    float bmi,h;

    printf("Please insert height in centimetre : ");
    scanf("%f",&h);

    printf("Please insert weight : ");
    scanf("%d",&w);

    h = h/100;
    bmi = (float)w/(h*h);

    if (bmi > 30){
        printf("You're fat");
    }
    else if (bmi > 25){
        printf("You're a little bit gain");
    }
    else if (bmi > 20){
        printf("You're firm!");
    }
    else{
        printf("You're thin");
    }

}