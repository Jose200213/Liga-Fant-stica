#ifndef _ADMIN_H_
#define _ADMIN_H_

#include "tipos.h"
#include "cargar.h"

void editConfig(config **,int);
void listarUsuarios(usuario *,int);
void modificarUsuario(usuario **,int);
void anadirUsuario(usuario **,int *,int);
	//Ojo porque el tercer int será para 0 si accede como participante o 1 si accede como administrador//
void eliminarUsuario(usuario **,int *);
void listarEquipos(equipo *,int);
void modificarEquipo(equipo **,int);
void anadirEquipo(equipo **,int *);
void eliminarEquipo(equipo **,int *);
void listarFutbolistas(futbolista *,int);
void modificarFutbolista(futbolista **,int);
void anadirFutbolista(futbolista **,int *);
void eliminarFutbolista(futbolista **,int *);

#endif
