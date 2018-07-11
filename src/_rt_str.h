/*
Copyright (C) 1994-1995  Apogee Software, Ltd.
Copyright (C) 2002-2015  icculus.org, GNU/Linux port
Copyright (C) 2017-2018  Steven LeVesque

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
//******************************************************************************
//
// Private header for RT_STR.C
//
//******************************************************************************

#ifndef _rt_str_private
#define _rt_str_private

//******************************************************************************
//
// PROTOTYPES
//
//******************************************************************************

void VWB_DrawPropString  (const char *string);
void VW_MeasurePropString (const char *string, int *width, int *height );

//void (*USL_MeasureString)(const char *, int *, int *, font_t *) = VW_MeasurePropString,
//     (*USL_DrawString)(const char *) = VWB_DrawPropString;
void (*USL_MeasureString)(const char *, int *, int *, font_t *) = (void (*)(const char *, int *, int *, font_t *))VW_MeasurePropString,
(*USL_DrawString)(const char *) = VWB_DrawPropString;


#endif
