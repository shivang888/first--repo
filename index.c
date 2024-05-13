// Q.1

// #include<stdio.h>

// void fiboSeries();
// int main(){

//  fiboSeries(); 
     
// return 0;
// }
// void fiboSeries(){
// int first=0;
//  int second=1;
//  int n,result;

//  printf("Enter your number:");
//  scanf("%d",&n);

//  for(int i=1;i<=n;i++){
//     printf("%d",first);

//     result=first+second;

//     first=second;
//     second=result;
//  }
// }

// Q.2

// #include <stdio.h>
// void checknumber();
// int main(){

// checknumber();

//  return 0;
// }
// void checknumber(){
//     int a;
//     printf("Enter your Number:");
//     scanf("%d",&a);
//     if(a>0){
//         printf("your Number is Positive");
//     }else if(a<0){
//         printf("your Number is negetive");
//     }
//     else if(a==0){
//       printf("your Nuber is Zero");
//     }
//     else{
//         printf("Not Found");
//     }
// }

// Q.3
// #include <stdio.h>

// #define PI 3.14159

// void calculateArea(int choice);

// int main() {
//     int choice;

//     printf("Choose a shape to calculate its area:\n");
//     printf("1. Circle\n");
//     printf("2. Square\n");
//     printf("3. Rectangle\n");
//     printf("Enter your choice (1, 2, or 3): ");
//     scanf("%d", &choice);

//     calculateArea(choice);

//     return 0;
// }

// void calculateArea(int choice) {
//     float area;
//     switch(choice) {
//         case 1: {
//             float radius;
//             printf("Enter the radius of the circle: ");
//             scanf("%f", &radius);
//             area = PI * radius * radius;
//             printf("Area of the circle: %.2f\n", area);
//             break;
//         }
//         case 2: {
//             float side;
//             printf("Enter the side of the square: ");
//             scanf("%f", &side);
//             area = side * side;
//             printf("Area of the square: %.2f\n", area);
//             break;
//         }
//         case 3: {
//             float length, breadth;
//             printf("Enter the length of the rectangle: ");
//             scanf("%f", &length);
//             printf("Enter the breadth of the rectangle: ");
//             scanf("%f", &breadth);
//             area = length * breadth;
//             printf("Area of the rectangle: %.2f\n", area);
//             break;
//         }
//         default:
//             printf("Invalid choice!\n");
//     }
// }

// Q.4

#include<stdio.h>
char checkCharcter();
int main(){
     checkCharcter();

    return 0;
}
char checkCharcter(){
    char ch;
    printf("Plese Enter your Alphabet:");
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
       printf("\n %cyour charcter is vowel",ch);
       break;
       default:
       printf("\n %cyour charcater is constant",ch);
       break;
    }
    
}
// if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
//     {
//         printf("\n %cyour charcter is vowel",ch);
//     }
//     else{
//         printf("\n %cyour charcater is constant",ch);
//     }

// printf("hello shivang");