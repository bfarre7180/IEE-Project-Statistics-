#include<stdio.h>
#include<iostream>
#include<chrono>
#include<iomanip>

// These will be the recursive functions 
void recursiveFunc1(int);
void recursiveFunc2(int);
void recursiveFunc3(int);
void recursiveFunc4(int);
int recursiveFunc5(int);
int recursiveFunc6(int);
int recursiveFunc7(int,int);
int recursiveFunc8(int,int);
int recursiveFunc9(int);
int recursiveFunc10(int,int);

// These will be the equivalent iterative functions 
void iterativeFunc1();
void iterativeFunc2();
void iterativeFunc3();
void iterativeFunc4();
int iterativeFunc5(int);
void iterativeFunc6(int);
void iterativeFunc7(int,int);
void iterativeFunc8(int,int);
int iterativeFunc9(int);
bool iterativeFunc10(int);


int main() {

    std::cout << "--------------Welcome to the IEE Project-------------------\n\n-------------Treatement #1--------|---Treatment #2---------\n";
    std::cout << "--Tests--|---Recursive Function---|---Iterative Function---" << std::endl;
    std::cout << std::fixed << std::setprecision(11);

    // Declaring the start and end times for each method 
    std::chrono::duration<double, std::milli> durationOfRecursive, durationOfIterative;

    
    /* 
     * ----------------------------------Test # 1----------------------------------
     */ 

    auto start = std::chrono::high_resolution_clock::now();
    recursiveFunc1(0);
    auto end = std::chrono::high_resolution_clock::now();

    durationOfRecursive = end - start;


    start = std::chrono::high_resolution_clock::now();
    iterativeFunc1();
    end = std::chrono::high_resolution_clock::now();

    durationOfIterative = end - start;

    std::cout << "Test #1  |      " << durationOfRecursive.count() << "ms   |      " << durationOfIterative.count() << "ms\n";
    
    /* 
     * ----------------------------------Test # 2----------------------------------
     */ 

    start = std::chrono::high_resolution_clock::now();
    recursiveFunc2(10000);
    end = std::chrono::high_resolution_clock::now();

    durationOfRecursive = end - start;


    start = std::chrono::high_resolution_clock::now();
    iterativeFunc2();
    end = std::chrono::high_resolution_clock::now();

    durationOfIterative = end - start;

    std::cout << "Test #2  |      " << durationOfRecursive.count() << "ms   |      " << durationOfIterative.count() << "ms\n";

    /* 
     * ----------------------------------Test # 3----------------------------------
     */ 

    start = std::chrono::high_resolution_clock::now();
    recursiveFunc3(2);
    end = std::chrono::high_resolution_clock::now();

    durationOfRecursive = end - start;


    start = std::chrono::high_resolution_clock::now();
    iterativeFunc3();
    end = std::chrono::high_resolution_clock::now();

    durationOfIterative = end - start;

    std::cout << "Test #3  |      " << durationOfRecursive.count() << "ms   |      " << durationOfIterative.count() << "ms\n";

    /* 
     * ----------------------------------Test # 4----------------------------------
     */ 

    start = std::chrono::high_resolution_clock::now();
    recursiveFunc4(10000);
    end = std::chrono::high_resolution_clock::now();

    durationOfRecursive = end - start;


    start = std::chrono::high_resolution_clock::now();
    iterativeFunc4();
    end = std::chrono::high_resolution_clock::now();

    durationOfIterative = end - start;

    std::cout << "Test #4  |      " << durationOfRecursive.count() << "ms   |      " << durationOfIterative.count() << "ms\n";

    /* 
     * ----------------------------------Test # 5----------------------------------
     */ 

    start = std::chrono::high_resolution_clock::now();
    recursiveFunc5(10);
    end = std::chrono::high_resolution_clock::now();

    durationOfRecursive = end - start;


    start = std::chrono::high_resolution_clock::now();
    iterativeFunc5(10);
    end = std::chrono::high_resolution_clock::now();

    durationOfIterative = end - start;

    std::cout << "Test #5  |      " << durationOfRecursive.count() << "ms   |      " << durationOfIterative.count() << "ms\n";

    /* 
     * ----------------------------------Test # 6----------------------------------
     */ 

    start = std::chrono::high_resolution_clock::now();
    recursiveFunc6(123456);
    end = std::chrono::high_resolution_clock::now();

    durationOfRecursive = end - start;


    start = std::chrono::high_resolution_clock::now();
    iterativeFunc6(123456);
    end = std::chrono::high_resolution_clock::now();

    durationOfIterative = end - start;

    std::cout << "Test #6  |      " << durationOfRecursive.count() << "ms   |      " << durationOfIterative.count() << "ms\n";

    /* 
     * ----------------------------------Test # 7----------------------------------
     */ 

    start = std::chrono::high_resolution_clock::now();
    recursiveFunc7(2,10000);
    end = std::chrono::high_resolution_clock::now();

    durationOfRecursive = end - start;


    start = std::chrono::high_resolution_clock::now();
    iterativeFunc7(2,1000);
    end = std::chrono::high_resolution_clock::now();

    durationOfIterative = end - start;

    std::cout << "Test #7  |      " << durationOfRecursive.count() << "ms   |      " << durationOfIterative.count() << "ms\n";

    /* 
     * ----------------------------------Test # 8----------------------------------
     */ 

    start = std::chrono::high_resolution_clock::now();
    recursiveFunc8(167394,274);
    end = std::chrono::high_resolution_clock::now();

    durationOfRecursive = end - start;


    start = std::chrono::high_resolution_clock::now();
    iterativeFunc8(167394,274);
    end = std::chrono::high_resolution_clock::now();

    durationOfIterative = end - start;

    std::cout << "Test #8  |      " << durationOfRecursive.count() << "ms   |      " << durationOfIterative.count() << "ms\n";

    /* 
     * ----------------------------------Test # 9----------------------------------
     */ 

    start = std::chrono::high_resolution_clock::now();
    recursiveFunc9(10000);
    end = std::chrono::high_resolution_clock::now();

    durationOfRecursive = end - start;


    start = std::chrono::high_resolution_clock::now();
    iterativeFunc9(10000);
    end = std::chrono::high_resolution_clock::now();

    durationOfIterative = end - start;

    std::cout << "Test #9  |      " << durationOfRecursive.count() << "ms   |      " << durationOfIterative.count() << "ms\n";

    /* 
     * ----------------------------------Test # 10----------------------------------
     */ 

    start = std::chrono::high_resolution_clock::now();
    recursiveFunc10(3783292,0);
    end = std::chrono::high_resolution_clock::now();

    durationOfRecursive = end - start;


    start = std::chrono::high_resolution_clock::now();
    iterativeFunc10(3783292);
    end = std::chrono::high_resolution_clock::now();

    durationOfIterative = end - start;

    std::cout << "Test #10 |      " << durationOfRecursive.count() << "ms   |      " << durationOfIterative.count() << "ms\n" << std::endl;

    return 0;
}

// Test #1 
void recursiveFunc1(int num) {
    if(num >= 10000) {
        return;
    }
    recursiveFunc1(num+1);
}

void iterativeFunc1() {
    for(int i = 0; i < 10000; i++) {}
}

// Test #2 
void recursiveFunc2(int num) {
    if(num <= 0) {
        return;
    }
    recursiveFunc2(num-1);
}

void iterativeFunc2() {
    for(int i = 10000; i >= 0; i--) {}
}

// Test #3 
void recursiveFunc3(int num) {
    if(num >= 10000) {
        return;
    }
    recursiveFunc3(num*num);
}

void iterativeFunc3() {
    for(int i = 2; i < 10000; i = i*i){}
}

// Test #4 
void recursiveFunc4(int num) {
    if(num <= 0) {
        return;
    }
    recursiveFunc4(num/2);
}

void iterativeFunc4() {
    for(int i = 10000; i > 0; i /= 2){}
}

// Test #5 
int recursiveFunc5(int num) {
    if(num <= 1) {
        return 1;
    }
    return num * recursiveFunc5(num-1);
}

int iterativeFunc5(int num) {
    for(int i = num-1; i > 1; i--) {
        num *= i;
    }
    return num;
}

// Test #6 
int recursiveFunc6(int num) {
    if(num < 10) {
        return num;
    }
    return num % 10 + recursiveFunc6(num / 10);
}

void iterativeFunc6(int num) {
    int sum = 0;
    while(num > 0) {
        sum += (num%10);
        num /= 10;
    }
}

// Test #7 
int recursiveFunc7(int a, int b) {
    if(b == 1) {
        return a;
    }
    return (a%10) * recursiveFunc7(a,b-1);
}

void iterativeFunc7(int a, int b) {
    while(b > 0) {
        a *= a;
        a %= 10;
        b--;
    }
}

// Test #8 
int recursiveFunc8(int a, int b) {
    if(b == 0) {
        return a;
    }
    return recursiveFunc8(b, a%b);
}

void iterativeFunc8(int a, int b) {
    while(b != 0) {
        a = b;
        b = a%b;
    }
}

// Test #9 
int recursiveFunc9(int num) {
    if(num == 0) {
        return 0;
    }
    return num%2 + 10*recursiveFunc9(num / 2);
}

int iterativeFunc9(int num) {
    int result = 0;
    int place = 1;
    while (num > 0){
        result += (num % 2) * place;
        num /= 2;
        place *= 10;
    }
    return result;
}

// Test #10 
int recursiveFunc10(int n, int rev) {
    if (n == 0)
        return rev;
    return recursiveFunc10(n / 10, rev * 10 + n % 10);
}

bool iterativeFunc10(int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return original == reversed;
}
