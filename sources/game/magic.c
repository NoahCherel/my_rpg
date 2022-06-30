/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** battle
*/

#include "rpg.h"

int magic(scene_t *scene, global_t *g)
{
    scene->state = 4;
    scene->nb_texts = 1;
    scene->nb_buttons = 1;
    scene->nb_objs = 1;
    scene->buttons = malloc(sizeof(button_t *) * scene->nb_buttons + 1);
    scene->texts = malloc(sizeof(sfText *) * scene->nb_texts + 1);
    ftext = init_txt(vect{360, 300}, WTXT("You don't have any magic stats !"));
    init_button(&scene->buttons[0], vect{1920 / 2 - 185, 1080 / 2},
    "Back", 1);
    return (9);
}

int magic_events(scene_t *scene, global_t *g)
{
    if (g->window->event.type == sfEvtKeyReleased && KEYCODE == sfKeyEscape) {
        scene->state = 0;
        init_battle(scene, g);
        return (9);
    }
    if (g->window->event.type == sfEvtKeyReleased && KEYCODE == sfKeyEnter) {
        scene->state = 0;
        init_battle(scene, g);
        return (9);
    }
    if (button_click(scene->buttons[0].rect, (sfVector2i){M_POS_X, M_POS_Y})) {
        scene->state = 0;
        init_battle(scene, g);
        return (9);
    }
    pause_button(scene, g);
    return (9);
}
