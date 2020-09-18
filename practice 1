#include<stdio.h>
struct candidate{
	int age;
	int score;
};
int validateage(int age){
	if(age<0)
	return -1;
	else
	return 1;
}
int validatescore(int score){
	if(score<0||score>100)
	return -1;
	else
	return 1;
}
int qualify(int age,int score){
	if(age>20 && score>=65)
	return 0;
}
int main(void){
	struct candidate s;
	int checkage,checkscore,qualified;
	printf("enter age and score\n");
	scanf("%d",&s.age,&s.score);
	check age=validiteage(s.age);
	check score=validatescore(s.score);
	if(check age==1 && checkscore==1){
	qualified=qualify(s.age,s.score);
	if(qualified==1)
	printf("qualified!!");
	else
	printf("not qualified");
	}
else
	print("invalid age or score"); 
}
