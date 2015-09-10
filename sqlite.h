#ifndef __SQLITE_H__
#define __SQLITE_H__

#include <stdbool.h>

#include "datatypes.h"

bool sqlite_open(char *path);
void sqlite_close();
bool sqlite_exec(char* sql);
bool sqlite_create_table();
bool sqlite_insert_data(Data_Packet* data);

#endif