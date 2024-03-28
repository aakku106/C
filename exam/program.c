#include <stdio.h>
#include <ncurses.h>

int main()
{
    // Initialize curses
    initscr();
    cbreak();             // Disable line buffering
    noecho();             // Disable echoing of input
    keypad(stdscr, TRUE); // Enable keyboard input

    // Get the dimensions of the screen
    int max_y, max_x;
    getmaxyx(stdscr, max_y, max_x);

    // Calculate the coordinates for drawing the rectangle
    int start_y = (max_y - 5) / 2;  // Center the rectangle vertically
    int start_x = (max_x - 20) / 2; // Center the rectangle horizontally

    // Draw the rectangle
    for (int i = start_y; i < start_y + 5; i++)
    {
        for (int j = start_x; j < start_x + 20; j++)
        {
            if (i == start_y || i == start_y + 4 || j == start_x || j == start_x + 19)
            {
                mvprintw(i, j, "*");
            }
        }
    }

    // Write "Rectangle" inside the rectangle
    mvprintw(start_y + 2, start_x + 5, "Rectangle");

    // Refresh the screen to see the changes
    refresh();

    // Wait for a key press before exiting
    getch();

    // End curses
    endwin();

    return 0;
}
