#include <iostream>
#include <cstring>
using namespace std;

char calculateEvenParity(const char* data){
    int countOnes = 0;
    for(int i = 0; data[i] != '\0'; i++){
        if(data[i] == '1') countOnes++;
    }
    return countOnes & 1 == 1 ? '1' : '0';
}

char calculateOddParity(const char* data){
    int countOnes = 0;
    for(int i = 0; data[i] != '\0'; i++){
        if(data[i] == '1') countOnes++;
    }
    return countOnes & 1 == 1 ? '0' : '1';
}

int main(){
    cout << "___Single Even Parity___" << endl << endl;

    char binaryData[100];
    cout << "Enter binary data (0s and 1s): ";
    cin >> binaryData;

    char parityBit = calculateEvenParity(binaryData);
    cout << "Parity Bit : " << parityBit << endl;

    // Display the original data along with the parity bit
    cout << "Data with Parity Bit: " << binaryData << ", " << parityBit << endl << endl;

    // Simulate data transmission with possible errors
    cout << "Enter received data (including parity bit): ";
    cin >> binaryData;

    int length = strlen(binaryData);
    char receivedParityBit = binaryData[length - 1];

    binaryData[length - 1] = '\0'; // Remove the received parity bit for checking

    char calculatedParityBit = calculateEvenParity(binaryData);

    if (receivedParityBit == calculatedParityBit)
        printf("\nParity Check Passed: Data is valid.\n");
    else
        printf("\nParity Check Failed: Data is corrupt.\n");
}