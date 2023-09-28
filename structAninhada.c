#include <stdio.h>

// Define a struct for song details
struct SongDetails {
    char title[100];
    char artist[100];
    char album[100];
    char genre[50];
    int releaseYear;
    int durationInSeconds;
};

// Define a struct for a song that includes the SongDetails struct as a member
struct Song {
    struct SongDetails details;
};

int main() {
    int numSongs;

    printf("Enter the number of songs in your music collection: ");
    scanf("%d", &numSongs);

    // Create an array of songs
    struct Song musicCollection[numSongs];

    // Input song information
    for (int i = 0; i < numSongs; i++) {
        printf("Enter information for Song %d:\n", i + 1);

        printf("Title: ");
        scanf(" %[^\n]", musicCollection[i].details.title); // Read until newline

        printf("Artist: ");
        scanf(" %[^\n]", musicCollection[i].details.artist); // Read until newline

        printf("Album: ");
        scanf(" %[^\n]", musicCollection[i].details.album); // Read until newline

        printf("Genre: ");
        scanf(" %[^\n]", musicCollection[i].details.genre); // Read until newline

        printf("Release Year: ");
        scanf("%d", &musicCollection[i].details.releaseYear);

        printf("Duration (in seconds): ");
        scanf("%d", &musicCollection[i].details.durationInSeconds);

        printf("\n");
    }

    // Display song records
    printf("Music Collection Song Records:\n");
    for (int i = 0; i < numSongs; i++) {
        printf("Song %d:\n", i + 1);
        printf("Title: %s\n", musicCollection[i].details.title);
        printf("Artist: %s\n", musicCollection[i].details.artist);
        printf("Album: %s\n", musicCollection[i].details.album);
        printf("Genre: %s\n", musicCollection[i].details.genre);
        printf("Release Year: %d\n", musicCollection[i].details.releaseYear);
        printf("Duration (seconds): %d\n", musicCollection[i].details.durationInSeconds);
        printf("\n");
    }

    return 0;
}
