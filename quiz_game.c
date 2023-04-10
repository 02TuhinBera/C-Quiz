#include<stdio.h>
int main(){
    int n;
    int sum=0;
    int sum1=0, sum2=0, sum3=0, sum4=0, sum5=0, sum6=0, sum7=0, sum8=0, sum9=0, sum10=0;
    int ans1, ans2, ans3, ans4, ans5, ans6, ans7, ans8, ans9, ans10;
    int point1, point2, point3, point4, point5, point6, point7, point8, point9, point10;
    point1=0, point2=0, point3=0, point4=0, point5=0, point6=0, point7=0, point8=0, point9=0, point10=0;
    int point01, point02, point03, point04, point05, point06, point07, point08, point09, point010;
    point01=0, point02=0, point03=0, point04=0, point05=0, point06=0, point07=0, point08=0, point09=0, point010=0;
    
    printf("Welcome to the game\n\n");
    printf("> Press 7 to start the game\n");
    printf("> Press 0 to quite the game\n");
    scanf("%d", &n);

    if(n==7){
            printf("The game has started\n\n");
    }
    else if(n==0){
        printf("The game has ended\n\n");
    }
    else{
        printf("Invailed\n\n");
    }
    if(n==7){
        printf("1) Who is the father of c language?\n\n");
        printf("1) Steve Jobs\n");
        printf("2) James Gosling\n");
        printf("3) Dennis Ritchie\n");
        printf("4) Rasmus Lerdorf\n");

        printf("Enter your answer: \n");
        scanf("%d", &ans1);

        if(ans1==3){
            printf("Correct answer\n");
            point1=5;
            printf("You have scored %d point\n\n", point1);
        }
        else{
            printf("Wrong answer\n");
            point01=0;
            printf("You have scored %d point\n\n", point01);
        }
        sum1=(point1+point01);
        

        printf("2) Which of the following is not a valid c variable name?\n");
        printf("1) int number;\n");
        printf("2) float rate;\n");
        printf("3) int variable_count;\n");
        printf("4) int $main;\n");

        printf("Enter your answer: \n");
        scanf("%d", &ans2);

        if(ans2==4){
            printf("Correct answer\n");
            point2=5;
            printf("You have scored %d point\n\n", point2);
        }
        else{
            printf("Wrong answer\n");
            point02=0;
            printf("You have scored %d point\n\n", point02);
        }
        sum2=(point2+point02);


        printf("3) All keywords in C are in ...........\n");
        printf("1) Lowercase letters\n");
        printf("2) UpperCase letters\n");
        printf("3) Came!Case letters\n");
        printf("4) None of the above\n");

        printf("Enter your answer: \n");
        scanf("%d", &ans3);

        if(ans3==1){
            printf("Correct answer\n");
            point3=5;
            printf("You have scored %d point\n", point3);
        }
        else{
            printf("Wrong answer\n\n");
            point03=0;
            printf("You have scored %d point\n\n", point03);
        }
        sum3=(point3+point03);


        printf("4) Which of the following cannot be a variable name in C?\n");
        printf("1) volatile\n");
        printf("2) true\n");
        printf("3) friend\n");
        printf("4) export\n");

        printf("Enter your answer: \n");
        scanf("%d", &ans4);

        if(ans4==1){
            printf("Correct answer\n");
            point4=5;
            printf("You have scored %d point\n\n", point4);
        }
        else{
            printf("Wrong answer\n");
            point04=0;
            printf("You have scored %d point\n\n", point04);
        }
        sum4=(point4+point04);


        printf("5) What is the 'short int' in C programming?\n");
        printf("1) The basic data type of C\n");
        printf("2) Qualifier\n");
        printf("3) Short is the quaifier and int is the basic data type\n");
        printf("4) All the mentioned\n");

        printf("Enter your answer: \n");
        scanf("%d", &ans5);

        if(ans5==3){
            printf("Correct answer\n");
            point5=5;
            printf("You have scored %d point\n\n", point5);
        }
        else{
            printf("Wrong answer\n");
            point05=0;
            printf("You have scored %d point\n\n", point05);
        }
        sum5=(point5+point05);

        printf("6) Which of the following declaration is not supported by C language?\n");
        printf("1) String str;\n");
        printf("2) char *str;\n");
        printf("3) float str=3e2;\n");
        printf("4) Both 'string str;' and 'float str=3e2'\n");

        printf("Enter your answer: \n");
        scanf("%d", &ans6);

        if(ans6==1){
            printf("Correct answer\n");
            point6=5;
            printf("You have scored %d point\n\n", point6);
        }
        else{
            printf("Wrong answer\n");
            point06=0;
            printf("You have scored %d point\n\n", point06);
        }
        sum6=(point6+point06);


        printf("7) Which keyword is used to prevent any change in the variable within a c program?\n");
        printf("1) immutable\n");
        printf("2) mutable\n");
        printf("3) const\n");
        printf("4) volatile\n");

        printf("Enter your answer: \n");
        scanf("%d", &ans7);

        if(ans7==3){
            printf("Correct answer\n");
            point7=5;
            printf("You have scored %d point\n\n", point7);
        }
        else{
            printf("Wrong answer\n");
            point07=0;
            printf("You have scored %d point\n\n", point07);
        }
        sum7=(point7+point07);


        printf("8) What is the result of logical or relation expression in C?\n");
        printf("1) True and False\n");
        printf("2) 0 and 1\n");
        printf("3) o if an expression is false and any positive number if an expression is true\n");
        printf("4) None of the above\n");

        printf("Enter your answer: \n");
        scanf("%d", &ans8);

        if(ans8==2){
            printf("Correct answer\n");
            point8=5;
            printf("You have scored %d point\n\n", point8);
        }
        else{
            printf("Wrong answer\n");
            point08=0;
            printf("You have scored %d point\n\n", point08);
        }
        sum8=(point8+point08);


        printf("9) Which of the following typecasting is accepted by C language?\n");
        printf("1) Widening conversions\n");
        printf("2) Narrowing conversions\n");
        printf("3) Widening & Narrowing conversions\n");
        printf("4) None of the above\n");

        printf("Enter your answer: \n");
        scanf("%d", &ans9);

        if(ans9==3){
            printf("Correct answer\n");
            point9=5;
            printf("You have scored %d point\n\n", point9);
        }
        else{
            printf("Wrong answer\n");
            point09=0;
            printf("You have scored %d point\n\n", point09);
        }
        sum9=(point9+point09);


        printf("10) Where in C the order of precedence of operators do not exit?\n");
        printf("1) Within conditional satements, if, else\n");
        printf("2) Within while, do-while\n");
        printf("3) Within a macro definition\n");
        printf("4) None of the mentioned\n");

        printf("Enter your answer: \n");
        scanf("%d", &ans10);

        if(ans10==4){
            printf("Correct answer\n");
            point10=5;
            printf("You have scored %d point\n\n", point10);
        }
        else{
            printf("Wrong answer\n");
            point010=0;
            printf("You have scored %d point\n\n", point010);
        }
        sum10=(point10+point010);



    }
    sum=(sum1+sum2+sum3+sum4+sum5+sum6+sum7+sum8+sum9+sum10);
    printf("Your total point is %d\n", sum);




 return 0;
}