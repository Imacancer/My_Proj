//this brings to iostream library*/
#include <iostream>

int addNumbers ( int first_param, int second_param){
    int result = first_param + second_param;
    return result;
}

/* this is important constexpr int get_value */
constexpr int get_value(){
    return 3;
}
//int means integer     
int main()
{

    //Compile time error
    std::cout << "Hello Motherfucker" << std::endl;
    std::cout << "number 1" << std::endl;
    std::cout << "Number 2" << std::endl;
    std::cout << "Walter White" << std::endl;
    int value = 7/2;
    std::cout << "value : " << value << std::endl;
    /* this is a comment */
    

    int first_number {13};
    int second_number {7};

    std::cout << "First_number : " << first_number << std::endl;
    std::cout << "Second_number : " << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl;

    sum = addNumbers(25,7);
    std::cout << "Sum : " << sum << std::endl;

    sum = addNumbers(30,54);
    std::cout << "Sum : " << sum << std::endl;

    int age{21};
    std::cout << "Age :" << age << std::endl;

    std::cerr << "Error Message : Something is Wrong " << std::endl;
    std::clog << "Log Message : Something Happened " << std::endl;

    int age1;
    std::string name;

    std::cout << "Please Type Your Name and Age : " << std::endl;

    std::cin >> name;
    std::cin >> age;

    std::cout << "Hello " << name << " you are " << age1 << " years old" << std::endl;

    return 0; 
}

