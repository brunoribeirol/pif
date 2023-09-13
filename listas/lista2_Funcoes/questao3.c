#include <stdio.h>

// Function declaration
int maximoCartas(int cartasAlice[], int A, int cartasBeatriz[], int B);

int main()
{
    int A; // Number of cards Alice has
    int B; // Number of cards Beatriz has

    while (1) //while true
    {
        scanf("%d %d", &A, &B);

        if (A == 0 && B == 0)
        {
            break; // Exit the loop if both A and B are zero
        }

        int cartasAlice[A]; // Array for Alice's cards
        int cartasBeatriz[B]; // Array for Beatriz's cards

        // Input Alice's cards
        for (int i = 0; i < A; i++)
        {
            scanf("%d", &cartasAlice[i]);
        }

        // Input Beatriz's cards
        for (int i = 0; i < B; i++)
        {
            scanf("%d", &cartasBeatriz[i]);
        }

        // Calculate the maximum card exchanges between Alice and Beatriz
        int trocaCartasA = maximoCartas(cartasAlice, A, cartasBeatriz, B);
        int trocaCartasB = maximoCartas(cartasBeatriz, B, cartasAlice, A);

        // Choose the minimum number of card exchanges
        if (trocaCartasA < trocaCartasB)
        {
            trocaCartasB = trocaCartasA;
        }

        // Print the result
        printf("%d\n", trocaCartasB);
    }
    return 0;
}

// Function to calculate the maximum card exchanges between two players
int maximoCartas(int cartasAlice[], int A, int cartasBeatriz[], int B)
{
    int trocas = 0;
    int j = 0;

    // Iterate through Alice's cards
    for (int i = 0; i < A; i++)
    {
        // Find the smallest card in Beatriz's cards that Alice can exchange
        while (j < B && cartasBeatriz[j] < cartasAlice[i])
        {
            j++;
        }

        // If no suitable card is found or the card is not present in Beatriz's cards, increment the exchange count
        if (j == B || cartasBeatriz[j] > cartasAlice[i])
        {
            trocas++;
        }

        // Avoid counting the same card in Alice's cards twice
        while (i < A - 1 && cartasAlice[i] == cartasAlice[i + 1])
        {
            i++;
        }
    }

    return trocas;
}

//beecrowd1104