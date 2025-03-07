#include <iostream>
#include "String.h"  // Used to include the header file
#include <cstring>  // Used for correct functionality of the classic "C style" string functions (such as strcmp, strlen etc)
#include <cctype>  // Used for correct functionality of toupper() and tolower() functions
#include <cstddef>  // Used for correct functionality of size_t
#include <fstream> // Used to provide functionality for files
#include <chrono>  // Used to provide functionality for use of date and time functions
#include <ctime>  // Used to provide functionality of functions used to get and manipulate time
using namespace std;  // Used to help keep my code tidier and remove the need to add std:: before various ojects and functions (such as std::cin and std::cout etc)

int main() {
    
    fstream file;  // Creating a variable of type fstream
    float tally = 0.f;  // Creating a variable of type float to track how many functions succeed and initialising it to 0 (each time a funtion is successful this will increment by 1)

    file.open("results.txt", ios::out | ios::app);  // Opening a file and specifying that it will be used for writing to it and creating a file if one does not exist.  Also specifying that the file can be opened if one already exists and appending data to the end of the file if the application is run multiple times 
    
    String hello("Hello, ");  // Creating string 'Hello, '
    String world("World");  // Creating string 'World'
    String displayMessage("Hello, World");  // Creating string 'Hello, World'
    cout << displayMessage.CStr();  // Outputting the 'Hello, World' string  
    cout << '\n';
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout << '\n';

    if (String(displayMessage.CStr()) == "Hello, World") // If statement to test the functionality of CStr and writing to file based on result
    {
        file << "Test 0 CStr Successful" << endl; 
        tally++;  
    }
    else
    {
        file << "Test 0 CStr Failed" << endl;
    }



    cout << "The length of the 'Hello, World' string (not including the null terminator) is: " << displayMessage.Length() << endl;  // Outputting the length of the 'Hello, World' string (using the Length definition and its' contents from String.h & String.cpp)
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout << '\n';

    if (displayMessage.Length() != 0)  // If statement to test the functionality of Length and writing to file based on result
    {
        file << "Test 1 Length Successful" << endl;
        tally++;
    }
    else
    {
        file << "Test 1 Length Failed" << endl;
    }


    cout << "Now we can test the 'characterat' function.  The character at index 7 is: " << displayMessage.CharacterAt(7);  // Outputting the character at index 7 in the 'Hello, World' string (using the CharacterAt definition and its' contents from String.h & String.cpp) 
    cout << '\n';
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout << '\n';

    if (displayMessage.CharacterAt(7) == 'W')  // If statement to test the functionality of CharacterAt and writing to file based on result
    {
        file << "Test 2 CharacterAt Successful" << endl;
        tally++;
    }
    else
    {
        file << "Test 2 CharacterAt Failed" << endl;
    }



    if (hello.EqualTo(world)) // If statement to check if string 'Hello, ' is equal to string 'World' and output based on result (using the EqualTo definition and its' contents from String.h & String.cpp)  

        //  Also used to check the functionality of EqualTo and writing to file based on result
    {  
        cout << "String 1 is equal to String 2\n";
        file << "Test 3 EqualTo Successful" << endl;
        tally++;
    }
    else {
        cout << "String 1 is not equal to String 2\n";
        file << "Test 3 EqualTo Failed" << endl;
    }
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout << '\n';



    cout << "After using the 'append' function we have: ";
    String appended = hello.Append(world);  // Using the Append function (and its' contents from definition in String.h & String.cpp) to append the string 'World' to the string 'Hello, ' and outputting the newly created string
    appended.WriteToConsole();  
    cout << '\n';
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout << '\n';

    if (appended == "Hello, World")  // If statement to test the functionality of Append and writing to file based on result
    {
        file << "Test 4 Append Successful" << endl;
        tally++;
    }
    else {

        file << "Test 4 Append Failed" << endl;
    }


    cout << "After using the 'prepend' function we have: ";  
    String bang("! ");
    String prepended = appended.Prepend(bang);  // Using the Prepend function (and its' contents from definition in String.h & String.cpp) to prepend the string '! ' to the string 'Hello, World' and outputting the newly created string
    prepended.WriteToConsole();
    cout << '\n';
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout << '\n';

    if (prepended == "! Hello, World")  // If statement to test the functionality of Prepend and writing to file based on result
    {
        file << "Test 5 Prepend Successful" << endl;
        tally++;
    }
    else {

        file << "Test 5 Prepend Failed" << endl;
    }



    displayMessage.ToLower();  // Using the ToLower function (calling upon the ToLower definition and its' contents from String.h & String.cpp) to convert the 'Hello, World' string to lowercase and then outputting
    cout << "Testing of the 'ToLower' function.  String in lowercase: "; displayMessage.WriteToConsole();
    cout << '\n';
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout << '\n';

    if (displayMessage.ToLower() == "hello, world")  // If statement to test the functionality of ToLower and writing to file based on result
    {
        file << "Test 6 ToLower Successful" << endl;
        tally++;
    }
    else {

        file << "Test 6 ToLower Failed" << endl;
    }



    displayMessage.ToUpper();  // Using the ToUpper function (calling upon the ToUpper definition and its' contents from String.h & String.cpp) to convert the 'hello, world' string to uppercase and then outputting
    cout << "Testing of the 'ToUpper' function.  String in uppercase: "; displayMessage.WriteToConsole();
    cout << '\n';
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout << '\n';

    if (displayMessage.ToUpper() == "HELLO, WORLD")  // If statement to test the functionality of ToUpper and writing to file based on result
    {
        file << "Test 7 ToUpper Successful" << endl;
        tally++;
    }
    else {

        file << "Test 7 ToUpper Failed" << endl;
    }



    size_t foundIndex = displayMessage.Find("RLD");  // Find the position of the substring "RLD" in the 'HELLO, WORLD' string (calling upon the Find definition and its' contents from String.h & String.cpp)
    if (foundIndex != static_cast<size_t>(-1))  // If the substring "RLD" is found in the string below code will run
        // Also used to test the functionality of Find and writing to file based on result
    {
        cout << "Using the 'find' function to detect 'RLD' in 'HELLO, WORLD'.  'RLD' is detected to start at index location: " << foundIndex;
        file << "Test 8 Find Successful" << endl;
        tally++;
    }
    else // If the substring "RLD" is not found in the 'HELLO, WORLD' string the below code will run
    {  
        cout << "String not found: -1";
        file << "Test 8 Find Failed" << endl;
    }
    cout << '\n';
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout << '\n';



    size_t foundIndexTwo = displayMessage.Find(3, "RLD");  // Find the pisition of the substring "RLD" in the 'HELLO, WORLD' string, starting the search from index 3 (calling upon the Find definition and its' contents from String.h & String.cpp)
    if (foundIndexTwo != static_cast<size_t>(-1))  // If the substring "RLD" is found in the string below code will run

        // Also used to test the functionality of Find (from index) and writing to file based on result
    {  
        cout << "Using the 'find from index' function to detect 'RLD' in 'HELLO, WORLD' searching only from index location 3.\n'RLD' is detected to start at index location: " << foundIndexTwo;
        file << "Test 9 Find (from index) Successful" << endl;
        tally++;
    }
    else  // If the substring "RLD" is not found in the 'HELLO, WORLD' string the below code will run 
    {
        cout << "String not found: -1";
        file << "Test 9 Find (from index) Failed" << endl;
    }
    cout << '\n';
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout << '\n';



    displayMessage.Replace("HELLO", "GREETINGS");  // Using the Replace function (based on the Replace definition and its' contents from String.h & String.cpp) to replace 'HELLO' (from the string 'HELLO, WORLD') with 'GREETINGS' and outputting
    cout << "After using the 'replace' function to replace the word 'HELLO' with the word 'GREETINGS', we have: " << displayMessage.CStr();
    cout << '\n';
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout << '\n';

    if (displayMessage.CStr() == "GREETINGS, WORLD")  // If statement to test the functionality of Replace and writing to file based on result
    {
        file << "Test 10 Replace Successful" << endl;
        tally++;
    }
    else {

        file << "Test 10 Replace Failed" << endl;
    }



    cout << "Please enter some numbers or text to test the 'ReadFromConsole' function: ";
    String inputString;  // Creating a new uninitialised string (which will be set to whatever the user enters in the next line)
    inputString.ReadFromConsole();  // ReadFromConsole function used (by referring to its' definition and contents from String.h & String.cpp) to set whatever the user enters as the contents of string 'inputString' 
    cout << "You entered: "; inputString.WriteToConsole();  // Outputting the users string to the console using the WriteToConsole function (which draws upon the WriteToConsole definition used in String.h & String.cpp)
    cout << '\n';
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout << '\n';

    if (inputString != "")  // If statement to test the functionality of both ReadFromConsole and WriteToConsole and writing to file based on result
    {
        file << "Test 11 ReadFromConsole Successful" << endl;
        file << "Test 12 WriteToConsole Successful" << endl;
        tally = tally + 2;
    }
    else {
        file << "Test 11 ReadFromConsole Failed" << endl;
        file << "Test 12 WriteToConsole Failed" << endl;
    }

 

    String helloTwo("Hello, ");  // Creating three new strings for a fresh slate to work with 'Hello, World' again as the original strings have been altered by the above functions
    String worldTwo("World");
    String displayMessageTwo("Hello, World");



    cout << "Now we can test the 'equality operator' function to check if 'Hello, ' is equal to 'World': " << (helloTwo == worldTwo ? "Equal" : "Not Equal") << endl;  // Using the equality operator (defined with its' contents in String.h & String.cpp) to check if 'Hello, ' string is equal to 'World' string and outputting based upon the result 
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout << '\n';
    
    if (helloTwo == worldTwo)  // If statement to test the functionality of Equality operator and writing to file based on result
    {
        file << "Test 13 Equality Operator Successful" << endl;
        tally++;
    }
    else {

        file << "Test 13 Equality Operator Failed" << endl;
    }
    


    cout << "Testing the 'subscript operator' function to see which character is at index 4 in 'Hello, World': " << displayMessageTwo[4] << endl;  // Using the subscript operator to output the character at index 4 in the 'Hello, World' string (using its' definition and contents from String.h & String.cpp)
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout << '\n';

    if (displayMessageTwo[4] == 'o')  // If statement to test the functionality of Subscript operator and writing to file based on result
    {
        file << "Test 14 Subscript Operator Successful" << endl;
        tally++;
    }
    else {

        file << "Test 14 Subscript Operator Failed" << endl;
    }


    cout << "Testing the 'lessthan operator' function to check if 'Hello, ' comes before 'World' in the alphabet: " << (String(helloTwo) < String(worldTwo) ? "Yes" : "No") << endl;  // Using the less than operator (defined with its' contents in String.h & String.cpp) to check if 'Hello ' string comes before 'World' string in the alphabet and outputting based upon the result
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout << '\n';

    if (String(helloTwo) < String(worldTwo))  // If statement to test the functionality of LessThan operator and writing to file based on result
    {
        file << "Test 15 LessThan Operator Successful" << endl;
        tally++;
    }
    else {

        file << "Test 15 LessThan Operator Failed" << endl;
    }

    helloTwo = worldTwo;  // Using the assignment operator to replace 'Hello, ' string with 'World' string (using its' definition and contents from String.h & String.cpp to do so)
    cout << "Testing the 'assignment operator' function to replace the 'Hello, ' string with the 'World' string we have: " << helloTwo.CStr() << endl;
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout << '\n';

    if (helloTwo == "World")  // If statement to test the functionality of Assignment operator and writing to file based on result
    {
        file << "Test 16 Assignment Operator Successful" << endl;
        tally++;
    }
    else {

        file << "Test 16 Assignment Operator Failed" << endl;
    }

    auto timeReadOut = chrono::system_clock::to_time_t(chrono::system_clock::now());  // Get the current time
    file << ctime(&timeReadOut);  // Writing the current time to the file

    float tallyPercentage = (tally / 17) * 100;  // Initialsing a variable to be the total percentage of functions that suceeded
    file << "Successful " << tallyPercentage << "%" << endl;  // Writing the above variable to the file
    file << endl;

    file.close();  // Closing the file

    system("pause");
}