#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "allStructs.h"

struct room* findCurrentRoom(struct player* player) {

	FILE* file;

	// Arrow
	struct item* Arrow = (struct item*)malloc(sizeof(struct item));
	if (Arrow == NULL) {
		printf("Bellek ayýrma hatasý\n");
		exit(1);
	}
	file = fopen("Arrow.txt", "r");
	if (file == NULL) {
		printf("Dosya okuma hatasý!\n");
		free(Arrow);
		exit(1);
	}
	if (fscanf(file, "%s", Arrow->itemName) != 1 || fscanf(file, "%d", &Arrow->itemPower) != 1) {
		printf("Arrow verileri okunamadý!\n");
		fclose(file);
		free(Arrow);
		exit(1);
	}
	fclose(file);

	// fireSword
	struct item* fireSword = (struct item*)malloc(sizeof(struct item));
	if (fireSword == NULL) {
		printf("Bellek ayýrma hatasý\n");
		exit(1);
	}
	file = fopen("fireSword.txt", "r");
	if (file == NULL) {
		printf("Dosya okuma hatasý!\n");
		free(fireSword);
		exit(1);
	}
	if (fscanf(file, "%s", fireSword->itemName) != 1 || fscanf(file, "%d", &fireSword->itemPower) != 1) {
		printf("fireSword verileri okunamadý!\n");
		fclose(file);
		free(fireSword);
		exit(1);
	}
	fclose(file);

	// iceArrow
	struct item* iceArrow = (struct item*)malloc(sizeof(struct item));
	if (iceArrow == NULL) {
		printf("Bellek ayýrma hatasý\n");
		exit(1);
	}
	file = fopen("iceArrow.txt", "r");
	if (file == NULL) {
		printf("Dosya okuma hatasý!\n");
		free(iceArrow);
		exit(1);
	}
	if (fscanf(file, "%s", iceArrow->itemName) != 1 || fscanf(file, "%d", &iceArrow->itemPower) != 1) {
		printf("iceArrow verileri okunamadý!\n");
		fclose(file);
		free(iceArrow);
		exit(1);
	}
	fclose(file);

	// boneCrusher
	struct item* boneCrusher = (struct item*)malloc(sizeof(struct item));
	if (boneCrusher == NULL) {
		printf("Bellek ayýrma hatasý\n");
		exit(1);
	}
	file = fopen("boneCrusher.txt", "r");
	if (file == NULL) {
		printf("Dosya okuma hatasý!\n");
		free(boneCrusher);
		exit(1);
	}
	if (fscanf(file, "%s", boneCrusher->itemName) != 1 || fscanf(file, "%d", &boneCrusher->itemPower) != 1) {
		printf("kemikkiran verileri okunamadý!\n");
		fclose(file);
		free(boneCrusher);
		exit(1);
	}
	fclose(file);

	// shadowKnifes
	struct item* shadowKnifes = (struct item*)malloc(sizeof(struct item));
	if (shadowKnifes == NULL) {
		printf("Bellek ayýrma hatasý\n");
		exit(1);
	}
	file = fopen("shadowKnifes.txt", "r");
	if (file == NULL) {
		printf("Dosya okuma hatasý!\n");
		free(shadowKnifes);
		exit(1);
	}
	if (fscanf(file, "%s", shadowKnifes->itemName) != 1 || fscanf(file, "%d", &shadowKnifes->itemPower) != 1) {
		printf("shadowKnifes verileri okunamadý!\n");
		fclose(file);
		free(shadowKnifes);
		exit(1);
	}
	fclose(file);

	// Hell's Staff
	struct item* hellsStaff = (struct item*)malloc(sizeof(struct item));
	if (hellsStaff == NULL) {
		printf("Bellek ayýrma hatasý\n");
		exit(1);
	}
	file = fopen("hellsStaff.txt", "r");
	if (file == NULL) {
		printf("Dosya okuma hatasý!\n");
		free(hellsStaff);
		exit(1);
	}
	if (fscanf(file, "%s", hellsStaff->itemName) != 1 || fscanf(file, "%d", &hellsStaff->itemPower) != 1) {
		printf("cehennemAsasi verileri okunamadý!\n");
		fclose(file);
		free(hellsStaff);
		exit(1);
	}
	fclose(file);

	
	


	//Monsters

	
	struct monster* monster2 = (struct monster*)malloc(sizeof(struct monster));
	if (monster2 == NULL) {
		printf("Bellek ayýrma hatasý\n");
		exit(1);
	}
	file = fopen("monster2.txt", "r");
	if (file == NULL) {
		printf("Dosya okuma hatasý!\n");
		free(monster2);
		exit(1);
	}
	if (fscanf(file, "%d", &monster2->health) != 1 || fscanf(file, "%d", &monster2->attack) != 1) {
		printf("monster2 verileri okunamadý!\n");
		fclose(file);
		free(monster2);
		exit(1);
	}
	fclose(file);


	struct monster* monster3 = (struct monster*)malloc(sizeof(struct monster));
	if (monster3 == NULL) {
		printf("Bellek ayýrma hatasý\n");
		exit(1);
	}
	file = fopen("monster3.txt", "r");
	if (file == NULL) {
		printf("Dosya okuma hatasý! (monster3)\n");
		free(monster3);
		exit(1);
	}
	if (fscanf(file, "%d", &monster3->health) != 1 || fscanf(file, "%d", &monster3->attack) != 1) {
		printf("monster3 verileri okunamadý!\n");
		fclose(file);
		free(monster3);
		exit(1);
	}
	fclose(file);



	struct monster* monster4 = (struct monster*)malloc(sizeof(struct monster));
	if (monster4 == NULL) {
		printf("Bellek ayýrma hatasý\n");
		exit(1);
	}
	file = fopen("monster4.txt", "r");
	if (file == NULL) {
		printf("Dosya okuma hatasý! (monster4)\n");
		free(monster4);
		exit(1);
	}
	if (fscanf(file, "%d", &monster4->health) != 1 || fscanf(file, "%d", &monster4->attack) != 1) {
		printf("monster4 verileri okunamadý!\n");
		fclose(file);
		free(monster4);
		exit(1);
	}
	fclose(file);


	struct monster* monster8 = (struct monster*)malloc(sizeof(struct monster));
	if (monster8 == NULL) {
		printf("Bellek ayýrma hatasý\n");
		exit(1);
	}
	file = fopen("monster8.txt", "r");
	if (file == NULL) {
		printf("Dosya okuma hatasý! (monster8)\n");
		free(monster8);
		exit(1);
	}
	if (fscanf(file, "%d", &monster8->health) != 1 || fscanf(file, "%d", &monster8->attack) != 1) {
		printf("monster8 verileri okunamadý!\n");
		fclose(file);
		free(monster8);
		exit(1);
	}
	fclose(file);


	struct monster* monster9 = (struct monster*)malloc(sizeof(struct monster));
	if (monster9 == NULL) {
		printf("Bellek ayýrma hatasý\n");
		exit(1);
	}
	file = fopen("monster9.txt", "r");
	if (file == NULL) {
		printf("Dosya okuma hatasý! (monster9)\n");
		free(monster9);
		exit(1);
	}
	if (fscanf(file, "%d", &monster9->health) != 1 || fscanf(file, "%d", &monster9->attack) != 1) {
		printf("monster9 verileri okunamadý!\n");
		fclose(file);
		free(monster9);
		exit(1);
	}
	fclose(file);



	


	//Rooms
	//Room 1
	struct room* room1 = (struct room*)malloc(sizeof(struct room));
	if (room1 == NULL) {
		printf("Bellek ayýrma hatasý\n");
		exit(1);
	}
	file = fopen("room1.txt", "r");
	if (file == NULL) {
		printf("Dosya okuma hatasý! (room1)\n");
		free(room1);
		exit(1);
	}
	if (fgets(room1->description, sizeof(room1->description), file) == NULL ||
		fscanf(file, "%d", &room1->monsterNum) != 1 ||
		fscanf(file, "%d", &room1->elixir) != 1) {
		printf("room1 verileri okunamadý!\n");
		fclose(file);
		free(room1);
		exit(1);
	}
	fclose(file);
	room1->item = NULL;  // Örnek olarak item boþ
	room1->monster = NULL;  // Monster boþ

	//Room 2
	struct room* room2 = (struct room*)malloc(sizeof(struct room));
	if (room2 == NULL) {
		printf("Bellek ayýrma hatasý\n");
		exit(1);
	}
	file = fopen("room2.txt", "r");
	if (file == NULL) {
		printf("Dosya okuma hatasý! (room1)\n");
		free(room2);
		exit(1);
	}
	if (fgets(room2->description, sizeof(room2->description), file) == NULL ||
		fscanf(file, "%d", &room2->monsterNum) != 1 ||
		fscanf(file, "%d", &room2->elixir) != 1) {
		printf("room2 verileri okunamadý!\n");
		fclose(file);
		free(room2);
		exit(1);
	}
	fclose(file);
	room2->item = Arrow;
	room2->monster = monster2;

	//Room 3
	struct room* room3 = (struct room*)malloc(sizeof(struct room));
	if (room3 == NULL) {
		printf("Bellek ayýrma hatasý\n");
		exit(1);
	}
	file = fopen("room3.txt", "r");
	if (file == NULL) {
		printf("Dosya okuma hatasý! (room3)\n");
		free(room3);
		exit(1);
	}
	if (fgets(room3->description, sizeof(room3->description), file) == NULL ||
		fscanf(file, "%d", &room3->monsterNum) != 1 ||
		fscanf(file, "%d", &room3->elixir) != 1) {
		printf("room3 verileri okunamadý!\n");
		fclose(file);
		free(room3);
		exit(1);
	}
	fclose(file);
	room3->item = NULL;
	room3->monster = monster3;  // Monster3 atanýyor
	

	//Room 4
	struct room* room4 = (struct room*)malloc(sizeof(struct room));
	if (room4 == NULL) {
		printf("Bellek ayýrma hatasý\n");
		exit(1);
	}
	file = fopen("room4.txt", "r");
	if (file == NULL) {
		printf("Dosya okuma hatasý! (room4)\n");
		free(room4);
		exit(1);
	}
	if (fgets(room4->description, sizeof(room4->description), file) == NULL ||
		fscanf(file, "%d", &room4->monsterNum) != 1 ||
		fscanf(file, "%d", &room4->elixir) != 1) {
		printf("room4 verileri okunamadý!\n");
		fclose(file);
		free(room4);
		exit(1);
	}
	fclose(file);
	room4->item = iceArrow;
	room4->monster = monster4;  // Monster4 atanýyor

	//Room 5
	struct room* room5 = (struct room*)malloc(sizeof(struct room));
	if (room5 == NULL) {
		printf("Bellek ayýrma hatasý\n");
		exit(1);
	}
	file = fopen("room5.txt", "r");
	if (file == NULL) {
		printf("Dosya okuma hatasý! (room5)\n");
		free(room5);
		exit(1);
	}
	if (fgets(room5->description, sizeof(room5->description), file) == NULL ||
		fscanf(file, "%d", &room5->monsterNum) != 1 ||
		fscanf(file, "%d", &room5->elixir) != 1) {
		printf("room5 verileri okunamadý!\n");
		fclose(file);
		free(room5);
		exit(1);
	}
	fclose(file);
	room5->item = fireSword;
	room5->monster = NULL;  // Monster5 atanýyor
	
	//Room 6
	struct room* room6 = (struct room*)malloc(sizeof(struct room));
	if (room6 == NULL) {
		printf("Bellek ayýrma hatasý\n");
		exit(1);
	}
	file = fopen("room6.txt", "r");
	if (file == NULL) {
		printf("Dosya okuma hatasý! (room6)\n");
		free(room6);
		exit(1);
	}
	if (fgets(room6->description, sizeof(room6->description), file) == NULL ||
		fscanf(file, "%d", &room6->monsterNum) != 1 ||
		fscanf(file, "%d", &room6->elixir) != 1) {
		printf("room6 verileri okunamadý!\n");
		fclose(file);
		free(room6);
		exit(1);
	}
	fclose(file);
	room6->item = shadowKnifes;
	room6->monster = NULL;  // Monster6 atanýyor

	//Room 7
	struct room* room7 = (struct room*)malloc(sizeof(struct room));
	if (room7 == NULL) {
		printf("Bellek ayýrma hatasý\n");
		exit(1);
	}
	file = fopen("room7.txt", "r");
	if (file == NULL) {
		printf("Dosya okuma hatasý! (room7)\n");
		free(room7);
		exit(1);
	}
	if (fgets(room7->description, sizeof(room7->description), file) == NULL ||
		fscanf(file, "%d", &room7->monsterNum) != 1 ||
		fscanf(file, "%d", &room7->elixir) != 1) {
		printf("room7 verileri okunamadý!\n");
		fclose(file);
		free(room7);
		exit(1);
	}
	fclose(file);
	room7->item = boneCrusher;
	room7->monster = NULL; // Monster7 atanýyor


	//Room 8
	struct room* room8 = (struct room*)malloc(sizeof(struct room));
	if (room8 == NULL) {
		printf("Bellek ayýrma hatasý\n");
		exit(1);
	}
	file = fopen("room8.txt", "r");
	if (file == NULL) {
		printf("Dosya okuma hatasý! (room8)\n");
		free(room8);
		exit(1);
	}
	if (fgets(room8->description, sizeof(room8->description), file) == NULL ||
		fscanf(file, "%d", &room8->monsterNum) != 1 ||
		fscanf(file, "%d", &room8->elixir) != 1) {
		printf("room8 verileri okunamadý!\n");
		fclose(file);
		free(room8);
		exit(1);
	}
	fclose(file);
	room8->item = hellsStaff;
	room8->monster = monster8;  // Monster8 atanýyor
	

	//Room 9
	struct room* room9 = (struct room*)malloc(sizeof(struct room));
	if (room9 == NULL) {
		printf("Bellek ayýrma hatasý\n");
		exit(1);
	}
	file = fopen("room9.txt", "r");
	if (file == NULL) {
		printf("Dosya okuma hatasý! (room9)\n");
		free(room9);
		exit(1);
	}
	if (fgets(room9->description, sizeof(room9->description), file) == NULL ||
		fscanf(file, "%d", &room9->monsterNum) != 1 ||
		fscanf(file, "%d", &room9->elixir) != 1) {
		printf("room9 verileri okunamadý!\n");
		fclose(file);
		free(room9);
		exit(1);
	}
	fclose(file);
	room9->item = NULL;
	room9->monster = monster9;  // Monster9 atanýyor
	
	if (player->position == 1) {
		return room1;
	}

	else if (player->position == 2) {
		return room2;
	}

	else if (player->position == 3) {
		return room3;
	}

	else if (player->position == 4) {
		return room4;
	}

	else if (player->position == 5) {
		return room5;
	}

	else if (player->position == 6) {
		return room6;
	}

	else if (player->position == 7) {
		return room7;
	}

	else if (player->position == 8) {
		return room8;
	}

	else {
		return room9;
	}
}



int main() {


	while (1) {
		printf("\nWelcome to the Dungeon Game!!!\n");
		printf("---------------------------\n");
		printf("1-Start a New Game...\n2-Load a Game...\n");

		int userInput;
		printf("Enter a valid number: ");
		if (scanf("%d", &userInput) != 1) {
			printf("Hata: Geçersiz tam sayý giriþi!\n");
			return 1;
		}

		if (userInput == 1) {
			char direction[50];

			struct player* player = (struct player*)malloc(sizeof(struct player));
			if (player == NULL) {
				printf("Bellek ayýrma hatasý!\n");
				exit(1);
			}

			initialize_game(player);

			while ((player->health > 0) && (player->position != 9)) {
				struct room* currentRoom = (struct room*)malloc(sizeof(struct room));
				if (currentRoom == NULL) {
					printf("Bellek Ayýrma Hatasý!");
					exit(1);
				}

				printf("Now you are in the safe place, move to start the game!\n");

				printf("Select a direction to move(up,right,left,down): ");
				if (scanf("%s", direction) != 1) {
					printf("Hata: Geçersiz direction giriþi!\n");
					return 1;
				}
				if (strcmp(direction, "up") != 0 && strcmp(direction, "right") != 0 && strcmp(direction, "left") && strcmp(direction, "down") != 0) {
					continue;
				}

				move(player, direction);
				currentRoom = findCurrentRoom(player);

				while (1) {
					int playerDecision;
					if (player->position == 9 && currentRoom->monsterNum <= 0) {
						printf("You Won the Game Congralitions\n");
						break;
					}
					printf("---------------------------\n1-Look at the room\n2-Pickup the Item\n3-Attack the Monster\n4-Move\n5-See Inventory\n6-See Stats\n7-Drink Elixir \n---------------------------\n");
					if (scanf("%d", &playerDecision) != 1) {
						printf("Hata: Geçersiz tam sayý giriþi!\n");
						return 1;
					}

					if (playerDecision == 1) {
						look(currentRoom);
					}

					else if (playerDecision == 2) {
						if (currentRoom->monsterNum <= 0) {
							pickup(player, currentRoom->item);
						}
						else {
							printf("You cannot pickup the item until Monster is dead!");
						}
					}

					else if (playerDecision == 3) {
						if (currentRoom->monsterNum > 0) {
							attack(player, currentRoom->monster);
							if (currentRoom->monster->health <= 0) {
								currentRoom->monsterNum = 0;
							}
							if (player->health <= 0) {
								printf("YOU LOST!\n");
								printf("---------------------------\n");
								break;
							}
						}
						else {
							printf("There is not a monster!\n");
						}
						
						
					}

					else if (playerDecision == 4) {
						printf("Enter a direction: ");
						if (scanf("%s", direction) != 1) {
							printf("Hata: Geçersiz direction giriþi!\n");
							return 1;
						}
						move(player, direction);
						currentRoom = findCurrentRoom(player);
					}

					else if (playerDecision == 5) {
						seeInventory(player);
					}

					else if (playerDecision == 6) {
						seePlayerStats(player);
					}

					else if (playerDecision == 7) {
						if (currentRoom->elixir) {
							drinkElixir(player);
							currentRoom->elixir -= 1;
						}
						else {
							printf("There isn't an elixir!\n");
						}
					}

				}
			}

		}

		else if (userInput == 2) {

		}

		else {

		}

	}
	return 0;
}