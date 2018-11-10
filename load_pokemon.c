#include <stdio.h>

int load_pokemon(int id) {
	// 'pokemon_sprites.txt' must be present
	const int POKEMON_HEIGHT = 100;
	const int POKEMON_WIDTH = 100;
	FILE * sprites = fopen("pokemon_sprites.txt", "r");
	char buff[POKEMON_WIDTH];

	// sprite begins at id * 100
	int start = (id * 100) - 99;
	for (int i = 0; i < start; i++) {
		fgets(buff, 256, sprites);	
	}

	for (int i = 0; i < POKEMON_HEIGHT; i++) {	
		fscanf(sprites, "%s\n", buff);
		printf("%s\n", buff);
	}
	printf("\n");

	return 0;
}

int main() {
	printf("Nidorina\n");
	load_pokemon(30);
	printf("Gastly\n");
	load_pokemon(92);
	printf("Poliwag\n");
	load_pokemon(60);


	return 0;
}
