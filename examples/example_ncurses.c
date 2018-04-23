#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

int main()
{
	initscr();
	start_color();
	init_pair(1, COLOR_WHITE, COLOR_BLACK);
	init_pair(2, COLOR_BLUE, COLOR_WHITE);
	init_pair(3, COLOR_RED, COLOR_WHITE);

	bkgd(COLOR_PAIR(1));
	attron(COLOR_PAIR(3));
	move(2, 1);
	printw("hello world!");
	attroff(COLOR_PAIR(3));
	move(3, 1);
	printw("press any key to exit.");

	attroff(COLOR_PAIR(2));
	refresh();
	getch();

	endwin();
}
	
