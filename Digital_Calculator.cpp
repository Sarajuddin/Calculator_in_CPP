
      /* Calculator   */

#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<math.h>
using namespace std;
int try_key,main_exit;
char ch;
void cube(void),cuboid(void),cylinder(void),triangle(void),square(void),cone(void);
void temp_menu(void),fahren_to_all(void),cel_to_all(void),kel_to_all(void);
void Matrix_add(void),Matrix_sub(void),Matrix_mul(void),transpose(void),symmetric(void),time_sub(void);
int bin_to_dec(int),dec_to_octal(int),octal_to_dec(int),hexa_to_dec(void),factorial(int);
void dec_to_hexa(int),login(void),close(void),dec_to_bin(int),matrix_menu(),time_add(void),conversion_menu(void);
void set_menu(void),main_menu(void),eqn_menu(void);
void other_menu(void),circle(void),rectangle(void),combination(void),prime_factor(void);
void operation_menu(void),add(void),sub(void),mul(void),div(void),mod(void);
int main()
{
    main_menu();
}
void roman()
{
    int number;
    try_again_roman:
    cout<<"\n\t Enter any Number : ";
    cin>>number;
    int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string sym[] = { "I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int i=12;
    cout<<"\n\t ROMAN Numeral: ";
    while(number>0){
        int div = number/num[i];
        number = number%num[i];
        while(div--)
            cout<<sym[i];
        i--;
    }
    invalid_roman:
    cout<<"\n\n\t Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
    cin>>try_key;
    system("cls");
    if(try_key==1)
        goto try_again_roman;
    else if(try_key==2)
        main_menu();
    else if(try_key==0)
        close();
    else
    {
        cout<<"\n\n\t Please Enter Valid Digit.";
        Sleep(2000);
        goto invalid_roman;
    }
}

void solid_shape()
{
    int button;
    try_again_solid_menu:
    cout<<"\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2  SOLID SHAPES  \xB2\xB2\xB2\xB2\xB2\xB2";
    cout<<endl<<"\t\t [1] Cube ";
    cout<<endl<<"\t\t [2] Cuboid ";
    cout<<endl<<"\t\t [3] Cone ";
    cout<<endl<<"\t\t [4] Circle ";
    cout<<endl<<"\t\t [5] Cylinder ";
    cout<<endl<<"\t\t [6] Triangle ";
    cout<<endl<<"\t\t [7] Square ";
    cout<<endl<<"\t\t [8] Rectangle ";
    cout<<endl<<"\t\t [0] Back";
    cout<<endl<<endl<<"\t\t Press any one : ";
    cin>>button;
    system("cls");
    switch(button)
    {
    case 1:
        cube();break;
    case 2:
        cuboid();break;
    case 3:
        cone();break;
    case 4:
        circle();break;
    case 5:
        cylinder();break;
    case 6:
        triangle();break;
    case 7:
        square();break;
    case 8:
        rectangle();break;
    case 0:
        main_menu();break;
    default:
        cout<<"\n\t Invalid Choice.\n\t Please Enter Valid Choice";
        Sleep(2000);
        system("cls");
        goto try_again_solid_menu;
    }
}
void cube()
{
    float side,TSA,LSA,volume,diagonal,peri;
    try_again_cube:
    cout<<endl<<"\t Enter value of Side = ";
    cin>>side;
    TSA = 6*side*side;
    LSA = 4*side*side;
    volume = pow(side,3);
    diagonal = sqrt(3*side);
    peri = 12*side;
    cout<<endl<<"\t Total Surface Area   : "<<TSA;
    cout<<endl<<"\t Lateral Surface Area : "<<LSA;
    cout<<endl<<"\t Volume of Cube       : "<<volume;
    cout<<endl<<"\t Diagonal Length      : "<<diagonal;
    cout<<endl<<"\t Perimeter of Cube    : "<<peri;
    invalid_cube:
    cout<<"\n\n\t Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
    cin>>try_key;
    system("cls");
    if(try_key==1)
        goto try_again_cube;
    else if(try_key==2)
        solid_shape();
    else if(try_key==0)
        close();
    else
    {
        cout<<"\n\n\t Please Enter Valid Digit.";
        Sleep(2000);
        goto invalid_cube;
    }
}
void cuboid()
{
    float l,b,h,TSA,LSA,volume,diagonal,peri;
    try_again_cuboid:
    cout<<endl<<"\t Enter values :-\n";
    cout<<endl<<"\t Length  = ";
    cin>>l;
    cout<<endl<<"\t Breadth = ";
    cin>>b;
    cout<<endl<<"\t Height  = ";
    cin>>h;
    TSA = 2*(l*b + b*h + h*l);
    LSA = 2*h*(l+b);
    volume = l*b*h;
    diagonal = sqrt(l*l + b*b + h*h);
    peri = 4*(l+b+h);
    cout<<endl<<"\t Total Surface Area   : "<<TSA;
    cout<<endl<<"\t Lateral Surface Area : "<<LSA;
    cout<<endl<<"\t Volume of Cube       : "<<volume;
    cout<<endl<<"\t Diagonal Length      : "<<diagonal;
    cout<<endl<<"\t Perimeter of Cube    : "<<peri;
    invalid_cuboid:
    cout<<"\n\n\t Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
    cin>>try_key;
    system("cls");
    if(try_key==1)
        goto try_again_cuboid;
    else if(try_key==2)
        solid_shape();
    else if(try_key==0)
        close();
    else
    {
        cout<<"\n\n\t Please Enter Valid Digit.";
        Sleep(2000);
        goto invalid_cuboid;
    }
}
void cone()
{
    float vol,tsa,lsa,base_area,slant_hei,h,r;
    try_again_cone:
    cout<<endl<<"\t Enter values :-\n";
    cout<<endl<<"\t Radius = ";
    cin>>r;
    cout<<endl<<"\t Height  = ";
    cin>>h;
    vol = (3.14159*r*r*h)/3;
    tsa = 3.14159*r*(r+sqrt(h*h+r*r));
    lsa = 3.14159*r*(sqrt(h*h+r*r));
    base_area = 3.14159*r*r;
    slant_hei = sqrt(h*h+r*r);
    cout<<endl<<"\t Total Surface Area   : "<<tsa;
    cout<<endl<<"\t Lateral Surface Area : "<<lsa;
    cout<<endl<<"\t Volume of Cone       : "<<vol;
    cout<<endl<<"\t Base Area of Cone    : "<<base_area;
    cout<<endl<<"\t Slant Height of Cone : "<<slant_hei;
    invalid_cone:
    cout<<"\n\n\t Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
    cin>>try_key;
    system("cls");
    if(try_key==1)
        goto try_again_cone;
    else if(try_key==2)
        solid_shape();
    else if(try_key==0)
        close();
    else
    {
        cout<<"\n\n\t Please Enter Valid Digit.";
        Sleep(2000);
        goto invalid_cone;
    }
}
void cylinder()
{
    float rad,hei,volum,curved_sa,tsa_cylin;
    try_again_cylinder:
    cout<<endl<<"\t Enter values :-\n";
    cout<<endl<<"\t Radius = ";
    cin>>rad;
    cout<<endl<<"\t Height  = ";
    cin>>hei;
    volum = 3.14159*rad*rad*hei;
    tsa_cylin = 2*3.14159*rad*hei + 2*3.14159*rad*rad;
    curved_sa = 2*3.14159*rad*hei;
    cout<<endl<<"\t Total Surface Area   : "<<tsa_cylin;
    cout<<endl<<"\t Volume of Cylinder   : "<<volum;
    cout<<endl<<"\t CurvedSurface Area   : "<<curved_sa;
    invalid_cy:
    cout<<"\n\n\t Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
    cin>>try_key;
    system("cls");
    if(try_key==1)
        goto try_again_cylinder;
    else if(try_key==2)
        solid_shape();
    else if(try_key==0)
        close();
    else
    {
        cout<<"\n\n\t Please Enter Valid Digit.";
        Sleep(2000);
        goto invalid_cy;
    }
}
void triangle()
{
    float a,b,c,s,area,primeter;
    try_again_triangle:
    cout<<endl<<"\t Enter Values :-\n";
    cout<<"\t a = ";
    cin>>a;
    cout<<"\t b = ";
    cin>>b;
    cout<<"\t c = ";
    cin>>c;
    primeter = a+b+c;
    s = primeter/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<endl<<"\t Perimeter of Triangle : "<<primeter;
    cout<<endl<<"\t Area of Triangle      : "<<area;
    invalid_tri:
    cout<<"\n\n\t Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
    cin>>try_key;
    system("cls");
    if(try_key==1)
        goto try_again_triangle;
    else if(try_key==2)
        solid_shape();
    else if(try_key==0)
        close();
    else
    {
        cout<<"\n\n\t Please Enter Valid Digit.";
        Sleep(2000);
        goto invalid_tri;
    }
}
void square()
{
    float side1,areas,pri,diagon;
    try_again_square:
    cout<<endl<<"\t Enter Value of any side : ";
    cin>>side1;
    pri = 4*side1;
    areas = side1*side1;
    diagon = side1*sqrt(2);
    cout<<endl<<"\t Perimeter of Square : "<<pri;
    cout<<endl<<"\t Area of Square      : "<<areas;
    cout<<endl<<"\t Diagonal of Square  : "<<diagon;
    invalid_sqr:
    cout<<"\n\n\t Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
    cin>>try_key;
    system("cls");
    if(try_key==1)
        goto try_again_square;
    else if(try_key==2)
        solid_shape();
    else if(try_key==0)
        close();
    else
    {
        cout<<"\n\n\t Please Enter Valid Digit.";
        Sleep(2000);
        goto invalid_sqr;
    }
}
void operation_menu()
{
    int button;
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ARITHMATIC OPERATIONS \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    cout<<endl<<"\t\t Press [1] Addition '+'";
    cout<<endl<<"\t\t Press [2] Subtraction '-'";
    cout<<endl<<"\t\t Press [3] Multiplication '*'";
    cout<<endl<<"\t\t Press [4] Division '/'";
    cout<<endl<<"\t\t Press [5] Modulo '%'";
    cout<<endl<<"\t\t Press [0] Back";
    cout<<"\n\n Select Any Option : ";
    cin>>button;
    system("cls");
    switch(button)
    {
    case 1:
        add();break;
    case 2:
        sub();break;
    case 3:
        mul();break;
    case 4:
        div();break;
    case 5:
        mod();break;
    case 0:
        main_menu();break;
    default:
        cout<<"\n\t\t Invalid Choice.\n\t\t Please Enter Valid Choice";
        Sleep(2000);
        system("cls");
        operation_menu();
        break;
    }
}
void add()
{
    float a,b;
    cout<<endl<<"\t\t a = : ";
    cin>>a;
    cout<<endl<<"\t\t b = : ";
    cin>>b;
    cout<<endl<<endl<<"\t\t Addition : "<<a+b;
    invalid_op_add:
    cout<<"\n\n\t\t Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
    cin>>try_key;
    system("cls");
    if(try_key==1)
        add();
    else if(try_key==2)
        operation_menu();
    else if(try_key==0)
        close();
    else{
        cout<<"\n\n\t\t Please Enter Valid Digit.";
        Sleep(2000);
        goto invalid_op_add;
    }
}
void sub()
{
    float a,b;
    cout<<endl<<"\t\t a = : ";
    cin>>a;
    cout<<endl<<"\t\t b = : ";
    cin>>b;
    cout<<endl<<endl<<"\t\t Subtraction : "<<a-b;
    invalid_op_sub:
    cout<<"\n\n\t\t Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
    cin>>try_key;
    system("cls");
    if(try_key==1)
        sub();
    else if(try_key==2)
        operation_menu();
    else if(try_key==0)
        close();
    else{
        cout<<"\n\n\t\t Please Enter Valid Digit.";
        Sleep(2000);
        goto invalid_op_sub;
    }
}
void mul()
{
    float a,b;
    cout<<endl<<"\t\t a = : ";
    cin>>a;
    cout<<endl<<"\t\t b = : ";
    cin>>b;
    cout<<endl<<endl<<"\t\t Multiplication : "<<a*b;
    invalid_op_mul:
    cout<<"\n\n\t\t Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
    cin>>try_key;
    system("cls");
    if(try_key==1)
        mul();
    else if(try_key==2)
        operation_menu();
    else if(try_key==0)
        close();
    else{
        cout<<"\n\n\t\t Please Enter Valid Digit.";
        Sleep(2000);
        goto invalid_op_mul;
    }
}
void div()
{
    float a,b;
    cout<<endl<<"\t\t a = : ";
    cin>>a;
    cout<<endl<<"\t\t b = : ";
    cin>>b;
    cout<<endl<<endl<<"\t\t Division : "<<a/b;
    invalid_op_div:
    cout<<"\n\n\t\t Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
    cin>>try_key;
    system("cls");
    if(try_key==1)
        div();
    else if(try_key==2)
        operation_menu();
    else if(try_key==0)
        close();
    else{
        cout<<"\n\n\t\t Please Enter Valid Digit.";
        Sleep(2000);
        goto invalid_op_div;
    }
}
void mod()
{
    int a,b;
    cout<<endl<<"\t\t a = : ";
    cin>>a;
    cout<<endl<<"\t\t b = : ";
    cin>>b;
    cout<<endl<<endl<<"\t\t Modulo : "<<a%b;
    invalid_op_mod:
    cout<<"\n\n\t\t Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
    cin>>try_key;
    system("cls");
    if(try_key==1)
        mod();
    else if(try_key==2)
        operation_menu();
    else if(try_key==0)
        close();
    else{
        cout<<"\n\n\t\t Please Enter Valid Digit.";
        Sleep(2000);
        goto invalid_op_mod;
    }
}

void table()
{
    int n,i;
    try_again_table:
    cout<<"\n\t Enter any Number : ";
    cin>>n;
    cout<<"\n";
    for(i=1;i<=10;i++)
        cout<<"\t"<<n<<"*"<<i<<" = "<<n*i<<endl;
    invalid_table:
    cout<<"\n\n\t Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
    cin>>try_key;
    system("cls");
    if(try_key==1)
        goto try_again_table;
    else if(try_key==2)
        other_menu();
    else if(try_key==0)
        close();
    else{
        cout<<"\n\n\t Please Enter Valid Digit.";
        Sleep(2000);
        goto invalid_table;
    }
}
void other_menu()
{
    system("color f2");
    int choice;
    try_again_other_menu:
        printf("\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2  OTHER OPERATIONS  \xB2\xB2\xB2\xB2\xB2\xB2");
    cout<<endl<<"\t\t [1] Factorial";
    cout<<endl<<"\t\t [2] Combination or nCr";
    cout<<endl<<"\t\t [3] Prime Factors";
    cout<<endl<<"\t\t [4] Tables";
    cout<<endl<<"\t\t [0] Back";
    cout<<endl<<endl<<"\t\t Press any one : ";
    cin>>choice;
    system("cls");
    switch(choice){
    case 1:
        int n;
        try_again_fact:
        cout<<endl<<"\t Enter an Integer Number : ";
        cin>>n;
        cout<<endl<<"\t Factorial is : "<<factorial(n);
    invalid_fact:
        cout<<"\n\n\t Press to try again, Press 2 Go to Back, 0 to Exit.";
        cin>>try_key;
        system("cls");
        if(try_key==1)
            goto try_again_fact;
        else if(try_key==2)
            other_menu();
        else if(try_key==0)
            close();
        else{
            cout<<"\n\n\t Please Enter Valid Digit.";
            Sleep(2000);
            goto invalid_fact;
        }
        break;
    case 2:
        combination();break;
    case 3:
        prime_factor();break;
    case 4:
        table();break;
    case 0:
        main_menu();break;
    default:
        cout<<"\n\t Invalid Choice.\n\t Please Enter Valid Choice";
        Sleep(2000);
        system("cls");
        goto try_again_other_menu;
    }
}
void circle()
{
    float r,area,circum,dia;
    try_again_circle:
    cout<<endl<<" Enter radius of Circle: ";
    cin>>r;
    system("cls");
    area=3.14159*r*r;
    circum=2*3.14159*r;
    dia=2*r;
    cout<<endl<<"\t Area of Circle: "<<area;
    cout<<endl<<"\t Circumference : "<<circum;
    cout<<endl<<"\t The Diameter  : "<<dia;
    invalid_circle:
    cout<<"\n\n Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
    cin>>try_key;
    system("cls");
    if(try_key==1)
        goto try_again_circle;
    else if(try_key==2)
        other_menu();
    else if(try_key==0)
        close();
    else{
        cout<<"\n\n Please Enter Valid Digit.";
        Sleep(2000);
        goto invalid_circle;
    }
}
void rectangle()
{
    float pari,l,b,area,diagonal;
    try_again_rect:
        cout<<endl<<" Enter Length : ";
        cin>>l;
        cout<<endl<<" Enter Breadth : ";
        cin>>b;
        system("cls");
        area=l*b;
        pari=2*(l+b);
        diagonal=sqrt(pow(l,2)+pow(b,2));
        cout<<endl<<" Area of Rectangle     : "<<area;
        cout<<endl<<" Parimeter of Rectangle: "<<pari;
        cout<<endl<<" Length of  Diagonal   : "<<diagonal;
        invalid_rect:
        cout<<"\n\n Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
        cin>>try_key;
        system("cls");
        if(try_key==1)
            goto try_again_rect;
        else if(try_key==2)
            other_menu();
        else if(try_key==0)
            close();
        else{
            cout<<"\n\n Please Enter Valid Digit.";
            Sleep(2000);
            goto invalid_rect;
        }
}
int factorial(int n)
{
    int fact=1,i;
    for(i=n;i>=1;i--)
        fact*=i;
    return fact;
}
void combination()
{
        int n,r,C;
        cout<<endl<<"\t\tEnter Values :-"<<endl;
        cout<<"\t\t n = ";
        cin>>n;
        cout<<"\t\t r = ";
        cin>>r;
        C=factorial(n)/(factorial(n-r)*factorial(r));
        cout<<endl<<"\t\t Combination is : "<<C;
        invalid_comb:
            cout<<"\n\n\t\t Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
            cin>>try_key;
            system("cls");
            if(try_key==1)
                combination();
            else if(try_key==2)
                other_menu();
            else if(try_key==0)
                close();
            else{
                cout<<"\n\n\t\t Please Enter Valid Digit.";
                Sleep(2000);
                goto invalid_comb;
            }
}
void prime_factor()
{
    int x,i;
    try_again_prime:
    cout<<endl<<" Enter an Integer Number : ";
    cin>>x;
    for(i=2;x>1;i++)
        while(x%i==0){
            cout<<" "<<i;
            x=x/i;
        }
    invalid_prime:
            cout<<"\n\n Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
            cin>>try_key;
            system("cls");
            if(try_key==1)
                goto try_again_prime;
            else if(try_key==2)
                other_menu();
            else if(try_key==0)
                close();
            else{
                cout<<"\n\n Please Enter Valid Digit.";
                Sleep(2000);
                goto invalid_prime;
            }
}
void age()
{
    int d,m,y,cd,cm,cy;
    char key;
    try_again_age:
    printf("\n\t Date of Birth  (DD/MM/YYYY): ");
    scanf("%d/%d/%d",&d,&m,&y);
    printf("\n\t Current Date (DD/MM/YYYY): ");
    scanf("%d/%d/%d",&cd,&cm,&cy);
    if(d>31||cd>31||m>12||cm>12){
        printf("\n\t Invalid Date...!!");
        Sleep(1000);
        invalid_age:
        printf("\n\t Try Again...?\n\t --> Y/y\n\t --> N/n :\n\t");
        scanf("%c",&key);
        system("cls");
        if(key=='Y'||key=='y')
            age();
        else if(key=='N'|| key=='n')
            main_menu();
        else{
            printf("\n\t Enter Valid Digit");
            system("cls");
            goto invalid_age;
        }
    }
    else{
    if(d>cd){
        cd=cd+31;
        cm--;
    }
    if(m>cm){
        cm=cm+12;
        cy--;
    }
    printf("\n\t Year  : %d",cy-y);
    printf("\n\t Month : %d",cm-m);
    printf("\n\t Day   : %d",cd-d);
    printf("\n\n\t Press 1 to Calculate Again.\n\t Press 2 Go to Main Menu.\n\t Press 0 to Exit \n");
    cin>>try_key;
    system("cls");
    if(try_key==1)
        age();
    else if(try_key==2)
        main_menu();
    else if(try_key==0)
        close();
    else{
        cout<<"\n\n\t Please Enter Valid Digit.";
        Sleep(2000);
        goto invalid_age;
    }
    }
}

void quadratic_eqn()
{
    int a,b,c,D;
    float x,y,real,img;
    try_again_quadratic:
    cout<<endl<<"\t Enter Co-efficient of x^2, x and Constant terms : ";
    cout<<endl<<"\t a = ";
    cin>>a;
    cout<<endl<<"\t b = ";
    cin>>b;
    cout<<endl<<"\t c = ";
    cin>>c;
    D=b*b-4*a*c;
    system("cls");
    if(D<0){
        cout<<endl<<"\t Both Roots are Imaginary.";
        real=(float)-b/(2*a);
        img=(float)sqrt(-D)/(2*a);
        cout<<endl<<endl<<"\t x = "<<real<<"+"<<img<<"i"<<endl<<"\t y = "<<real<<"-"<<img<<"i";
    }
    if(D==0){
        cout<<endl<<"\t Both Roots are Equal.";
        x=(float)-b/(2.0*a);
        y=(float)-b/(2.0*a);
        cout<<endl<<endl<<"\t x = "<<x<<endl<<"\t y = "<<y;
    }
    if(D>0){
        cout<<"\t Roots are Real & Distinct.";
        x=(-b+sqrt(D))/(2*a);
        y=(-b-sqrt(D))/(2*a);
        cout<<endl<<endl<<"\t x = "<<x<<endl<<"\t y = "<<y<<endl;
    }
    invalid_quadratic:
    cout<<"\n\n\t Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
    cin>>try_key;
    system("cls");
    if(try_key==1)
        goto try_again_quadratic;
    else if(try_key==2)
        eqn_menu();
    else if(try_key==0)
        close();
    else{
        cout<<"\n\n\t Please Enter Valid Digit.";
        Sleep(2000);
        goto invalid_quadratic;
    }
}

void eqn_menu()
{
    system("color 2");
    int button;
    try_again_eqn_menu:
        printf("\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2  QUADRATIC EQUATION  \xB2\xB2\xB2\xB2\xB2\xB2");
        cout<<endl<<"\t\t [1] Roots of 2 Degree Equation";
        cout<<endl<<"\t\t [2] Roots of 3 Degree Equation";
        cout<<endl<<"\t\t [0] Back";
        cout<<endl<<endl<<"\t\t Press any Button : ";
        cin>>button;
        system("cls");
        switch(button){
        case 1:
            quadratic_eqn();break;
        case 2:
           // degree3_eqn();
           break;
        case 0:
            main_menu();break;
        default:
            cout<<"\n\t\t Invalid Choice.\n\t\t Please Enter Valid Choice";
        Sleep(2000);
        system("cls");
        goto try_again_eqn_menu;
        }
}
void time_menu()
{
    system("color 2");
    int button;
    try_again_time_menu:
        printf("\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2  TIME MENU  \xB2\xB2\xB2\xB2\xB2\xB2");
        cout<<"\n\t\t [1] Time Addition";
        cout<<"\n\t\t [2] Time Subtraction";
        cout<<"\n\t\t [0] Back";
        cout<<"\n\n\t\t Select any one : ";
        cin>>button;
        system("cls");
        switch(button){
        case 1:
            time_add();break;
        case 2:
            time_sub();break;
        case 0:
            main_menu();break;
        default:
            cout<<"\n\t\t Invalid Choice.\n\t\t Please Enter Valid Choice";
            Sleep(2000);
            system("cls");
            goto try_again_time_menu;
        }
}
void intersec_set()
{
    int a[10],b[10],c[20],m,n,i,j;
    int k=0,flag;
    cout<<"\n\t Enter number of Elements of First Set : ";
    cin>>m;
    cout<<"\n\t Enter elements :"<<endl;
    for(i=0;i<m;i++){
        cout<<"\t";
        cin>>a[i];
    }
    cout<<"\n\t Enter number of Elements of Second Set : ";
    cin>>n;
    cout<<"\n\t Enter elements :"<<endl;
    for(j=0;j<n;j++){
        cout<<"\t";
        cin>>b[j];
    }
    system("cls");
    cout<<endl<<"\t Elements of First Set (A) :";
    cout<<"{ ";
    for(i=0;i<m;i++)
        cout<<a[i]<<"  ";
    cout<<"}"<<endl;
    cout<<endl<<"\t Elements of Second Set (B): ";
    cout<<"{ ";
    for(j=0;j<n;j++)
        cout<<b[j]<<"  ";
    cout<<"}"<<endl;
    cout<<endl<<"\t Intersection : { ";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(b[i]==a[j])
                flag=1;
        }
        if(flag==1)
            cout<<b[i]<<"  ";
        flag=0;
    }
    cout<<"}"<<endl<<endl;
    invalid_intersec:
        cout<<"\n\tPress 1 to Calculate Again, Press 2 to Return MENU, 0 to Exit : ";
        cin>>try_key;
        system("cls");
        if(try_key==1)
            intersec_set();
        else if(try_key==2)
            set_menu();
        else if(try_key==0)
            close();
        else{
            cout<<"\n\t Invalid Selection!!!\n\t Please Enter Valid NUMBER.";
            system("cls");
            goto invalid_intersec;
        }
}
void union_set()
{
    int a[10],b[10],c[20],m,n,i,j;
    int k=0,flag=0,ch;
    cout<<"\n\t Enter number of Elements of First Set : ";
    cin>>m;
    cout<<"\n\t Enter elements :"<<endl;
    for(i=0;i<m;i++){
        cout<<"\t";
        cin>>a[i];
    }
    cout<<"\n\t Enter number of Elements of Second Set : ";
    cin>>n;
    cout<<"\n\t Enter elements :"<<endl;
    for(j=0;j<n;j++){
        cout<<"\t";
        cin>>b[j];
     }
    system("cls");
    cout<<endl<<"\t Elements of First Set (A) : ";
    cout<<"{ ";
    for(i=0;i<m;i++)
        cout<<a[i]<<"  ";
    cout<<"}"<<endl;
    cout<<endl<<"\t Elements of Second Set (B): ";
    cout<<"{ ";
    for(j=0;j<n;j++)
        cout<<b[j]<<"  ";
    cout<<"}"<<endl;
    for(i=0;i<m;i++){
        c[k]=a[i];
        k++;
    }
    for(i=0;i<n;i++){
        flag=0;
        for(j=0;j<m;j++){
            if(b[i]==c[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            c[k]=b[i];
            k++;
        }
    }
    cout<<endl<<"\t Resultant Set (AUB) : { ";
    for(i=0;i<k;i++)
        cout<<c[i]<<"  ";
    cout<<"}"<<endl<<endl;
    invalid_union:
        cout<<"\n\tPress 1 to Calculate Again, Press 2 to Return MENU, 0 to Exit : ";
        cin>>try_key;
        system("cls");
        if(try_key==1)
            union_set();
        else if(try_key==2)
            set_menu();
        else if(try_key==0)
            close();
        else{
            cout<<"\n\t Invalid Selection!!!\n\t Please Enter Valid NUMBER.";
            system("cls");
            goto invalid_union;
        }
}

void time_sub()
{
    int h1,h2,min1,min2,th,tmin;
    invalid_sub:
    cout<<"\n\tEnter Hours & Minutes : "<<endl;
    cin>>h1>>min1;
    cout<<"\n\tAgain Enter Hours & Minutes : "<<endl;
    cin>>h2>>min2;
    if(h1>h2 && min1>min2){
        th=h1-h2;
        tmin=min1-min2;
    }
    else if(h1>h2 && min1<min2){
        tmin=min1+60-min2;
        h1--;
        th=h1-h2;
    }
    else{
        cout<<"\n\t Invalid Input!!!\n\t Please Enter Valid Data.";
        Sleep(3000);
        system("cls");
        goto invalid_sub;
    }
    system("cls");
    cout<<"\t\t\t"<<h1<<" : "<<min1<<endl;
    cout<<"\t\t\t"<<h2<<" : "<<min2<<endl;
    cout<<"\t";
    for(int i=0;i<30;i++)
        cout<<"-";
    cout<<"\n\t Answer :\t"<<th<<" : "<<tmin<<" Hours"<<endl;
    invalid_tsub:
        cout<<"\n\tPress 1 to Calculate Again, Press 2 to Return MENU, 0 to Exit : ";
        cin>>try_key;
        system("cls");
        if(try_key==1)
            time_sub();
        else if(try_key==2)
            time_menu();
        else if(try_key==0)
            close();
        else{
            cout<<"\n\t Invalid Selection!!!\n\t Please Enter Valid NUMBER.";
            system("cls");
            goto invalid_tsub;
        }
}

void time_add()
{
    int h1,h2,min1,min2,th,tmin;
    cout<<"\n\t\tEnter Hours & Minutes : "<<endl;
    cin>>h1>>min1;
    cout<<"\n\t\tAgain Enter Hours & Minutes : "<<endl;
    cin>>h2>>min2;
    th=h1+h2;
    tmin=min1+min2;
    if(tmin>120 && tmin<180){
        tmin=tmin-120;
        th=th+2;
    }
    else if(tmin>60){
        tmin=tmin-60;
        th++;
    }
    system("cls");
    cout<<"\t\t\t"<<h1<<" : "<<min1<<endl;
    cout<<"\t\t\t"<<h2<<" : "<<min2<<endl;
    cout<<"\t";
    for(int i=0;i<30;i++)
        cout<<"-";
    cout<<"\n\t Answer :\t"<<th<<" : "<<tmin<<" Hours"<<endl;
    invalid_tadd:
        cout<<"\n\tPress 1 to Calculate Again, Press 2 to Return MENU, 0 to Exit : ";
        cin>>try_key;
        system("cls");
        if(try_key==1)
            time_add();
        else if(try_key==2)
            time_menu();
        else if(try_key==0)
            close();
        else{
            cout<<"\n\t Invalid Selection!!!\n\t Please Enter Valid NUMBER.";
            system("cls");
            goto invalid_tadd;
        }
}
void main_menu()
{
    system("color f2");
    int button;
    try_again_main_menu:
    printf("\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2  CALCULATOR  \xB2\xB2\xB2\xB2\xB2\xB2");
    cout<<"\n\t\t [1]  Roman Numerals"<<endl;
    cout<<"\t\t [2]  Conversions"<<endl;
    cout<<"\t\t [3]  Matrix"<<endl;
    cout<<"\t\t [4]  Temperature"<<endl;
    cout<<"\t\t [5]  Time"<<endl;
    cout<<"\t\t [6]  Set"<<endl;
    cout<<"\t\t [7]  Quadratic Equations"<<endl;
    cout<<"\t\t [8]  Arithmetic Operations"<<endl;
    cout<<"\t\t [9]  Age Calculation"<<endl;
    cout<<"\t\t [10]  Solid Shapes i.e. Cone, Cube, Cylinder"<<endl;
    cout<<"\t\t [11] Other Calculations"<<endl;
    cout<<"\t\t [0] Exit the Program"<<endl<<endl;
    cout<<"\t\t Press any Button : ";
    cin>>button;
    system("cls");
    switch(button){
    case 1:
        roman();break;
    case 2:
        conversion_menu();break;
    case 3:
        matrix_menu();break;
    case 4:
        temp_menu();break;
    case 5:
        time_menu();break;
    case 6:
        set_menu();break;
    case 7:
        quadratic_eqn();break;
    case 8:
        operation_menu();break;
    case 9:
        age();break;
    case 10:
        solid_shape();break;
    case 11:
        other_menu();break;
    case 0:
        close();break;
    default:
            cout<<"\n\t\t Invalid Choice.\n\t\t Please Enter Valid Choice";
            Sleep(2000);
            system("cls");
            goto try_again_main_menu;
    }
}
void set_menu()
{
    system("color 2");
    int button;
    try_again_union_menu:
    printf("\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2  SET MENU  \xB2\xB2\xB2\xB2\xB2\xB2");
    cout<<endl<<"\t\t [1] Union of SET ";
    cout<<endl<<"\t\t [2] Intersection of SET ";
    cout<<endl<<"\t\t [0] Back";
    cout<<endl<<endl<<"\t\t Select Any Button : ";
    cin>>button;
    system("cls");
    switch(button){
    case 1:
        union_set();break;
    case 2:
        intersec_set();break;
    case 0:
        main_menu();break;
    default:
        cout<<"\n\t\t Invalid Choice.\n\t\t Please Enter Valid Choice";
        Sleep(2000);
        system("cls");
        goto try_again_union_menu;
    }
}
void temp_menu()
{
    system("color 2");
    int choice;
    try_again_temp_menu:
    printf("\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2  TEMPERATURE MENU  \xB2\xB2\xB2\xB2\xB2\xB2");
    cout<<"\n\t\t Press [1] Fahrenheit to Celsius(C) / Kelvin(K)";
    cout<<"\n\t\t Press [2] Celsius to Kelvin(k) / Fahrenheit(f)";
    cout<<"\n\t\t Press [3] Kelvin to Fahrenheit(F) / Celsius(C)";
    cout<<"\n\t\t Press [4] Exit";
    cout<<"\n\t\t Press [0] Back\n\n";
    cout<<"\t\t Select any Option : ";
    cin>>choice;
    system("cls");
    switch(choice){
    case 1:
        fahren_to_all();break;
    case 2:
        cel_to_all();break;
    case 3:
        kel_to_all();break;
    case 4:
        close();break;
    case 0:
        main_menu();break;
    default:
        cout<<"\n\t\t Invalid Choice.\n\t\t Please Enter Valid Choice";
        Sleep(3000);
        system("cls");
        goto try_again_temp_menu;
    }
}
void fahren_to_all()
{
    float f,c=0,k;
    try_again_f:
    cout<<"\n\t\t Enter Temperature in Fahrenheit : ";
    cin>>f;
    c=(5*(f-32))/9;
    k=c+273.15;
    cout<<"\n\t\t Celsius : "<<c;
    cout<<"\n\t\t Kelvin  : "<<k<<endl<<endl;
    invalid_f:
    cout<<"\n\n\t\t Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
    cin>>try_key;
    system("cls");
    if(try_key==1)
        goto try_again_f;
    else if(try_key==2)
        temp_menu();
    else if(try_key==0)
        close();
    else{
        cout<<"\n\n\t\t Please Enter Valid Digit.";
        Sleep(2000);
        goto invalid_f;
    }
}
void cel_to_all()
{
    float f,c,k;
    try_again_c:
    cout<<"\n\t\t Enter Temperature in Celsius : ";
    cin>>c;
    k=c+273.15;
    f=(c*9/5)+32;
    cout<<"\n\t\t Kelvin (K)     : "<<k;
    cout<<"\n\t\t Fahrenheit (F) : "<<f<<endl<<endl;
invalid_c:
    cout<<"\n\n\t\t Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
    cin>>try_key;
    system("cls");
    if(try_key==1)
        goto try_again_c;
    else if(try_key==2)
        temp_menu();
    else if(try_key==0)
        close();
    else{
        cout<<"\n\n\t\t Please Enter Valid Digit.";
        Sleep(2000);
        goto invalid_c;
    }
}
void kel_to_all()
{
    float f,c,k;
    try_again_k:
    cout<<"\n\t\t Enter Temperature in Kelvin (K) : ";
    cin>>k;
    c=k-273.15;
    f=(c*9/5)+32;
    cout<<"\n\t\t Celsius (C)    : "<<c;
    cout<<"\n\t\t Fahrenheit (F) : "<<f<<endl<<endl;
invalid_k:
    cout<<"\n\n\t\t Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
    cin>>try_key;
    system("cls");
    if(try_key==1)
        goto try_again_k;
    else if(try_key==2)
        temp_menu();
    else if(try_key==0)
        close();
    else{
        cout<<"\n\n\t\t Please Enter Valid Digit.";
        Sleep(2000);
        goto invalid_k;
    }
}

void matrix_menu()
{
    system("color 2");
    int choice;
    try_again_matrix_menu:
        printf("\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2  MATRIX MENU  \xB2\xB2\xB2\xB2\xB2\xB2");
    cout<<"\n\t\t Press [1] Matrix Addition";
    cout<<"\n\t\t Press [2] Matrix Subtraction";
    cout<<"\n\t\t Press [3] Matrix Multiplication";
    cout<<"\n\t\t Press [4] Matrix Transpose";
    cout<<"\n\t\t Press [5] To check whether Matrix is Skew Symmetric or Symmetric";
    cout<<"\n\t\t Press [0] Back";
    cout<<"\n\n\t\t Enter your choice : ";
    cin>>choice;
    system("cls");
    switch(choice){
    case 1:
        Matrix_add(); break;
    case 2:
        Matrix_sub(); break;
    case 3:
        Matrix_mul(); break;
    case 4:
        transpose(); break;
    case 5:
        symmetric(); break;
    case 0:
        main_menu(); break;
    default :
        cout<<"\n\t\t Invalid Choice.\n\t\t Please Enter Valid Choice";
        Sleep(3000);
        system("cls");
        goto try_again_matrix_menu;
    }
}
void symmetric()
{
    int a[4][4],i,j,order;
    cout<<"\n\tEnter order of Matrix : ";
    cin>>order;
    cout<<"\n\tEnter the Elements :"<<endl;
    for(i=1;i<=order;i++)
        for(j=1;j<=order;j++){
            cout<<"\t\t";
            cin>>a[i][j];
        }
    system("cls");
    cout<<"\n\tThe Matrix A :\n";
    for(i=1;i<=order;i++){
        cout<<"\t\t\t";
        for(j=1;j<=order;j++)
            cout<<a[i][j]<<"  ";
        cout<<endl;
    }
    cout<<"\n\tTranspose of Matrix A :\n";
    for(i=1;i<=order;i++){
        cout<<"\t\t\t";
        for(j=1;j<=order;j++)
            cout<<a[j][i]<<"  ";
        cout<<endl;
    }
    int f;
    int g=0;
    for(i=1;i<=order;i++){
        f=1;
        for(j=1;j<=order;j++){
            if(a[i][j]!=a[j][i]){
                f=0;
                break;
            }
            else if(a[i][j]!=-a[j][i]){
                g=1;
                break;
            }
        }
    }
    if(f==1)
        cout<<"\n\tThis is a Symmetric Matrix.";
    else if(g==0)
        cout<<"\n\tThis is a Skew-Symmetric Matrix.";
        else
            cout<<"\n\tThis is neither Symmetric nor Skew-Symmetric.";
    try_again_symm_invalid:
    cout<<"\n\n\t Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
    cin>>try_key;
    system("cls");
    if(try_key==1)
        symmetric();
    else if(try_key==2)
        matrix_menu();
    else if(try_key==0)
        close();
    else{
        cout<<"\n\n\t Please Enter Valid Digit.";
        Sleep(2000);
        goto try_again_symm_invalid;
    }
}

void transpose()
{
    int a[4][4],i,j,row,col;
    cout<<"\n\tEnter Number of Rows : ";
    cin>>row;
    cout<<"\n\tEnter Number of Columns : ";
    cin>>col;
    cout<<"\n\tEnter the Elements :"<<endl;
    for(i=1;i<=row;i++)
        for(j=1;j<=col;j++){
            cout<<"\t\t";
            cin>>a[i][j];
        }
    system("cls");
    cout<<"\n\tThe Matrix A :\n";
    for(i=1;i<=row;i++){
        cout<<"\t\t\t";
        for(j=1;j<=col;j++)
            cout<<a[i][j]<<"  ";
        cout<<endl;
    }
    cout<<"\n\tTranspose of Matrix A :\n";
    for(i=1;i<=col;i++){
        cout<<"\t\t\t";
        for(j=1;j<=row;j++)
            cout<<a[j][i]<<"  ";
        cout<<endl;
    }
    try_again_trans_invalid:
    cout<<"\n\n\t Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
    cin>>try_key;
    system("cls");
    if(try_key==1)
        transpose();
    else if(try_key==2)
        matrix_menu();
    else if(try_key==0)
        close();
    else{
        cout<<"\n\n\t Please Enter Valid Digit.";
        Sleep(2000);
        goto try_again_trans_invalid;
    }
}

void Matrix_mul()
{
    int a[4][4],b[4][4],c[4][4],i,j,k,r1,r2,c1,c2;
    system("cls");
    try_again_matrix_mul:
    cout<<"\n\tEnter Number of Rows of Matrix A : ";
    cin>>r1;
    cout<<"\n\tEnter Number of Columns of Matrix A : ";
    cin>>c1;
    cout<<"\n\tEnter Number of Rows of Matrix B : ";
    cin>>r2;
    cout<<"\n\tEnter Number of Columns of Matrix B : ";
    cin>>c2;
    if(c1==r2 && r1==c2)
    {
        cout<<"\n\tBoth Multiplication is Possible.";
        Sleep(4000);
        system("cls");
        cout<<"\n\tEnter Elements of Matrix A:"<<endl;
        for(i=1;i<=r1;i++)
            for(j=1;j<=c1;j++){
                cout<<"\t\t";
                cin>>a[i][j];
            }
        cout<<"\n\tEnter Elements of Matrix B:"<<endl;
        for(i=1;i<=r2;i++)
            for(j=1;j<=c2;j++){
                cout<<"\t\t";
                cin>>b[i][j];
            }
        system("cls");
        cout<<"\n\tMatrix A :\n";
        for(i=1;i<=r1;i++){
            cout<<"\t\t\t";
            for(j=1;j<=c1;j++)
                cout<<a[i][j]<<"  ";
            cout<<endl;
        }
        cout<<"\n\tMatrix B :\n";
        for(i=1;i<=r2;i++){
            cout<<"\t\t\t";
            for(j=1;j<=c2;j++)
                cout<<b[i][j]<<"  ";
            cout<<endl;
        }
        for(i=1;i<=c1;i++)
            for(j=1;j<=r2;j++){
                c[i][j]=0;
                for(k=1;k<=r2;k++)
                    c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
        cout<<"\n\tProduct of Matrices (A*B):"<<endl;
        for(i=1;i<=r1;i++){
            cout<<"\t\t\t";
            for(j=1;j<=c2;j++)
                cout<<c[i][j]<<"  ";
            cout<<endl;
        }
        for(i=1;i<=c2+1;i++)
            for(j=1;j<=r1+1;j++){
                c[i][j]=0;
                for(k=1;k<=r1;k++)
                    c[i][j]=c[i][j]+(b[i][k]*a[k][j]);
            }
        cout<<"\n\tProduct of Matrices (B*A):"<<endl;
        for(i=1;i<=r2;i++){
            cout<<"\t\t\t";
            for(j=1;j<=c1;j++)
                cout<<c[i][j]<<"  ";
            cout<<endl;
        }
    }
    else if(c1==r2)
    {
        system("cls");
        cout<<"\n\tEnter Elements of Matrix A:"<<endl;
        for(i=1;i<=r1;i++)
            for(j=1;j<=c1;j++){
                cout<<"\t\t";
                cin>>a[i][j];
            }
        cout<<"\n\tEnter Elements of Matrix B:"<<endl;
        for(i=1;i<=r2;i++)
            for(j=1;j<=c2;j++){
                cout<<"\t\t";
                cin>>b[i][j];
            }
        system("cls");
        cout<<"\n\tMatrix A :\n";
        for(i=1;i<=r1;i++){
            cout<<"\t\t\t";
            for(j=1;j<=c1;j++)
                cout<<a[i][j]<<"  ";
            cout<<endl;
        }
        cout<<"\n\tMatrix B :\n";
        for(i=1;i<=r2;i++){
            cout<<"\t\t\t";
            for(j=1;j<=c2;j++)
                cout<<b[i][j]<<"  ";
            cout<<endl;
        }
        for(i=1;i<=c1;i++)
            for(j=1;j<=r2;j++){
                c[i][j]=0;
                for(k=1;k<=r2;k++)
                    c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
        cout<<"\n\tProduct of Matrices (A*B):"<<endl;
        for(i=1;i<=r1;i++){
            cout<<"\t\t\t";
            for(j=1;j<=c2;j++)
                cout<<c[i][j]<<"  ";
            cout<<endl;
        }
    }
    else if(r1==c2)
    {
        system("cls");
        cout<<"\n\tEnter Elements of Matrix A:"<<endl;
        for(i=1;i<=r1;i++)
            for(j=1;j<=c1;j++){
                cout<<"\t\t";
                cin>>a[i][j];
            }
        cout<<"\n\tEnter Elements of Matrix B:"<<endl;
        for(i=1;i<=r2;i++)
            for(j=1;j<=c2;j++){
                cout<<"\t\t";
                cin>>b[i][j];
            }
        system("cls");
        cout<<"\n\tMatrix A :\n";
        for(i=1;i<=r1;i++){
            cout<<"\t\t\t";
            for(j=1;j<=c1;j++)
                cout<<a[i][j]<<"  ";
            cout<<endl;
        }
        cout<<"\n\tMatrix B :\n";
        for(i=1;i<=r2;i++){
            cout<<"\t\t\t";
            for(j=1;j<=c2;j++)
                cout<<b[i][j]<<"  ";
            cout<<endl;
        }
        for(i=1;i<=c2;i++)
            for(j=1;j<=r1;j++){
                c[i][j]=0;
                for(k=1;k<=r1;k++)
                    c[i][j]=c[i][j]+(b[i][k]*a[k][j]);
            }
        cout<<"\n\tProduct of Matrices (A*B):"<<endl;
        for(i=1;i<=r2;i++){
            cout<<"\t\t\t";
            for(j=1;j<=c1;j++)
                cout<<c[i][j]<<"  ";
            cout<<endl;
        }
    }
    else
    {
        cout<<"\n\tMultiplication of (A*B) or (B*A) can't Possible"<<endl<<"\tPlease Enter Valid Order of Matrix.";
        Sleep(3000);
        system("cls");
        goto try_again_matrix_mul;
    }
    try_again_mul_invalid:
    cout<<"\n\n\t Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
    cin>>try_key;
    system("cls");
    if(try_key==1)
        Matrix_mul();
    else if(try_key==2)
        matrix_menu();
    else if(try_key==0)
        close();
    else{
        cout<<"\n\n\t Please Enter Valid Digit.";
        Sleep(2000);
        goto try_again_mul_invalid;
    }
}

void Matrix_sub()
{
    int a[3][3],b[3][3],c[3][3],i,j,row,col;
    cout<<"\n\tEnter Number of Rows : ";
    cin>>row;
    cout<<"\n\tEnter Number of Columns : ";
    cin>>col;
    cout<<"\n\tEnter Elements of First Matrix :"<<endl;
    for(i=0;i<=row-1;i++)
        for(j=0;j<=col-1;j++){
            cout<<"\t\t";
            cin>>a[i][j];
        }
    cout<<"\n\tEnter Elements of Second Matrix :"<<endl;
    for(i=0;i<=row-1;i++)
        for(j=0;j<=col-1;j++){
            cout<<"\t\t";
            cin>>b[i][j];
        }
    system("cls");
    cout<<"\n\tFirst Matrix :\n";
    for(i=0;i<=row-1;i++){
        cout<<"\t\t\t";
        for(j=0;j<=col-1;j++)
            cout<<a[i][j]<<"  ";
        cout<<endl;
    }
    cout<<"\n\tSecond Matrix :\n";
    for(i=0;i<=row-1;i++){
        cout<<"\t\t\t";
        for(j=0;j<=col-1;j++)
            cout<<b[i][j]<<"  ";
        cout<<endl;
    }
    for(i=0;i<=row-1;i++)
        for(j=0;j<=col-1;j++)
            c[i][j]=a[i][j]-b[i][j];
    cout<<"\n\tResultant Matrix :\n";
    for(i=0;i<=row-1;i++){
        cout<<"\t\t\t";
        for(j=0;j<=col-1;j++)
            cout<<c[i][j]<<"  ";
        cout<<endl;
    }
    try_again_sub_invalid:
    cout<<"\n\n\t Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
    cin>>try_key;
    system("cls");
    if(try_key==1)
        Matrix_sub();
    else if(try_key==2)
        matrix_menu();
    else if(try_key==0)
        close();
    else{
        cout<<"\n\n\t Please Enter Valid Digit.";
        Sleep(2000);
        goto try_again_sub_invalid;
    }
}
void Matrix_add()
{
    int a[3][3],b[3][3],c[3][3],i,j,row,col;
    cout<<"\n\tEnter Number of Rows : ";
    cin>>row;
    cout<<"\n\tEnter Number of Columns : ";
    cin>>col;
    cout<<"\n\tEnter Elements of First Matrix :"<<endl;
    for(i=0;i<=row-1;i++)
        for(j=0;j<=col-1;j++){
            cout<<"\t\t";
            cin>>a[i][j];
        }
    cout<<"\n\tEnter Elements of Second Matrix :"<<endl;
    for(i=0;i<=row-1;i++)
        for(j=0;j<=col-1;j++){
            cout<<"\t\t";
            cin>>b[i][j];
        }
    system("cls");
    cout<<"\n\tFirst Matrix :\n";
    for(i=0;i<=row-1;i++){
        cout<<"\t\t\t";
        for(j=0;j<=col-1;j++)
            cout<<a[i][j]<<"  ";
        cout<<endl;
    }
    cout<<"\n\tSecond Matrix :\n";
    for(i=0;i<=row-1;i++){
        cout<<"\t\t\t";
        for(j=0;j<=col-1;j++)
            cout<<b[i][j]<<"  ";
        cout<<endl;
    }
    for(i=0;i<=row-1;i++)
        for(j=0;j<=col-1;j++)
            c[i][j]=a[i][j]+b[i][j];
    cout<<"\n\tResultant Matrix :\n";
    for(i=0;i<=row-1;i++){
        cout<<"\t\t\t";
        for(j=0;j<=col-1;j++)
            cout<<c[i][j]<<"  ";
        cout<<endl;
    }
    try_again_add_invalid:
    cout<<"\n\n\t Press 1 to TRY AGAIN,  Press 2 Go to Back, 0 to Exit.";
    cin>>try_key;
    system("cls");
    if(try_key==1)
        Matrix_add();
    else if(try_key==2)
        matrix_menu();
    else if(try_key==0)
        close();
    else{
        cout<<"\n\n\t Please Enter Valid Digit.";
        Sleep(2000);
        goto try_again_add_invalid;
    }
}

void conversion_menu()
{
    system("color 2");
    int choice;
    try_again_conversion_menu:
    printf("\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2  CONVERSION MENU  \xB2\xB2\xB2\xB2\xB2\xB2");
    cout<<"\n\t\t [1] Binary to Decimal/HexaDecimal/Octal";
    cout<<"\n\t\t [2] Decimal to HexaDecimal/Octal/Binary";
    cout<<"\n\t\t [3] Octal to Decimal/HexaDecimal/Binary";
    cout<<"\n\t\t [4] HexaDecimal to Octal/Binary/Decimal";
    cout<<"\n\t\t [0] Back"<<endl<<endl;
    cout<<"\n\t\t Enter your Choice : ";
    cin>>choice;
    system("cls");
    switch(choice){
    case 1:
        try_again_bin:
        long num,p,q,r;
        cout<<"\n\t\t Enter Binary Digits : ";
        cin>>num;
        p=bin_to_dec(num);
        cout<<"\n\t\t BIN : "<<num;
        cout<<"\n\t\t DEC : "<<p;
        q=dec_to_octal(p);
        cout<<"\n\t\t OCT : "<<q;
        dec_to_hexa(p);
        invalid:
            cout<<"\n\n\t\t Press 1 to try again, Press 2 Go to Main Menu, 0 to Exit : ";
            cin>>try_key;
            system("cls");
            if(try_key==1)
                goto try_again_bin;
            else if(try_key==0)
                close();
            else if(try_key==2)
                goto try_again_conversion_menu;
            else{
                cout<<"\n\t\t Invalid Input!!\n Please Enter Valid Number.";
                Sleep(3000);
                system("cls");
                goto invalid;
            }
        break;
    case 2:
        try_again_dec:
        int dec;
        cout<<"\n\t\t Enter Decimal Number : ";
        cin>>dec;
        dec_to_bin(dec);
        cout<<"\n\t\t OCT : "<<dec_to_octal(dec);
        dec_to_hexa(dec);
        cout<<"\n\t\t DEC : "<<dec;
        invalid_dec:
            cout<<"\n\n\t\t Press 1 to try again, Press 2 Goto Menu, 0 to Exit : ";
            cin>>try_key;
            system("cls");
            if(try_key==1)
                goto try_again_dec;
            else if(try_key==0)
                close();
            else if(try_key==2)
                goto try_again_conversion_menu;
            else{
                cout<<"\n\t\t Invalid Input!!\n\t\t Please Enter Valid Number.";
                Sleep(3000);
                system("cls");
                goto invalid_dec;
            }
        break;
    case 3:
        try_again_oct:
        int oct;
        cout<<"\n\t\t Enter Octal Number : ";
        cin>>oct;
        p=octal_to_dec(oct);
        cout<<"\n\t\t OCT : "<<oct;
        cout<<"\n\t\t DEC : "<<p;
        dec_to_bin(p);
        dec_to_hexa(p);
        invalid_oct:
            cout<<"\n\n\t\t Press 1 to try again, Press 2 Goto Menu, 0 to Exit : ";
            cin>>try_key;
            system("cls");
            if(try_key==1)
                goto try_again_oct;
            else if(try_key==0)
                close();
            else if(try_key==2)
                goto try_again_conversion_menu;
            else{
                cout<<"\n\t\t Invalid Input!!\n\t\t Please Enter Valid Number.";
                Sleep(3000);
                system("cls");
                goto invalid_oct;
            }
        break;
    case 4:
        try_again_hexa:
        int decimal;
        decimal=hexa_to_dec();
        cout<<"\n\t\t DEC : "<<decimal;
        dec_to_bin(decimal);
        cout<<"\n\t\t OCT : "<<dec_to_octal(decimal);
        invalid_hexa:
            cout<<"\n\n\t\t Press 1 to try again, Press 2 Goto Menu, 0 to Exit : ";
            cin>>try_key;
            system("cls");
            if(try_key==1)
                goto try_again_hexa;
            else if(try_key==0)
                close();
            else if(try_key==2)
                goto try_again_conversion_menu;
            else{
                cout<<"\n\t\t Invalid Input!!\n\t\t Please Enter Valid Number.";
                Sleep(3000);
                system("cls");
                goto invalid_hexa;
            }
        break;
    case 0:
        main_menu();
        break;
    default:
        cout<<"\n\t\t Invalid Choice.\n\t\t Please Enter Valid Choice";
        Sleep(3000);
        system("cls");
        goto try_again_conversion_menu;
    }
}

void close()
{
    int a=3;
    system("color 4");
    printf("\n\n\t\t\tThis Mini Project is Made by : SARAJUDDIN, Jayad Ahmad & Mohd Fardeen\n\n");
    printf("\t\t\t\t");
    for(int i=1;i<=15;i++)
        if((i>=1&&i<=7)||(i>=9&&i<=15)){
            Sleep(200);
            printf("%c ",a);
        }
        else
            printf("HAVE A NICE DAY.");
    printf("\n\t\t\t\t\t\tThank You!\n\n\n");
}
int bin_to_dec(int bin)
{
    int s=0,i=0;
    while(bin){
        s=s+pow(2,i)*(bin%10);
        bin=bin/10;
        i++;
    }
    return s;
}
int dec_to_octal(int dec)
{
    int x=1,ans=0;
    while(x<=dec)
        x=x*8;
    x=x/8;
    while(x>0){
        int lastdigit=dec/x;
        dec=dec-lastdigit*x;
        x=x/8;
        ans=ans*10+lastdigit;
    }
    return ans;
}
void dec_to_hexa(int deci)
{
    int i=1,remain,quotient,j;
    char a[50];
    quotient=deci;
    while(quotient!=0){
        remain=quotient%16;
        if(remain<10)
            remain=remain+48;
        else
            remain=remain+55;
        a[i++]=remain;
        quotient=quotient/16;
    }
    cout<<"\n\t\t HEX : ";
    for(j=i-1;j>0;j--)
        cout<<a[j];
 }
void dec_to_bin(int dec)
{
    int i=0;
    int remain[20];
    while(dec!=0){
        remain[i]=dec%2;
        dec=dec/2;
        i++;
    }
    cout<<"\n\t\t BIN : ";
    for(int j=i-1;j>=0;j--)
        cout<<remain[j];
}
int octal_to_dec(int oct)
{
    int s=0,i=0;
    while(oct!=0){
        s=s+pow(8,i)*(oct%10);
        oct=oct/10;
        i++;
    }
    return s;
}
int hexa_to_dec()
{
    int sum=0,base=1;
    int i,len;
    char hexa[20];
    cout<<"\n\t\t Enter Hexadecimal Number : ";
    cin>>hexa;
    cout<<"\n\t\t HEX : "<<hexa;
    len=strlen(hexa);
    for(i=len-1;i>=0;i--){
        if(hexa[i]>='0' && hexa[i]<='9'){
            sum=sum+base*(hexa[i]-'0');
            base*=16;
        }
        else if(hexa[i]>='A' && hexa[i]<='F'){
            sum=sum+base*(hexa[i]-'A'+10);
            base*=16;
        }
        else if(hexa[i]>='a' && hexa[i]<='f'){
            sum=sum+base*(hexa[i]-'a'+10);
            base*=16;
        }
    }
    return sum;
}
