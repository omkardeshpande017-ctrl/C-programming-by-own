#include<stdio.h>

int main(){
   
   // Declearation 
   float sub1,sub2,sub3,sub4,sub5,totalMark,achievedMark,percentage;
   totalMark=500;
   
    // input from user
    printf("please enter a sub1 marks:");
    scanf("%f",&sub1);
    
    printf("please enter a sub2 marks:");
    scanf("%f",&sub2);
    
    printf("please enter a sub3 marks:");
    scanf("%f",&sub3);
    
    printf("please enter a sub4 marks:");
    scanf("%f",&sub4);
    
    printf("please enter a sub5 marks:");
    scanf("%f",&sub5);

    int max=100;
    if (sub1>max || sub2>max || sub3>max || sub4>max || sub5>max){
        printf("Invalid input: Marks should not exceed 100.");
        return 1;
    }
    
    // percentage 
    achievedMark=sub1+sub2+sub3+sub4+sub5;
    percentage=achievedMark/ totalMark*100;
    
    printf("\ntotalMarks is %.2f",totalMark);
    printf("\nachievedMarks is %.2f", achievedMark);
    printf("\npercentage is %.2f",percentage);
    
    // failed student 
    
    if(sub1<40||sub2<40||sub3<40||sub4<40||sub5<40){
        printf("\nstudent is fail");
    }
    
    if(sub1>40||sub2>40||sub3>40||sub4>40||sub5>40){
        printf("\nresult=pass");
    }
    
    if(percentage>75){
        printf("\nresult=distingstion");
        
    }else if(percentage<75 && percentage>=60){
        printf("result=first class");
        
    }else if(percentage<60 && percentage>=50){
        printf("result=secound class");
        
    }else { printf ("result=third class");
    
    }
    return 0;
}
    
    
    
    
    
    
    
        
    
    
    
    
    
    
    
    
    