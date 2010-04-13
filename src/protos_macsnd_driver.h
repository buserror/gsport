/*
 GSport - an Apple //gs Emulator
 Copyright (C) 2010 by GSport contributors
 
 Based on the KEGS emulator written by and Copyright (C) 2003 Kent Dickey

 This program is free software; you can redistribute it and/or modify it 
 under the terms of the GNU General Public License as published by the 
 Free Software Foundation; either version 2 of the License, or (at your 
 option) any later version.

 This program is distributed in the hope that it will be useful, but 
 WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
 or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License 
 for more details.

 You should have received a copy of the GNU General Public License along 
 with this program; if not, write to the Free Software Foundation, Inc., 
 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/

const char rcsid_protos_macsnd_driver_h[] = "@(#)$KmKId: protos_macsnd_driver.h,v 1.2 2003-11-19 19:57:02-05 kentd Exp $";

/* END_HDR */

/* macsnd_driver.c */
void mac_snd_callback(SndChannelPtr snd_chan_ptr, SndCommand *in_sndcmd);
int mac_send_audio(byte *ptr, int in_size);
void child_sound_init_mac(void);
void macsnd_init(word32 *shmaddr);
