/*
 * Disnix - A distributed application layer for Nix
 * Copyright (C) 2008-2013  Sander van der Burg
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef __DISNIX_INFRASTRUCTURE_H
#define __DISNIX_INFRASTRUCTURE_H
#include <glib.h>

/**
 * Creates an array with target properties from an infrastructure Nix expression
 *
 * @param infrastructure_expr Path to the infrastructure Nix expression
 * @param target_property Idenifier of the property that specifies how to
 *                        connect to the remote disnix service
 * @return GArray with target properties
 */
GArray *create_target_array(char *infrastructure_expr, const char *target_property);

/**
 * Deletes an array with target properties
 *
 * @param target_array Array to delete
 */
void delete_target_array(GArray *target_array);

#endif
