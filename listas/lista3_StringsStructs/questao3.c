#include <stdio.h>
#include <math.h>

struct balls
{
    int x;
    int y;
};

int main()
{

    int testCases; // Read the number of test cases
    scanf("%d", &testCases);

    while (testCases--)
    {
        int ballsNumbers; // Read the number of balls in the current test case
        scanf("%d", &ballsNumbers);

        // Create a struct to represent the white ball and an array for other balls
        struct balls whiteBall;
        struct balls otherBalls[ballsNumbers];

        scanf("%d %d", &whiteBall.x, &whiteBall.y); // Read the coordinates of the white ball

        int rightBall = 0;
        float minDistance = 0;

        // Loop through all the balls
        for (int i = 0; i < ballsNumbers; i++)
        {
            // Read the coordinates of each ball
            scanf("%d %d", &otherBalls[i].x, &otherBalls[i].y);

            // Calculate the distance between the white ball and the current ball
            float distance = sqrt(pow(whiteBall.x - otherBalls[i].x, 2) + pow(whiteBall.y - otherBalls[i].y, 2));

            // Check if this is the first ball or if it's closer than the previous closest ball
            if (i == 0 || distance < minDistance)
            {
                // Update the minimum distance and the index of the right ball
                minDistance = distance;
                rightBall = i + 1; // Adding 1 to the index because ball numbering starts from 1
            }
        }

        // Print the index of the right ball for this test case
        printf("%d\n", rightBall);
    }

    return 0;
}

//beecrowd 1255