
/* array of constants for different paper formats */
/* in the order letter, fanfold, dina4, letter(landscape), fanfold(land), dina4(land) */
PAPERFORMAT PaperFormat[] = {
/* code, X size,         Y size,         X offset,      Y offset,       Form Length,    Physical Y offset*/
{LETTER, HPAGESIZE,      VPAGESIZE,      HOFFSET,       VOFFSET,        VPAGESIZE,      VOFFSET - RIBBON_OFFSET,        },
{DINA4,  DINA4_HPAGESIZE,DINA4_VPAGESIZE,DINA4_HOFFSET, DINA4_VOFFSET,  DINA4_VPAGESIZE,DINA4_VOFFSET - RIBBON_OFFSET,  },
{FANFOLD,FANF_HPAGESIZE, FANF_VPAGESIZE, FANF_HOFFSET,  FANF_VOFFSET,   FANF_VPAGESIZE, FANF_VOFFSET - RIBBON_OFFSET,   },

#if DEVMODE_WIDEPAPER		
{LETTER, WIDE_HPAGESIZE,      VPAGESIZE,      HOFFSET,       VOFFSET,        VPAGESIZE,      VOFFSET - RIBBON_OFFSET,        },
{DINA4,  WIDE_HPAGESIZE,DINA4_VPAGESIZE,DINA4_HOFFSET, DINA4_VOFFSET,  DINA4_VPAGESIZE,DINA4_VOFFSET - RIBBON_OFFSET,  },
{FANFOLD,WIDE_HPAGESIZE, FANF_VPAGESIZE, FANF_HOFFSET,  FANF_VOFFSET,   FANF_VPAGESIZE, FANF_VOFFSET - RIBBON_OFFSET,   },
#endif

{LETTER, VPAGESIZE,      HPAGESIZE,      VOFFSET,       HOFFSET,        VPAGESIZE,      VOFFSET - RIBBON_OFFSET,        },
{DINA4,  DINA4_VPAGESIZE,DINA4_HPAGESIZE,DINA4_VOFFSET, DINA4_HOFFSET,  DINA4_VPAGESIZE,DINA4_VOFFSET - RIBBON_OFFSET,  },
{FANFOLD,FANF_VPAGESIZE, FANF_HPAGESIZE, FANF_VOFFSET,  FANF_HOFFSET,   FANF_VPAGESIZE, FANF_VOFFSET - RIBBON_OFFSET,   },

#if DEVMODE_WIDEPAPER		
{LETTER, VPAGESIZE,      WIDE_HPAGESIZE,      VOFFSET,       HOFFSET,        VPAGESIZE,      VOFFSET - RIBBON_OFFSET,        },
{DINA4,  DINA4_VPAGESIZE,WIDE_HPAGESIZE,DINA4_VOFFSET, DINA4_HOFFSET,  DINA4_VPAGESIZE,DINA4_VOFFSET - RIBBON_OFFSET,  },
{FANFOLD,FANF_VPAGESIZE, WIDE_HPAGESIZE, FANF_VOFFSET,  FANF_HOFFSET,   FANF_VPAGESIZE, FANF_VOFFSET - RIBBON_OFFSET,   },
#endif
};

