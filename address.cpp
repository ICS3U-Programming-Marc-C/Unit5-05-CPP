// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: May 2022
// This format addresses following
// the Canadian Post format

#include <iostream>
using std::string;

// Defining the function that formats the address
string formatAddress(string addressee , string streetNum, string streetName, string city, string province, string postalCode, string apartementNum = "") {
       if (apartementNum == "") {
        return addressee + "\n" + streetNum + " "
        + streetName + "\n" + city + " " + province + " " + postalCode;
       } else {
           return addressee + "\n" + streetNum + " " + apartementNum + " "
           + streetName + "\n" + city + " " + province + " " + postalCode;
       }
}

int main() {
       // Declaring variables
       std::string userAddressee, userStreetNum, userApartementNum;
       std::string userStreetName, userCity, userProvince, userPostalCode;

       // Getting all the address information from user
       std::cout << "Enter a adressee: ";
       std::getline(std::cin, userAddressee);
       std::cout << "Enter a street number: ";
       std::getline(std::cin, userStreetNum);
       std::cout << "Enter a apartement number if any.";
       std::cout << "(Press enter to skip this): ";
       std::getline(std::cin, userApartementNum);
       std::cout << "Enter a street name: ";
       std::getline(std::cin, userStreetName);
       std::cout << "Enter a city: ";
       std::getline(std::cin, userCity);
       std::cout << "Enter a province (as a abbreviation,";
       std::cout << "EX: ON, AB, BC, QC, ect.) : ";
       std::getline(std::cin, userProvince);
       std::cout << "Enter a postal code: ";
       std::getline(std::cin, userPostalCode);

        // Calling out function and passing the input as arguments
       string formattedAddress = formatAddress(userAddressee, userStreetNum,
       userStreetName, userCity, userProvince,
       userPostalCode, userApartementNum);

        // Displaying formatted address
       std::cout << "\n" << formattedAddress;
}
