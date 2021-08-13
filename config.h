/**
 * File              : config.h
 * License           : MIT
 * Author            : Steven Agustinus <steven87.ags@gmail.com>
 * Date              : 20.06.2021
 * Last Modified Date: 20.06.2021
 * Last Modified By  : Steven Agustinus <steven87.ags@gmail.com>
 */
/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static int colorprompt = 1;                /* -p  option; if 1, prompt uses SchemeSel, otherwise SchemeNorm */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static const char *fonts[] = {
	"JetBrainsMonoMedium Nerd Font:size=11", "NotoColorEmoji:size=11"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#000000" },
	[SchemeSel] = { "#ffffff", "#919191" },
	[SchemeOut] = { "#000000", "#00ffff" },
/*	[SchemeMid] = { "#eeeeee", "#770000" },*/  /* uncomment if want to use morecolors patch */
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
