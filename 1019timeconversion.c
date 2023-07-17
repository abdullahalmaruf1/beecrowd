#include<stdio.h>

int main() {
    int seconds, minutes, hours;
    scanf("%d",&seconds);
    //findingout hours
    hours = seconds/3600;
    seconds= seconds - (hours*3600);
    //findingout minutes
    minutes= seconds/60;
    seconds=seconds - (minutes*60);
    
    //printing hours,minutes & seconds
    printf("%d:%d:%d\n", hours,minutes,seconds);
    
    return 0;

}
// another method

#include<stdio.h>

int main() {
    int seconds, minutes, hours;
    scanf("%d",&seconds);
    //findingout hours,minutes & seconds
    hours = seconds/3600;
    minutes = seconds%3600/60;
    seconds =seconds%3600%60;
    //printing hours,minutes & seconds
    printf("%d:%d:%d\n", hours,minutes,seconds);
    
    
    
    return 0;

}
