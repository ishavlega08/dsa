#include<iostream>
using namespace std;

// function
void printName(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Ishav"<<endl;
    }
}

// pass by value
void printNumber(int num){
    cout<<num<<endl;
}

// function declaration
int add(int a, int b);

int getMax(int num1, int num2, int num3){
    if(num1>num2 && num1>num3){
        return num1;
    }
    else if(num2>num1 && num2>num3){
        return num2;
    }
    else{
        return num3;
    }
}

void printCounting(int num){
    for(int i=1; i<=num; i++){
        cout<<i<<" ";
    }
    cout<<endl; 
}

// here marks is parameter
char getGrade(int marks){

    // if(marks>=90){
    //     return 'A';
    // }
    // else if(marks>=80){
    //     return 'B';
    // }
    // else if(marks>=70){
    //     return 'C';
    // }
    // else if(marks>=60){
    //     return 'D';
    // }
    // else{
    //     return 'E';
    // }

    switch(marks/10){
        case 10 : return 'A'; break;
        case 9  : return 'A'; break;
        case 8  : return 'B'; break;
        case 7  : return 'C'; break;
        case 6  : return 'D'; break;
        default : return 'E'; break;
    }
}

int getSum(int n){
    
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }

    return sum;
}

int evenSum(int n){
    
    int sum = 0;
    for(int i=2; i<=n; i+=2){
        sum+=i;
    }

    return sum;
}

double areaCircle(int rad){

    const double PI = 3.14;

    double area = PI*rad*rad;
    return area;
}

bool evenOdd(int num){
    if(num%2==0){
        return 1;
    }
    return 0;
}

int factorial(int num){
    cout<<num<<endl;
    int fact = 1;

    for(int i=1; i<=num; i++){
        fact*=i;
    }

    return fact;
}

bool isPrime(int num){
    if(num==0 || num==1){
        return 0;
    }

    for(int i=2; i<num; i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){

    // ---------------- print all prime nos from 1 to N ---------------
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        if(isPrime(i))
            cout<<i<<" ";
    }

    // ---------------- num is prime or not ---------------
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;

    // if(isPrime(n))
    //     cout<<"It is a prime number"<<endl;
    // else
    //     cout<<"It is not a prime number"<<endl;

    // ---------------- factorial of a number -------------
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;

    // int ans = factorial(n);
    // cout<<"Factorial of "<<n<<" is "<<ans<<endl;

    // ---------------- even or odd -----------------------
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;

    // if(evenOdd(n))
    //     cout<<"Even number"<<endl;
    // else
    //     cout<<"Odd number"<<endl;

    // ---------------- area of circle --------------------
    // int r;
    // cout<<"Enter the radius of the circle: ";
    // cin>>r;

    // double ans = areaCircle(r);
    // cout<<"Area of circle with radius "<<r<<" is "<<ans<<endl;

    // ---------------- sum of even numbers till N --------
    // int n;
    // cout<<"Enter the value of n: ";
    // cin>>n;

    // int ans = evenSum(n);
    // cout<<"Even sum is "<<ans<<endl;

    // ---------------- sum of N numbers ------------------
    // int n;
    // cout<<"Enter the value of n: ";
    // cin>>n;

    // int ans = getSum(n);
    // cout<<"Sum upto "<<n<<" is "<<ans<<endl;

    // ---------------- student grade problem -------------
    // int marks;
    // cout<<"Enter your marks: ";
    // cin>>marks;

    // // here marks is argument
    // char grade = getGrade(marks);
    // cout<<"Your grade: "<<grade<<endl;

    // ---------------- counting from 1 to N --------------
    // int n;
    // cout<<"Enter the value of n: ";
    // cin>>n;

    // printCounting(n);

    // ---------------- max of 2 nums ---------------------
    // int a,b,c;
    // cout<<"Enter the value of a,b and c: ";
    // cin>>a>>b>>c;

    // int maxNum = getMax(a,b,c);
    // cout<<"Maximum Number: "<<maxNum<<endl;

    // ---------------- add 2 nums ------------------------
    // int a;
    // cout<<"Enter the value of a: ";
    // cin>>a;

    // int b;
    // cout<<"Enter the value of b: ";
    // cin>>b;

    // cout<<"Addition of a & b is: "<<add(a, b)<<endl;

    // ---------------- function basics -------------------
    // function call
    // printName();

    // int a = 5;
    // cout<<"Address of a is: "<<&a<<endl;

    // printNumber(a);

 return 0;
}

// function define
int add(int a, int b){
    return a+b;
}