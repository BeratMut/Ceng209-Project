#ifndef ALLSTRUCTS_H
#define ALLSTRUCTS_H

#include <stdio.h>
#define MAX_INVENTORY 20


struct item {
	char itemName[50];
	int itemPower;
};

struct player {
	int position;
	int health;
	int attack;
	int inventorySize;
	struct item* inventory[MAX_INVENTORY];
};


struct room {
	char description[500];
	struct item* item;
	int monsterNum;
	struct monster* monster;
	int elixir;
};

struct monster {
	int health;
	int attack;
};

//In-Game Commands
void initialize_game(struct player* player);
void look(struct room* room);
void pickup(struct player* player, struct item* item);
void removeItem(struct room* room);
void seeInventory(struct player* player);
void move(struct player* player, char direction[50]);
void attack(struct player* player, struct monster* monster);
void drinkElixir(struct player* player);
void seePlayerStats(struct player* player);

#endif