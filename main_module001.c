#include <stdio.h>
#include <conio.h>
#include <math.h>

#define PI 3.141

int sub();
int sum();
int multiplication();
void division();
int modulus();
void trigonometry();
void sin_v();
void cos_v();
void tan_v();
void cosec_v();
void sec_v();
void cot_v();
int square();
int cubenum();
int sqroot();
int alge();
float geo();
float cube();
float cuboid();
void circle();
void circle_area();
void circle_cf();
void Rectangle();
void Triangle();
void Square();
void cone();
void rhombus();
void trapezium();

int main()
 {

   int flag0=0;
   int ans;


   while (1) {
     printf("------------------- MAIN SCREEN ---------------------\n\n\n");
     printf("\tNo 1. Algebra\n");
     printf("\tNo 2. Geometry\n");
     printf("\tNo 0. Exit\n");
     printf("-----------------------------------------------------\n\n\n");

     ans=0;
     printf("\n\n\tchoice >>");
     scanf("%d", &flag0);

     if (flag0==1) {
       system("cls");
       ans=alge();
     }
     else if (flag0==2) {
       system("cls");
       ans=geo();
     }else if (flag0==0){
       // exit(0);
       break;
     }
     else printf("\n\n\tEnter valid choice!!\n\n");

   }
   return 0;
}
int alge()
{
 system("cls");
  int flag=0,ans;
alge_start:
printf("------------------- ALGEBRA ------------------------\n\n\n");
printf("\tNo 1. Addition\n");
printf("\tNo 2. Substraction\n");
printf("\tNo 3. Multiplication\n");
printf("\tNo 4. Division\n");
printf("\tNo 5. Modulus\n");
printf("\tNo 6. Trigonometric functions\n");
printf("\tNo 7. Square\n");
printf("\tNo 8. cube\n");
printf("\tNo 9. Square root\n");
printf("\tNo 0. Back\n");
printf("-----------------------------------------------------\n\n\n");
while (1){
  ans=0;
  printf("\n\n\n\tchoice >>");
  scanf("%d", &flag);

if (flag==1) {
ans=sum();
printf("\n\nThe sum is %d",ans);
}else if (flag==2) {
  ans=sub();
  printf("\n\nThe subtraction is %d",ans);
}else if (flag==3) {
  ans=multiplication();
  printf("\n\nThe multiplication is %d",ans);
}else if (flag==4) {
  division();
}else if (flag==5) {
  ans=modulus();
  printf("\n\nThe modulus is %d\n", ans);
}else if (flag==6) {
  trigonometry();
  system("cls");
  goto alge_start;
}else if (flag==7) {
  ans=square();
  printf("\n\nThe square is %d\n", ans);
}else if (flag==8) {
  ans=cubenum();
  printf("\n\nThe cube is %d\n", ans);
}else if (flag==9) {
  ans=sqroot();
  printf("\n\nThe square root is %d\n", ans);
}else if (flag==0){
  system("cls");
  break;
}
else printf("\n\n\tEnter valid choice!!\n\n");
}
return 0;
}

float geo()
 {

   int flag=0;
   float ans;
   geo_start:
   printf("------------------ GEOMETRY --------------------\n\n\n");
   printf("\tNo 1. Circle\n");
   printf("\tNo 2. Rectangle\n");
   printf("\tNo 3. Triangle\n");
   printf("\tNo 4. Square\n");
   printf("\tNo 5. Total surface area of Cone\n");
   printf("\tNo 6. Area of rhombus\n");
   printf("\tNo 7. Area of trapezium\n");
   printf("\tNo 8. cube\n");
   printf("\tNo 9. cuboid\n");
   printf("\tNo 0. Back\n");
   printf("-----------------------------------------------------\n\n\n");

   while (1){
     ans=0;
     printf("\n\n\n\tchoice >>");
     scanf("%d", &flag);

     if (flag==1) {
       circle();
       system("cls");
       goto geo_start;
     }else if (flag==2) {
       Rectangle();
     }else if (flag==3) {
       Triangle();
     }else if (flag==4) {
       Square();
     }else if (flag==5) {
       cone();
     }else if (flag==6) {
       rhombus();
     }else if (flag==7) {
       trapezium();
     }else if (flag==8) {
       ans=cube();
       printf("\n\nvolume of cube is %.2f",ans);
     }else if (flag==9) {
       ans=cuboid();
       printf("\n\nvolume of cuboid is %.2f",ans);
     }else if (flag==0){
       system("cls");
       break;
     }
     else printf("\n\n\tEnter valid choice!!\n\n");
     }
     return 0;
     }

     void circle()
      {
        system("cls");
        int flag=0;
        float ans;
        printf("------------------ CIRCLE --------------------\n\n\n");
        printf("\tNo 1. Area\n");
        printf("\tNo 2. Circumference\n");
        printf("\tNo 0. Back\n");
        printf("-----------------------------------------------------\n\n\n");

        while (1){
          ans=0;
          printf("\n\n\n\tchoice >>");
          scanf("%d", &flag);

          if (flag==1) {
            circle_area();
          }else if (flag==2) {
            circle_cf();
          }else if (flag==0){
            break;
          }
          else printf("\n\n\tEnter valid choice!!\n\n");
          }
      }
      void trigonometry()
       {
         system("cls");
         int flag=0;
         float ans;
         printf("------------------ Trigonometry --------------------\n\n\n");
         printf("\tNo 1. sin\n");
         printf("\tNo 2. cos\n");
         printf("\tNo 3. tan\n");
         printf("\tNo 4. cosec\n");
         printf("\tNo 5. sec\n");
         printf("\tNo 6. cot\n");
         printf("\tNo 0. Back\n");
         printf("-----------------------------------------------------\n\n\n");

         while (1){
           ans=0;
           printf("\n\n\n\tchoice >>");
           scanf("%d", &flag);

           if (flag==1) {
             sin_v();
           }else if (flag==2) {
             cos_v();
           }else if (flag==3) {
             tan_v();
           }else if (flag==4) {
             cosec_v();
           }else if (flag==5) {
             sec_v();
           }else if (flag==6) {
             cot_v();
           }else if (flag==0){
             break;
           }
           else printf("\n\n\tEnter valid choice!!\n\n");
           }
       }


int sum()
{
    int a,b;
    printf("\n\t\tEnter two numbers:\n");
    printf("first num>>");
    scanf("%d",&a);
    printf("\nsecond num>>");
    scanf("%d",&b);
    return a+b;
}
int sub()
{
    int a,b;
    printf("\n\t\tEnter two numbers:\n");
    printf("first num>>");
    scanf("%d",&a);
    printf("\nsecond num>>");
    scanf("%d",&b);
    return a-b;
}
int multiplication()
{
  int a,b;
  printf("\n\t\tEnter two numbers:\n");
  printf("first num>>");
  scanf("%d",&a);
  printf("\nsecond num>>");
  scanf("%d",&b);
  return a*b;
}
void division()
{
  float a,b;
  printf("\n\t\tEnter two numbers:\n");
  printf("first num>>");
  scanf("%f",&a);
  printf("\nsecond num>>");
  scanf("%f",&b);
  printf("\n\nThe division is %.2f\n", a/b);

}
int modulus()
{
  int a,b;
  printf("\n\t\tEnter two numbers:\n");
  printf("first num>>");
  scanf("%d",&a);
  printf("\nsecond num>>");
  scanf("%d",&b);
  return a%b;
}
int square()
{
  int a;
  printf("\n\t\tEnter number:\n");
  printf("number>>");
  scanf("%d",&a);
  return a*a;
}
int cubenum()
{
  int a;
  printf("\n\t\tEnter number:\n");
  printf("number>>");
  scanf("%d",&a);
  return a*a*a;
}
int sqroot()
{
  int a;
  printf("\n\t\tEnter number:\n");
  printf("number>>");
  scanf("%d",&a);
  return sqrt(a);
}


// GEOMETRY--------->>
// circle >>>>>>
void circle_area()
{

	float  side,base,length,bredth,height,area,radius;
  printf("Enter the radius\n");
					scanf("%f",&radius);
					area=3.142*radius*radius;
					printf("Area of a circle=%f\n", area);
}

void circle_cf()
{
float radius, circumference;
 printf("Enter radius of circle\n");
 scanf("%f", &radius);
 circumference = 2*PI*radius;
 printf("Circumference of circle : %0.4f\n", circumference);

}
void Rectangle()
{

	float  side,base,length,bredth,height,area,radius;
  printf("Enter the bredth and length\n");
					scanf("%f %f",&bredth, &length);
					area=bredth *length;
					printf("Area of a Reactangle=%f\n", area);
}
void Triangle()
{

	float  side,base,length,bredth,height,area,radius;
  printf("Enter the base and height\n");
					scanf("%f %f",&base,&height);
					area=0.5 *base*height;
					printf("Area of a Triangle=%f\n", area);
}
void Square()
{

	float  side,base,length,bredth,height,area,radius;
  printf("Enter the side\n");
					scanf("%f",&side);
					area=side * side;
					printf("Area of a Square=%f\n", area);
}
float cube()
{
  float edge;
  printf("\n\t\tEnter Edge of cube");
  printf("\nEdge>>");
  scanf("%f",&edge);
  return edge*edge*edge;
}
float cuboid()
{
  float length,width,height;
  printf("\n\t\tEnter length, width, height of cuboid:");
  printf("\nlength>>");
  scanf("%f",&length);
  printf("width>>");
  scanf("%f",&width);
  printf("height>>");
  scanf("%f",&height);
  return length*width*height;
}
void cone()
{

    float radius, height, surfaceArea;
    printf("Enter base radius and height of a Cone\n");
    scanf("%f %f", &radius, &height);
    surfaceArea =
        PI*radius*(radius + sqrt(height*height + radius*radius));
    printf("Total surface area of Cone : %0.4f\n",
        surfaceArea);

}
void rhombus()
{
  float diagonalOne, diagonalTwo, area;
    printf("Enter the length of diagonals of rhombus\n");
    scanf("%f %f", &diagonalOne, &diagonalTwo);
    area = (diagonalOne * diagonalTwo)/2;
    printf("Area of rhombus : %0.4f\n", area);
}
void trapezium()
{
  float parallelSideOne, parallelSideTwo, height, area;
    printf("Enter the length of parallel sides of trapezium\n");
    scanf("%f %f", &parallelSideOne, &parallelSideTwo);
    printf("Enter the height of trapezium\n");
    scanf("%f", &height);
    area = 1.0/2 * (parallelSideOne+parallelSideTwo) * height;
    printf("Area of trapezium : %0.4f\n", area);
}





////////////Trigonometry///////////////

void sin_v()
{
  float a,sin_value;
  printf("\n\t\tEnter degrees:\n");
  printf("here>>");
  scanf("%f",&a);
  sin_value = sin(a);
  printf("The value of sin(%.2f) : %f \n", a, sin_value);
}
void cos_v()
{
  float a,cos_value;
  printf("\n\t\tEnter degrees:\n");
  printf("here>>");
  scanf("%f",&a);
  cos_value = cos(a);
  printf("The value of cos(%.2f) : %f \n", a, cos_value);
}
void tan_v()
{
  float a,tan_value;
  printf("\n\t\tEnter degrees:\n");
  printf("here>>");
  scanf("%f",&a);
  tan_value = tan(a);
  printf("The value of tan(%.2f) : %f \n", a, tan_value);
}
void cosec_v()
{
  float a,cosec_value;
  printf("\n\t\tEnter degrees:\n");
  printf("here>>");
  scanf("%f",&a);
  cosec_value = 1/(sin(a));
  printf("The value of cosec(%.2f) : %f \n", a, cosec_value);
}
void sec_v()
{
  float a,sec_value;
  printf("\n\t\tEnter degrees:\n");
  printf("here>>");
  scanf("%f",&a);
  sec_value = 1/(cos(a));
  printf("The value of sec(%.2f) : %f \n", a, sec_value);
}
void cot_v()
{
  float a,cot_value;
  printf("\n\t\tEnter degrees:\n");
  printf("here>>");
  scanf("%f",&a);
  cot_value = 1/(tan(a));
  printf("The value of cot(%.2f) : %f \n", a, cot_value);
}
