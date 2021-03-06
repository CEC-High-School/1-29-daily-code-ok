#include <stdio.h>
#include <iostream>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_primitives.h>

using namespace std;

int main() {

	al_init();
	al_init_primitives_addon();
	al_init_font_addon(); // initialize the font addon
	al_init_ttf_addon();// initialize the ttf (True Type Font) addon
	int x, y;
	ALLEGRO_DISPLAY *display = al_create_display(500, 500);
	ALLEGRO_FONT *font = al_load_ttf_font("Gameplay.ttf", 25, 0);
	x = 0;
	y = 150;

	cout << "What is your age?" << endl;
	int age;
	cin >> age;


	al_clear_to_color(al_map_rgb(50, 10, 70));

	al_draw_textf(font, al_map_rgb(0, 0, 0), x, y, NULL, "Happy %dth Birthday!", age);

	al_flip_display();

	al_rest(10.0);

	al_destroy_display(display);

	return 0;
}