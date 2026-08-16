// Online C compiler to run C program online
#include <stdio.h>
void create();
void display();
void modify();
void dis_modify();
void search();
void sort_Roll();

struct STUDENT {
    int rollNo;
    char name[20];
    char sub_name[20];
    float marks;

};
typedef  struct STUDENT stud;
int i , n=2;
stud s[10];

int main() {
    int ch;

    
    do{
        printf("\n----STUDENT DATABASE----\n");
        printf("1.Create student data\n");
        printf("2. Display student data\n");
        printf("3.Modify student data\n");
        printf("4.Display Modify student data\n");
        printf("5.search student data\n");
        printf("6.sort student data by roll no \n");
        printf("7. Exit\n");
        printf("Enter your choice : \n");
        scanf("%d",&ch);

        switch(ch){
            case 1:create();
            break;
            case 2:display();
            break;
            case 3:modify();
            break;
            case 4:dis_modify();
            break;
            case 5:search();
            break;
            case 6:sort_Roll();
            break;
            case 7:printf("Exit \n");
            break;
            default:printf("Wrong choice\n");
            break;
        }
    }while(ch!=7);
    


    return 0;
}

void create(){
    printf("Enter Student data\n");
    for(i=0; i<n; i++){
        scanf("\n %d  %s  %s  %f",&s[i].rollNo ,s[i].name , s[i].sub_name , &s[i].marks);
    
    }
}

void display(){
    printf("Display Student data\n");
    for(i=0; i<n; i++){
        printf("\n %d  %s  %s  %f",s[i].rollNo ,s[i].name , s[i].sub_name , s[i].marks);
    }
}

void modify(){
    int Roll , found=0;
    printf("Enter a roll no to find : \n");
    scanf("%d",&Roll);
    for(i=0; i<n; i++){
        if(s[i].rollNo == Roll) {
            found=1;
            printf("Enter new student data\n");
            scanf("\n %s  %s  %f",s[i].name, s[i].sub_name, 
            &s[i].marks);
            printf("Data has been modified successfully");
            break;
        }
     }
    
    if(found==0){
        printf("roll no not found\n");
        }
}

void dis_modify(){
    
        
    printf("\nDisplaying modified data\n");
    for(i=0; i<n; i++){
        printf("\n %d  %s  %s  %f",s[i].rollNo ,s[i].name , s[i].sub_name , s[i].marks);
    }



}

void search(){
    int Roll , found=0;
    printf("\nenter roll no to search :  ");
    scanf("%d",&Roll);
    for(i=0; i<n; i++){
        if(s[i].rollNo==Roll){
            found=1;
            printf("\nStudent found\n ");
            printf("\n %d  %s  %s  %f",s[i].rollNo ,s[i].name , s[i].sub_name , s[i].marks);
            break;



        }
    }
if(found==0){
        printf("roll no not found\n");
        }
}
void sort_Roll(){
    int j;
    stud temp;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(s[j].rollNo > s[j+1].rollNo){
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;

            }
        }
    }
    printf("Data is sorted by roll no \n");
    for(i=0; i<n; i++){
        printf("\n %d  %s  %s  %f",s[i].rollNo ,s[i].name , s[i].sub_name , s[i].marks);
    }


}


