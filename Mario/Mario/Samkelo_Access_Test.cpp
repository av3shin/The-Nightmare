#include<allegro5\allegro.h>
#include<allegro5\allegro_native_dialog.h>

int main() {
	ALLEGRO_DISPLAY *display;
	if (!al_init())
	{
		al_show_native_message_box(NULL, NULL, NULL, "FAILED", NULL, NULL);
	}
	display = al_create_display(800, 600);
	if (!display)
	{
		al_show_native_message_box(NULL, NULL, NULL, "samkelo zondi", NULL, NULL);
	}

	al_destroy_display(display);
	return 0;
}