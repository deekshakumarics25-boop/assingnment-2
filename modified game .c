#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
/*for bg sound*/
#include <mmsystem.h>

/*to remove flicker*/
void clear_screen_fast() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = {0, 0};
    SetConsoleCursorPosition(h, pos);
}

int main() {
	system("color 4F");
	PlaySound(TEXT("bg.wav"), NULL, SND_ASYNC | SND_LOOP);
    srand(time(0));

    int x = 1;              // player position (0 to 2)
    int step = 0;           // obstacle vertical movement
    int obstaclePos = rand() % 3;     // 0,1,2 lane
    
    // ---NEW VARIABLES ADDED-----
    int score=0;         //score system
    int lives=3;        // player lives
    int speed=120;         // base speed(difficulty level)

    while (lives>0) {     //<<<replaced infinite loop with lives check

        // ---- INPUT ----
        if (_kbhit()) {
            char ch = getch();

            if (ch == 75 && x > 0)        // LEFT arrow
                x--;

            if (ch == 77 && x < 2)        // RIGHT arrow
                x++;
        }

        // ---- DRAW ----
		// system("cls");
		clear_screen_fast();
        printf("|--- --- ---|\n");
         int i;
        for (i = 0; i < 10; i++) {
            if (i == step) {

                if (obstaclePos == 0)
                    printf("| %c        |\n", 1);

                else if (obstaclePos == 1)
                    printf("|     %c    |\n", 1);

                else if (obstaclePos == 2)
                    printf("|        %c |\n", 1);

            } else {
                printf("|           |\n");
            }
        }

        // ---- PLAYER ----
        if (x == 0)
            printf("| %c         |\n", 6);
        else if (x == 1)
            printf("|     %c     |\n", 6);
        else if (x == 2)
            printf("|        %c  |\n", 6);
            
            //----display score & lives-----
            printf("\nScore: %d Lives:%d\n",score,lives);

        // ---- COLLISION ----
        if (step == 10 && x == obstaclePos) {
        	lives--;   // lose 1 file
			PlaySound(TEXT("impact.wav"), NULL, SND_ASYNC);
        	Sleep(800);
        	
        	// reset obstacle
            step=0;
            obstaclePos=rand()%3;
            
            if(lives==0)
            break;      // game over
        }

        Sleep(speed);

        // Move obstacle down
        step++;

        // Reset obstacle + increase score+ increase difficulty 
        if (step > 10) {
            step = 0;
            obstaclePos = rand() % 3; 
            
            score++;   //score+1
            
            if(speed>40)   //difficulty: speed up
             
             speed=speed-5;   //game gets faster
        }
    } 
    //-----GAME OVER SCREEN------
    PlaySound(NULL,NULL,0);
    printf("\n GAME OVER!\n");
    printf("Final Score:%d\n",score);

    return 0;
}
