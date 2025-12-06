#include <stdio.h>
#include <math.h>

void q1(){ 
    int a=10,b=20,c=30;
     printf("%d %d %d\n",a,b,c); }

void q2(){
     printf("C language is a powerful programming language.\n"); }

void q3(){
     int a=5,b=10,t=a; a=b; b=t;
      printf("After swapping: %d %d\n",a,b); }

void q4(){
     int y; printf("Enter years: ");
      scanf("%d",&y); 
      printf("Months: %d\n",y*12); }

void q5(){
     float a,b; 
     printf("Enter two numbers: "); 
     scanf("%f %f",&a,&b); 
    printf("Sum=%.2f\nProduct=%.2f\n",a+b,a*b); }

void q6(){
     int age;
      printf("Enter age: ");
       scanf("%d",&age);
        printf("Months: %d\n",age*12); }

void q7(){
    int pf,ic,cg;
     char roll[20];
    printf("Roll No: ");
     scanf("%s",roll);
    printf("Marks PF IC CG: ");
     scanf("%d %d %d",&pf,&ic,&cg);
    int total=pf+ic+cg;
    printf("Total=%d\nAverage=%.2f\n", total, total/3.0);
}

void q8(){ 
    float f; 
    printf("Enter F: "); 
    scanf("%f",&f); 
    printf("C=%.2f\n",(5.0/9)*(f-32)); }

void q9(){ 
    int a,b,c,d; 
    printf("Enter 4 nums: "); 
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int max=a; 
    if(b>max)max=b; 
    if(c>max)max=c; 
    if(d>max)max=d;
    printf("Max=%d\n",max);
}

void q10(){ 
    printf("KM=%.3f\n",2.5*1.609); }

void q11(){
     int a=10,b=20;
      printf("Avg=%.2f\n",(a+b)/2.0); }

void q12(){ 
    const float PI=3.14159; 
    float r,h;
    printf("r h: "); 
    scanf("%f %f",&r,&h);
    printf("Volume=%.2f\n",PI * r * r * h);
}

void q13(){ 
    const float PI=3.14159; 
    float r;
    printf("r: ");
     scanf("%f",&r);
    printf("Area=%.2f\n",PI * r * r);
}

void q14(){
     float mm;
      printf("mm: "); 
      scanf("%f",&mm); 
      printf("Inches=%.3f\n",mm/25.4); }

void q15(){
     int a=8,b=3,t=a; a=b; b=t;
      printf("%d %d\n",a,b); }

void q16(){ 
    int a=3,b=3,c=3; 
    printf("Product=%d\n",a*b*c); }

void q17(){ 
    float num=15.58971; 
    int ip=(int)num; 
    float fp=num-ip;
    printf("Int=%d\nFrac=%.5f\n",ip,fp);
}

void q18(){
    float vi=5,t=10,a=2; 
    printf("s=%.2f\n", vi*t + 0.5*a*t*t );
}

void q19(){ 
    int age; 
    printf("Age: "); 
    scanf("%d",&age); 
    printf("Months=%d Days=%d\n", age*12, age*365 ); 
}

void q20(){ 
    printf("C:\\Windows>\n'P'\t'A'\t'K'\n\"Pakistan\"\n"); 
}

void q21(){ 
    printf("XXXXX\nXXXX\nXXX\nXX\nX\n"); }

void q22(){
    char name[50],gender[10];
    int age;
     float height;
    printf("Name: "); scanf("%s",name);
    printf("Age: "); scanf("%d",&age);
    printf("Height: "); scanf("%f",&height);
    printf("Gender: "); scanf("%s",gender);
    printf("%s %d %.2f %s\n",name,age,height,gender);
}

void q23(){
    float r; 
    const float PI=3.14159;
    printf("r: "); scanf("%f",&r);
    printf("Area=%.2f\nCircumference=%.2f\n", PI*r*r, 2*PI*r );
}

void q24(){
    float m[5],total=0;
    for(int i=0;i<5;i++){ 
        printf("Sub %d: ",i+1); 
        scanf("%f",&m[i]); 
        total+=m[i]; 
    }
    printf("Total=%.2f\nAverage=%.2f\n",total,total/5);
}

void q25(){
    float a,b,c,s;
    printf("a b c: "); scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    printf("Area=%.2f\n",sqrt(s*(s-a)*(s-b)*(s-c)));
}

void q26(){
     printf("Dollars=%.2f\n",12000/60.0); }

void q27(){ 
    int h,m,s; 
    printf("h m s: "); scanf("%d%d%d",&h,&m,&s); 
    printf("Seconds=%d\n", h*3600 + m*60 + s );
}

void q28(){ 
    float a,b,c; 
    printf("a b c: "); scanf("%f%f%f",&a,&b,&c); 
    printf("disc=%.2f\n", b*b - 4*a*c ); 
}

void q29(){ 
    int n; printf("n: "); scanf("%d",&n);
     if(n>100) printf("n > 100\n"); }

void q30(){ 
    int n; printf("n: "); scanf("%d",&n); 
    printf(n%2==0 ? "Even\n" : "Odd\n"); 
}

int main(){
    int ch;
    while(1){
        printf("\n--- MENU (1-30, 0 Exit) ---\n");
        scanf("%d",&ch);
        if(ch==0) break;
        switch(ch){
            case 1:q1();break; case 2:q2();break; case 3:q3();break;
            case 4:q4();break; case 5:q5();break; case 6:q6();break;
            case 7:q7();break; case 8:q8();break; case 9:q9();break;
            case 10:q10();break; case 11:q11();break; case 12:q12();break;
            case 13:q13();break; case 14:q14();break; case 15:q15();break;
            case 16:q16();break; case 17:q17();break; case 18:q18();break;
            case 19:q19();break; case 20:q20();break; case 21:q21();break;
            case 22:q22();break; case 23:q23();break; case 24:q24();break;
            case 25:q25();break; case 26:q26();break; case 27:q27();break;
            case 28:q28();break; case 29:q29();break; case 30:q30();break;
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}