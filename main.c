/*Luis Timana
Intro to Programming in C
5/29/24
*/
#include <stdio.h>

int main(void){
    int distance, speed1, speed2;
    float meet, totalSpeed, firstTrain, secondTrain;
    
    printf("What is the distance between trains in miles?\n ");
    scanf("%d", &distance);

    printf("What is the speed of the first train in miles per hour?\n");
    scanf("%d", &speed1);

    printf("What is the speed of the second train in miles per hour?\n");
    scanf("%d", &speed2);

    totalSpeed = speed1 + speed2;
    meet = (distance/totalSpeed) * 60;

    firstTrain = (meet/60) * speed1;
    secondTrain = (meet/60) * speed2;

    printf("It will take %.3f minutes for the trains to meet.\n", meet);
    printf("The first train will travel %.2f miles.\n", firstTrain);
    printf("The second train will travel %.2f miles.\n", secondTrain);



}