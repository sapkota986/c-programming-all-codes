#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FLIGHTS 100
#define MAX_PASSENGERS 100
#define MAX_RESERVATIONS 100

// Structure definitions
struct Flight {
    int flightNumber;
    char departure[50];
    char destination[50];
};

struct Passenger {
    int id;
    char name[50];
};

struct Reservation {
    int reservationNumber;
    struct Flight flight;
    struct Passenger passenger;
};

// Global arrays to store flights, passengers, and reservations
struct Flight flights[MAX_FLIGHTS];
struct Passenger passengers[MAX_PASSENGERS];
struct Reservation reservations[MAX_RESERVATIONS];
int numFlights = 0;
int numPassengers = 0;
int numReservations = 0;

// Function prototypes
void addFlight();
void addPassenger();
void makeReservation();
void displayPassengersForFlight();

int main() {
    int choice;
    
    // Main menu loop
    do {
        printf("\nAirplane Reservation System\n");
        printf("1. Add Flight\n");
        printf("2. Add Passenger\n");
        printf("3. Make Reservation\n");
        printf("4. Display Final Passenger Details for a Flight\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addFlight();
                break;
            case 2:
                addPassenger();
                break;
            case 3:
                makeReservation();
                break;
            case 4:
                displayPassengersForFlight();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}

// Function to add a new flight
void addFlight() {
    if (numFlights >= MAX_FLIGHTS) {
        printf("Cannot add more flights. Maximum limit reached.\n");
        return;
    }
    
    printf("Enter Flight Number: ");
    scanf("%d", &flights[numFlights].flightNumber);
    printf("Enter Departure City: ");
    scanf("%s", flights[numFlights].departure);
    printf("Enter Destination City: ");
    scanf("%s", flights[numFlights].destination);
    
    numFlights++;
    printf("Flight added successfully.\n");
}

// Function to add a new passenger
void addPassenger() {
    if (numPassengers >= MAX_PASSENGERS) {
        printf("Cannot add more passengers. Maximum limit reached.\n");
        return;
    }
    
    printf("Enter Passenger ID: ");
    scanf("%d", &passengers[numPassengers].id);
    printf("Enter Passenger Name: ");
    scanf("%s", passengers[numPassengers].name);
    
    numPassengers++;
    printf("Passenger added successfully.\n");
}

// Function to make a reservation
void makeReservation() {
    if (numReservations >= MAX_RESERVATIONS) {
        printf("Cannot make more reservations. Maximum limit reached.\n");
        return;
    }
    
    int flightNumber, passengerID;
    printf("Enter Flight Number: ");
    scanf("%d", &flightNumber);
    printf("Enter Passenger ID: ");
    scanf("%d", &passengerID);
    
    // Find flight and passenger
    int flightIndex = -1, passengerIndex = -1;
    for (int i = 0; i < numFlights; i++) {
        if (flights[i].flightNumber == flightNumber) {
            flightIndex = i;
            break;
        }
    }
    for (int i = 0; i < numPassengers; i++) {
        if (passengers[i].id == passengerID) {
            passengerIndex = i;
            break;
        }
    }
    if (flightIndex == -1 || passengerIndex == -1) {
        printf("Flight or Passenger not found.\n");
        return;
    }
    
    // Make reservation
    reservations[numReservations].reservationNumber = numReservations + 1;
    reservations[numReservations].flight = flights[flightIndex];
    reservations[numReservations].passenger = passengers[passengerIndex];
    numReservations++;
    printf("Reservation made successfully.\n");
}

// Function to display final passenger details for a flight
void displayPassengersForFlight() {
    int flightNumber;
    printf("Enter Flight Number: ");
    scanf("%d", &flightNumber);

    printf("Passengers for Flight Number %d:\n", flightNumber);
    printf("==================================\n");

    for (int i = 0; i < numReservations; i++) {
        if (reservations[i].flight.flightNumber == flightNumber) {
            printf("Reservation Number: %d\n", reservations[i].reservationNumber);
            printf("Passenger ID: %d\n", reservations[i].passenger.id);
            printf("Passenger Name: %s\n", reservations[i].passenger.name);
            printf("\n");
        }
    }
}
