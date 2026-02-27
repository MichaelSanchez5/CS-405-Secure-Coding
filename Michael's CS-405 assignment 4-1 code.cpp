// Michael's CS-405 assignment 4-1 code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Exceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool do_even_more_custom_application_logic()
{
    // TODO: Throw any standard exception

    std::cout << "Running Even More Custom Application Logic." << std::endl;

    return true;
}
void do_custom_application_logic()
{
    // TODO: Wrap the call to do_even_more_custom_application_logic()
    //  with an exception handler that catches std::exception, displays
    //  a message and the exception.what(), then continues processing
    std::cout << "Running Custom Application Logic." << std::endl;

    if (do_even_more_custom_application_logic())
    {
        std::cout << "Even More Custom Application Logic Succeeded." << std::endl;
    }

    // TODO: Throw a custom exception derived from std::exception
    //  and catch it explictly in main

    std::cout << "Leaving Custom Application Logic." << std::endl;

}

float divide(float num, float den)
{
    // TODO: Throw an exception to deal with divide by zero errors using
    //  a standard C++ defined exception
    return (num / den);
}

void do_division() noexcept
{
    //  TODO: create an exception handler to capture ONLY the exception thrown
    //  by divide.

    float numerator = 10.0f;
    float denominator = 0;

    auto result = divide(numerator, denominator);
    std::cout << "divide(" << numerator << ", " << denominator << ") = " << result << std::endl;
}

int main()
{
    std::cout << "Exceptions Tests!" << std::endl;

    // TODO: Create exception handlers that catch (in this order):
    //  your custom exception
    //  std::exception
    //  uncaught exception 
    //  that wraps the whole main function, and displays a message to the console.
    do_division();
    do_custom_application_logic();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
#include <iostream>
#include <exception>
#include <limits>
#include <stdexcept>

class MyException : public std::exception {
    virtual const char* what() const throw() {
        return "My exception happened";
    }
} myE;

bool do_even_more_custom_application_logic()
{
    // Throw any standard exception
    throw std::logic_error("Bad Logic");

    std::cout << "Running Even More Custom Application Logic." << std::endl;

    return true;
}
void do_custom_application_logic()
{
    //  Wrap the call to do_even_more_custom_application_logic()
    //  with an exception handler that catches std::exception, displays
    //  a message and the exception.what(), then continues processing
    std::cout << "Running Custom Application Logic." << std::endl;

    try {
        if (do_even_more_custom_application_logic()) {
            std::cout << "Even More Custom Application Logic Succeeded." << std::endl;
        }
    }
    catch (const std::exception& e) {
        std::cerr << "ERROR: " << e.what() << std::endl;
    }

    //  Throw a custom exception derived from std::exception
    //  and catch it explictly in main

    throw myE;

    std::cout << "Leaving Custom Application Logic." << std::endl;

}

float divide(float num, float den)
{
    //  Throw an exception to deal with divide by zero errors using
    //  a standard C++ defined exception
    return (den == 0) ? throw std::runtime_error("Dividing by zero is undefined") : (num / den);
    // "Why waste time say lot word when few word do trick?" - Kevin from The Office
}

int add_numbers(int a, int b) {
    if (a > 0 && b > 0 && a > std::numeric_limits<int>::max() - b) {
        throw std::overflow_error("Addition would result in overflow");
    }
    if (a < 0 && b < 0 && a < std::numeric_limits<int>::min() - b) {
        throw std::underflow_error("Addition would result in underflow");
    }
    return a + b;
}

void subtract_numbers(int a, int b) :
    if a > 0 and b < 0 and a > INT_MAX + b:
raise OverflowError("Subtraction would result in overflow")
if a < 0 and b > 0 and a < INT_MIN + b :
    raise UnderflowError("Subtraction would result in underflow")
    return a - b
void do_division() noexcept
{
    //  Create an exception handler to capture ONLY the exception thrown by divide.

    float numerator = 10.0f;
    float denominator = 0;

    try {
        auto result = divide(numerator, denominator);
        std::cout << "divide(" << numerator << ", " << denominator << ") = " << result << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "ERROR: " << e.what() << std::endl;
    }
}

int main()
{
    std::cout << "Exceptions Tests!" << std::endl;

    //  Create exception handlers that catch (in this order):
    //  your custom exception
    //  std::exception
    //  uncaught exception 
    //  that wraps the whole main function, and displays a message to the console.

    try {
        do_division();
        do_custom_application_logic();
    }
    catch (const std::exception& e) {
        // catches my custom and standard exceptions and displays messages from each without a separate handler
        std::cerr << "ERROR: " << e.what() << std::endl;
    }
    catch (...) {
        // The catch all
        std::cerr << "Something bad happened..." << std::endl;
    }
}
#include <iostream>
#include <exception>

class MyException : public std::exception {
    virtual const char* what() const throw() {
        return "My exception happened";
    }
} myE;

bool do_even_more_custom_application_logic()
{
    // Throw any standard exception
    throw std::logic_error("Bad Logic");

    std::cout << "Running Even More Custom Application Logic." << std::endl;

    return true;
}
void do_custom_application_logic()
{
    //  Wrap the call to do_even_more_custom_application_logic()
    //  with an exception handler that catches std::exception, displays
    //  a message and the exception.what(), then continues processing
    std::cout << "Running Custom Application Logic." << std::endl;

    try {
        if (do_even_more_custom_application_logic()) {
            std::cout << "Even More Custom Application Logic Succeeded." << std::endl;
        }
    }
    catch (const std::exception& e) {
        std::cerr << "ERROR: " << e.what() << std::endl;
    }

    //  Throw a custom exception derived from std::exception
    //  and catch it explictly in main

    throw myE;

    std::cout << "Leaving Custom Application Logic." << std::endl;

}

def add_numbers(a, b) :
    if a > 0 and b > 0 and a > INT_MAX - b:
raise OverflowError("Addition would result in overflow")
if a < 0 and b < 0 and a < INT_MIN - b :
    raise UnderflowError("Addition would result in underflow")
    return a + b

    def subtract_numbers(a, b) :
    if a > 0 and b < 0 and a > INT_MAX + b:
raise OverflowError("Subtraction would result in overflow")
if a < 0 and b > 0 and a < INT_MIN + b :
    raise UnderflowError("Subtraction would result in underflow")
    return a - b
float divide(float num, float den)
{
    //  Throw an exception to deal with divide by zero errors using
    //  a standard C++ defined exception
    return (den == 0) ? throw std::runtime_error("Dividing by zero is undefined") : (num / den);
    // "Why waste time say lot word when few word do trick?" - Kevin from The Office
}

void do_division() noexcept
{
    //  Create an exception handler to capture ONLY the exception thrown by divide.

    float numerator = 10.0f;
    float denominator = 0;

    try {
        auto result = divide(numerator, denominator);
        std::cout << "divide(" << numerator << ", " << denominator << ") = " << result << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "ERROR: " << e.what() << std::endl;
    }
}

int main()
{
    std::cout << "Exceptions Tests!" << std::endl;

    //  Create exception handlers that catch (in this order):
    //  your custom exception
    //  std::exception
    //  uncaught exception 
    //  that wraps the whole main function, and displays a message to the console.

    try {
        do_division();
        do_custom_application_logic();
    }
    catch (const std::exception& e) {
        // catches my custom and standard exceptions and displays messages from each without a separate handler
        std::cerr << "ERROR: " << e.what() << std::endl;
    }
    catch (...) {
        // The catch all
        std::cerr << "Something bad happened..." << std::endl;
    }
}