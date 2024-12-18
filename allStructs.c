#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "allStructs.h"

void initialize_game(struct player* player) {
	player->position = 1;
	player->attack = 110;
	player->health = 100;
	player->inventorySize = 1;
	player->inventory[0] = (struct item*)malloc(sizeof(struct item));
	if (player->inventory[0] == NULL) {
		printf("Bellek ayýrma hatasý!\n");
		exit(1);
	}

	strcpy(player->inventory[0]->itemName, "Initial Sword");
	player->inventory[0]->itemPower = 10;
}

void look(struct room* room) {
	printf("%s \n", room->description);
	if (room->item != NULL) {
		printf("There is an Item!!!\n");
		printf("Item Name: %s\n", room->item->itemName);
		printf("Item Power: %d\n", room->item->itemPower);
	}
	else {
		printf("There is no any Item...\n");
	}
	printf("Monsters: %d\n", room->monsterNum);
	if (room->monsterNum > 0) {
		printf("Monster HP: %d\n", room->monster->health);
		printf("Monster POWER: %d\n", room->monster->attack);
	}
	printf("Elixir: %d\n", room->elixir);
}

void pickup(struct player* player, struct item* item) {
	int check = 0;
	
	for (int i = 0; i < player->inventorySize; i++) {
		if (player->inventory[i] == NULL) {
			printf("Bellek ayýrma hatasý!\n");
			exit(1);
		}
		else if (strcmp(player->inventory[i]->itemName, item->itemName) == 0) {
			check = 1;
		}
	}
	if (check == 0 && item != NULL) {
		player->inventory[player->inventorySize] = (struct item*)malloc(sizeof(struct item));
		player->inventory[player->inventorySize] = item;
		player->inventorySize++;
		player->attack += item->itemPower;
	}
	if (item == NULL) {
		printf("There is no Item!\n");
	}
	if (check == 1) {
		printf("You have already this item!\n");
	}
}


void removeItem(struct room* room) {
	room->item = NULL;
}

void seeInventory(struct player* player) {
	printf("\nInventory:\n");
	printf("---------------\n");
	for (int i = 0; i < player->inventorySize; i++) {
		printf("%s: %d Attack Damage\n", player->inventory[i]->itemName, player->inventory[i]->itemPower);
	}
	printf("---------------\n");
}

void move(struct player* player, char direction[50]) {
	if (strcmp(direction, "up") == 0) {
		if (player->position > 3) {
			player->position -= 3;
			printf("You are in the Room %d\n", player->position);
		}
		else {
			printf("You cannot move up!\n");
		}
	}
	else if (strcmp(direction, "down") == 0) {
		if (player->position < 7) {
			player->position += 3;
			printf("You are in the Room %d\n", player->position);
		}
		else {
			printf("You cannot move down!\n");
		}
	}
	else if (strcmp(direction, "right") == 0) {
		if (player->position % 3 != 0) {
			player->position += 1;
			printf("You are in the Room %d\n", player->position);
		}
		else {
			printf("You cannot move right!\n");
		}
	}
	else if (strcmp(direction, "left") == 0) {
		if (player->position % 3 != 1) {
			player->position -= 1;
			printf("You are in the Room %d\n", player->position);
		}
		else {
			printf("You cannot move left!\n");
		}
	}
	else {
		printf("Wrong Direction Entered!\n");
	}
}

void attack(struct player* player, struct monster* monster) {
	int playerHp = player->health;
	int playerAd = player->attack;
	int monsterHp = monster->health;
	int monsterAd = monster->attack;

	printf("You are attacking the Monster!!!\n");

	int afterWarPlayerHp = playerHp - monsterAd;
	int afterWarMonsterHp = monsterHp - playerAd;
	
	if (afterWarMonsterHp <= 0 && afterWarPlayerHp <= 0) {
		printf("Your remaining health: %d\n", playerHp);
		printf("Monster is dead\n");
		free(monster);
	}

	else if (afterWarPlayerHp <= 0) {
		printf("You die!!\n");
		player->health = 0;
	}
	else if (afterWarMonsterHp > 0) {
		printf("Your remaining health: %d\n", afterWarPlayerHp);
		player->health = afterWarPlayerHp;
		printf("Monster remaining health: %d\n", afterWarMonsterHp);
		monster->health = afterWarMonsterHp;
	}
	

	else {
		printf("Your remaining health: %d\n", afterWarPlayerHp);
		player->health = afterWarPlayerHp;
		printf("Monster is dead!!\n");
		free(monster);
	}

}

void drinkElixir(struct player* player) {
	player->health += 50;
};

void seePlayerStats(struct player* player) {
	printf("Player Health: %d\n", player->health);
	printf("Player Attack Damage: %d\n", player->attack);
}