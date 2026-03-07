#include<stdio.h>
int mark[100];
int count=0;

//Function to add reasult
void add(){
    printf("Enter mark:");
    scanf("%d",&mark[count]);
    count++;
    printf("Result Added Successfull!!\n");
}
//Function to show result
void show(){
    if(count==0){
        printf("No data found\n");
        return;
    }
    printf("\nstudent marks:\n");
    for(int i=0;i<count;i++){
        printf("student %d :%d\n",i+1,mark[i]);
    }
}
//Function to calculate average
void aver(){
    int sum=0;
    if(count==0){
        printf("No data found\n");
        return;
    }
    for(int i=0;i<count;i++){
        sum+=mark[i];
    }
    float ave=(float)sum/count;
    printf("Averge mark: %f\n",ave);

}
//Function to find Highest Number
void high(){
    if(count==0){
        printf("No data found\n");
        return;
    }
    int max=mark[0];
    for(int i=1;i<count;i++){
        if(mark[i]>max)
        max=mark[i];
    }
    printf("Highest mark=%d\n",max);
}
int main(){
    int choice;
    for(;;){
         printf("\n===== RGPV Result Analyzer =====\n");
         printf("\n1.Add result\n2.Show Result\n3.Average Mark\n4.Highest Number\n5.Exit\n");
         printf("Enter Choice:");
         scanf("%d",&choice);
         switch(choice){  
         case 1:
         add();
         break;
         case 2:
         show();
         break;
         case 3:
         aver();
         break;
         case 4:
          high();
          break;
          case 5:
          printf("\nExiting......");
          return 0;
          default:
          printf("Invalid input");
        }


    }
    return 0;
}