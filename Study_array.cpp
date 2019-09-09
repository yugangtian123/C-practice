/*
 *定义变量于函数体之外默认初始化为0.__test as following
 *Avoid to assign a array by others.
 *
 *下标：标准库限定unsigned。
 *      内置类型无要求。
 */

#include<iostream>
using namespace std;
#define MAXSIZE 99

//int test_x1;
int main()
{
//    int test_x2;
    int a[MAXSIZE] = {1, 2, 9};

    //The array will be auto located by member's number.
    int mem_six[] = {7, 6, 3, 4, 5, 6};
    int test_a = *(mem_six + 2);// == mem_six[2]
    int *test_p = &mem_six[2];
//    cout << *test_p << endl;
    test_a = *mem_six + 2;
//    cout << a << endl;
    printf("The member's number of array is %d.\nThey are ", sizeof(mem_six) / 4);
    for(auto i : mem_six){
        printf("%d ", i);
    }
    printf("\n\n");




//    int *pont_arr = &a[0];
//    int *pont_arr1 = a;

//    int test_v1 = 10;
//    auto pont_v1(test_v1);
//    cout << pont_v1 << endl << endl;



    //50 int_pointer here.
    int *pnter[(0 + MAXSIZE) / 2];
    //point to a array which has six int_element.
    int (*pointer)[6] = &mem_six;
    for(int i = 0; i < 6; i++){
        // It is equal to *(p+i).
        printf("%x ", *(pointer[0]+i));
    }
    printf("\n\n");


    //So interesting, cause array "a"'s memory located behind array "mem_six".
    //That can be prove as following.
    for(int i = 0; i < 6; i++){
        // It is equal to *(p+i).
        printf("%x ", (pointer[0]+i));
    }
    printf("\n");
    printf("The start of array \"a\" is %x.", pointer[1]);
    printf("\n\n");


    string s[4] = {"Hi", "Hello", "What's up?", "Nice to meet you."};
    puts("What did you say at last?");
    printf("%s\n", &s[3][0]);// s.c_str()
    char lyric[] = "And, I can't deny your appetite.";
    // Although, here is a '\s' behind string "lyric". 27 + 1 in total.
    cout << lyric << " " << sizeof(lyric) << endl;




}
