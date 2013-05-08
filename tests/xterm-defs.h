#define mvwdelch(win,y,x) (wmove(win,y,x) == ERR ? ERR : wdelch(win))
#define sa_sigaction __sigaction_u.__sa_sigaction
#define setbit(a,i) (((unsigned char *)(a))[(i)/NBBY] |= 1<<((i)%NBBY))
#define XK_Cyrillic_GHE_bar 0x1000492
#define XtCFaceSize "FaceSize"
#define SmsInteractDoneProcMask (1L << 2)
#define XK_sacute 0x01b6
#define OwnerGrabButtonMask (1L<<24)
#define XtNallowTitleOps "allowTitleOps"
#define INX2ABS(screen,inx) ROW2ABS(screen, INX2ROW(screen, inx))
#define _STDLIB_H_ 
#define __DBL_MIN_EXP__ (-1021)
#define TRACE_DISABLE 0x0000
#define XK_Ubreve 0x02dd
#define XK_Arabic_hamzaonalef 0x05c3
#define EMULTIHOP 90
#define ACS_STERLING NCURSES_ACS('}')
#define _MODE_T_DECLARED 
#define XK_MultipleCandidate 0xff3d
#define XC_left_ptr 68
#define XK_Terminate_Server 0xfed5
#define included_xterm_io_h 
#define XK_Linefeed 0xff0a
#define _SC_CLK_TCK 3
#define _POSIX_THREAD_PRIORITY_SCHEDULING 200112L
#define XK_Ohornacute 0x1001eda
#define _SMP_DB "spwd.db"
#define PRIO_MIN -20
#define TIOCMBIC _IOW('t', 107, int)
#define CursorX2(screen,col,fw) ((col) * (int)(fw) + OriginX(screen))
#define LowerHighest 1
#define XNQueryOrientation "queryOrientation"
#define XtCBorderColor ((char*)&XtStrings[928])
#define XK_braille_dots_1568 0x10028b1
#define XC_top_left_corner 134
#define _XOPEN_STREAMS -1
#define XK_KOREAN 
#define deleteln() winsdelln(stdscr,-1)
#define GCFunction (1L<<0)
#define NeedVarargsPrototypes 1
#define XK_Amacron 0x03c0
#define _SC_NGROUPS_MAX 4
#define ISO_PROTECT 2
#define MAX_EWMH_DATA (1 + OPT_TEK4014)
#define MotionNotify 6
#define SmRestartAnyway 1
#define __GNUCLIKE___OFFSETOF 1
#define XK_Pointer_DblClick5 0xfef3
#define SM_GetProperties 14
#define FD_COPY(f,t) (void)(*(t) = *(f))
#define XK_Georgian_in 0x10010d8
#define XtNkeyboardDialect "keyboardDialect"
#define _SC_SPIN_LOCKS 80
#define XK_Hangul_J_Pieub 0x0ee4
#define _DEV_T_DECLARED 
#define XK_Page_Down 0xff56
#define VERASE 3
#define XK_Greek_IOTAaccent 0x07a4
#define _SC_IPV6 118
#define __DEC64_DEN__ 0.000000000000001E-383DD
#define XNegative 0x0010
#define XK_Pause 0xff13
#define XK_hebrew_finalmem 0x0ced
#define XC_bottom_right_corner 14
#define _SC_XOPEN_REALTIME 111
#define _UINT8_T_DECLARED 
#define XK_acircumflex 0x00e2
#define RFNAMEG (1<<0)
#define XtNmenuEntry ((char*)&XtStrings[471])
#define XtNcolorAttrMode "colorAttrMode"
#define OPTIMIZE_ALL 0xff
#define XtNfaceSize "faceSize"
#define BtoS(b) (((b) == Maybe) ? "maybe" : ((b) ? "on" : "off"))
#define XK_oslash 0x00f8
#define _SC_EXPR_NEST_MAX 14
#define SIGBUS 10
#define KEY_SCOMMAND 0574
#define PENDIN 0x20000000
#define USE_STRUCT_WINSIZE 1
#define XK_ygrave 0x1001ef3
#define _ID_T_DECLARED 
#define XK_Hangul_Ieung 0x0eb7
#define OPT_WIDE_CHARS 0
#define __CHAR_BIT__ 8
#define __malloc_like __attribute__((__malloc__))
#define _XOPEN_CRYPT -1
#define _TIME_H_ 
#define XtHunmanageSet ((char*)&XtStrings[2267])
#define _SC_THREAD_SAFE_FUNCTIONS 91
#define IOCPARM_LEN(x) (((x) >> 16) & IOCPARM_MASK)
#define DoRed (1<<0)
#define SHRT_MAX __SHRT_MAX
#define XK_Zabovedot 0x01af
#define HAVE_X11_SUNKEYSYM_H 1
#define OPT_BROKEN_ST 1
#define XK_braille_dots_1234 0x100280f
#define SIGTTIN 21
#define XK_Gcaron 0x10001e6
#define FIOSEEKDATA _IOWR('f', 97, off_t)
#define EACCES 13
#define DefaultScreenOfDisplay(dpy) ScreenOfDisplay(dpy,DefaultScreen(dpy))
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS 9
#define ACS_RARROW NCURSES_ACS('+')
#define _SC_COLL_WEIGHTS_MAX 13
#define XtExtdefaultforeground ((char*)&XtStrings[1984])
#define XK_Georgian_jil 0x10010eb
#define CREAD 0x00000800
#define EDESTADDRREQ 39
#define move(y,x) wmove(stdscr,y,x)
#define XK_Thai_thanthakhat 0x0dec
#define XK_Macedonia_dse 0x06a5
#define XTTYMODE_eol2 18
#define XtCClientLeader ((char*)&XtShellStrings[826])
#define XtCCursorColor "CursorColor"
#define XtNtiteInhibit "titeInhibit"
#define PIPE_BUF 512
#define ICE_WantToClose 11
#define _ICELIB_H_ 
#define XK_Greek_IOTA 0x07c9
#define XC_fleur 52
#define _MQD_T_DECLARED 
#define xtermColorPair(xw) makeColorPair(xw->sgr_foreground, xw->sgr_background)
#define _SIG_IDX(sig) ((sig) - 1)
#define KEY_SDC 0577
#define OPT_DABBREV 0
#define KEY_SDL 0600
#define XtNcursorUnderline "cursorUnderLine"
#define stderr __stderrp
#define BUTTON_TRIPLE_CLICK(e,x) ((e) & NCURSES_MOUSE_MASK(x, 020))
#define update_font_utf8_fonts() 
#define XtExposeNoCompress ((XtEnum)False)
#define ANSI_ESC 0x1B
#define va_start(ap,last) __builtin_va_start((ap), (last))
#define SmRestartImmediately 2
#define XtCInitialFont "InitialFont"
#define IOC_VOID 0x20000000
#define BUTTON3_DOUBLE_CLICKED NCURSES_MOUSE_MASK(3, NCURSES_DOUBLE_CLICKED)
#define ITIMER_VIRTUAL 1
#define XtEoff ((char*)&XtStrings[1902])
#define BumpBuffer(type,buffer,size,want) if (want >= size) { size = 1 + (want * 2); buffer = TypeRealloc(type, size, buffer); }
#define XtCAllowFontOps "AllowFontOps"
#define B600 600
#define EMLINK 31
#define GXxor 0x6
#define XK_Overlay1_Enable 0xfe78
#define ERROR_PTSNAME 17
#define XK_Cyrillic_KA_descender 0x100049a
#define XtNancestorSensitive ((char*)&XtStrings[34])
#define BLKDEV_IOSIZE PAGE_SIZE
#define _SC_AIO_PRIO_DELTA_MAX 44
#define TTY_GROUP_NAME "tty"
#define XK_Armenian_LYUN 0x100053c
#define trunc_2mpage(x) ((unsigned long)(x) & ~PDRMASK)
#define LASTEvent 36
#define fontMenu_lastBuiltin fontMenu_font6
#define XtNknobWidth ((char*)&XtStrings[419])
#define XtCFontStyle "FontStyle"
#define XK_Thai_lekchet 0x0df7
#define __DBL_DENORM_MIN__ 4.9406564584124654e-324
#define RFHIGHPID (1<<18)
#define XK_braille_dots_15678 0x10028f1
#define XK_KP_Next 0xff9b
#define XtNknobHeight ((char*)&XtStrings[387])
#define MapRequest 20
#define round_2mpage(x) ((((unsigned long)(x)) + PDRMASK) & ~PDRMASK)
#define F_RDLCK 1
#define XtCWmTimeout ((char*)&XtShellStrings[763])
#define TIOCSBRK _IO('t', 123)
#define GCGraphicsExposures (1L<<16)
#define XK_Thai_maihanakat_maitho 0x0dde
#define RootWindow(dpy,scr) (ScreenOfDisplay(dpy,scr)->root)
#define B19200 19200
#define XK_Armenian_vev 0x100057e
#define for_each_text_gc(n) for (n = gcNorm; n < gcVTcursNormal; ++n)
#define KEY_SIC 0610
#define TTYDEF_IFLAG (BRKINT | ICRNL | IMAXBEL | IXON | IXANY)
#define SHRT_MIN __SHRT_MIN
#define _SC_SPORADIC_SERVER 81
#define XK_ncedilla 0x03f1
#define GXclear 0x0
#define __sfeof(p) (((p)->_flags & __SEOF) != 0)
#define S_BLKSIZE 512
#define MODIFIER_NAME(parm,name) (((parm > MOD_NONE) && ((parm - MOD_NONE) & name)) ? " "#name : "")
#define XtCAllowTitleOps "AllowTitleOps"
#define False 0
#define NPDEPGSHIFT 9
#define _SC_THREAD_PRIO_INHERIT 87
#define WA_DIM A_DIM
#define Max(x,y) (((x) > (y)) ? (x) : (y))
#define XK_hcircumflex 0x02b6
#define XK_F35 0xffe0
#define XtCPointerColor "PointerColor"
#define XIMStringConversionConcealed (0x00000010)
#define NAME_SCO_KT 
#define instr(s) winstr(stdscr,s)
#define XK_Thai_maiek 0x0de8
#define _CTYPE_SW0 0x20000000L
#define _CTYPE_SW1 0x40000000L
#define _CTYPE_SW2 0x80000000L
#define _CTYPE_SW3 0xc0000000L
#define XtCMenuHeight "MenuHeight"
#define XtCDisallowedWindowOps "DisallowedWindowOps"
#define _CTYPE_SWM 0xe0000000L
#define XK_uring 0x01f9
#define BadLength 16
#define _CTYPE_SWS 30
#define UTMP_STR utmp
#define SIOCGIFDESCR _IOWR('i', 42, struct ifreq)
#define XK_Cyrillic_yeru 0x06d9
#define XK_Serbian_JE 0x06b8
#define __x86_64 1
#define NATIONAL MiscBIT(9)
#define OPT_I18N_SUPPORT 1
#define XK_ccedilla 0x00e7
#define XtNtiXtraScroll "tiXtraScroll"
#define YXBanded 3
#define XtCWidth ((char*)&XtStrings[1510])
#define NormalState 1
#define putchar_unlocked(x) putc_unlocked(x, stdout)
#define SIOCGLIFADDR _IOWR('i', 28, struct if_laddrreq)
#define addchstr(str) waddchstr(stdscr,str)
#define XtNprinterCommand "printerCommand"
#define LINEBLINKED AttrBIT(1)
#define A_UNDERLINE NCURSES_BITS(1UL,9)
#define XK_Thai_saraa 0x0dd0
#define XK_Thai_sarae 0x0de0
#define SIGPROF 27
#define XK_Thai_sarai 0x0dd4
#define XK_Thai_sarao 0x0de2
#define XK_Cyrillic_HA_descender 0x10004b2
#define XK_Thai_sarau 0x0dd8
#define XtNeightBitControl "eightBitControl"
#define bool _Bool
#define ForgetGravity 0
#define TypeRealloc(type,n,p) (type *)realloc(p, (n) * sizeof(type))
#define _SC_CPUTIME 68
#define XK_Thai_leksam 0x0df3
#define XK_Arabic_yeh 0x05ea
#define ERROR_SELECT 50
#define LASTLOG_FILENAME "/usr/adm/lastlog"
#define XK_Georgian_can 0x10010ea
#define attrset(at) wattrset(stdscr,at)
#define mouse_trafo(y,x,to_screen) wmouse_trafo(stdscr,y,x,to_screen)
#define __DBL_MIN_10_EXP__ (-307)
#define IsLeftRightMode(xw) ((xw)->flags & LEFT_RIGHT)
#define ENOTTY 25
#define XtDisplay(widget) DisplayOfScreen((widget)->core.screen)
#define XK_egrave 0x00e8
#define XTERM_PATCH 292
#define XC_arrow 2
#define XtNorientation ((char*)&XtStrings[505])
#define BadRequest 1
#define SIOCIFCREATE2 _IOWR('i', 124, struct ifreq)
#define isOption(string) (Boolean)((string)[0] == '-' || (string)[0] == '+')
#define B150 150
#define A_ATTRIBUTES NCURSES_BITS(~(1UL - 1UL),0)
#define SmcSaveCompleteProcMask (1L << 2)
#define _SC_MEMLOCK_RANGE 31
#define XIMPreeditArea 0x0001L
#define SM_DeleteProperties 13
#define L_cuserid 17
#define XK_dead_belowcircumflex 0xfe69
#define XtNallowScrollLock "allowScrollLock"
#define XK_quoteright 0x0027
#define TIOCGETA _IOR('t', 19, struct termios)
#define XK_Hangul_J_Sios 0x0ee6
#define XK_dead_belowdot 0xfe60
#define DisplayPlanes(dpy,scr) (ScreenOfDisplay(dpy,scr)->root_depth)
#define T_DOUBLEFLT 23
#define WhitePixel(dpy,scr) (ScreenOfDisplay(dpy,scr)->white_pixel)
#define INLCR 0x00000040
#define PropModePrepend 1
#define PROPERTY_MAX_NAME 64
#define XK_KP_F1 0xff91
#define XK_KP_F2 0xff92
#define XK_KP_F3 0xff93
#define XK_KP_F4 0xff94
#define IsUnmapped 0
#define XK_MATHEMATICAL 
#define XK_threesubscript 0x1002083
#define S_IFBLK 0060000
#define XK_Rcaron 0x01d8
#define _POSIX_TRACE_EVENT_FILTER -1
#define Min(x,y) (((x) < (y)) ? (x) : (y))
#define CSTART CTRL('Q')
#define XtCVT100Graphics "VT100Graphics"
#define XtObjectExtensionVersion 1L
#define __DECONST(type,var) ((type)(uintptr_t)(const void *)(var))
#define AllValues 0x000F
#define NGROUPS (NGROUPS_MAX+1)
#define XIMStringConversionBottomEdge (0x00000008)
#define KEY_MOVE 0556
#define DST_AUST 2
#define SIGCONT 19
#define __SWR 0x0008
#define SmsSaveYourselfRequestProcMask (1L << 3)
#define BG_COLOR AttrBIT(4)
#define XNRequiredCharSet "requiredCharSet"
#define GCClipXOrigin (1L<<17)
#define FontChange 255
#define XK_Lstroke 0x01a3
#define XtRDimension ((char*)&XtStrings[1618])
#define ENOMEM 12
#define XtVaTypedArg "XtVaTypedArg"
#define BKVASIZE 16384
#define XtRAcceleratorTable ((char*)&XtStrings[1527])
#define _cursorfont_h_ 
#define XtCLabel ((char*)&XtStrings[1151])
#define XK_Kana_Lock 0xff2d
#define SIOCSIFNETMASK _IOW('i', 22, struct ifreq)
#define _INTPTR_T_DECLARED 
#define NOKERNINFO 0x02000000
#define _CS_PATH 1
#define mvwinchstr(win,y,x,s) (wmove(win,y,x) == ERR ? ERR : winchstr(win,s))
#define _TRUNCATE_DECLARED 
#define XK_ohornbelowdot 0x1001ee3
#define included_main_h 
#define XtCBellIsUrgent "BellIsUrgent"
#define XtCacheAll 0x002
#define CapRound 2
#define XK_dead_acute 0xfe51
#define XrmRepresentationToString(type) XrmQuarkToString(type)
#define __SIZE_T_MAX __ULONG_MAX
#define XtCMkSamplePass "MkSamplePass"
#define Button5Mask (1<<12)
#define KeyReleaseMask (1L<<1)
#define __always_inline __attribute__((__always_inline__))
#define NFDBITS _NFDBITS
#define XtIsShell(obj) (((Object)(obj))->object.widget_class->core_class.class_inited & 0x20)
#define __noinline __attribute__ ((__noinline__))
#define XK_ocircumflex 0x00f4
#define XtHrealizeWidget ((char*)&XtStrings[2281])
#define CURSES 1
#define Unsorted 0
#define TIOCMBIS _IOW('t', 108, int)
#define TIOCSETD _IOW('t', 27, int)
#define wdeleteln(win) winsdelln(win,-1)
#define XK_Georgian_cil 0x10010ec
#define __SCCSID(s) __IDSTRING(__CONCAT(__sccsid_,__LINE__),s)
#define KEY_SRESET 0530
#define XFD_SETSIZE 256
#define XK_numerosign 0x06b0
#define S_IXOTH 0000001
#define HOSTNAME_FOUND (0)
#define XK_equal 0x003d
#define XC_tcross 130
#define XK_lstroke 0x01b3
#define scroll(win) wscrl(win,1)
#define XK_Thai_nonu 0x0db9
#define XtCUnderLine "UnderLine"
#define ECHOCTL 0x00000040
#define XK_Hangul_J_RieulPhieuf 0x0ee1
#define XK_braille_dots_4678 0x10028e8
#define XtCKeyboardDialect "KeyboardDialect"
#define XtNximFont "ximFont"
#define update_font_loadable() 
#define XK_Byelorussian_SHORTU 0x06be
#define XtCToolBar "ToolBar"
#define VWERASE 4
#define IsEmpty(s) ((s) == 0 || *(s) == '\0')
#define _POSIX2_UPE 200112L
#define XK_Scedilla 0x01aa
#define XtRFontSet ((char*)&XtStrings[2026])
#define _Xt_RectObjP_h_ 
#define XtNclientLeader ((char*)&XtShellStrings[813])
#define insnstr(s,n) winsnstr(stdscr,s,n)
#define XK_Hangul_switch 0xff7e
#define XtNrenderFont "renderFont"
#define UU_LOCK_WRITE_ERR (-4)
#define howmany(x,y) (((x)+((y)-1))/(y))
#define NAME_MAX 255
#define XtEvertical ((char*)&XtStrings[1927])
#define XK_Arabic_ddal 0x1000688
#define SCHAR_MAX __SCHAR_MAX
#define XK_braille_dots_234567 0x100287e
#define XK_braille_dots_234568 0x10028be
#define BUTTON1_PRESSED NCURSES_MOUSE_MASK(1, NCURSES_BUTTON_PRESSED)
#define XK_Eacute 0x00c9
#define XIMVisibleToCenter (1L<<10)
#define IOC_DIRMASK (IOC_VOID|IOC_OUT|IOC_IN)
#define XtNfont ((char*)&XtStrings[199])
#define F_OSETLK 8
#define IsMiscFunctionKey(keysym) (((KeySym)(keysym) >= XK_Select) && ((KeySym)(keysym) <= XK_Break))
#define _SC_SYMLOOP_MAX 120
#define __UINTMAX_TYPE__ long unsigned int
#define IceAuthFailed 5
#define SET_TTYSIZE(fd,data) ioctl(fd, TIOCSWINSZ, (char *) &data)
#define _GID_T_DECLARED 
#define XK_braille_dots_234578 0x10028de
#define XtNborder ((char*)&XtStrings[99])
#define PRIO_USER 2
#define _POSIX_THREAD_CPUTIME 200112L
#define GXor 0x7
#define CWEventMask (1L<<11)
#define XtNbellOnReset "bellOnReset"
#define VisualGreenMaskMask 0x20
#define _SC_THREAD_PRIO_PROTECT 88
#define XtCPrinterCommand "PrinterCommand"
#define XK_Greek_gamma 0x07e3
#define _CLOCKID_T_DECLARED 
#define XtCheckSubclass(w,widget_class,message) 
#define __ntohl(x) __bswap32(x)
#define BorderPixel(w) ((w)->core.border_pixel)
#define XtEleft "left"
#define update_toolbar() 
#define __unix 1
#define HOSTNAME_INVALIDNAME (3)
#define IGNCR 0x00000080
#define SmDiscardCommand "DiscardCommand"
#define XtNscrollDCursor ((char*)&XtStrings[602])
#define PML4MASK (NBPML4-1)
#define KEY_SREPLACE 0621
#define XK_Hstroke 0x02a1
#define XK_ISO_First_Group_Lock 0xfe0d
#define XK_Armenian_KEN 0x100053f
#define XtIsSessionShell(widget) (_XtIsSubclassOf(widget, (WidgetClass)sessionShellWidgetClass, (WidgetClass)topLevelShellWidgetClass, (XtEnum)0x80))
#define XNQueryIMValuesList "queryIMValuesList"
#define XtNallowWindowOps "allowWindowOps"
#define XK_uhook 0x1001ee7
#define TRACE_CHARPUT 0x0010
#define EnterWindowMask (1L<<4)
#define XK_Itilde 0x03a5
#define SIGUSR1 30
#define XIMUnderline (1L<<1)
#define XK_Thai_sorusi 0x0dc9
#define COLOR_BITS 4
#define BadIDChoice 14
#define XK_braille_dots_12345 0x100281f
#define XK_braille_dots_12346 0x100282f
#define XK_braille_dots_12347 0x100284f
#define XK_braille_dots_12348 0x100288f
#define XtCCursorUnderline "CursorUnderLine"
#define XK_Cyrillic_schwa 0x10004d9
#define XtRBoolean ((char*)&XtStrings[1561])
#define XK_cedilla 0x00b8
#define XK_hebrew_het 0x0ce7
#define XK_Ohornhook 0x1001ede
#define MODE_DECCKM xBIT(2)
#define IsTitleMode(xw,mode) (((xw)->screen.title_modes & mode) != 0)
#define VEOF 0
#define VEOL 1
#define IconWindowHint (1L << 3)
#define CWSibling (1<<5)
#define XtCDisallowedFontOps "DisallowedFontOps"
#define WUNTRACED 2
#define XK_braille_dots_12356 0x1002837
#define XK_braille_dots_12357 0x1002857
#define XK_braille_dots_12358 0x1002897
#define XK_Page_Up 0xff55
#define ACS_URCORNER NCURSES_ACS('k')
#define XtNpointerColor "pointerColor"
#define XK_dead_abovedot 0xfe56
#define XtCAllowBoldFonts "AllowBoldFonts"
#define NZERO 0
#define XK_Thai_saraaimaimuan 0x0de3
#define CLOCK_REALTIME_PRECISE 9
#define XK_Armenian_KHE 0x100053d
#define CLICK_RES(count,offset,value) Sres(CLICK_RES_NAME(count), CLICK_RES_CLASS(count), offset, value)
#define CEOL 0xff
#define isclr(a,i) ((((const unsigned char *)(a))[(i)/NBBY] & (1<<((i)%NBBY))) == 0)
#define XK_Hangul_J_Nieun 0x0ed7
#define XK_braille_dots_12367 0x1002867
#define XK_braille_dots_12368 0x10028a7
#define XK_uhorn 0x10001b0
#define XK_KP_Up 0xff97
#define XtCLoginShell "LoginShell"
#define SCHAR_MIN __SCHAR_MIN
#define WhichTWin(screen) ((screen)->whichTwin)
#define PointerWindow 0L
#define _PC_PRIO_IO 54
#define EXIT_FAILURE 1
#define KEY_DOWN 0402
#define KEY_CLEAR 0515
#define XK_Abrevehook 0x1001eb2
#define XK_braille_dots_12378 0x10028c7
#define OPT_EXT_COLORS 0
#define amd64_ptob(x) ((unsigned long)(x) << PAGE_SHIFT)
#define COLOR_0 0
#define XK_Thai_leksun 0x0df0
#define XtNeditType ((char*)&XtStrings[185])
#define COLOR_3 3
#define COLOR_4 4
#define COLOR_6 6
#define COLOR_7 7
#define COLOR_8 8
#define COLOR_9 9
#define __LONG_LONG_SUPPORTED 
#define XK_Hangul_PanSios 0x0ef2
#define XK_Cyrillic_SCHWA 0x10004d8
#define XLookupBoth 4
#define XK_R10 0xffdb
#define XK_R11 0xffdc
#define XK_R12 0xffdd
#define XK_R13 0xffde
#define XK_R14 0xffdf
#define XK_R15 0xffe0
#define XK_Greek_sigma 0x07f2
#define PreferBlanking 1
#define XK_dead_voiced_sound 0xfe5e
#define TRACE_DATABASE 0x0800
#define XK_Babovedot 0x1001e02
#define KEY_SSUSPEND 0625
#define TRACE_MAXIMUM ((1 << TRACE_SHIFT) - 1)
#define OPT_TCAP_QUERY 0
#define ACS_TTEE NCURSES_ACS('w')
#define DisplayCells(dpy,scr) (DefaultVisual(dpy,scr)->map_entries)
#define TShellWindow XtWindow(SHELL_OF(tekWidget))
#define VisibilityChangeMask (1L<<16)
#define XtCFontWarnings "FontWarnings"
#define MAXCOLORS (NUM_ANSI_COLORS+4)
#define SIOCSIFVNET _IOWR('i', 90, struct ifreq)
#define SA_SIGINFO 0x0040
#define XK_guillemotright 0x00bb
#define XtNmappedWhenManaged ((char*)&XtStrings[453])
#define KEY_SMOVE 0613
#define OPT_MINI_LUIT 0
#define XtScreen(widget) ((widget)->core.screen)
#define XK_Thai_leksi 0x0df4
#define XK_abelowdot 0x1001ea1
#define PTYFORMAT "/dev/ptyp%d"
#define SET_COLOR_VALUE(s,w,v) (((s)->colors[w] = (v)), UIntSet((s)->which, (1<<(w))))
#define XTTYMODE_rprnt 12
#define XK_hebrew_gimmel 0x0ce2
#define XK_Arabic_farsi_yeh 0x10006cc
#define XtNiconWindow ((char*)&XtShellStrings[40])
#define TTYSIZE_COLS(data) data.ws_col
#define XtNmaxAspectX ((char*)&XtShellStrings[731])
#define XtNmaxAspectY ((char*)&XtShellStrings[687])
#define _SYS_TERMIOS_H_ 
#define TIOCSTART _IO('t', 110)
#define XtCInput ((char*)&XtShellStrings[423])
#define XtCUtf8 "Utf8"
#define BadMatch 8
#define FPE_FLTDIV_TRAP 0x3
#define PWSCAN_MASTER 0x01
#define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
#define _Xt_ObjectP_h_ 
#define _SC_THREAD_THREADS_MAX 94
#define CP_USER 0
#define getchar() getc(stdin)
#define XtRPosition ((char*)&XtStrings[1775])
#define _SC_2_UPE 25
#define _XtConstraint_h 
#define NPARAM 30
#define S_IRWXU 0000700
#define wgetscrreg(win,t,b) ((win) ? (*(t) = (win)->_regtop, *(b) = (win)->_regbottom, OK) : ERR)
#define XK_Hangul_J_RieulMieum 0x0edd
#define XK_uhorngrave 0x1001eeb
#define XK_Dstroke 0x01d0
#define XtNknobIndent ((char*)&XtStrings[398])
#define Button4Mask (1<<11)
#define mvhline(y,x,c,n) mvwhline(stdscr,y,x,c,n)
#define XtNwideFont "wideFont"
#define clearerr(p) (!__isthreaded ? __sclearerr(p) : (clearerr)(p))
#define BitmapFileInvalid 2
#define CLEAR 0
#define NotifyNonlinearVirtual 4
#define NDEBUG 
#define XK_uacute 0x00fa
#define S_IFMT 0170000
#define ALTWERASE 0x00000200
#define TRACE_WM_HINTS(w) 
#define FIOSETOWN _IOW('f', 124, int)
#define CLOCK_REALTIME 0
#define RootWindowOfScreen(s) ((s)->root)
#define XK_braille_dots_345 0x100281c
#define XK_braille_dots_346 0x100282c
#define XK_braille_dots_348 0x100288c
#define __CC_SUPPORTS___FUNC__ 1
#define XK_Georgian_rae 0x10010e0
#define _SC_VERSION 8
#define S_ISSOCK(m) (((m) & 0170000) == 0140000)
#define T_STKFLT 27
#define _SC_RE_DUP_MAX 16
#define __USER_LABEL_PREFIX__ 
#define _XFUNCS_H_ 
#define RLIM_INFINITY ((rlim_t)(((uint64_t)1 << 63) - 1))
#define HAVE_SYS_WAIT_H 1
#define XK_braille_dots_356 0x1002834
#define XK_braille_dots_357 0x1002854
#define XK_braille_dots_358 0x1002894
#define TIOCGWINSZ _IOR('t', 104, struct winsize)
#define XtNew(type) ((type *) XtMalloc((unsigned) sizeof(type)))
#define XK_ISO_Level5_Shift 0xfe11
#define ENEEDAUTH 81
#define XtCBrokenSelections "BrokenSelections"
#define SubstructureNotifyMask (1L<<19)
#define cvtINT32toShort(val) (val)
#define XtNshowWrapMarks "showWrapMarks"
#define XK_Greek_iotaaccent 0x07b4
#define XtNminHeight ((char*)&XtShellStrings[569])
#define F_READAHEAD 15
#define XtCShowWrapMarks "ShowWrapMarks"
#define MJUMPAGESIZE PAGE_SIZE
#define XK_dead_abovering 0xfe58
#define PROTO_XT_CALLBACK_ARGS (Widget gw, XtPointer closure, XtPointer data)
#define XtCFont1 "Font1"
#define XtCFont2 "Font2"
#define XtCFont3 "Font3"
#define XtCFont4 "Font4"
#define XtCFont5 "Font5"
#define XtCFont6 "Font6"
#define XK_braille_dots_367 0x1002864
#define XK_braille_dots_368 0x10028a4
#define __predict_true(exp) __builtin_expect((exp), 1)
#define XtCAllowScrollLock "AllowScrollLock"
#define XtNbellIsUrgent "bellIsUrgent"
#define XtCUtf8Title "Utf8Title"
#define _XtintrinsicP_h 
#define XtCReverseVideo ((char*)&XtStrings[1260])
#define XK_End 0xff57
#define XK_idiaeresis 0x00ef
#define _SC_RTSIG_MAX 48
#define CREPRINT CTRL('R')
#define WCONTINUED 4
#define ConfigureRequest 23
#define refresh() wrefresh(stdscr)
#define GXcopy 0x3
#define XK_Arabic_heh_doachashmee 0x10006be
#define XtCI18nSelections "I18nSelections"
#define XK_braille_dots_378 0x10028c4
#define ScrnHaveSelection(screen) ((screen)->startH.row != (screen)->endH.row || (screen)->startH.col != (screen)->endH.col)
#define XK_Greek_alpha 0x07e1
#define GET_COLOR_RES(xw,res) xtermGetColorRes(xw, &(res))
#define MCLBYTES (1 << MCLSHIFT)
#define XK_Serbian_je 0x06a8
#define XC_top_tee 140
#define XK_Pointer_Down 0xfee3
#define XtCAllowWindowOps "AllowWindowOps"
#define F_GETLK 11
#define XtCDeleteIsDEL "DeleteIsDEL"
#define DEF_META_SENDS_ESC False
#define XNHotKey "hotKey"
#define InactiveState 4
#define XtDefaultFontSet "XtDefaultFontSet"
#define DefaultVisualOfScreen(s) ((s)->root_visual)
#define HD_DELIM_MASK 0xff00
#define XTTYMODE_intr 0
#define HAVE_UTMP_UT_XSTATUS 1
#define XtCCursorBlink "CursorBlink"
#define SmsSaveYourselfDoneProcMask (1L << 5)
#define XtCCjkWidth "CjkWidth"
#define XK_braille_dots_1378 0x10028c5
#define XK_braille_dots_1345 0x100281d
#define XK_braille_dots_1346 0x100282d
#define XK_braille_dots_1347 0x100284d
#define XK_braille_dots_1348 0x100288d
#define XNArea "area"
#define XtCMultiScroll "MultiScroll"
#define XK_Kana_Shift 0xff2e
#define SIOCGIFGENERIC _IOWR('i', 58, struct ifreq)
#define XrmStringToName(string) XrmStringToQuark(string)
#define BUTTON4_RESERVED_EVENT NCURSES_MOUSE_MASK(4, NCURSES_RESERVED_EVENT)
#define _POSIX2_SW_DEV -1
#define XK_asciitilde 0x007e
#define XK_braille_dots_1356 0x1002835
#define _ALIGNBYTES (sizeof(long) - 1)
#define XK_braille_dots_1358 0x1002895
#define _SC_TRACE_EVENT_FILTER 98
#define T_TSSFLT 25
#define __FLT_EPSILON__ 1.19209290e-7F
#define XtNuseRight ((char*)&XtStrings[850])
#define SS_DISABLE 0x0004
#define ENOLINK 91
#define XtNwindow ((char*)&XtStrings[878])
#define WhitePixelOfScreen(s) ((s)->white_pixel)
#define XK_Ohorntilde 0x1001ee0
#define XtCColorAttrMode "ColorAttrMode"
#define XK_braille_dots_1367 0x1002865
#define XK_braille_dots_1368 0x10028a5
#define KEY_RESTART 0567
#define xBIT(n) (1 << (n))
#define XtCWideBoldFont "WideBoldFont"
#define KEY_EIC 0514
#define XK_ISO_Enter 0xfe34
#define XTERM_DATE 2013-04-25
#define isCursorBar(s) ((s)->cursor_shape == CURSOR_BAR)
#define LineFlags(ld) GetLineFlags(ld)
#define VisualClassMask 0x8
#define EvenOddRule 0
#define XtInheritTranslations ((String) &_XtInheritTranslations)
#define XK_Cyrillic_ka_vertstroke 0x100049d
#define XK_Menu 0xff67
#define XK_Farsi_0 0x10006f0
#define XK_Farsi_1 0x10006f1
#define XK_Farsi_2 0x10006f2
#define XK_Farsi_3 0x10006f3
#define XK_Farsi_4 0x10006f4
#define XK_Farsi_5 0x10006f5
#define _TIMER_T_DECLARED 
#define XK_Farsi_7 0x10006f7
#define XK_Farsi_8 0x10006f8
#define _PC_MAC_PRESENT 63
#define XK_ISO_Level3_Latch 0xfe04
#define XtNresize ((char*)&XtStrings[564])
#define XK_Arabic_kaf 0x05e3
#define ColormapNotify 32
#define SIGIO 23
#define TCOON 2
#define XtNiconName ((char*)&XtShellStrings[0])
#define XK_Hangul_J_Mieum 0x0ee3
#define DFT_TERMTYPE "xterm"
#define CWBorderWidth (1<<4)
#define XK_Arabic_fullstop 0x10006d4
#define XK_thorn 0x00fe
#define DefaultDepth(dpy,scr) (ScreenOfDisplay(dpy,scr)->root_depth)
#define KEY_SFIND 0605
#define B76800 76800
#define XtCTransient ((char*)&XtShellStrings[176])
#define OPT_256_COLORS 0
#define mvinsnstr(y,x,s,n) mvwinsnstr(stdscr,y,x,s,n)
#define __DEC32_MAX__ 9.999999E96DF
#define XK_zerosuperior 0x1002070
#define XK_Greek_eta 0x07e7
#define XK_kana_comma 0x04a4
#define StaticGray 0
#define XtNinternalBorder "internalBorder"
#define XtEStatic "static"
#define AsyncBoth 6
#define _XOPEN_UNIX -1
#define included_xtermcap_h 
#define SmRestartIfRunning 0
#define XtCWidthInc ((char*)&XtShellStrings[636])
#define TIOCNXCL _IO('t', 14)
#define AT_SYMLINK_FOLLOW 0x400
#define XtCCurrentDirectory ((char*)&XtShellStrings[957])
#define st_ctime st_ctimespec.tv_sec
#define SI_MESGQ 0x10005
#define XK_CYRILLIC 
#define TIOCMGDTRWAIT _IOR('t', 90, int)
#define XtCAwaitInput "AwaitInput"
#define XK_Arabic_tteh 0x1000679
#define _SIG_WORDS 4
#define XK_Cyrillic_ka 0x06cb
#define OPT_READLINE 0
#define O_EXLOCK 0x0020
#define _SC_MEMLOCK 30
#define FPARSELN_UNESCCONT 0x02
#define KEY_END 0550
#define XK_2 0x0032
#define XK_Obarred 0x100019f
#define XK_THORN 0x00de
#define XK_Ycircumflex 0x1000176
#define XK_ISO_Group_Lock 0xfe07
#define TRACE_UPDATE 0x0004
#define XK_Farsi_9 0x10006f9
#define XK_Hangul_PieubSios 0x0eb4
#define XtEalways "always"
#define _SWAB_DECLARED 
#define XK_Arabic_dammatan 0x05ec
#define KEY_MARK 0554
#define XrmEnumOneLevel 1
#define HD_OMIT_HEX (1 << 17)
#define XNStatusDoneCallback "statusDoneCallback"
#define KEY_EOL 0517
#define KEY_EOS 0516
#define XK_approxeq 0x1002248
#define O_NDELAY O_NONBLOCK
#define _PWF_NAME _PWF(0)
#define XtCBitmap ((char*)&XtStrings[913])
#define waddstr(win,str) waddnstr(win,str,-1)
#define XK_Arabic_tehmarbuta 0x05c9
#define XK_Abrevebelowdot 0x1001eb6
#define XK_aacute 0x00e1
#define if_OPT_WIDE_CHARS(screen,code) 
#define USPosition (1L << 0)
#define TTYDEF_LFLAG_ECHO (TTYDEF_LFLAG_NOECHO | ECHO | ECHOE | ECHOKE | ECHOCTL)
#define SIGEV_NONE 0
#define UNDEFINE_COLOR(s,w) ((s)->which &= (~((w)<<1)))
#define SmSaveGlobal 0
#define XK_Scroll_Lock 0xff14
#define __PCI_REROUTE_INTERRUPT 
#define echochar(c) wechochar(stdscr,c)
#define NCURSES_VERSION_PATCH 20081102
#define XK_braille_dots_1234678 0x10028ef
#define XK_Pointer_Left 0xfee0
#define ColormapUninstalled 0
#define NonNull(s) ((s) ? (s) : "<null>")
#define XK_Thai_wowaen 0x0dc7
#define __DECIMAL_DIG__ 21
#define Button3Mask (1<<10)
#define LOCK_EX 0x02
#define XK_Farsi_6 0x10006f6
#define XK_Arabic_ghain 0x05da
#define getbegyx(win,y,x) (y = getbegy(win), x = getbegx(win))
#define _XUTIL_H_ 
#define XtInheritGeometryManager ((XtGeometryHandler) _XtInherit)
#define FIOGETLBA _IOR('f', 121, int)
#define F_DUPFD 0
#define TCIFLUSH 1
#define XK_wdiaeresis 0x1001e85
#define OPT_FIFO_LINES 0
#define SouthWestGravity 7
#define index(s,c) (strchr((s),(c)))
#define MAX_INPUT 255
#define _SC_GETGR_R_SIZE_MAX 70
#define VERASE2 7
#define XK_ISO_Partial_Line_Down 0xfe24
#define ENETDOWN 50
#define ACS_BOARD NCURSES_ACS('h')
#define UnmapNotify 18
#define CLICK_RES_NAME(count) "on" count "Clicks"
#define _SC_2_SW_DEV 24
#define _SYS_ERRNO_H_ 
#define LC_TIME 5
#define XK_braille_dots_13456 0x100283d
#define _SYS_FILIO_H_ 
#define _PC_FILESIZEBITS 12
#define Height(screen) WhichVWin(screen)->height
#define XK_Acircumflexbelowdot 0x1001eac
#define XK_Armenian_ZHE 0x100053a
#define SmsCloseConnectionProcMask (1L << 6)
#define XK_KP_Space 0xff80
#define FPARSELN_UNESCCOMM 0x04
#define BUS_SEGM_FAULT T_RESERVED
#define XK_Cyrillic_SHORTI 0x06ea
#define _XFUNCPROTOBEGIN 
#define FNDELAY O_NONBLOCK
#define wstandout(win) (wattrset(win,A_STANDOUT))
#define F_OK 0
#define XtNboldMode "boldMode"
#define HAVE_STDLIB_H 1
#define __LDBL_HAS_QUIET_NAN__ 1
#define NoValue 0x0000
#define XtHpreGeometry ((char*)&XtStrings[2610])
#define XtNheightInc ((char*)&XtShellStrings[645])
#define X_GETTIMEOFDAY(t) gettimeofday(t, (struct timezone*)0)
#define XK_Arabic_kasratan 0x05ed
#define XK_Georgian_kan 0x10010d9
#define __GNUC_PREREQ__(ma,mi) (__GNUC__ > (ma) || __GNUC__ == (ma) && __GNUC_MINOR__ >= (mi))
#define XK_Hangul_Dikeud 0x0ea7
#define LINEFLAG_MASK BITS2MASK(LINEFLAG_BITS)
#define FOCUS 02
#define ERROR_TSELECT 60
#define EAUTH 80
#define isalpha(c) __sbistype((c), _CTYPE_A)
#define XK_Thai_khokhuat 0x0da3
#define _SC_XOPEN_VERSION 116
#define XtNi18nSelections "i18nSelections"
#define XK_Lcedilla 0x03a6
#define WA_LOW A_LOW
#define XK_Cancel 0xff69
#define B460800 460800
#define IEXTEN 0x00000400
#define _PW_VERSIONED(x,v) ((unsigned char)(((x) & 0xCF) | ((v)<<4)))
#define XK_Cyrillic_dzhe 0x06af
#define L_tmpnam 1024
#define SmEnvironment "Environment"
#define XtCDisallowedColorOps "DisallowedColorOps"
#define XK_Cyrillic_nje 0x06aa
#define A_PROTECT NCURSES_BITS(1UL,16)
#define isascii(c) (((c) & ~0x7F) == 0)
#define HOSTNAME_INVALIDADDR (2)
#define toascii(c) ((c) & 0x7F)
#define __GNUC__ 4
#define XtNbackground ((char*)&XtStrings[52])
#define XC_heart 62
#define XNResourceClass "resourceClass"
#define XtNiconHint "iconHint"
#define GXnand 0xe
#define IOCPARM_MAX (1 << IOCPARM_SHIFT)
#define __MMX__ 1
#define CACHE_LINE_SHIFT 7
#define XtRPointer ((char*)&XtStrings[1767])
#define USE_XPOLL_H 1
#define XK_dead_stroke 0xfe63
#define TAB3 0x00000004
#define XK_Pointer_Drag_Dflt 0xfef4
#define XK_Tcaron 0x01ab
#define XtNwindowRole ((char*)&XtShellStrings[839])
#define COLOR_MAGENTA 5
#define XtNthumb ((char*)&XtStrings[782])
#define XtNreverseVideo ((char*)&XtStrings[571])
#define XK_scaron 0x01b9
#define XtCColumn "Column"
#define XK_Hangul_Tieut 0x0ebc
#define _SIZEOF(x) sz_ ##x
#define SmProtoMinor 0
#define fileno_unlocked(p) __sfileno(p)
#define LOCK_NB 0x04
#define NUM_POPUP_MENUS 4
#define color_set(c,o) wcolor_set(stdscr,c,o)
#define XtCCutNewline "CutNewline"
#define XtCAlwaysUseMods "AlwaysUseMods"
#define XtCSaveLines "SaveLines"
#define XtIsApplicationShell(widget) (_XtIsSubclassOf(widget, (WidgetClass)applicationShellWidgetClass, (WidgetClass)topLevelShellWidgetClass, (XtEnum)0x80))
#define XK_Insert 0xff63
#define trunc_page(x) ((unsigned long)(x) & ~(PAGE_MASK))
#define XtCTextPosition ((char*)&XtStrings[1435])
#define if_OPT_XMC_GLITCH(screen,code) 
#define BUTTON_ALT NCURSES_MOUSE_MASK(5, 0004L)
#define XK_Greek_PHI 0x07d6
#define _SC_BC_STRING_MAX 12
#define XNStatusAttributes "statusAttributes"
#define XK_Num_Lock 0xff7f
#define XtROrientation ((char*)&XtStrings[1742])
#define sa_handler __sigaction_u.__sa_handler
#define LONG_MAX __LONG_MAX
#define XK_prolongedsound 0x04b0
#define XC_rightbutton 100
#define STDERR_FILENO 2
#define DEFDELETE_DEL Maybe
#define CHILD_MAX 40
#define getattrs(win) ((win) ? (win)->_attrs : A_NORMAL)
#define GCArcMode (1L<<22)
#define __sfileno(p) ((p)->_file)
#define _INO_T_DECLARED 
#define mvwinsnstr(win,y,x,s,n) (wmove(win,y,x) == ERR ? ERR : winsnstr(win,s,n))
#define __sferror(p) (((p)->_flags & __SERR) != 0)
#define Opposite 4
#define XK_Hangul_SsangPieub 0x0eb3
#define isideogram(c) __sbistype((c), _CTYPE_I)
#define SmRestartNever 3
#define PROTECTED AttrBIT(6)
#define CWColormap (1L<<13)
#define ConfigureNotify 22
#define SA_NODEFER 0x0010
#define NCURSES_DLL_H_incl 1
#define XtCThickness ((char*)&XtStrings[1468])
#define XtCCharClass "CharClass"
#define __COPYRIGHT(s) __IDSTRING(__CONCAT(__copyright_,__LINE__),s)
#define insch(c) winsch(stdscr,c)
#define ERROR_INIT 36
#define __pure __attribute__((__pure__))
#define CapButt 1
#define WTERMSIG(x) (_WSTATUS(x))
#define XFD_ANDSET(dst,b1,b2) { int __i__; for (__i__ = 0; __i__ < howmany(FD_SETSIZE, NFDBITS); __i__++) __XFDS_BITS((dst), __i__) = ((__XFDS_BITS((b1), __i__)) & (__XFDS_BITS((b2), __i__))); }
#define TIOCTIMESTAMP _IOR('t', 89, struct timeval)
#define XK_ISO_Set_Margin_Right 0xfe28
#define XtCWindowRole ((char*)&XtShellStrings[850])
#define XK_Hangul_YeorinHieuh 0x0ef5
#define CSWTCH 0
#define SmDialogNormal 1
#define XK_Arabic_dad 0x05d6
#define _POSIX_REGEXP 1
#define XK_Arabic_dal 0x05cf
#define ZPixmap 2
#define XtExposeNoRegion 0x80
#define EXIT_SUCCESS 0
#define OPT_SELECTION_OPS 1
#define XtNitalicULMode "italicULMode"
#define ORIGIN MiscBIT(4)
#define XtRSmcConn ((char*)&XtStrings[2190])
#define OPT_FOCUS_EVENT 1
#define KEY_CODE_YES 0400
#define XtNwideBoldFont "wideBoldFont"
#define SI_QUEUE 0x10002
#define XtRRestartStyle ((char*)&XtStrings[2177])
#define XK_Greek_epsilonaccent 0x07b2
#define LOCK_SH 0x01
#define XtNinteractCallback ((char*)&XtShellStrings[1040])
#define TIOCCBRK _IO('t', 122)
#define SIGEV_KEVENT 3
#define T_PAGEFLT 12
#define XK_lacute 0x01e5
#define DEF_ALLOW_FONT True
#define QUAD_MIN (__QUAD_MIN)
#define _ENDLINE 0x02
#define ITIMER_PROF 2
#define DrawBIT(n) xBIT(n + 8)
#define _PC_CHOWN_RESTRICTED 7
#define XK_elementof 0x1002208
#define _SIG_BIT(sig) (1 << (_SIG_IDX(sig) & 31))
#define XK_abreveacute 0x1001eaf
#define _SC_SIGQUEUE_MAX 51
#define Expose 12
#define RAND_MAX 0x7fffffff
#define okFont(font) ((font) != 0 && (font)->fid != 0)
#define XK_uhornbelowdot 0x1001ef1
#define TIOCMGET _IOR('t', 106, int)
#define T_SEGNPFLT 26
#define attr_set(a,c,o) wattr_set(stdscr,a,c,o)
#define XK_Armenian_shesht 0x100055b
#define __GNUCLIKE_BUILTIN_MEMCPY 1
#define LOCK_UN 0x08
#define SM_SaveYourself 3
#define XK_Hebrew_switch 0xff7e
#define XK_VoidSymbol 0xffffff
#define RetainTemporary 2
#define _XtCore_h 
#define N_MARGINBELL 10
#define _SC_2_VERSION 17
#define _POSIX2_CHAR_TERM 1
#define LineCursorX(screen,ld,col) (CSET_DOUBLE(GetLineDblCS(ld)) ? CursorX(screen, 2*(col)) : CursorX(screen, (col)))
#define _WSTOPPED 0177
#define DefaultGC(dpy,scr) (ScreenOfDisplay(dpy,scr)->default_gc)
#define __LDBL_HAS_DENORM__ 1
#define XNClientWindow "clientWindow"
#define EPIPE 32
#define XIMVisibleToForward (1L<<8)
#define XK_3 0x0033
#define PAspect (1L << 7)
#define XtRJustify ((char*)&XtStrings[1722])
#define XK_dead_tilde 0xfe53
#define Button2Mask (1<<9)
#define LONG_MIN __LONG_MIN
#define FIONSPACE _IOR('f', 118, int)
#define XtCVisualBell "VisualBell"
#define BUTTON1_RESERVED_EVENT NCURSES_MOUSE_MASK(1, NCURSES_RESERVED_EVENT)
#define XK_hebrew_finalpe 0x0cf3
#define XK_Arabic_semicolon 0x05bb
#define XtCString ((char*)&XtStrings[1416])
#define addnstr(str,n) waddnstr(stdscr,str,n)
#define _RUNE_MAGIC_1 "RuneMagi"
#define HD_OMIT_COUNT (1 << 16)
#define XIMStringConversionChar (0x0004)
#define XFD_COPYSET(src,dst) { int __i__; for (__i__ = 0; __i__ < howmany(FD_SETSIZE, NFDBITS); __i__++) __XFDS_BITS((dst), __i__) = __XFDS_BITS((src), __i__); }
#define _POSIX_PRIORITY_SCHEDULING 200112L
#define XK_Arabic_zah 0x05d8
#define NCURSES_SIZE_T short
#define SI_USER 0x10001
#define XtCvtPixelToColor XtCvtIntToColor
#define SmRestartCommand "RestartCommand"
#define SmProtoMajor 1
#define XK_acircumflexacute 0x1001ea5
#define _PC_MIN_HOLE_SIZE 21
#define EBADMSG 89
#define ScrnAreRowsInSelection(screen,first,last) ((last) >= (screen)->startH.row && (first) <= (screen)->endH.row)
#define KEY_CATAB 0526
#define XK_gcircumflex 0x02f8
#define XtNxmcInline "xmcInline"
#define XK_TCAPNAME 0x0004
#define XrmStringToClassList(str,c_class) XrmStringToQuarkList(str, c_class)
#define XK_ninesuperior 0x1002079
#define XK_Greek_PSI 0x07d8
#define XtENorthWest "northwest"
#define InputFocus 1L
#define ButtonMotionMask (1L<<13)
#define XK_Ukranian_JE 0x06b4
#define KEY_SLEFT 0611
#define XtNscaleHeight "scaleHeight"
#define CSET_NORMAL(code) ((code) == CSET_SWL)
#define XtCMenuBar "MenuBar"
#define XK_Greek_GAMMA 0x07c3
#define _JBLEN 12
#define XtNnumShells ((char*)&XtStrings[2118])
#define XK_Greek_UPSILONaccent 0x07a8
#define SetUtmpHost(dst,screen) { char host[sizeof(dst) + 1]; strncpy(host, DisplayString(screen->display), sizeof(host)); TRACE(("DisplayString(%s)\n", host)); if (!resource.utmpDisplayId) { char *endptr = strrchr(host, ':'); if (endptr) { TRACE(("trimming display-id '%s'\n", host)); *endptr = '\0'; } } strncpy(dst, host, sizeof(dst)); }
#define XtESouthEast "southeast"
#define CursorShape 0
#define GID_MAX UINT_MAX
#define SIGABRT 6
#define XK_question 0x003f
#define MAXCPU 1
#define CLD_CONTINUED 6
#define KEY_SHOME 0607
#define __DEC32_MIN__ 1E-95DF
#define SIGSTKSZ (MINSIGSTKSZ + 32768)
#define XtNdiscardCommand ((char*)&XtShellStrings[986])
#define included_ptyx_h 1
#define _PC_REC_XFER_ALIGN 17
#define XLocaleNotSupported -2
#define XK_asciicircum 0x005e
#define XK_hebrew_finalnun 0x0cef
#define _SC_XOPEN_CRYPT 108
#define OPTIMIZE_MVCUR 0x01
#define XK_xabovedot 0x1001e8b
#define XtCSessionID ((char*)&XtShellStrings[1233])
#define LineTstFlag(ld,flag) ((GetLineFlags(ld) & flag) != 0)
#define XK_Arabic_comma 0x05ac
#define B14400 14400
#define XC_hand1 58
#define XC_hand2 60
#define XtRCardinal ((char*)&XtStrings[1587])
#define COLOR_MASK BITS2MASK(COLOR_BITS)
#define CDSR_OFLOW 0x00080000
#define _SC_MONOTONIC_CLOCK 74
#define XK_Cyrillic_ghe 0x06c7
#define __DBL_MAX_EXP__ 1024
#define ERROR_CONSEM 20
#define MAXRESOURCES 400
#define cvtINT8toShort(val) (val)
#define O_TTY_INIT 0x00080000
#define WA_INVIS A_INVIS
#define XK_Abelowdot 0x1001ea0
#define DisplayWidthMM(dpy,scr) (ScreenOfDisplay(dpy,scr)->mwidth)
#define SEEK_DATA 3
#define XK_Georgian_jhan 0x10010ef
#define XK_Cyrillic_CHE 0x06fe
#define isphonogram(c) __sbistype((c), _CTYPE_Q)
#define LITTLE_ENDIAN _LITTLE_ENDIAN
#define XK_Serbian_NJE 0x06ba
#define BadFont 7
#define __BSD_VISIBLE 1
#define WA_REVERSE A_REVERSE
#define USE_NO_DEV_TTY 1
#define XtNscrollLCursor ((char*)&XtStrings[630])
#define __SSE2_MATH__ 1
#define I_TEK 0x04
#define XtCScrollLCursor ((char*)&XtStrings[1319])
#define cvtINT32toLong(val) (val)
#define for_each_curs_gc(n) for (n = gcVTcursNormal; n <= gcVTcursOutline; ++n)
#define BUS_SEGNP_FAULT T_SEGNPFLT
#define XK_Arabic_hamzaonwaw 0x05c4
#define _SC_OPEN_MAX 5
#define cvtINT32toInt(val) (val)
#define ETOOMANYREFS 59
#define _SYS_STAT_H_ 
#define SIGILL 4
#define XK_Thai_lekhok 0x0df6
#define XIMPreeditEnable 1L
#define XtNtitle ((char*)&XtShellStrings[356])
#define XtRVisual ((char*)&XtStrings[1858])
#define FocusIn 9
#define XK_Hangul_J_Phieuf 0x0eed
#define XK_dead_currency 0xfe6f
#define _SYS_SIGNAL_H_ 
#define XK_acircumflexgrave 0x1001ea7
#define XK_kana_tsu 0x04af
#define XK_Return 0xff0d
#define XK_because 0x1002235
#define XC_left_side 70
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define SIOCDELMULTI _IOW('i', 50, struct ifreq)
#define MappingFailed 2
#define HD_OMIT_CHARS (1 << 18)
#define F_SETLK_REMOTE 14
#define XtNiconic ((char*)&XtShellStrings[429])
#define XK_kana_FU 0x04cc
#define __CC_SUPPORTS_DYNAMIC_ARRAY_INIT 1
#define GXinvert 0xa
#define XK_Iabovedot 0x02a9
#define TTYMODE(name) { name, sizeof(name)-1, 0, 0 }
#define NoSymbol 0L
#define TRACE_CHILD 
#define XK_Ccircumflex 0x02c6
#define TRACE_BITS 0x0100
#define FPE_FLTOVF 4
#define FD_CLOEXEC 1
#define roundup(x,y) ((((x)+((y)-1))/(y))*(y))
#define XK_Cyrillic_SHHA 0x10004ba
#define XK_Armenian_lyun 0x100056c
#define XK_uogonek 0x03f9
#define XK_BRAILLE 
#define _PC_PIPE_BUF 6
#define SM_InteractDone 7
#define __LONG_LONG_MAX__ 9223372036854775807LL
#define XK_wacute 0x1001e83
#define SIOCSDRVSPEC _IOW('i', 123, struct ifdrv)
#define _PDP_ENDIAN 3412
#define XK_kana_HA 0x04ca
#define XK_kana_HE 0x04cd
#define ILL_ALIGN_FAULT T_ALIGNFLT
#define XK_kana_HI 0x04cb
#define XK_kana_HO 0x04ce
#define _SC_BARRIERS 66
#define _SC_XOPEN_LEGACY 110
#define XK_kana_HU 0x04cc
#define _PATH_PASSWD "/etc/passwd"
#define DEFCLASS "XTerm"
#define KEY_MAX 0777
#define MAXHOSTNAMELEN 256
#define RFSIGSHARE (1<<14)
#define isNotForeground(xw,fg,bg,sel) (Boolean) ((sel) != T_COLOR(TScreenOf(xw), TEXT_FG) && (sel) != (fg) && (sel) != (bg) && (sel) != (xw)->dft_foreground)
#define TEKNUMFONTS 4
#define st_atime st_atimespec.tv_sec
#define FamilyInternet6 6
#define XK_Armenian_ayb 0x1000561
#define SCREEN_FLAG(screenp,f) (0)
#define IncludeInferiors 1
#define NotifyHint 1
#define XK_stricteq 0x1002263
#define _POSIX_CPUTIME -1
#define XK_ISO_Emphasize 0xfe32
#define XK_Next_Virtual_Screen 0xfed2
#define T_XMMFLT 29
#define ALLPERMS (S_ISUID|S_ISGID|S_ISTXT|S_IRWXU|S_IRWXG|S_IRWXO)
#define ERROR_BMALLOC2 71
#define ENOTEMPTY 66
#define TRACE_ICALLS 0x0200
#define XtRFont ((char*)&XtStrings[1661])
#define XC_man 80
#define XK_PreviousCandidate 0xff3e
#define NCURSES_BOOL bool
#define NAME_SUN_KT " sun"
#define TIOCSPGRP _IOW('t', 118, int)
#define TIOCGSID _IOR('t', 99, int)
#define XtCTiteInhibit "TiteInhibit"
#define XK_kana_KA 0x04b6
#define XK_kana_KE 0x04b9
#define XK_kana_KI 0x04b7
#define XK_kana_KO 0x04ba
#define XC_rtl_logo 102
#define XK_kana_KU 0x04b8
#define XK_breve 0x01a2
#define XK_ampersand 0x0026
#define XtCXmcGlitch "XmcGlitch"
#define CLD_EXITED 1
#define TIOCPKT_NOSTOP 0x10
#define XK_Hangul_Sios 0x0eb5
#define DisplayOfScreen(s) ((s)->display)
#define mvwvline(win,y,x,c,n) (wmove(win,y,x) == ERR ? ERR : wvline(win,c,n))
#define XK_StickyKeys_Enable 0xfe75
#define CoordModeOrigin 0
#define XK_Pointer_UpRight 0xfee5
#define dbtob(db) ((off_t)(db) << DEV_BSHIFT)
#define dbtoc(db) ((db + (ctodb(1) - 1)) >> (PAGE_SHIFT - DEV_BSHIFT))
#define XK_Georgian_zen 0x10010d6
#define XK_Thai_khokhai 0x0da2
#define ILL_PRIVIN_FAULT T_PRIVINFLT
#define XK_Arabic_ha 0x05e7
#define XC_iron_cross 66
#define KEY_SF 0520
#define XK_hebrew_qoph 0x0cf7
#define XK_kana_MA 0x04cf
#define XK_kana_ME 0x04d2
#define OPT_HIGHLIGHT_COLOR 1
#define XK_kana_MI 0x04d0
#define __byte_swap_int_var(x) __extension__ ({ register __uint32_t __X = (x); __asm ("bswap %0" : "+r" (__X)); __X; })
#define XK_kana_MO 0x04d3
#define XtNscrollHCursor ((char*)&XtStrings[616])
#define XK_kana_MU 0x04d1
#define XNPreeditStateNotifyCallback "preeditStateNotifyCallback"
#define XK_Georgian_an 0x10010d0
#define Button1Mask (1<<8)
#define XtCScrollHCursor ((char*)&XtStrings[1305])
#define XIMPreeditPosition 0x0004L
#define SIOCSLOWAT _IOW('s', 2, int)
#define GXnoop 0x5
#define __IDSTRING(name,string) __asm__(".ident\t\"" string "\"")
#define ERROR_OPPTSNAME 18
#define XK_Greek_iotaaccentdieresis 0x07b6
#define KEY_SAVE 0571
#define XtCXmcMoveSGR "XmcMoveSGR"
#define LC_MONETARY 3
#define XK_kana_NA 0x04c5
#define XK_kana_NE 0x04c8
#define XK_Ukranian_YI 0x06b7
#define XK_kana_NI 0x04c6
#define XK_kana_NO 0x04c9
#define MappingSuccess 0
#define XK_Armenian_SHA 0x1000547
#define _SC_XOPEN_XCU_VERSION 117
#define XK_kana_NU 0x04c7
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS 13
#define XK_Hangul_PreHanja 0xff3a
#define NOTRANSLATION DrawBIT(1)
#define CWOverrideRedirect (1L<<9)
#define NCURSES_CONST const
#define GCFillRule (1L<<9)
#define BLINKED_OFF 2
#define XK_utilde 0x03fd
#define DEC_PROTECT 1
#define CERASE CTRL('?')
#define HN_DECIMAL 0x01
#define __FLT_MIN_EXP__ (-125)
#define XtNprinterFormFeed "printerFormFeed"
#define __SNPT 0x0800
#define XtHpopdown ((char*)&XtStrings[2588])
#define UF_NODUMP 0x00000001
#define XtECenter "center"
#define XK_exclam 0x0021
#define XtCAutoWrap "AutoWrap"
#define SM_RegisterClient 1
#define F_GETOWN 5
#define XtCDiscardCommand ((char*)&XtShellStrings[1001])
#define XK_Georgian_don 0x10010d3
#define powerof2(x) ((((x)-1)&(x))==0)
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define HAVE_UNISTD_H 1
#define ACS_LEQUAL NCURSES_ACS('y')
#define XK_Ydiaeresis 0x13be
#define alloca(sz) __builtin_alloca(sz)
#define KEY_RESET 0531
#define KEY_MIN 0401
#define __LONG_BIT 64
#define XtRScreen ((char*)&XtStrings[1784])
#define XK_6 0x0036
#define OPT_PC_COLORS 1
#define XK_Armenian_pyur 0x1000583
#define XtEOval "Oval"
#define XK_Armenian_accent 0x100055b
#define _PWF_FILES 0x1000
#define IceCanContinue 0
#define XK_ISO_Prev_Group_Lock 0xfe0b
#define XK_Arabic_sad 0x05d5
#define XC_trek 142
#define XK_Georgian_en 0x10010d4
#define MAXPHYS (128 * 1024)
#define NCURSES_ACS(c) (acs_map[NCURSES_CAST(unsigned char,c)])
#define morePtyData(screen,data) ((data)->last > (data)->next)
#define XK_kana_RE 0x04da
#define XK_KP_Enter 0xff8d
#define XK_yhook 0x1001ef7
#define init_Dres2(name,i) wnew->name[i] = request->name[i]
#define XK_Abrevetilde 0x1001eb4
#define XK_kana_RO 0x04db
#define XLookupNone 1
#define XK_Georgian_fi 0x10010f6
#define XK_Cyrillic_ghe_bar 0x1000493
#define XK_Kanji 0xff21
#define _SSIZE_T_DECLARED 
#define XIMStatusNothing 0x0400L
#define XtCLocaleFilter "LocaleFilter"
#define XK_lcedilla 0x03b6
#define _SC_MQ_OPEN_MAX 46
#define XK_Jcircumflex 0x02ac
#define SM_SaveYourselfDone 8
#define XK_kana_SA 0x04bb
#define XK_kana_SE 0x04be
#define XK_braille_dots_12456 0x100283b
#define XK_braille_dots_12457 0x100285b
#define XK_kana_SO 0x04bf
#define _XOS_H_ 
#define XK_kana_SU 0x04bd
#define XK_Thai_sarauee 0x0dd7
#define QueuedAfterReading 1
#define XtCBackarrowKey "BackarrowKey"
#define TRACE_IEVENT 0x0080
#define visual_width(a,b) (b)
#define DisableAccess 0
#define XrmClassToString(c_class) XrmQuarkToString(c_class)
#define Success 0
#define XK_Sys_Req 0xff15
#define XK_kana_TA 0x04c0
#define XK_kana_TE 0x04c3
#define XK_kana_TI 0x04c1
#define XK_braille_dots_12468 0x10028ab
#define XK_kana_TO 0x04c4
#define XK_kana_TU 0x04c2
#define XK_Georgian_he 0x10010f1
#define XK_Help 0xff6a
#define XK_Arabic_sheen 0x05d4
#define DST_WET 3
#define TRACE_ARGV(tag,argv) 
#define ANSI_NAK 0x15
#define XK_Arabic_kasra 0x05f0
#define TTYDEF_CFLAG (CREAD | CS8 | HUPCL)
#define ERROR_PTEM 19
#define EXCHANGE(a,b,tmp) tmp = a; a = b; b = tmp
#define SM_SetProperties 12
#define SIOCGIFPDSTADDR _IOWR('i', 72, struct ifreq)
#define XK_braille_dots_12478 0x10028cb
#define XtNallowVert ((char*)&XtStrings[24])
#define XK_Clear 0xff0b
#define PointerMotionHintMask (1L<<7)
#define SetLineFlags(ld,xx) (ld)->bufHead = (RowData) ((ld->bufHead & (DBLCS_MASK << LINEFLAG_BITS)) | (xx & LINEFLAG_MASK))
#define OPT_INPUT_METHOD 1
#define SmRestartStyleHint "RestartStyleHint"
#define __signed signed
#define IMAXBEL 0x00002000
#define XK_Hangul_Rieul 0x0ea9
#define __sgetc(p) (--(p)->_r < 0 ? __srget(p) : (int)(*(p)->_p++))
#define CWWidth (1<<2)
#define XtHremoveAllCallbacks ((char*)&XtStrings[2379])
#define __HAVE_ACPI 
#define CSET_DHL_TOP 1
#define _XOPEN_LEGACY -1
#define round_page(x) ((((unsigned long)(x)) + PAGE_MASK) & ~(PAGE_MASK))
#define XK_hebrew_gimel 0x0ce2
#define XK_Cyrillic_hardsign 0x06df
#define CLOCK_SECOND 13
#define __LP64__ 1
#define NotifyGrab 1
#define XtCOrientation ((char*)&XtStrings[1206])
#define XK_Arabic_ra 0x05d1
#define XK_percent 0x0025
#define PWSCAN_WARN 0x02
#define XK_kana_WA 0x04dc
#define _POSIX_JOB_CONTROL 1
#define XK_Thai_lekha 0x0df5
#define XK_kana_WO 0x04a6
#define XK_cacute 0x01e6
#define SIOCSIFFLAGS _IOW('i', 16, struct ifreq)
#define disableSetUid() 
#define SIGINFO 29
#define mvaddnstr(y,x,str,n) mvwaddnstr(stdscr,y,x,str,n)
#define BlackPixelOfScreen(s) ((s)->black_pixel)
#define XtCScrollDCursor ((char*)&XtStrings[1291])
#define ButtonPress 4
#define XtCScreen ((char*)&XtStrings[1273])
#define ptoa(x) ((unsigned long)(x) << PAGE_SHIFT)
#define XK_BounceKeys_Enable 0xfe74
#define WidthMMOfScreen(s) ((s)->mwidth)
#define XtHsetMappedWhenManaged ((char*)&XtStrings[2511])
#define is_nodelay(win) ((win)->_delay == 0)
#define XtExposeCompressMaximal 3
#define S_IFREG 0100000
#define ACCESSPERMS (S_IRWXU|S_IRWXG|S_IRWXO)
#define XK_Hangul_J_Jieuj 0x0ee9
#define fwopen(cookie,fn) funopen(cookie, 0, fn, 0, 0)
#define DEF_PTY_STTY_SIZE True
#define XK_Armenian_full_stop 0x1000589
#define waddchstr(win,str) waddchnstr(win,str,-1)
#define XK_kana_YA 0x04d4
#define XtNalwaysUseMods "alwaysUseMods"
#define XK_kana_YO 0x04d6
#define _CACHED_RUNES (1 <<8 )
#define CRTS_IFLOW 0x00020000
#define XtNlimitResize "limitResize"
#define XK_kana_YU 0x04d5
#define XtRColorCursor "ColorCursor"
#define SmCARD8 "CARD8"
#define CHAR_MAX SCHAR_MAX
#define SpecialWindowOps(w,name) (!TScreenOf(w)->disallow_win_ops[name])
#define XSubImage(ximage,x,y,width,height) ((*((ximage)->f.sub_image))((ximage), (x), (y), (width), (height)))
#define XtEhorizontal ((char*)&XtStrings[1936])
#define insdelln(n) winsdelln(stdscr,n)
#define XK_onehalf 0x00bd
#define FPE_INTDIV 2
#define XK_Cyrillic_U_macron 0x10004ee
#define XtDefaultBackground "XtDefaultBackground"
#define XK_RupeeSign 0x10020a8
#define XtNfile ((char*)&XtStrings[194])
#define XtNprinterExtent "printerExtent"
#define XtCXimFont "XimFont"
#define XK_Thai_khokhon 0x0da5
#define XtRPixel ((char*)&XtStrings[1754])
#define XtCPrinterExtent "PrinterExtent"
#define CLOCK_REALTIME_FAST 10
#define XK_period 0x002e
#define SouthGravity 8
#define timerclear(tvp) ((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define XtNvt100Graphics "vt100Graphics"
#define XtWindow(widget) ((widget)->core.window)
#define __FDS_BITS(p) ((p)->__X_FDS_BITS)
#define XtNdisallowedColorOps "disallowedColorOps"
#define XK_Georgian_on 0x10010dd
#define DontAllowExposures 0
#define XK_Armenian_AT 0x1000538
#define XK_Kcedilla 0x03d3
#define _IOC(inout,group,num,len) ((unsigned long) ((inout) | (((len) & IOCPARM_MASK) << 16) | ((group) << 8) | (num)))
#define XK_K 0x004b
#define _IOR(g,n,t) _IOC(IOC_OUT, (g), (n), sizeof(t))
#define _IOW(g,n,t) _IOC(IOC_IN, (g), (n), sizeof(t))
#define XtNcursorOnTime "cursorOnTime"
#define _SC_FILE_LOCKING 69
#define DisplayHeightMM(dpy,scr) (ScreenOfDisplay(dpy,scr)->mheight)
#define XK_quotedbl 0x0022
#define update_tcap_fkeys() 
#define SIZE_T_MAX __SIZE_T_MAX
#define SIOCSIFPHYS _IOW('i', 54, struct ifreq)
#define XK_Georgian_san 0x10010e1
#define GenericEvent 35
#define OPT_MAXIMIZE 1
#define XtNforeground ((char*)&XtStrings[214])
#define XrmStringToClass(c_class) XrmStringToQuark(c_class)
#define __REGISTER_PREFIX__ 
#define InputOnly 2
#define XtIsWMShell(obj) (((Object)(obj))->object.widget_class->core_class.class_inited & 0x40)
#define OSIOCGIFNETMASK _IOWR('i', 21, struct ifreq)
#define XK_braille_dots_456 0x1002838
#define XK_braille_dots_457 0x1002858
#define XK_braille_dots_458 0x1002898
#define TAB_BITS_WIDTH (1 << TAB_BITS_SHIFT)
#define F_WRLCK 3
#define EIDRM 82
#define XtNdisallowedTcapOps "disallowedTcapOps"
#define XtNpointerColorBackground "pointerColorBackground"
#define XK_braille_dots_123456 0x100283f
#define _PC_NAME_MAX 4
#define XK_braille_dots_123458 0x100289f
#define NOFLSH 0x80000000
#define WA_TOP A_TOP
#define XK_atilde 0x00e3
#define XK_igrave 0x00ec
#define wgetstr(w,s) wgetnstr(w, s, -1)
#define XtNhighlightColor "highlightColor"
#define XK_braille_dots_467 0x1002868
#define XK_braille_dots_468 0x10028a8
#define _BYTE_ORDER _LITTLE_ENDIAN
#define BadName 15
#define _PC_MAX_CANON 2
#define XK_Armenian_DA 0x1000534
#define DoesSaveUnders(s) ((s)->save_unders)
#define NCURSES_API 
#define NPML4EPG (PAGE_SIZE/(sizeof (pml4_entry_t)))
#define XK_braille_dots_123467 0x100286f
#define XK_braille_dots_123468 0x10028af
#define NBOX 5
#define S_ISWHT(m) (((m) & 0170000) == 0160000)
#define ONOCR 0x00000020
#define VisualAllMask 0x1FF
#define X_BYTE_ORDER BYTE_ORDER
#define XK_braille_dots_478 0x10028c8
#define XK_braille_dots_5678 0x10028f0
#define BUTTON3_TRIPLE_CLICKED NCURSES_MOUSE_MASK(3, NCURSES_TRIPLE_CLICKED)
#define SelectionRequest 30
#define KEY_OPEN 0560
#define XtNiconPixmap ((char*)&XtShellStrings[18])
#define XK_Ukranian_je 0x06a4
#define __GNUCLIKE_BUILTIN_STDARG 1
#define XK_braille_dots_123478 0x10028cf
#define NBPW sizeof(int)
#define KEY_SSAVE 0624
#define SIOCSIFMETRIC _IOW('i', 24, struct ifreq)
#define XK_Arabic_noon_ghunna 0x10006ba
#define XtCSelectToClipboard "SelectToClipboard"
#define XK_Hangul_KiyeogSios 0x0ea3
#define XtCBoldFont "BoldFont"
#define ERROR_TTCOMPAT 22
#define XtNnumLock "numLock"
#define mvwaddch(win,y,x,ch) (wmove(win,y,x) == ERR ? ERR : waddch(win,ch))
#define XK_Armenian_FE 0x1000556
#define XK_Cyrillic_EN_descender 0x10004a2
#define TERM_COLOR_FLAGS(xw) ((xw)->flags & (FG_COLOR|BG_COLOR))
#define _POSIX2_PBS_MESSAGE -1
#define ERROR_ICEERROR 85
#define StaticColor 2
#define IconPixmapHint (1L << 2)
#define _PWF_UID _PWF(2)
#define XFD_ORSET(dst,b1,b2) { int __i__; for (__i__ = 0; __i__ < howmany(FD_SETSIZE, NFDBITS); __i__++) __XFDS_BITS((dst), __i__) = ((__XFDS_BITS((b1), __i__)) | (__XFDS_BITS((b2), __i__))); }
#define SmUserID "UserID"
#define _SC_REALTIME_SIGNALS 36
#define __SSIZE_MAX __LONG_MAX
#define XtNgeometryHook ((char*)&XtStrings[2086])
#define SIGEV_THREAD 2
#define SIOCSIFMTU _IOW('i', 52, struct ifreq)
#define cvtINT8toLong(val) (val)
#define A_BOLD NCURSES_BITS(1UL,13)
#define DEFFONT "fixed"
#define XK_Georgian_un 0x10010e3
#define untouchwin(win) wtouchln((win), 0, getmaxy(win), 0)
#define CHAR_MIN SCHAR_MIN
#define XK_ISO_Move_Line_Up 0xfe21
#define TRACE_WIN_ATTRS(w) 
#define __FLT_MANT_DIG__ 24
#define XtCPrinterNewLine "PrinterNewLine"
#define _SM_H_ 
#define XK_Uhook 0x1001ee6
#define XtNpointerMode "pointerMode"
#define XK_Hangul_Phieuf 0x0ebd
#define OFF_MIN __OFF_MIN
#define __VERSION__ "4.2.1 20070719  [FreeBSD]"
#define S_IFCHR 0020000
#define XK_hebrew_beth 0x0ce1
#define XtNallowTcapOps "allowTcapOps"
#define XtCPosition ((char*)&XtStrings[1235])
#define XK_Armenian_HO 0x1000540
#define AutoRepeatModeDefault 2
#define S_ISFIFO(m) (((m) & 0170000) == 0010000)
#define XK_1 0x0031
#define XtCResignCommand ((char*)&XtShellStrings[1119])
#define XK_braille_dots_1456 0x1002839
#define XK_braille_dots_1457 0x1002859
#define XK_braille_dots_1458 0x1002899
#define XK_braille_dots_2357 0x1002856
#define GCLastBit 22
#define included_data_h 1
#define XK_Greek_MU 0x07cc
#define XtCBellOnReset "BellOnReset"
#define CapNotLast 0
#define _PWF_GECOS _PWF(6)
#define ILL_ILLTRP 4
#define XtCompositeExtensionVersion 2L
#define GCCapStyle (1L<<6)
#define XK_Georgian_we 0x10010f3
#define TIOCSTOP _IO('t', 111)
#define SIOCAIFGROUP _IOW('i', 135, struct ifgroupreq)
#define XtCArgc ((char*)&XtShellStrings[378])
#define SF_APPEND 0x00040000
#define XtCArgv ((char*)&XtShellStrings[388])
#define XK_braille_dots_1467 0x1002869
#define PMaxSize (1L << 5)
#define ScrnHaveRowMargins(screen) ((screen)->top_marg != 0 || ((screen)->bot_marg != screen->max_row))
#define AT_EACCESS 0x100
#define SA_RESETHAND 0x0004
#define LLONG_MIN __LLONG_MIN
#define XK_questiondown 0x00bf
#define Mod5Mask (1<<7)
#define IXOFF 0x00000400
#define ILL_BADSTK 8
#define OFF 0
#define XK_7 0x0037
#define LineSetWrapped(ld) LineSetFlag(ld, LINEWRAPPED)
#define XK_Armenian_JE 0x100054b
#define wattron(win,at) wattr_on(win, NCURSES_CAST(attr_t, at), NULL)
#define KEY_SCOPY 0575
#define TIOCGPGRP _IOR('t', 119, int)
#define XK_Uhorn 0x10001af
#define XK_9 0x0039
#define XK_braille_dots_1478 0x10028c9
#define RUSAGE_THREAD 1
#define FIOCLEX _IO('f', 1)
#define XK_Mabovedot 0x1001e40
#define XtEfalse ((char*)&XtStrings[1906])
#define XK_Hangul_J_Kiyeog 0x0ed4
#define WindingRule 1
#define BUTTON2_TRIPLE_CLICKED NCURSES_MOUSE_MASK(2, NCURSES_TRIPLE_CLICKED)
#define XK_Armenian_KE 0x1000554
#define _UNISTD_H_ 
#define XK_Georgian_phar 0x10010e4
#define XK_Arabic_lam 0x05e4
#define _PWD_VERSION_KEY "\xFF" "VERSION"
#define AnyModifier (1<<15)
#define XtNhpLowerleftBugCompat "hpLowerleftBugCompat"
#define XK_Cyrillic_shcha 0x06dd
#define coreClassRec widgetClassRec
#define XK_Hankaku 0xff29
#define XK_Greek_PI 0x07d0
#define KEY_COPY 0546
#define _PC_REC_INCR_XFER_SIZE 14
#define XC_ur_angle 148
#define _SYS__TYPES_H_ 
#define ENOTSOCK 38
#define XK_Oacute 0x00d3
#define XC_bottom_tee 18
#define XK_hebrew_bet 0x0ce1
#define IXANY 0x00000800
#define O_RDWR 0x0002
#define NeedFunctionPrototypes 1
#define _SYS_SOCKIO_H_ 
#define XK_nacute 0x01f1
#define XK_B 0x0042
#define XCNOENT 2
#define isrune(c) __sbistype((c), 0xFFFFFF00L)
#define __SSTR 0x0200
#define XtNmultiClickTime "multiClickTime"
#define OPT_EXEC_XTERM 0
#define XtInputNoneMask 0L
#define ArcChord 0
#define mvwaddnstr(win,y,x,str,n) (wmove(win,y,x) == ERR ? ERR : waddnstr(win,str,n))
#define ACS_CKBOARD NCURSES_ACS('a')
#define SmsSaveYourselfP2RequestProcMask (1L << 4)
#define amd64_btop(x) ((unsigned long)(x) >> PAGE_SHIFT)
#define KEY_SCREATE 0576
#define XtNlocaleFilter "localeFilter"
#define XK_Armenian_NU 0x1000546
#define XC_sailboat 104
#define XK_Hangul_NieunHieuh 0x0ea6
#define ERROR_PTYS 32
#define XC_top_right_corner 136
#define XtCParameter ((char*)&XtStrings[1218])
#define XK_Cyrillic_SHCHA 0x06fd
#define IconMaskHint (1L << 5)
#define XtNbackarrowKey "backarrowKey"
#define XK_e 0x0065
#define RFCNAMEG (1<<10)
#define XtCPrinterFormFeed "PrinterFormFeed"
#define TCSANOW 0
#define XK_Ecircumflexhook 0x1001ec2
#define __SLBF 0x0001
#define XK_L10 0xffd1
#define TIOCMSET _IOW('t', 109, int)
#define timercmp(tvp,uvp,cmp) (((tvp)->tv_sec == (uvp)->tv_sec) ? ((tvp)->tv_usec cmp (uvp)->tv_usec) : ((tvp)->tv_sec cmp (uvp)->tv_sec))
#define XtCTekSmall "TekSmall"
#define TRAP_TRACE 2
#define SV_SIGINFO SA_SIGINFO
#define XK_Serbian_dje 0x06a1
#define _FSTDIO 
#define XtNpixmap ((char*)&XtStrings[527])
#define BadDrawable 9
#define XK_Armenian_PE 0x100054a
#define TRACE2(p) 
#define FWRITE 0x0002
#define RLIMIT_NPROC 7
#define NORESOLUTION DrawBIT(5)
#define TIOCDRAIN _IO('t', 94)
#define XtExtdefaultfont ((char*)&XtStrings[2004])
#define T_BOUND 21
#define XK_Meta_L 0xffe7
#define MappingBusy 1
#define for_each_combData(off,ld) for (off = 0; off < ld->combSize; ++off)
#define XK_Meta_R 0xffe8
#define DEF_TITLE_MODES 0
#define __GNUCLIKE_BUILTIN_CONSTANT_P 1
#define RUSAGE_SELF 0
#define XK_Thai_maihanakat 0x0dd1
#define SV_NODEFER SA_NODEFER
#define KBAutoRepeatMode (1L<<7)
#define XC_cross 30
#define SIOCGDRVSPEC _IOWR('i', 123, struct ifdrv)
#define ClientMessage 33
#define _X_SENTINEL(x) __attribute__ ((__sentinel__(x)))
#define CWBackingPlanes (1L<<7)
#define XK_T 0x0054
#define XK_Armenian_RA 0x100054c
#define XK_Armenian_RE 0x1000550
#define XtCOverrideRedirect ((char*)&XtShellStrings[203])
#define O_DIRECTORY 0x00020000
#define XtRLong "Long"
#define XK_bracketright 0x005d
#define __SRW 0x0010
#define KEY_SHELP 0606
#define XK_Armenian_ini 0x100056b
#define _LC_LAST 7
#define XK_Ugrave 0x00d9
#define XK_Armenian_SE 0x100054d
#define XtCVisual ((char*)&XtShellStrings[111])
#define XYPixmap 1
#define XK_omacron 0x03f2
#define _SELECT_DECLARED 
#define XTTYMODE_kill 3
#define ERROR_LOGEXEC 80
#define XK_Pointer_EnableKeys 0xfef9
#define XtInputReadMask (1L<<0)
#define XK_udiaeresis 0x00fc
#define XK_braille_dots_1245678 0x10028fb
#define FFSYNC O_FSYNC
#define OPT_SAVE_LINES OPT_FIFO_LINES
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS 3
#define XK_Greek_upsilonaccentdieresis 0x07ba
#define XK_Xabovedot 0x1001e8a
#define XK_Armenian_TO 0x1000539
#define XK_Ukranian_yi 0x06a7
#define S_IWRITE S_IWUSR
#define XK_abrevetilde 0x1001eb5
#define _PC_ACL_NFS4 64
#define XK_Hangul_AraeAE 0x0ef7
#define NBPDP (1<<PDPSHIFT)
#define _POSIX2_LOCALEDEF -1
#define ELOOP 62
#define XK_eogonek 0x01ea
#define XK_Hangul_J_SsangKiyeog 0x0ed5
#define CDTR_IFLOW 0x00040000
#define XtCBrokenStringTerm "BrokenStringTerm"
#define KEY_SRSUME 0623
#define F_SETFD 2
#define XK_braille_dots_5 0x1002810
#define XtCUtf8SelectTypes "Utf8SelectTypes"
#define F_SETFL 4
#define SIG_UNBLOCK 2
#define XK_w 0x0077
#define _PW_VERSION_MASK '\xF0'
#define PWinGravity (1L << 9)
#define HN_NOSPACE 0x02
#define XK_Armenian_VO 0x1000548
#define ONOEOT 0x00000008
#define XtNindex ((char*)&XtStrings[258])
#define XK_Georgian_las 0x10010da
#define FontHeight(screen) WhichVWin(screen)->f_height
#define XK_Hangul_J_RieulHieuh 0x0ee2
#define XtNappcursorDefault "appcursorDefault"
#define XK_hebrew_waw 0x0ce5
#define XtNrestartCommand ((char*)&XtShellStrings[1133])
#define GetLineFlags(ld) ((ld)->bufHead & LINEFLAG_MASK)
#define XK_fourthroot 0x100221C
#define _XTYPEDEF_XID 
#define _POSIX_MEMLOCK -1
#define XK_h 0x0068
#define TEK_FONT_SMALL 3
#define XK_Zenkaku_Hankaku 0xff2a
#define XK_Greek_psi 0x07f8
#define CellsOfScreen(s) (DefaultVisualOfScreen((s))->map_entries)
#define XK_u 0x0075
#define _PWF_PASSWD _PWF(1)
#define XK_j 0x006a
#define XLookupKeySym 3
#define __byte_swap_int(x) __byte_swap_int_var(x)
#define SIOCSHIWAT _IOW('s', 0, int)
#define XK_Thai_yoyak 0x0dc2
#define rounddown(x,y) (((x)/(y))*(y))
#define BYTE_ORDER _BYTE_ORDER
#define KEY_F(n) (KEY_F0+(n))
#define SHELL_OF(widget) XtParent(widget)
#define XK_Armenian_ben 0x1000562
#define XK_Arabic_superscript_alef 0x1000670
#define XtNmaxHeight ((char*)&XtShellStrings[607])
#define CBRK CEOL
#define CSTOP CTRL('S')
#define SIOCSIFDESCR _IOW('i', 41, struct ifreq)
#define TRACE_TIMES 0x0001
#define XMD_H 1
#define ILL_COPROC 7
#define XtInputWriteMask (1L<<1)
#define XK_Arabic_jeem 0x05cc
#define if_OPT_ISO_COLORS(screen,code) if (screen->colorMode) code
#define O_RDONLY 0x0000
#define XK_Hangul_Jieuj 0x0eb8
#define FreeTypedBuffer(type) if (BfBuf(type) != 0) { free(BfBuf(type)); BfBuf(type) = 0; } BfLen(type) = 0
#define EINVAL 22
#define WSTOPSIG(x) (_W_INT(x) >> 8)
#define _WSTATUS(x) (_W_INT(x) & 0177)
#define XK_Armenian_ZA 0x1000536
#define XK_kana_tu 0x04af
#define XtCIconMask ((char*)&XtShellStrings[71])
#define XtCThumb ((char*)&XtStrings[1478])
#define XK_braille_dots_2367 0x1002866
#define unix 1
#define _PWF_NIS 0x2000
#define XtNmaxWidth ((char*)&XtShellStrings[589])
#define SS_ONSTACK 0x0001
#define XK_v 0x0076
#define XtNpopupCallback ((char*)&XtStrings[534])
#define CirculateNotify 26
#define HAVE_UTMP_UT_HOST 1
#define XtNallowFontOps "allowFontOps"
#define XK_x 0x0078
#define F_SETLK 12
#define XtNmenuHeight "menuHeight"
#define XK_Hangul_WAE 0x0ec9
#define __CHAR_BIT 8
#define OPT_88_COLORS 0
#define Mod4Mask (1<<6)
#define XNCursor "cursor"
#define _SC_2_FORT_RUN 22
#define XK_braille_dots_2345 0x100281e
#define XK_braille_dots_2346 0x100282e
#define XK_braille_dots_2347 0x100284e
#define XK_braille_dots_2348 0x100288e
#define XK_macron 0x00af
#define XK_hebrew_yod 0x0ce9
#define ILL_RESOP_FAULT T_RESOPFLT
#define __SIZE_TYPE__ long unsigned int
#define XtCAccelerators ((char*)&XtStrings[889])
#define XtNcolorBLMode "colorBLMode"
#define XK_Zacute 0x01ac
#define XK_Thorn 0x00de
#define HAVE_WAITPID 1
#define X_HAVE_UTF8_STRING 1
#define ROW2ABS(screen,row) ((row) + (screen)->savedlines)
#define XtCMultiClickTime "MultiClickTime"
#define KEY_SUSPEND 0627
#define XK_DongSign 0x10020ab
#define XtHremoveCallback ((char*)&XtStrings[2344])
#define XK_0 0x0030
#define XK_braille_dots_2356 0x1002836
#define YValue 0x0002
#define XK_braille_dots_2358 0x1002896
#define XK_4 0x0034
#define XK_5 0x0035
#define XK_yacute 0x00fd
#define XK_8 0x0038
#define XtCMargin ((char*)&XtStrings[1182])
#define XK_A 0x0041
#define XtNvSpace ((char*)&XtStrings[865])
#define XK_C 0x0043
#define XK_D 0x0044
#define XK_E 0x0045
#define XK_F 0x0046
#define XK_G 0x0047
#define XK_H 0x0048
#define XK_I 0x0049
#define XK_J 0x004a
#define XtNerrorCallback ((char*)&XtShellStrings[1275])
#define XK_L 0x004c
#define XK_M 0x004d
#define XK_N 0x004e
#define XK_O 0x004f
#define XK_P 0x0050
#define XK_Q 0x0051
#define XK_R 0x0052
#define XK_S 0x0053
#define XK_U 0x0055
#define XK_V 0x0056
#define XK_W 0x0057
#define XK_X 0x0058
#define XK_Y 0x0059
#define XK_Z 0x005a
#define XK_a 0x0061
#define XK_b 0x0062
#define XK_c 0x0063
#define XK_d 0x0064
#define XK_f 0x0066
#define XK_g 0x0067
#define XK_i 0x0069
#define XK_k 0x006b
#define XK_l 0x006c
#define XK_m 0x006d
#define XK_n 0x006e
#define XK_o 0x006f
#define XK_p 0x0070
#define XK_q 0x0071
#define XK_r 0x0072
#define XK_s 0x0073
#define XK_t 0x0074
#define XK_braille_dots_2368 0x10028a6
#define XtCPopOnBell "PopOnBell"
#define XK_y 0x0079
#define XK_z 0x007a
#define ResizeRedirectMask (1L<<18)
#define _MACHINE_PARAM_H_ 
#define XK_Execute 0xff62
#define MIN_ANSI_COLORS 16
#define A2E(a) (a)
#define XtCMarginBell "MarginBell"
#define _SC_PRIORITIZED_IO 34
#define if_OPT_AIX_COLORS(screen,code) if(screen->colorMode) code
#define PARENB 0x00001000
#define LC_NUMERIC 4
#define XK_Greek_OMICRONaccent 0x07a7
#define DFLTPHYS (64 * 1024)
#define XK_NewSheqelSign 0x10020aa
#define XK_ecircumflexbelowdot 0x1001ec7
#define XtNallowSendEvents "allowSendEvents"
#define _X_INTERNAL __attribute__((visibility("internal")))
#define XK_aogonek 0x01b1
#define LineDoubleDash 2
#define _XtIntrinsic_h 
#define XK_braille_dots_2378 0x10028c6
#define XK_dead_dasia 0xfe65
#define XK_Hangul_Pieub 0x0eb2
#define CLOCK_THREAD_CPUTIME_ID 14
#define XK_kana_ya 0x04ac
#define XK_ohook 0x1001ecf
#define XK_kana_yo 0x04ae
#define KBBellDuration (1L<<3)
#define redrawwin(win) wredrawln(win, 0, (win)->_maxy+1)
#define XK_kana_yu 0x04ad
#define XK_Pabovedot 0x1001e56
#define _MACHINE_ENDIAN_H_ 
#define TCION 4
#define XK_Serbian_dze 0x06af
#define XK_Hangul_WEO 0x0ecd
#define _toupper(c) __sbtoupper(c)
#define FontRightToLeft 1
#define SIOCGIFPHYS _IOWR('i', 53, struct ifreq)
#define TIOCSIG _IOWINT('t', 95)
#define XTTYMODE_status 16
#define XtEUnmap "unmap"
#define XK_Begin 0xff58
#define XIMInitialState 1L
#define XtNappkeypadDefault "appkeypadDefault"
#define XK_parenleft 0x0028
#define XK_hebrew_kaph 0x0ceb
#define XtVaNestedList "XtVaNestedList"
#define XtIMSignal 8
#define XtNdestroyCallback ((char*)&XtStrings[169])
#define _HASMOVED 0x20
#define XK_kana_O 0x04b5
#define XK_obelowdot 0x1001ecd
#define XK_paragraph 0x00b6
#define XK_Hangul_J_YeorinHieuh 0x0efa
#define IOV_MAX 1024
#define _X_EXPORT __attribute__((visibility("default")))
#define GravityIsSouthWest(w) ((w)->misc.resizeGravity == SouthWestGravity)
#define IsViewable 2
#define XK_THAI 
#define XK_Armenian_at 0x1000568
#define XK_SingleCandidate 0xff3c
#define __LDBL_EPSILON__ 1.08420217248550443401e-19L
#define DEF_INITIAL_ERASE False
#define XK_Hangul_J_Hieuh 0x0eee
#define LEFT_RIGHT MiscBIT(10)
#define XK_ISO_Group_Latch 0xfe06
#define O_SYNC 0x0080
#define SmsGetPropertiesProcMask (1L << 9)
#define XK_Agrave 0x00c0
#define XtRBitmap ((char*)&XtStrings[1549])
#define XK_ohorn 0x10001a1
#define minor(x) ((int)((x)&0xffff00ff))
#define OPT_DEC_RECTOPS 0
#define GravityNotify 24
#define XtNwmTimeout ((char*)&XtShellStrings[753])
#define XK_dabovedot 0x1001e0b
#define XTTYMODE_flush 13
#define XtInheritRealize ((XtRealizeProc) _XtInherit)
#define __SSE_MATH__ 1
#define __htonl(x) __bswap32(x)
#define __htons(x) __bswap16(x)
#define XtSMDontChange 5
#define XK_Cyrillic_u_macron 0x10004ef
#define mvwaddstr(win,y,x,str) (wmove(win,y,x) == ERR ? ERR : waddnstr(win,str,-1))
#define _XtConstraintP_h 
#define externalref extern
#define HAS_BSD_GROUPS 
#define XtCColormap ((char*)&XtStrings[961])
#define InputHint (1L << 0)
#define slk_attr_on(a,v) ((v) ? ERR : slk_attron(a))
#define USSize (1L << 1)
#define XK_Armenian_da 0x1000564
#define __LDBL_MAX_10_EXP__ 4932
#define _SC_PRIORITY_SCHEDULING 35
#define GCClipMask (1L<<19)
#define XK_CruzeiroSign 0x10020a2
#define XK_kcedilla 0x03f3
#define BUTTON_RESERVED_EVENT(e,x) ((e) & NCURSES_MOUSE_MASK(x, 040))
#define KEY_UNDO 0630
#define ACS_NEQUAL NCURSES_ACS('|')
#define XK_braille_dots_123457 0x100285f
#define XtUnspecifiedWindow ((Window)2)
#define SAVELINES 64
#define XtCRestartCommand ((char*)&XtShellStrings[1148])
#define fds_bits __fds_bits
#define XK_braille_dots_1235678 0x10028f7
#define SIGEV_THREAD_ID 4
#define SIOCSIFBRDADDR _IOW('i', 19, struct ifreq)
#define WTMP 
#define XK_kana_a 0x04a7
#define XtNtextSink ((char*)&XtStrings[752])
#define mvwgetstr(win,y,x,str) (wmove(win,y,x) == ERR ? ERR : wgetstr(win,str))
#define IOC_OUT 0x40000000
#define LINEWRAPPED AttrBIT(0)
#define _POSIX_TRACE -1
#define ANSI_EOT 0x04
#define XK_lcaron 0x01b5
#define ACS_PLUS NCURSES_ACS('n')
#define TIOCSDTR _IO('t', 121)
#define HAVE_TERMIOS_H 1
#define XK_Armenian_fe 0x1000586
#define ERROR_TIOCLSET 27
#define XK_Wdiaeresis 0x1001e84
#define WA_BLINK A_BLINK
#define CharOf(n) ((unsigned char)(n))
#define XK_Cyrillic_che_descender 0x10004b7
#define XtNoldXtermFKeys "oldXtermFKeys"
#define XK_Uhorngrave 0x1001eea
#define __CC_SUPPORTS_WARNING 1
#define XFD_UNSET(dst,b1) { int __i__; for (__i__ = 0; __i__ < howmany(FD_SETSIZE, NFDBITS); __i__++) __XFDS_BITS((dst), __i__) &= ~(__XFDS_BITS((b1), __i__)); }
#define ATTRIBUTES (SGR_MASK | BG_COLOR | FG_COLOR | INVISIBLE | PROTECTED)
#define TCSAFLUSH 2
#define OPT_SESSION_MGT 1
#define XtEtrue ((char*)&XtStrings[1918])
#define XK_lbelowdot 0x1001e37
#define _W_INT(i) (i)
#define XK_Arabic_shadda 0x05f1
#define XtIsWidget(obj) (((Object)(obj))->object.widget_class->core_class.class_inited & 0x04)
#define XK_dead_belowcomma 0xfe6e
#define EWOULDBLOCK EAGAIN
#define _POSIX2_PBS_CHECKPOINT -1
#define TERMCAP_SIZE 1500
#define XK_schwa 0x1000259
#define GCC_UNUSED 
#define XK_braille_dots_123678 0x10028e7
#define XNPreeditState "preeditState"
#define SmsInteractRequestProcMask (1L << 1)
#define XK_Armenian_hi 0x1000575
#define XK_Armenian_ho 0x1000570
#define WhenMapped 1
#define VM_SWZONE_SIZE_MAX (32 * 1024 * 1024)
#define WidthOfScreen(s) ((s)->width)
#define SM_SaveYourselfRequest 4
#define NCURSES_STATIC 
#define XK_Next 0xff56
#define XK_Greek_mu 0x07ec
#define XK_kana_o 0x04ab
#define FPARSELN_UNESCALL 0x0f
#define IceNoAuth 1
#define XK_Greek_nu 0x07ed
#define getbegy(win) ((win) ? (win)->_begy : ERR)
#define _PC_MAX_INPUT 3
#define _SC_DELAYTIMER_MAX 45
#define __ntohs(x) __bswap16(x)
#define S_IFDIR 0040000
#define TekScreenOf(tw) (&(tw)->screen)
#define UU_LOCK_OK (0)
#define EBUSY 16
#define XK_Idiaeresis 0x00cf
#define EPROCLIM 67
#define TRAP_BRKPT 1
#define A_DIM NCURSES_BITS(1UL,12)
#define XK_acircumflexhook 0x1001ea9
#define TIOCSTI _IOW('t', 114, char)
#define XtCInitialState ((char*)&XtShellStrings[456])
#define __KPRINTF_ATTRIBUTE__ 1
#define XK_kana_u 0x04a9
#define _POSIX_ASYNCHRONOUS_IO 0
#define XK_SCHWA 0x100018f
#define XK_KP_4 0xffb4
#define XtNborderColor ((char*)&XtStrings[87])
#define XK_Armenian_ke 0x1000584
#define XtNhighlightTextColor "highlightTextColor"
#define GXset 0xf
#define XK_Greek_pi 0x07f0
#define XTTYMODE_start 7
#define _SC_SAVED_IDS 7
#define XK_eacute 0x00e9
#define ResetWrap(screen) (screen)->do_wrap = False
#define XK_Thai_oang 0x0dcd
#define DEFLOCALEFILTER DEFLOCALEFILTER1(PROJECTROOT) "/bin/luit"
#define XK_KP_8 0xffb8
#define TRACE_XRES() 
#define _UID_T_DECLARED 
#define XK_Gbreve 0x02ab
#define BUTTON4_CLICKED NCURSES_MOUSE_MASK(4, NCURSES_BUTTON_CLICKED)
#define XK_dcaron 0x01ef
#define _SYS_IOCCOM_H_ 
#define GCJoinStyle (1L<<7)
#define DoBlue (1<<2)
#define FPE_INTOVF_TRAP 0x1
#define BfBuf(type) screen->bf_buf_ ##type
#define NCURSES_TRIPLE_CLICKED 020L
#define XtNwindowGroup ((char*)&XtShellStrings[80])
#define attr_on(a,o) wattr_on(stdscr,a,o)
#define Mod3Mask (1<<5)
#define XtRPixmap ((char*)&XtStrings[1760])
#define major(x) ((int)(((u_int)(x) >> 8)&0xff))
#define PAGE_SHIFT 12
#define XK_Armenian_but 0x100055d
#define XK_fivesuperior 0x1002075
#define DEFFACENAME_AUTO "mono"
#define Button2 2
#define Button3 3
#define Button4 4
#define Button5 5
#define HeightMMOfScreen(s) ((s)->mheight)
#define TAB_ARRAY_SIZE (1024 / TAB_BITS_WIDTH)
#define NormalBoldGC(w,sp) getCgsGC(w, WhichVWin(sp), gcBold)
#define _PWF_GID _PWF(3)
#define XkbBI_MajorError 2
#define S_ISVTX 0001000
#define IceMajorOpcodeDuplicate 7
#define EROFS 30
#define XK_Pointer_Drag1 0xfef5
#define XK_Uring 0x01d9
#define XC_top_left_arrow 132
#define CWBitGravity (1L<<4)
#define HAVE_X11_DECKEYSYM_H 1
#define XtIsVendorShell(widget) (_XtIsSubclassOf(widget, (WidgetClass)vendorShellWidgetClass, (WidgetClass)wmShellWidgetClass, (XtEnum)0x40))
#define ERROR_SCALLOC 90
#define _SC_SEMAPHORES 37
#define SIGSYS 12
#define Bool int
#define XtCLogInhibit "LogInhibit"
#define XtExposeCompressSeries ((XtEnum)True)
#define XK_Cyrillic_I_macron 0x10004e2
#define XK_Break 0xff6b
#define XK_Hangul_Start 0xff32
#define XK_Armenian_YECH 0x1000535
#define XtCBackground ((char*)&XtStrings[902])
#define XK_kappa 0x03a2
#define XK_Armenian_pe 0x100057a
#define __LONG_MAX__ 9223372036854775807L
#define SIOCADDMULTI _IOW('i', 49, struct ifreq)
#define XK_Greek_IOTAdiaeresis 0x07a5
#define HN_GETSCALE 0x10
#define SetModeDelete 1
#define set_cur_col(screen,value) screen->cur_col = value
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS 8
#define XK_ISO_Level3_Lock 0xfe05
#define XtNewString(str) ((str) != NULL ? (strcpy(XtMalloc((unsigned)strlen(str) + 1), str)) : NULL)
#define XtRGravity ((char*)&XtStrings[2042])
#define hline(ch,n) whline(stdscr, ch, n)
#define ONLCR 0x00000002
#define XtNtextOptions ((char*)&XtStrings[740])
#define AllowFontOps(w,name) (AllowXtermOps(w, allowFontOps) || !TScreenOf(w)->disallow_font_ops[name])
#define SIOCGIFMEDIA _IOWR('i', 56, struct ifmediareq)
#define L_INCR SEEK_CUR
#define XK_Ecircumflexgrave 0x1001ec0
#define XK_dead_abovecomma 0xfe64
#define PARODD 0x00002000
#define XtNaccelerators ((char*)&XtStrings[0])
#define XtNloginShell "loginShell"
#define XK_Cyrillic_ZHE 0x06f6
#define XtNboldColors "boldColors"
#define TOGGLE 1
#define _TIME_T_DECLARED 
#define XK_Armenian_ra 0x100057c
#define XK_Armenian_re 0x1000580
#define XK_Macedonia_gje 0x06a2
#define XK_multiply 0x00d7
#define TIOCPKT_DATA 0x00
#define XCNOMEM 1
#define __DEC64_MAX__ 9.999999999999999E384DD
#define XtNtop ((char*)&XtStrings[798])
#define _XtString char*
#define WIFSTOPPED(x) (_WSTATUS(x) == _WSTOPPED)
#define _SETKEY_DECLARED 
#define XtEtextEdit ((char*)&XtStrings[1959])
#define XK_Armenian_TSA 0x100053e
#define XK_Pointer_UpLeft 0xfee4
#define _POSIX_RAW_SOCKETS 200112L
#define XK_Armenian_se 0x100057d
#define XK_Armenian_TSO 0x1000551
#define __SERR 0x0040
#define KEY_REFERENCE 0564
#define _PW_KEYYPBYNUM '\x35'
#define SAVED_CURSORS 2
#define XtHcreate ((char*)&XtStrings[2198])
#define CWSaveUnder (1L<<10)
#define XK_Cyrillic_u_straight 0x10004af
#define SIOCSIFMAC _IOW('i', 39, struct ifreq)
#define XK_Greek_xi 0x07ee
#define PrinterOf(screen) (screen)->printer_state
#define XK_hebrew_daleth 0x0ce3
#define BUTTON4_DOUBLE_CLICKED NCURSES_MOUSE_MASK(4, NCURSES_DOUBLE_CLICKED)
#define XK_Armenian_to 0x1000569
#define NUM_ANSI_COLORS MIN_ANSI_COLORS
#define XK_plus 0x002b
#define __NO_STRICT_ALIGNMENT 
#define KEY_SEOL 0603
#define XtConstraintExtensionVersion 1L
#define CKILL CTRL('U')
#define _SC_THREAD_DESTRUCTOR_ITERATIONS 85
#define OPT_SELECT_REGEX 0
#define __DEC64_MANT_DIG__ 16
#define __warn_references(sym,msg) __asm__(".section .gnu.warning." #sym); __asm__(".asciz \"" msg "\""); __asm__(".previous")
#define XtNcreatePopupChildProc ((char*)&XtShellStrings[314])
#define IceBadLength 0x8002
#define EDEADLK 11
#define XK_Thai_phinthu 0x0dda
#define XtNcolorMode "colorMode"
#define XK_Thai_nonen 0x0db3
#define XrmStringToNameList(str,name) XrmStringToQuarkList(str, name)
#define XtNupdate ((char*)&XtStrings[833])
#define XtNiconX ((char*)&XtShellStrings[393])
#define _POSIX2_PBS_TRACK -1
#define DEF_8BIT_META "true"
#define XK_Armenian_vo 0x1000578
#define _SC_THREAD_KEYS_MAX 86
#define XtRString ((char*)&XtStrings[1797])
#define XK_Greek_SIGMA 0x07d2
#define MyStackFree(pointer,stack_cache_array) if ((pointer) != ((char *)(stack_cache_array))) free(pointer)
#define SIGCHLD 20
#define XK_Alt_L 0xffe9
#define XK_Alt_R 0xffea
#define KEY_SUNDO 0626
#define XtCSaveUnder ((char*)&XtShellStrings[156])
#define XK_Abrevegrave 0x1001eb0
#define MAXLOGNAME 17
#define XtCTranslations ((char*)&XtStrings[1484])
#define XK_Hangul_J_RieulSios 0x0edf
#define CWBackingPixel (1L<<8)
#define XtHoverrideTranslations ((char*)&XtStrings[2422])
#define _BIG_ENDIAN 4321
#define XK_Ukrainian_I 0x06b6
#define COLOR_NAME(s,w) ((s)->names[w])
#define B1800 1800
#define cvtINT16toLong(val) (val)
#define WhichVFont(screen,name) (IsIcon(screen) ? (screen)->fnt_icon.fs : (screen)->name)
#define _POSIX_FSYNC 200112L
#define XK_Greek_EPSILON 0x07c5
#define IOPAGES 2
#define XtCBaseWidth ((char*)&XtShellStrings[497])
#define XK_braille_dots_245678 0x10028fa
#define DEF_DISALLOWED_COLOR "SetColor,GetColor,GetAnsiColor"
#define XtCKnobPixel ((char*)&XtStrings[1141])
#define SizeOfCellData offsetof(CellData, combData)
#define XtCSelection ((char*)&XtStrings[1375])
#define ERROR_LUMALLOC 49
#define XK_Armenian_MEN 0x1000544
#define XtEWest "west"
#define checkVeryBoldColors(flags,fg) checkVeryBoldAttr(flags, fg, COLOR_RV, INVERSE); checkVeryBoldAttr(flags, fg, COLOR_UL, UNDERLINE); checkVeryBoldAttr(flags, fg, COLOR_BD, BOLD); checkVeryBoldAttr(flags, fg, COLOR_BL, BLINK)
#define XtDefaultFont "XtDefaultFont"
#define XK_Arabic_tah 0x05d7
#define CLOCK_UPTIME 5
#define SM_PropertiesReply 15
#define XK_KP_Insert 0xff9e
#define __DEC128_DEN__ 0.000000000000000000000000000000001E-6143DL
#define DBLCS_BITS 4
#define XK_Armenian_za 0x1000566
#define XK_AccessX_Enable 0xfe70
#define ProtocolRevision(dpy) (((_XPrivDisplay)dpy)->proto_minor_version)
#define _POSIX2_PBS -1
#define SA_NOCLDSTOP 0x0008
#define RFKERNELONLY (RFSTOPPED | RFHIGHPID | RFPPWAIT)
#define DEV_BSIZE (1<<DEV_BSHIFT)
#define XK_Cyrillic_CHE_descender 0x10004b6
#define NCCS 20
#define XNColormap "colorMap"
#define XK_Control_L 0xffe3
#define __USHRT_MAX 0xffffU
#define XK_Overlay2_Enable 0xfe79
#define XNStatusStartCallback "statusStartCallback"
#define _IOLBF 1
#define XK_Hangul_PreviousCandidate 0xff3e
#define FamilyInternet 0
#define XK_gabovedot 0x02f5
#define XtCScaleHeight "ScaleHeight"
#define FPE_FLTINV 7
#define MaxRows(screen) ((screen)->max_row + 1)
#define XK_Ocircumflexhook 0x1001ed4
#define VQUIT 9
#define XK_ohornhook 0x1001edf
#define F_SETLKW 13
#define XC_based_arrow_down 4
#define XK_Acircumflexacute 0x1001ea4
#define XK_Uogonek 0x03d9
#define WIFSIGNALED(x) (_WSTATUS(x) != _WSTOPPED && _WSTATUS(x) != 0)
#define RevertToPointerRoot (int)PointerRoot
#define XK_Icircumflex 0x00ce
#define XK_braille_dots_12567 0x1002873
#define XK_braille_dots_12568 0x10028b3
#define INX2ROW(screen,inx) ((inx) - (screen)->topline)
#define XK_Cyrillic_shha 0x10004bb
#define CHARDRAWN AttrBIT(7)
#define CP_INTR 3
#define BitmapUnit(dpy) (((_XPrivDisplay)dpy)->bitmap_unit)
#define __GNUC_MINOR__ 2
#define XK_braille_dots_12578 0x10028d3
#define XK_Arabic_teh 0x05ca
#define insstr(s) winsstr(stdscr,s)
#define XK_braille_dots_23456 0x100283e
#define XK_braille_dots_23457 0x100285e
#define XK_braille_dots_23458 0x100289e
#define ScreenSaverReset 0
#define AT_REMOVEDIR 0x800
#define XK_Serbian_lje 0x06a9
#define _PWF_HESIOD 0x3000
#define XtNmodifyKeyboard "modifyKeyboard"
#define XK_at 0x0040
#define EastGravity 6
#define _PC_REC_MIN_XFER_SIZE 16
#define XK_braille_dots_23467 0x100286e
#define _XTYPEDEF_ATOM 
#define RFPROC (1<<4)
#define _FULLWIN 0x04
#define CIGNORE 0x00000001
#define KEY_SBEG 0572
#define Mod2Mask (1<<4)
#define ENAMETOOLONG 63
#define DEF_ALLOW_TITLE True
#define init_Bres(name) wnew->name = request->name
#define XK_Georgian_khar 0x10010e5
#define CLD_STOPPED 5
#define CRTSCTS (CCTS_OFLOW | CRTS_IFLOW)
#define HOSTNAME_INCORRECTNAME (1)
#define __DBL_HAS_QUIET_NAN__ 1
#define XNBaseFontName "baseFontName"
#define IceMSBfirst 1
#define XK_braille_dots_23478 0x10028ce
#define GCTile (1L<<10)
#define EXTPROC 0x00000800
#define _X_INLINE inline
#define XtNalwaysHighlight "alwaysHighlight"
#define NPML4EPGSHIFT 9
#define XK_ENG 0x03bd
#define RES_NAME(name) name
#define ELAST 93
#define ReverseOrHilite(screen,flags,hilite) (( screen->colorRVMode && hilite ) || ( !screen->colorRVMode && (( (flags & INVERSE) && !hilite) || (!(flags & INVERSE) && hilite)) ))
#define SIGEMT 7
#define XtNinitialState ((char*)&XtShellStrings[443])
#define NCURSES_PUBLIC_VAR(name) _nc_ ##name
#define _SYS_LIMITS_H_ 
#define VREPRINT 6
#define XK_Escape 0xff1b
#define XtUnmapWidget(widget) XUnmapWindow(XtDisplay(widget), XtWindow(widget))
#define XtCMenuEntry ((char*)&XtStrings[1189])
#define XtNcutToBeginningOfLine "cutToBeginningOfLine"
#define COLOR_RED 1
#define XtNmodifyCursorKeys "modifyCursorKeys"
#define XtNspace ((char*)&XtStrings[727])
#define COLOR_RES(root,offset,value) Sres(COLOR_RES_NAME(root), COLOR_RES_CLASS(root), offset.resource, value)
#define _SYS__PTHREADTYPES_H_ 
#define mvgetch(y,x) mvwgetch(stdscr,y,x)
#define __OFF_MAX __LONG_MAX
#define XK_Otilde 0x00d5
#define XK_Wgrave 0x1001e80
#define XK_ninesubscript 0x1002089
#define ESOCKTNOSUPPORT 44
#define XK_ntilde 0x00f1
#define XK_Hangul_Nieun 0x0ea4
#define XK_Hcircumflex 0x02a6
#define __WCHAR_TYPE__ int
#define is_keypad(win) ((win)->_use_keypad)
#define CLOCK_PROF 2
#define NARROWPROTO 
#define CreateNotify 16
#define XK_Hangul_Hanja 0xff34
#define XtCWindow ((char*)&XtStrings[1516])
#define XK_braille_dots_12 0x1002803
#define XK_braille_dots_13 0x1002805
#define XK_braille_dots_14 0x1002809
#define XK_braille_dots_15 0x1002811
#define XK_braille_dots_16 0x1002821
#define XK_braille_dots_17 0x1002841
#define XK_braille_dots_18 0x1002881
#define XK_KP_Subtract 0xffad
#define _PATH_PWD "/etc"
#define TABDLY 0x00000004
#define inch() winch(stdscr)
#define MOD_NONE 1
#define XK_ibelowdot 0x1001ecb
#define XtNjustify ((char*)&XtStrings[379])
#define XtRFile ((char*)&XtStrings[1650])
#define S_ISBLK(m) (((m) & 0170000) == 0060000)
#define XtIsTransientShell(widget) (_XtIsSubclassOf(widget, (WidgetClass)transientShellWidgetClass, (WidgetClass)wmShellWidgetClass, (XtEnum)0x40))
#define XK_Greek_CHI 0x07d7
#define XK_braille_dots_23 0x1002806
#define XK_braille_dots_24 0x100280a
#define XK_braille_dots_25 0x1002812
#define XK_braille_dots_26 0x1002822
#define ERROR_SCALLOC2 91
#define XK_braille_dots_28 0x1002882
#define XK_ISO_Level2_Latch 0xfe02
#define __byte_swap_long_var(x) __extension__ ({ register __uint64_t __X = (x); __asm ("bswap %0" : "+r" (__X)); __X; })
#define XK_Dcaron 0x01cf
#define __CC_SUPPORTS___INLINE 1
#define XK_Greek_iota 0x07e9
#define XK_Georgian_tan 0x10010d7
#define XK_Georgian_tar 0x10010e2
#define XK_Thai_fofan 0x0dbf
#define XtCXmcAttributes "XmcAttributes"
#define RFCFDG (1<<12)
#define __DEC64_MIN_EXP__ (-383)
#define XtCResize ((char*)&XtStrings[1253])
#define XK_Thai_saraaimaimalai 0x0de4
#define XK_ccaron 0x01e8
#define XK_braille_dots_34 0x100280c
#define XK_braille_dots_35 0x1002814
#define XK_braille_dots_36 0x1002824
#define XK_braille_dots_37 0x1002844
#define XK_braille_dots_38 0x1002884
#define SIOCGIFINDEX _IOWR('i', 32, struct ifreq)
#define XtNawaitInput "awaitInput"
#define XC_gobbler 54
#define XK_Arabic_fatha 0x05ee
#define mvwaddchnstr(win,y,x,str,n) (wmove(win,y,x) == ERR ? ERR : waddchnstr(win,str,n))
#define XtCScrollBarBorder "ScrollBarBorder"
#define XK_ecircumflexgrave 0x1001ec1
#define XtNtekGeometry "tekGeometry"
#define XK_braille_dots_46 0x1002828
#define XK_braille_dots_47 0x1002848
#define XK_braille_dots_48 0x1002888
#define XK_braille_dots_568 0x10028b0
#define XK_ETH 0x00d0
#define _INT32_T_DECLARED 
#define MODE_KAM xBIT(0)
#define XK_Hangul_AE 0x0ec0
#define RLIMIT_DATA 2
#define BUFSIZ 1024
#define XK_bar 0x007c
#define XK_braille_dots_123567 0x1002877
#define XValue 0x0001
#define XK_braille_dots_1 0x1002801
#define XK_braille_dots_2 0x1002802
#define XK_braille_dots_4 0x1002808
#define XK_braille_dots_56 0x1002830
#define XK_braille_dots_57 0x1002850
#define XK_braille_dots_58 0x1002890
#define XK_braille_dots_578 0x10028d0
#define __FLT_MAX_10_EXP__ 38
#define _WCHAR_T_DECLARED 
#define LineClrBlinked(ld) LineClrFlag(ld, LINEBLINKED)
#define XtCBorderWidth ((char*)&XtStrings[940])
#define XtRBackingStore "BackingStore"
#define WNOWAIT 8
#define SmLISTofARRAY8 "LISTofARRAY8"
#define _PWF_CLASS _PWF(5)
#define XK_braille_dots_67 0x1002860
#define XK_braille_dots_68 0x10028a0
#define mvdelch(y,x) mvwdelch(stdscr,y,x)
#define _SC_2_PBS 59
#define WA_LEFT A_LEFT
#define update_hp_fkeys() 
#define BUTTON_SHIFT NCURSES_MOUSE_MASK(5, 0002L)
#define XtCAllowShellResize ((char*)&XtShellStrings[297])
#define XtNdeleteIsDEL "deleteIsDEL"
#define __amd64__ 1
#define XK_braille_dots_78 0x10028c0
#define IceFatalToConnection 2
#define XK_KP_End 0xff9c
#define KEY_CTAB 0525
#define __OFF_MIN __LONG_MIN
#define CastMallocN(type,n) (type *)malloc(sizeof(type) + (size_t) (n))
#define XtNshown ((char*)&XtStrings[721])
#define __weak_reference(sym,alias) __asm__(".weak " #alias); __asm__(".equ " #alias ", " #sym)
#define A_REVERSE NCURSES_BITS(1UL,10)
#define TRACE_IDS 
#define XK_scedilla 0x01ba
#define XK_ybelowdot 0x1001ef5
#define XK_dead_semivoiced_sound 0xfe5f
#define ICE_ConnectionSetup 2
#define ColormapChangeMask (1L<<23)
#define TTYSIZE_STRUCT struct winsize
#define _XtXtEnum XtEnum
#define RFSTOPPED (1<<17)
#define ICE_NoClose 12
#define EPROTONOSUPPORT 43
#define XK_kana_openingbracket 0x04a2
#define UINT_MAX __UINT_MAX
#define XtNumber(arr) ((Cardinal) (sizeof(arr) / sizeof(arr[0])))
#define XK_Hangul_EU 0x0ed1
#define XK_braille_dots_235678 0x10028f6
#define XK_Hangul_Romaja 0xff36
#define XK_Cyrillic_zhe_descender 0x1000497
#define ScrnIsRowInSelection(screen,line) ((line) >= (screen)->startH.row && (line) <= (screen)->endH.row)
#define feof(p) (!__isthreaded ? __sfeof(p) : (feof)(p))
#define XK_sixsubscript 0x1002086
#define CapProjecting 3
#define XK_kana_CHI 0x04c1
#define XtRColormap ((char*)&XtStrings[1602])
#define NCURSES_BITS(mask,shift) ((mask) << ((shift) + NCURSES_ATTR_SHIFT))
#define externaldef(psect) 
#define SIGLWP SIGTHR
#define TScreenOf(xw) (&(xw)->screen)
#define XK_Thai_sarauu 0x0dd9
#define XK_caron 0x01b7
#define NotifyDetailNone 7
#define XK_braille_dots_1567 0x1002871
#define O_SHLOCK 0x0010
#define XK_Arabic_noon 0x05e6
#define IOCGROUP(x) (((x) >> 8) & 0xff)
#define __FLT_MAX_EXP__ 128
#define _UINT16_T_DECLARED 
#define XC_right_tee 98
#define AnyPropertyType 0L
#define TIOCPKT_FLUSHWRITE 0x02
#define XK_dead_capital_schwa 0xfe8b
#define LC_MESSAGES 6
#define CursorY2(screen,row) (((row) * FontHeight(screen)) + screen->border)
#define XK_braille_dots_1578 0x10028d1
#define GXorReverse 0xb
#define true 1
#define XK_Pointer_Right 0xfee1
#define CLOCK_MONOTONIC_PRECISE 11
#define XIMStringConversionBuffer (0x0001)
#define XtCModifyKeyboard "ModifyKeyboard"
#define ILL_PRVREG 6
#define QLength(dpy) (((_XPrivDisplay)dpy)->qlen)
#define _SC_THREAD_PRIORITY_SCHEDULING 89
#define XtNtranslations ((char*)&XtStrings[802])
#define XK_Print 0xff61
#define _SC_TRACE_LOG 100
#define XK_Thai_lekpaet 0x0df8
#define AnyButton 0L
#define XIMTertiary (1L<<7)
#define IOCBASECMD(x) ((x) & ~(IOCPARM_MASK << 16))
#define XK_Obelowdot 0x1001ecc
#define _POSIX_REALTIME_SIGNALS 200112L
#define MAXUPRC CHILD_MAX
#define CCEQ(val,c) ((c) == (val) && (val) != _POSIX_VDISABLE)
#define XtCKeepSelection "KeepSelection"
#define DisplayHeight(dpy,scr) (ScreenOfDisplay(dpy,scr)->height)
#define XtEyes ((char*)&XtStrings[1923])
#define XK_Prior 0xff55
#define XtExposeGraphicsExpose 0x10
#define ANSI_OSC 0x9D
#define XtNscrollPos "scrollPos"
#define XtCvtIntToDimension XtCvtIntToShort
#define Dres(name,class,offset,dftvalue) {RES_NAME(name), RES_CLASS(class), XtRFloat, sizeof(float), RES_OFFSET(offset), XtRString, (XtPointer) dftvalue}
#define __DEC64_MIN__ 1E-383DD
#define ERROR_TIOCKSET 46
#define _MASTERPASSWD "master.passwd"
#define XtIsRectObj(obj) (((Object)(obj))->object.widget_class->core_class.class_inited & 0x02)
#define VEOL2 2
#define _CTYPE_A 0x00000100L
#define _CTYPE_B 0x00020000L
#define _CTYPE_C 0x00000200L
#define _CTYPE_D 0x00000400L
#define _CTYPE_G 0x00000800L
#define _CTYPE_I 0x00080000L
#define XK_braille_dots_13457 0x100285d
#define XK_braille_dots_13458 0x100289d
#define _CTYPE_L 0x00001000L
#define T_ALIGNFLT 14
#define _CTYPE_P 0x00002000L
#define _CTYPE_Q 0x00200000L
#define _CTYPE_R 0x00040000L
#define _CTYPE_S 0x00004000L
#define _CTYPE_T 0x00100000L
#define _CTYPE_U 0x00008000L
#define _CTYPE_X 0x00010000L
#define XK_foursuperior 0x1002074
#define __LDBL_MIN_EXP__ (-16381)
#define VDrawable(screen) VWindow(screen)
#define XtNfullscreen "fullscreen"
#define SM_InteractRequest 5
#define FIONCLEX _IO('f', 2)
#define XNQueryICValuesList "queryICValuesList"
#define XK_ISO_Fast_Cursor_Up 0xfe2e
#define AllocAll 1
#define XK_braille_dots_13467 0x100286d
#define __const const
#define BUS_PAGE_FAULT T_PAGEFLT
#define _POSIX_VDISABLE 0xff
#define Mod1Mask (1<<3)
#define is_idcok(win) ((win)->_idcok)
#define XtNfastScroll "fastScroll"
#define stdout __stdoutp
#define XK_Thai_popla 0x0dbb
#define XK_braille_dots_13478 0x10028cd
#define __SMBF 0x0080
#define NCURSES_BUTTON_PRESSED 002L
#define XK_Arabic_hamza_below 0x1000655
#define XtCTiXtraScroll "TiXtraScroll"
#define XK_ytilde 0x1001ef9
#define XK_Arabic_keheh 0x10006a9
#define SIGUSR2 31
#define TypeXtMallocN(type,n) (type *)(void *)XtMalloc((Cardinal)(sizeof(type) * (size_t) (n)))
#define XtNcutNewline "cutNewline"
#define TypeXtMallocX(type,n) (type *)(void *)XtMalloc((Cardinal)(sizeof(type) + (size_t) (n)))
#define XtCTitleModes "TitleModes"
#define XtNprinterAutoClose "printerAutoClose"
#define XtNsensitive ((char*)&XtStrings[711])
#define KEYBOARD_TYPES NAME_TCAP_KT NAME_HP_KT NAME_SCO_KT NAME_SUN_KT NAME_VT220_KT
#define A_LOW NCURSES_BITS(1UL,19)
#define XK_Greek_BETA 0x07c2
#define WRAPAROUND MiscBIT(0)
#define ScreenCount(dpy) (((_XPrivDisplay)dpy)->nscreens)
#define XtNutf8 "utf8"
#define XK_Wcircumflex 0x1000174
#define LineOnOffDash 1
#define XK_partdifferential 0x1002202
#define GCLineStyle (1L<<5)
#define XK_Hangul_Mieum 0x0eb1
#define XK_Armenian_paruyk 0x100055e
#define XK_Hangul_OE 0x0eca
#define OSIOCGIFCONF _IOWR('i', 20, struct ifconf)
#define XK_Ocaron 0x10001d1
#define XtUnspecifiedShellInt (-1)
#define TIOCOUTQ _IOR('t', 115, int)
#define XK_Greek_lamda 0x07eb
#define SmProcessID "ProcessID"
#define XC_num_glyphs 154
#define EMSGSIZE 40
#define XK_Acircumflextilde 0x1001eaa
#define XK_Arabic_maddaonalef 0x05c2
#define _SC_ATEXIT_MAX 107
#define _tolower(c) __sbtolower(c)
#define B28800 28800
#define XK_ncaron 0x01f2
#define XK_Cyrillic_I 0x06e9
#define _PC_ALLOC_SIZE_MIN 10
#define _LP64 1
#define XtCLimitResize "LimitResize"
#define XK_Hangul_NieunJieuj 0x0ea5
#define _XMU_STRCONVERT_H_ 
#define AsyncPointer 0
#define XK_Hangul 0xff31
#define GrabModeAsync 1
#define CSET_DOUBLE(code) (!CSET_NORMAL(code) && !CSET_EXTEND(code))
#define EFBIG 27
#define XK_Arabic_sukun 0x05f2
#define F_CANCEL 5
#define OPT_CLIP_BOLD 1
#define CWERASE CTRL('W')
#define TIOCEXT _IOW('t', 96, int)
#define ERROR_KMMALLOC1 57
#define ROW2INX(screen,row) ((row) + (screen)->topline)
#define XK_KP_Tab 0xff89
#define fropen(cookie,fn) funopen(cookie, fn, 0, 0, 0)
#define XtNallowHoriz ((char*)&XtStrings[13])
#define XK_Tcedilla 0x01de
#define SmARRAY8 "ARRAY8"
#define CSET_SWL 0
#define VShellWindow(xw) XtWindow(SHELL_OF(xw))
#define TRACE_CALLS 0x0020
#define XtNwidthInc ((char*)&XtShellStrings[627])
#define XK_Arabic_alefmaksura 0x05e9
#define TypeCalloc(type) TypeCallocN(type, 1)
#define TIMER_RELTIME 0x0
#define XtCNumLock "NumLock"
#define XK_Pointer_Accelerate 0xfefa
#define XtNmodifyFunctionKeys "modifyFunctionKeys"
#define XtENorthEast "northeast"
#define KEY_MESSAGE 0555
#define XK_Georgian_man 0x10010db
#define XK_Find 0xff68
#define XK_Romaji 0xff24
#define isSameCol(a,b) ((a)->col == (b)->col)
#define XtCIndex ((char*)&XtStrings[1065])
#define _SC_IOV_MAX 56
#define mvwinsch(win,y,x,c) (wmove(win,y,x) == ERR ? ERR : winsch(win,c))
#define XtEno ((char*)&XtStrings[1912])
#define BUTTON1_RELEASED NCURSES_MOUSE_MASK(1, NCURSES_BUTTON_RELEASED)
#define SIOCGIFDSTADDR _IOWR('i', 34, struct ifreq)
#define XtInheritChangeManaged ((XtWidgetProc) _XtInherit)
#define TypeXtReallocN(t,p,n) (t *)(void *)XtRealloc((char *)(p), (Cardinal)(sizeof(t) * (size_t) (n)))
#define XK_Armenian_TCHE 0x1000543
#define OXTABS TAB3
#define XtNjumpScroll "jumpScroll"
#define XtMapWidget(widget) XMapWindow(XtDisplay(widget), XtWindow(widget))
#define XK_XKB_KEYS 
#define FirstExtensionError 128
#define RFCENVG (1<<11)
#define XK_Iogonek 0x03c7
#define _POSIX_MAPPED_FILES 200112L
#define IsIconWin(screen,win) ((win) == &(screen)->iconVwin)
#define mvwinstr(win,y,x,s) (wmove(win,y,x) == ERR ? ERR : winstr(win,s))
#define NCURSES_VERSION "5.7"
#define SIGXCPU 24
#define XtEon ((char*)&XtStrings[1915])
#define XK_KP_Page_Up 0xff9a
#define O_TRUNC 0x0400
#define BitmapSuccess 0
#define XtCEditType ((char*)&XtStrings[989])
#define __ULLONG_MAX 0xffffffffffffffffULL
#define XK_Greek_IOTAdieresis 0x07a5
#define __CC_SUPPORTS___INLINE__ 1
#define OFF_MAX __OFF_MAX
#define isNotBackground(xw,fg,bg,sel) (Boolean) ((sel) != T_COLOR(TScreenOf(xw), TEXT_BG) && (sel) != (fg) && (sel) != (bg) && (sel) != (xw)->dft_background)
#define XtCAlwaysHighlight "AlwaysHighlight"
#define XK_CURRENCY 
#define Select(n,r,w,e,t) select(n,(fd_set*)r,(fd_set*)w,(fd_set*)e,(struct timeval*)t)
#define XK_Ibreve 0x100012c
#define feof_unlocked(p) __sfeof(p)
#define XtNutf8Latin1 "utf8Latin1"
#define XK_Cyrillic_LJE 0x06b9
#define XtNvisualBell "visualBell"
#define WCOREDUMP(x) (_W_INT(x) & WCOREFLAG)
#define PTYDEV "/dev/ptyxx"
#define XtNresizeGravity "resizeGravity"
#define XtRLongBoolean ((char*)&XtStrings[1730])
#define PAGE_SIZE (1<<PAGE_SHIFT)
#define XK_Hangul_WE 0x0ece
#define XmuShapeEllipse 3
#define _SC_AIO_MAX 43
#define XK_Hangul_WI 0x0ecf
#define SIOCGIFGMEMB _IOWR('i', 138, struct ifgroupreq)
#define XtCResizeGravity "ResizeGravity"
#define ENOTCONN 57
#define XK_Codeinput 0xff37
#define XK_minus 0x002d
#define XtNfontSet ((char*)&XtStrings[2018])
#define XK_Hangul_J_KiyeogSios 0x0ed6
#define VisualIDMask 0x1
#define XtNmultiScroll "multiScroll"
#define MODE_DECKPAM xBIT(1)
#define XK_Hangul_J_KkogjiDalrinIeung 0x0ef9
#define TEK_LINK_BLOCK_SIZE 1024
#define S_IFLNK 0120000
#define XkbBI_TerminalBell 9
#define GCDashOffset (1L<<20)
#define DEFBORDER 2
#define IsUnviewable 1
#define XK_Right 0xff53
#define _SC_CHILD_MAX 2
#define DOUBLEWFONT DrawBIT(2)
#define XtNmetaSendsEscape "metaSendsEscape"
#define _POSIX_MESSAGE_PASSING 200112L
#define VisualRedMaskMask 0x10
#define XtCPointerMode "PointerMode"
#define XK_Last_Virtual_Screen 0xfed4
#define XtHmanageSet ((char*)&XtStrings[2255])
#define FocusOut 10
#define XK_Hangul_YE 0x0ec6
#define XK_Hangul_SsangKiyeog 0x0ea2
#define XK_Hangul_YI 0x0ed2
#define EPFNOSUPPORT 46
#define XK_Hangul_YO 0x0ecb
#define XK_abrevebelowdot 0x1001eb7
#define _NEWINDEX -1
#define XK_Hangul_YU 0x0ed0
#define isalnum(c) __sbistype((c), _CTYPE_A|_CTYPE_D)
#define XK_Ukrainian_IE 0x06b4
#define XtNinnerWindow ((char*)&XtStrings[314])
#define XK_Greek_RHO 0x07d1
#define XK_braille_dots_2456 0x100283a
#define XK_braille_dots_2457 0x100285a
#define XK_braille_dots_2458 0x100289a
#define B16 
#define MOD_META 8
#define _Xmu_Misc_h 
#define XtCAllowC1Printable "AllowC1Printable"
#define XK_Cyrillic_ZHE_descender 0x1000496
#define DoGreen (1<<1)
#define erase() werase(stdscr)
#define XtCHighlightReverse "HighlightReverse"
#define SV_INTERRUPT SA_RESTART
#define XK_hstroke 0x02b1
#define __DEC_EVAL_METHOD__ 2
#define ECONNABORTED 53
#define TTYFORMAT "/dev/ttyp%d"
#define XtCCloneCommand ((char*)&XtShellStrings[905])
#define XK_braille_dots_2467 0x100286a
#define XK_braille_dots_2468 0x10028aa
#define X_PROTOCOL 11
#define _SC_2_PBS_TRACK 64
#define MJUM16BYTES (16 * 1024)
#define _SUBWIN 0x01
#define KEY_ENTER 0527
#define _CRMASK (~(_CACHED_RUNES - 1))
#define _MMAP_DECLARED 
#define XtNborderWidth ((char*)&XtStrings[124])
#define REPORT_MOUSE_POSITION NCURSES_MOUSE_MASK(5, 0010L)
#define MSIZE 256
#define B32 
#define _SC_V6_ILP32_OFFBIG 104
#define XK_braille_dots_2478 0x10028ca
#define USE_TERMINFO 0
#define XtCEightBitControl "EightBitControl"
#define OPEN_MAX 64
#define XtHconfigure ((char*)&XtStrings[2598])
#define XK_braille_dots_3568 0x10028b4
#define XK_etilde 0x1001ebd
#define XK_Acircumflexgrave 0x1001ea6
#define XK_Macedonia_KJE 0x06bc
#define CS5 0x00000000
#define CSET_DWL 3
#define XtCTitle ((char*)&XtShellStrings[362])
#define XK_Greek_switch 0xff7e
#define Fres(name,class,offset,dftvalue) {RES_NAME(name), RES_CLASS(class), XtRFontStruct, sizeof(XFontStruct *), RES_OFFSET(offset), XtRString, (XtPointer) dftvalue}
#define __LDBL_DENORM_MIN__ 3.64519953188247460253e-4951L
#define XtNshowBlinkAsBold "showBlinkAsBold"
#define ACS_LLCORNER NCURSES_ACS('m')
#define touchline(win,s,c) wtouchln((win), s, c, 1)
#define GCLineWidth (1L<<4)
#define ICE_ByteOrder 1
#define XtCBaseHeight ((char*)&XtShellStrings[518])
#define CS8 0x00000300
#define SI_KERNEL 0x10006
#define XK_Omacron 0x03d2
#define XC_question_arrow 92
#define DefaultVisual(dpy,scr) (ScreenOfDisplay(dpy,scr)->root_visual)
#define BRKINT 0x00000002
#define XIMStringConversionLeftEdge (0x00000001)
#define XmuShapeRoundedRectangle 4
#define XK_Armenian_cha 0x1000579
#define _SYS_RESOURCE_H_ 
#define B50 50
#define ACS_BBSS ACS_URCORNER
#define AttrBIT(n) xBIT(n)
#define XUniqueContext() ((XContext) XrmUniqueQuark())
#define XtCFullscreen "Fullscreen"
#define mvinchstr(y,x,s) mvwinchstr(stdscr,y,x,s)
#define SIOCGPRIVATE_1 _IOWR('i', 81, struct ifreq)
#define ACS_SBBS ACS_LRCORNER
#define XK_Eogonek 0x01ca
#define XtCFontSet ((char*)&XtStrings[2034])
#define KEY_REFRESH 0565
#define _XtRect_h 
#define XK_Zcaron 0x01ae
#define DEF_DISALLOWED_WINDOW "20,21,SetXprop,SetSelection"
#define XtNprinterControlMode "printerControlMode"
#define XK_Greek_OMICRON 0x07cf
#define XtNshells ((char*)&XtStrings[2111])
#define HD_COLUMN_MASK 0xff
#define update_font_renderfont() 
#define XK_Armenian_verjaket 0x1000589
#define XtNselection ((char*)&XtStrings[686])
#define EISCONN 56
#define COLOR_RES_CLASS(root) "Color" root
#define XtEwhenMapped "whenMapped"
#define LedModeOn 1
#define scrl(n) wscrl(stdscr,n)
#define XK_Greek_kappa 0x07ea
#define WhichVWin(screen) ((screen)->whichVwin)
#define border(ls,rs,ts,bs,tl,tr,bl,br) wborder(stdscr, ls, rs, ts, bs, tl, tr, bl, br)
#define XK_Arabic_feh 0x05e1
#define XK_Caps_Lock 0xffe5
#define XK_F10 0xffc7
#define XK_F11 0xffc8
#define XK_F13 0xffca
#define XK_F14 0xffcb
#define XK_F15 0xffcc
#define XK_F17 0xffce
#define XK_F19 0xffd0
#define BUTTON2_CLICKED NCURSES_MOUSE_MASK(2, NCURSES_BUTTON_CLICKED)
#define XtCPrintAttributes "PrintAttributes"
#define isCursorUnderline(s) ((s)->cursor_shape == CURSOR_UNDERLINE)
#define SM_Interact 6
#define XK_braille_dots_12345678 0x10028ff
#define RLIMIT_STACK 3
#define _BLKSIZE_T_DECLARED 
#define XtIMTimer 2
#define XK_Eth 0x00d0
#define XK_Arabic_heh_goal 0x10006c1
#define _SC_TRACE_INHERIT 99
#define ANSI_CR 0x0D
#define XK_F20 0xffd1
#define XK_F21 0xffd2
#define XK_F22 0xffd3
#define XK_F23 0xffd4
#define XK_F24 0xffd5
#define XK_F25 0xffd6
#define XK_F26 0xffd7
#define XK_F27 0xffd8
#define XK_F28 0xffd9
#define XK_F29 0xffda
#define EUSERS 68
#define XtNcurrentDirectory ((char*)&XtShellStrings[940])
#define MAXINTERP 32
#define _LOCALE_H_ 
#define XK_fivesubscript 0x1002085
#define UU_LOCK_TRY_ERR (-6)
#define GrabFrozen 4
#define EventMaskOfScreen(s) ((s)->root_input_mask)
#define XK_F30 0xffdb
#define XK_F31 0xffdc
#define XK_F32 0xffdd
#define XK_F33 0xffde
#define XK_F34 0xffdf
#define _CS_POSIX_V6_LP64_OFF64_LIBS 10
#define XtCUtf8Latin1 "Utf8Latin1"
#define XK_ISO_Partial_Space_Left 0xfe25
#define FD_ISSET(n,p) (((p)->__fds_bits[(n)/_NFDBITS] & __fdset_mask(n)) != 0)
#define O_NOFOLLOW 0x0100
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define XK_Hangul_J_Khieuq 0x0eeb
#define POLL_ERR 4
#define XK_BackSpace 0xff08
#define TIOCSETA _IOW('t', 20, struct termios)
#define __GNUCLIKE___TYPEOF 1
#define __RCSID(s) __IDSTRING(__CONCAT(__rcsid_,__LINE__),s)
#define XtCIconic ((char*)&XtShellStrings[436])
#define XK_Gabovedot 0x02d5
#define XK_Greek_KAPPA 0x07ca
#define XtNscrollBar "scrollBar"
#define XK_Armenian_AYB 0x1000531
#define PROTO_XT_ACTIONS_ARGS (Widget w, XEvent *event, String *params, Cardinal *num_params)
#define XK_Thai_thothong 0x0db8
#define KBKeyClickPercent (1L<<0)
#define SIOCGIFPSRCADDR _IOWR('i', 71, struct ifreq)
#define ESTALE 70
#define XK_MouseKeys_Enable 0xfe76
#define ispunct(c) __sbistype((c), _CTYPE_P)
#define ACS_BULLET NCURSES_ACS('~')
#define __FLT_MAX__ 3.40282347e+38F
#define ERROR_VINIT 54
#define KEY_SOPTIONS 0615
#define XK_Hangul_RieulTieut 0x0eae
#define ANSI_FF 0x0C
#define XtCIconWindow ((char*)&XtShellStrings[51])
#define XtVersion (XT_VERSION * 1000 + XT_REVISION)
#define XK_ocircumflexbelowdot 0x1001ed9
#define ControlMapIndex 2
#define SyncKeyboard 4
#define REVERSE_VIDEO MiscBIT(2)
#define ShiftMapIndex 0
#define OPT_DOUBLE_BUFFER 0
#define XtCBoolean ((char*)&XtStrings[920])
#define XK_Hangul_SingleCandidate 0xff3c
#define _IO(g,n) _IOC(IOC_VOID, (g), (n), 0)
#define XK_Sacute 0x01a6
#define S_IWGRP 0000020
#define XtNjoinSession ((char*)&XtShellStrings[1057])
#define LedModeOff 0
#define BUTTON3_CLICKED NCURSES_MOUSE_MASK(3, NCURSES_BUTTON_CLICKED)
#define SA_NOCLDWAIT 0x0020
#define NCURSES_CH_T cchar_t
#define XK_racute 0x01e0
#define XtCIconName ((char*)&XtShellStrings[9])
#define XK_Armenian_ligature_ew 0x1000587
#define SIGTHR 32
#define __SSE2__ 1
#define XtInheritResize ((XtWidgetProc) _XtInherit)
#define __byte_swap_long(x) __byte_swap_long_var(x)
#define TIOCCDTR _IO('t', 120)
#define XK_ecircumflex 0x00ea
#define _SYS_WAIT_H_ 
#define ANSI_HT 0x09
#define _SC_2_FORT_DEV 21
#define UU_LOCK_INUSE (1)
#define DEF_COLOR4 "blue2"
#define XK_Hiragana 0xff25
#define XC_watch 150
#define XtHaugmentTranslations ((char*)&XtStrings[2400])
#define IceLSBfirst 0
#define XtNcurses "curses"
#define digittoint(c) __sbmaskrune((c), 0xFF)
#define Button1 1
#define MSBFirst 1
#define MI2FS(n) (n)
#define DEF_COLOR12 "rgb:5c/5c/ff"
#define COLOR_DEFINED(s,w) ((s)->which & (unsigned) (1<<(w)))
#define XK_Muhenkan 0xff22
#define _X_DEPRECATED __attribute__((deprecated))
#define FASYNC O_ASYNC
#define CWCursor (1L<<14)
#define _USECONDS_T_DECLARED 
#define XK_hebrew_finalzadi 0x0cf5
#define XtCMinHeight ((char*)&XtShellStrings[579])
#define XtENorth "north"
#define DoesBackingStore(s) ((s)->backing_store)
#define FRDAHEAD O_CREAT
#define XC_icon 64
#define XK_Armenian_TYUN 0x100054f
#define XK_CAUCASUS 
#define XtNxmcMoveSGR "xmcMoveSGR"
#define NCURSES_ATTR_SHIFT 8
#define XK_Aogonek 0x01a1
#define XGetPixel(ximage,x,y) ((*((ximage)->f.get_pixel))((ximage), (x), (y)))
#define _SMLIB_H_ 
#define DefaultGCOfScreen(s) ((s)->default_gc)
#define OPT_RENDERFONT 0
#define XK_Ecircumflex 0x00ca
#define KEY_CREATE 0547
#define XK_Tab 0xff09
#define DEFWIDEBOLDFONT NULL
#define XK_Control_R 0xffe4
#define WA_VERTICAL A_VERTICAL
#define XtUnspecifiedPixmap ((Pixmap)2)
#define SIOCSIFDSTADDR _IOW('i', 14, struct ifreq)
#define XtCInitialResourcesPersistent ((char*)&XtStrings[1071])
#define XK_Ukrainian_YI 0x06b7
#define _MACHINE_TRAP_H_ 
#define OSIOCGIFBRDADDR _IOWR('i', 18, struct ifreq)
#define BoldFont(screen) WhichVFont(screen, fnts[fBold].fs)
#define _QUAD_HIGHWORD 1
#define XK_RepeatKeys_Enable 0xfe72
#define XtRImmediate ((char*)&XtStrings[1695])
#define ANSI_LF 0x0A
#define _V6_LP64_OFF64 0
#define set_cur_row(screen,value) screen->cur_row = value
#define _X_LIKELY(x) __builtin_expect(!!(x), 1)
#define XK_hebrew_teth 0x0ce8
#define _POSIX2_C_BIND 200112L
#define va_end(ap) __builtin_va_end(ap)
#define NotifyUngrab 2
#define XCSUCCESS 0
#define crmode() cbreak()
#define IsPrivateKeypadKey(keysym) (((KeySym)(keysym) >= 0x11000000) && ((KeySym)(keysym) <= 0x1100FFFF))
#define XK_Oslash 0x00d8
#define XNGeometryCallback "geometryCallback"
#define TIOCSTAT _IO('t', 101)
#define A_NORMAL (1UL - 1UL)
#define XC_middlebutton 82
#define XK_Ygrave 0x1001ef2
#define TERMIO_STRUCT struct termios
#define XK_dead_belowtilde 0xfe6a
#define XtInputExceptMask (1L<<2)
#define _UINT32_T_DECLARED 
#define XtCPrinterAutoClose "PrinterAutoClose"
#define NOCLEAR_COLM MiscBIT(11)
#define XC_clock 26
#define __CONCAT1(x,y) x ## y
#define XIMHotKeyStateOFF (0x0002L)
#define ESPIPE 29
#define innstr(s,n) winnstr(stdscr,s,n)
#define ECONNREFUSED 61
#define SmCloneCommand "CloneCommand"
#define XtCConnection ((char*)&XtShellStrings[929])
#define XK_apostrophe 0x0027
#define ACS_PI NCURSES_ACS('{')
#define _POSIX2_C_DEV -1
#define XK_Ohook 0x1001ece
#define EAGAIN 35
#define XK_odoubleacute 0x01f5
#define TIMESPEC_TO_TIMEVAL(tv,ts) do { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; } while (0)
#define QueuedAlready 0
#define __DBL_MAX_10_EXP__ 308
#define is_cleared(win) ((win)->_clear)
#define XK_Arabic_hamzaonyeh 0x05c6
#define XK_Hangul_Kiyeog 0x0ea1
#define ACS_HLINE NCURSES_ACS('q')
#define KEY_BREAK 0401
#define NCURSES_CAST(type,value) (type)(value)
#define SM_Die 9
#define is_leaveok(win) ((win)->_leaveok)
#define XtSetArg(arg,n,d) ((void)( (arg).name = (n), (arg).value = (XtArgVal)(d) ))
#define ArcPieSlice 1
#define setterm(term) setupterm(term, 1, (int *)0)
#define XTERM_CELL(row,col) getXtermCell(screen, ROW2INX(screen, row), col)
#define _POSIX_TRACE_LOG -1
#define ACS_GEQUAL NCURSES_ACS('z')
#define XK_Thai_thothung 0x0db6
#define None 0L
#define Wres(name,class,offset,dftvalue) {RES_NAME(name), RES_CLASS(class), XtRWidget, sizeof(Widget), RES_OFFSET(offset), XtRWidget, (XtPointer) dftvalue}
#define CP_NICE 1
#define XtCTekStartup "TekStartup"
#define ANSI_PM 0x9E
#define TTYDEF_SPEED (B9600)
#define ANSI_APC 0x9F
#define XtNforceBars ((char*)&XtStrings[204])
#define XK_grave 0x0060
#define Mod5MapIndex 7
#define _SC_THREADS 96
#define _PATH_SMP_DB "/etc/spwd.db"
#define XtCModifyFunctionKeys "ModifyFunctionKeys"
#define FD_CLR(n,p) ((p)->__fds_bits[(n)/_NFDBITS] &= ~__fdset_mask(n))
#define XK_Acircumflex 0x00c2
#define SIG_IGN ((__sighandler_t *)1)
#define XtNinsertPosition ((char*)&XtStrings[326])
#define XK_ecaron 0x01ec
#define VSTART 12
#define timersub(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec - (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec - (uvp)->tv_usec; if ((vvp)->tv_usec < 0) { (vvp)->tv_sec--; (vvp)->tv_usec += 1000000; } } while (0)
#define ACS_SBSB ACS_VLINE
#define ENFILE 23
#define XtIMAll (XtIMXEvent | XtIMTimer | XtIMAlternateInput | XtIMSignal)
#define RFFDG (1<<2)
#define ACS_S1 NCURSES_ACS('o')
#define XtNsaveCompleteCallback ((char*)&XtShellStrings[1202])
#define ACS_SBSS ACS_RTEE
#define ACS_S7 NCURSES_ACS('r')
#define XC_leftbutton 74
#define ACS_S9 NCURSES_ACS('s')
#define XK_Arabic_thal 0x05d0
#define KEY_LEFT 0404
#define XK_dead_abovereversedcomma 0xfe65
#define EEXIST 17
#define XK_Hangul_RieulPhieuf 0x0eaf
#define standend() wstandend(stdscr)
#define TRACE_OPTS(opts,ress,lens) 
#define XK_dead_macron 0xfe54
#define E2A(a) (a)
#define XtCBoldMode "BoldMode"
#define XK_Ohorn 0x10001a0
#define XNVisiblePosition "visiblePosition"
#define SIOCGIFCONF _IOWR('i', 36, struct ifconf)
#define _PWD_H_ 
#define XC_X_cursor 0
#define OPT_HP_FUNC_KEYS 0
#define XtNuseClipping "useClipping"
#define FullWidth(screen) WhichVWin(screen)->fullwidth
#define __GNUCLIKE_MATH_BUILTIN_RELOPS 
#define errno (* __error())
#define _XtKeyCode KeyCode
#define XtNcloneCommand ((char*)&XtShellStrings[892])
#define EPROGMISMATCH 75
#define XK_plusminus 0x00b1
#define XIMHighlight (1L<<2)
#define _STDSTREAM_DECLARED 
#define XK_ibreve 0x100012d
#define XK_KP_Decimal 0xffae
#define ANSI_SI 0x0F
#define XtNmkWidth "mkWidth"
#define XK_dead_invertedbreve 0xfe6d
#define SIOCSIFPHYADDR _IOW('i', 70, struct ifaliasreq)
#define ANSI_ST 0x9C
#define XtNshiftFonts "shiftFonts"
#define _VA_LIST_DECLARED 
#define XK_Thai_maichattawa 0x0deb
#define GXand 0x1
#define DEFFACENAME NULL
#define ANSI_BS 0x08
#define _SC_2_PBS_CHECKPOINT 61
#define XK_foursubscript 0x1002084
#define XTTYMODE_susp 10
#define XK_Greek_accentdieresis 0x07ae
#define XIMPreeditDisable (1L<<1)
#define OPTIMIZE_HASHMAP 0x02
#define winstr(w,s) winnstr(w, s, -1)
#define XtCacheRefCount 0x100
#define __XSI_VISIBLE 700
#define XK_dead_hook 0xfe61
#define FIONREAD _IOR('f', 127, int)
#define SelectionNotify 31
#define DFT_KBD_DIALECT "B"
#define XtCIconHint "IconHint"
#define XtNlocale "locale"
#define XK_Cyrillic_softsign 0x06d8
#define XK_ISO_Left_Tab 0xfe20
#define XK_Arabic_theh 0x05cb
#define XNResetState "resetState"
#define XK_Cyrillic_CHE_vertstroke 0x10004b8
#define ACS_LANTERN NCURSES_ACS('i')
#define KEY_MOUSE 0631
#define RFNOTEG (1<<3)
#define ANSI_VT 0x0B
#define __DEC128_MANT_DIG__ 34
#define __UQUAD_MAX __ULONG_MAX
#define XK_fabovedot 0x1001e1f
#define XK_uhorntilde 0x1001eef
#define S_IREAD S_IRUSR
#define XTTYMODE_lnext 15
#define XC_right_side 96
#define XK_Zstroke 0x10001b5
#define _SC_SPAWN 79
#define XK_F16 0xffcd
#define BUTTON2_RESERVED_EVENT NCURSES_MOUSE_MASK(2, NCURSES_RESERVED_EVENT)
#define XK_Hangul_J_Cieuc 0x0eea
#define DRAWX_MASK (ATTRIBUTES | CHARDRAWN)
#define XK_tcedilla 0x01fe
#define NOBACKGROUND DrawBIT(0)
#define XtRTranslationTable ((char*)&XtStrings[1841])
#define XK_dead_horn 0xfe62
#define SIG_SETMASK 3
#define XK_Henkan_Mode 0xff23
#define PseudoColor 3
#define XK_F18 0xffcf
#define XtRBool ((char*)&XtStrings[1556])
#define XtNmodifyOtherKeys "modifyOtherKeys"
#define XtCModifyStringKeys "ModifyStringKeys"
#define XK_Armenian_HI 0x1000545
#define btoc(x) (((vm_offset_t)(x)+PAGE_MASK)>>PAGE_SHIFT)
#define StippleShape 2
#define MinCmapsOfScreen(s) ((s)->min_maps)
#define XAddPixel(ximage,value) ((*((ximage)->f.add_pixel))((ximage), (value)))
#define XK_Greek_tau 0x07f4
#define ACS_BLOCK NCURSES_ACS('0')
#define XK_Ocircumflextilde 0x1001ed6
#define isgraph(c) __sbistype((c), _CTYPE_G)
#define OPT_DEC_CHRSET 1
#define SmsRegisterClientProcMask (1L << 0)
#define _SIGNAL_H_ 
#define XK_Udiaeresis 0x00dc
#define timeout(delay) wtimeout(stdscr,delay)
#define XtCShowBlinkAsBold "ShowBlinkAsBold"
#define KeymapNotify 11
#define XC_mouse 84
#define IceNoVersion 2
#define MACHINE_ARCH "amd64"
#define XtCCallback ((char*)&XtStrings[952])
#define SIOCSPGRP _IOW('s', 8, int)
#define _V6_LPBIG_OFFBIG -1
#define PropertyDelete 1
#define KEY_CLOSE 0544
#define _SIG_MAXSIG 128
#define SET_COLOR_NAME(s,w,v) (((s)->names[w] = (v)), ((s)->which |= (unsigned) (1<<(w))))
#define XK_less 0x003c
#define MotionOff(s,t) if (!(screen->hide_pointer)) { (s)->event_mask |= ButtonMotionMask; (s)->event_mask &= ~PointerMotionMask; XSelectInput(XtDisplay((t)), XtWindow((t)), (long) (s)->event_mask); }
#define XtNresignCommand ((char*)&XtShellStrings[1105])
#define XK_ssharp 0x00df
#define __GNUC_GNU_INLINE__ 1
#define AutoRepeatModeOn 1
#define XK_hebrew_finalzade 0x0cf5
#define XK_Macedonia_DSE 0x06b5
#define DEFFACESIZE "14.0"
#define ScrnIsRowInMargins(screen,line) ((line) >= (screen)->top_marg && (line) <= (screen)->bot_marg)
#define XtNurgency ((char*)&XtShellStrings[861])
#define _SYS__TIMEVAL_H_ 
#define IconPositionHint (1L << 4)
#define XK_Delete 0xffff
#define XK_Cyrillic_SOFTSIGN 0x06f8
#define XK_Arabic_rreh 0x1000691
#define XK_Ukrainian_ie 0x06a4
#define XtNchildren ((char*)&XtStrings[145])
#define XK_Cyrillic_zhe 0x06d6
#define ECHOKE 0x00000001
#define XtIMAlternateInput 4
#define XK_Thai_lochula 0x0dcc
#define XtCHeightInc ((char*)&XtShellStrings[655])
#define LockMapIndex 1
#define XK_Arabic_tatweel 0x05e0
#define SmInteractStyleNone 0
#define XK_Hangul_Jamo 0xff35
#define EOPNOTSUPP 45
#define KSTACK_PAGES 4
#define XK_braille_dots_12678 0x10028e3
#define __P(protos) protos
#define XK_Egrave 0x00c8
#define XK_braille_dots_1237 0x1002847
#define MiscBIT(n) xBIT(n + 16)
#define XtCModifyKeypadKeys "ModifyKeypadKeys"
#define ENVP_ARG 
#define ACS_DIAMOND NCURSES_ACS('`')
#define XK_Ukrainian_GHE_WITH_UPTURN 0x06bd
#define XtHremoveCallbacks ((char*)&XtStrings[2361])
#define BSD 199506
#define XK_braille_dots_23568 0x10028b6
#define attroff(at) wattroff(stdscr,at)
#define A_TOP NCURSES_BITS(1UL,21)
#define _PATH_MASTERPASSWD "/etc/master.passwd"
#define XtRColor ((char*)&XtStrings[1596])
#define update_logging() 
#define MAX_EWMH_MODE 3
#define rindex(s,c) (strrchr((s),(c)))
#define XK_abovedot 0x01ff
#define __gnu89_inline __attribute__((__gnu_inline__)) __inline
#define OPT_SCROLL_LOCK 1
#define ECHONL 0x00000010
#define XK_braille_dots_23578 0x10028d6
#define __GNUCLIKE_BUILTIN_NEXT_ARG 1
#define __STDC__ 1
#define GCC_NORETURN 
#define SmResignCommand "ResignCommand"
#define S_ISCHR(m) (((m) & 0170000) == 0020000)
#define XK_Thai_sosala 0x0dc8
#define XC_draft_small 46
#define SF_SNAPSHOT 0x00200000
#define XC_ll_angle 76
#define _SC_XOPEN_UNIX 115
#define si_timerid _reason._timer._timerid
#define CursorMoved(screen) ((screen)->cursor_moved || ((screen)->cursorp.col != (screen)->cur_col || (screen)->cursorp.row != (screen)->cur_row))
#define XK_backslash 0x005c
#define B9600 9600
#define XK_scircumflex 0x02fe
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS 7
#define XK_Hangul_Jeonja 0xff38
#define XK_LiraSign 0x10020a4
#define X_PROTOCOL_REVISION 0
#define ANSI_XOFF 0x13
#define XtCWindowGroup ((char*)&XtShellStrings[92])
#define _QUAD_LOWWORD 0
#define _PC_VDISABLE 9
#define O_NOCTTY 0x8000
#define FPE_INTDIV_TRAP 0x2
#define BadWindow 3
#define NCURSES_EXPORT(type) NCURSES_IMPEXP type NCURSES_API
#define NOFILE OPEN_MAX
#define _POSIX_SHARED_MEMORY_OBJECTS 200112L
#define GXandReverse 0x2
#define __unused __attribute__((__unused__))
#define FIONBIO _IOW('f', 126, int)
#define XtCIconNameEncoding ((char*)&XtShellStrings[263])
#define XtInheritAcceptFocus ((XtAcceptFocusProc) _XtInherit)
#define XkbBI_Info 0
#define XK_Hangul_RieulSios 0x0ead
#define __used __attribute__((__used__))
#define StateHint (1L << 1)
#define XtCRetryInputMethod "RetryInputMethod"
#define __FLT_MIN__ 1.17549435e-38F
#define XK_braille_dots_1678 0x10028e1
#define XtNaltSendsEscape "altSendsEscape"
#define MODE_SRM xBIT(3)
#define F_OGETLK 7
#define XK_acircumflextilde 0x1001eab
#define XC_dotbox 40
#define DEF_DISALLOWED_TCAP "SetTcap,GetTcap"
#define HANDLE_STRUCT_NOTIFY 1
#define _SC_TIMEOUTS 95
#define _SIG_WORD(sig) (_SIG_IDX(sig) >> 5)
#define ILL_FPOP_FAULT T_FPOPFLT
#define BottomIf 3
#define __WORD_BIT 32
#define ACS_S3 NCURSES_ACS('p')
#define XK_tintegral 0x100222D
#define XC_pencil 86
#define XtERectangle "Rectangle"
#define BumpTypedBuffer(type,want) BumpBuffer(type, BfBuf(type), BfLen(type), want)
#define XtCFraction ((char*)&XtStrings[1033])
#define XTTYMODE_brk 9
#define XtHunmapWidget ((char*)&XtStrings[2546])
#define __k8 1
#define FS2MI(n) (n)
#define NCURSES_BUTTON_RELEASED 001L
#define _POSIX_THREAD_SAFE_FUNCTIONS -1
#define XK_ohorngrave 0x1001edd
#define _SC_LINE_MAX 15
#define NCURSES_EXPORT_VAR(type) NCURSES_IMPEXP type
#define sigev_notify_kqueue sigev_signo
#define XK_Arabic_fathatan 0x05eb
#define XtCTextOptions ((char*)&XtStrings[1423])
#define _POSIX_PRIORITIZED_IO -1
#define XK_dead_breve 0xfe55
#define XK_Thai_loling 0x0dc5
#define _PASSWD "passwd"
#define bzero(b,len) memset(b,0,len)
#define SLIPDISC 4
#define XK_Ocircumflexgrave 0x1001ed2
#define YXSorted 2
#define XK_ocircumflexgrave 0x1001ed3
#define VDSUSP 11
#define TIOCM_CAR TIOCM_DCD
#define MapToColorMode(fg,screen,flags) (((screen)->colorBLMode && ((flags) & BLINK)) ? COLOR_BL : (((screen)->colorBDMode && ((flags) & BOLD)) ? COLOR_BD : (((screen)->colorULMode && ((flags) & UNDERLINE)) ? COLOR_UL : fg)))
#define XK_Thai_thothan 0x0db0
#define O_ACCMODE 0x0003
#define XtNdieCallback ((char*)&XtShellStrings[974])
#define AllocNone 0
#define XK_braille_dots_23468 0x10028ae
#define XK_ihook 0x1001ec9
#define TIOCEXCL _IO('t', 13)
#define XK_braille_dots_678 0x10028e0
#define SM_SaveYourselfPhase2Request 16
#define TRUE 1
#define REQ_RESIZE(w,reqwide,reqhigh,gotwide,gothigh) XtMakeResizeRequest((Widget) (w), (Dimension) (reqwide), (Dimension) (reqhigh), (gotwide), (gothigh))
#define SIG_HOLD ((__sighandler_t *)3)
#define TIOCPKT_IOCTL 0x40
#define XK_iacute 0x00ed
#define ru_last ru_nivcsw
#define makedev(x,y) ((dev_t)(((x) << 8) | (y)))
#define FIOGETOWN _IOR('f', 123, int)
#define __predict_false(exp) __builtin_expect((exp), 0)
#define mvaddchstr(y,x,str) mvwaddchstr(stdscr,y,x,str)
#define isSameRow(a,b) ((a)->row == (b)->row)
#define isprint(c) __sbistype((c), _CTYPE_R)
#define COLOR_RES_NAME(root) "color" root
#define XK_Hangul_PostHanja 0xff3b
#define _STDDEF_H_ 
#define XK_Zen_Koho 0xff3d
#define EQL_COLOR_RES(res,color) (res)->value == color
#define SIOCGIFADDR _IOWR('i', 33, struct ifreq)
#define NCURSES_INLINE inline
#define _POSIX_CLOCK_SELECTION -1
#define _POSIX_TYPED_MEMORY_OBJECTS -1
#define LeaveWindowMask (1L<<5)
#define XC_left_tee 72
#define _SC_TYPED_MEMORY_OBJECTS 102
#define XK_braille_dots_134567 0x100287d
#define XK_braille_dots_134568 0x10028bd
#define XK_Ocircumflex 0x00d4
#define ENOMSG 83
#define XtNcursorOffTime "cursorOffTime"
#define XtCPixmap ((char*)&XtStrings[1228])
#define XtCMkWidth "MkWidth"
#define XtCCursorOffTime "CursorOffTime"
#define _SC_2_C_DEV 19
#define XTTYMODE_erase2 17
#define mvvline(y,x,c,n) mvwvline(stdscr,y,x,c,n)
#define OSIOCGIFADDR _IOWR('i', 13, struct ifreq)
#define getbegx(win) ((win) ? (win)->_begx : ERR)
#define XK_braille_dots_134578 0x10028dd
#define XNDefaultString "defaultString"
#define setsyx(y,x) do { if (newscr) { if ((y) == -1 && (x) == -1) leaveok(newscr, TRUE); else { leaveok(newscr, FALSE); wmove(newscr, (y), (x)); } } } while(0)
#define GCFillStyle (1L<<8)
#define _SYS_UNISTD_H_ 
#define XK_dead_circumflex 0xfe52
#define XK_hebrew_kuf 0x0cf7
#define XStringToContext(string) ((XContext) XrmStringToQuark(string))
#define XtIsComposite(obj) (((Object)(obj))->object.widget_class->core_class.class_inited & 0x08)
#define CLD_TRAPPED 4
#define MQ_PRIO_MAX 64
#define BUTTON3_RESERVED_EVENT NCURSES_MOUSE_MASK(3, NCURSES_RESERVED_EVENT)
#define LC_ALL 0
#define MULTICLICKTIME 250
#define XC_umbrella 146
#define __format_arg(fmtarg) __attribute__((__format_arg__ (fmtarg)))
#define Maybe 2
#define EILSEQ 86
#define XK_Arabic_hamza 0x05c1
#define BUTTON3_PRESSED NCURSES_MOUSE_MASK(3, NCURSES_BUTTON_PRESSED)
#define DEFXIMFONT "fixed"
#define PDRMASK (NBPDR-1)
#define SmInteractStyleErrors 1
#define XK_notapproxeq 0x1002247
#define BadAtom 5
#define __PTRDIFF_TYPE__ long int
#define A_RIGHT NCURSES_BITS(1UL,20)
#define B1200 1200
#define XK_Armenian_ken 0x100056f
#define COLOR_GREEN 2
#define XC_crosshair 34
#define IOCPARM_SHIFT 13
#define XK_Ukrainian_yi 0x06a7
#define XIMSecondary (1L<<6)
#define XtNnumChildren ((char*)&XtStrings[493])
#define iscntrl(c) __sbistype((c), _CTYPE_C)
#define XK_VIETNAMESE 
#define XtNutf8Fonts "utf8Fonts"
#define saveterm() def_prog_mode()
#define XtNdepth ((char*)&XtStrings[163])
#define __WCHAR_MAX__ 2147483647
#define _SC_TTY_NAME_MAX 101
#define FIOASYNC _IOW('f', 125, int)
#define _WRAPPED 0x40
#define touchwin(win) wtouchln((win), 0, getmaxy(win), 1)
#define RLIMIT_AS RLIMIT_VMEM
#define T_BPTFLT 3
#define TRACE_FOCUS(w,e) 
#define MOD_SHIFT 1
#define __ULONG_MAX 0xffffffffffffffffUL
#define XtCXmcInline "XmcInline"
#define WIFEXITED(x) (_WSTATUS(x) == 0)
#define _LIBUTIL_H_ 
#define _V6_ILP32_OFF32 -1
#define XK_braille_dot_1 0xfff1
#define XK_braille_dot_2 0xfff2
#define XK_braille_dot_3 0xfff3
#define XK_braille_dot_4 0xfff4
#define XK_braille_dot_5 0xfff5
#define XK_braille_dot_6 0xfff6
#define XK_braille_dot_8 0xfff8
#define XK_braille_dot_9 0xfff9
#define OPT_DEC_SOFTFONT 0
#define OPT_COLOR_RES2 0
#define XK_ISO_Center_Object 0xfe33
#define TRACE_RC(code,func) func
#define XrmStringToRepresentation(string) XrmStringToQuark(string)
#define XK_Armenian_apostrophe 0x100055a
#define XK_braille_dots_1245 0x100281b
#define XK_Armenian_khe 0x100056d
#define XK_PesetaSign 0x10020a7
#define _LITTLE_ENDIAN 1234
#define XUrgencyHint (1L << 8)
#define _IOFBF 0
#define XK_Thai_dodek 0x0db4
#define _OFF_T_DECLARED 
#define XK_Thai_maitho 0x0de9
#define XtNwaitforwm ((char*)&XtShellStrings[793])
#define __FLT_EVAL_METHOD__ 0
#define _SC_NPROCESSORS_CONF 57
#define S_ISDIR(m) (((m) & 0170000) == 0040000)
#define putc_unlocked(x,fp) __sputc(x, fp)
#define EPROGUNAVAIL 74
#define THeight(screen) WhichTWin(screen)->height
#define slk_attr_off(a,v) ((v) ? ERR : slk_attroff(a))
#define HostInsert 0
#define is_immedok(win) ((win)->_immed)
#define XK_containsas 0x100220B
#define MB_CUR_MAX __mb_cur_max
#define _SC_XOPEN_STREAMS 114
#define ARG_MAX 262144
#define XK_braille_dots_13568 0x10028b5
#define _SC_NPROCESSORS_ONLN 58
#define XK_Cyrillic_TSE 0x06e3
#define COLOR_2 2
#define SSIZE_MAX __SSIZE_MAX
#define XK_Armenian_GIM 0x1000533
#define LineClrFlag(ld,flag) SetLineFlags(ld, (GetLineFlags(ld) & ~ (flag)))
#define XK_yen 0x00a5
#define X_H 
#define XtParent(widget) ((widget)->core.parent)
#define VisualBitsPerRGBMask 0x100
#define COLOR_5 5
#define XK_braille_dots_13578 0x10028d5
#define XtCUrgency ((char*)&XtShellStrings[869])
#define T_ARITHTRAP 6
#define OPT_MOD_FKEYS 1
#define LINK_MAX 32767
#define WA_ATTRIBUTES A_ATTRIBUTES
#define XtCAltSendsEscape "AltSendsEscape"
#define FNONBLOCK O_NONBLOCK
#define XK_braille_dots_1468 0x10028a9
#define KEY_REDO 0563
#define _SC_2_CHAR_TERM 20
#define XtNaltIsNotMeta "altIsNotMeta"
#define XK_onequarter 0x00bc
#define S_ISTXT 0001000
#define XK_Armenian_E 0x1000537
#define XtNfunction ((char*)&XtStrings[225])
#define XK_Armenian_O 0x1000555
#define XtCJustify ((char*)&XtStrings[1122])
#define XtCModifyOtherKeys "ModifyOtherKeys"
#define TCIOFLUSH 3
#define XK_asterisk 0x002a
#define XK_Armenian_e 0x1000567
#define XtCSignalInhibit "SignalInhibit"
#define XtNwideChars "wideChars"
#define DST_NONE 0
#define XK_Thai_paiyannoi 0x0dcf
#define HAVE_POSIX_SAVED_IDS 
#define XK_ordfeminine 0x00aa
#define OPT_BLINK_TEXT OPT_BLINK_CURS
#define CastMalloc(type) CastMallocN(type,0)
#define XK_nobreakspace 0x00a0
#define ENOSYS 78
#define XC_star 126
#define OPT_SAME_NAME 1
#define AllowExposures 1
#define DontCareState 0
#define POLL_MSG 3
#define XtNquietGrab "quietGrab"
#define XK_braille_dot_10 0xfffa
#define __CC_SUPPORTS_VARADIC_XXX 1
#define XtCEventBindings ((char*)&XtStrings[998])
#define _CTYPE_H_ 
#define __FINITE_MATH_ONLY__ 0
#define si_overrun _reason._timer._overrun
#define Button5MotionMask (1L<<12)
#define LSBFirst 0
#define XK_dead_doublegrave 0xfe66
#define XK_Pointer_DblClick_Dflt 0xfeee
#define AllowColorOps(w,name) (AllowXtermOps(w, allowColorOps) || !TScreenOf(w)->disallow_color_ops[name])
#define KEY_BEG 0542
#define OPT_LUIT_PROG 0
#define PropertyNewValue 0
#define XtNnotify ((char*)&XtStrings[486])
#define XK_Hangul_SunkyeongeumMieum 0x0ef0
#define XK_Greek_NU 0x07cd
#define XtCHighlightTextColor "HighlightTextColor"
#define EBADF 9
#define XtNgeometry ((char*)&XtShellStrings[469])
#define mvinchnstr(y,x,s,n) mvwinchnstr(stdscr,y,x,s,n)
#define _SC_SHARED_MEMORY_OBJECTS 39
#define XK_Pointer_Button_Dflt 0xfee8
#define atop(x) ((unsigned long)(x) >> PAGE_SHIFT)
#define XtNeightBitInput "eightBitInput"
#define XK_ograve 0x00f2
#define ERANGE 34
#define XtCEightBitInput "EightBitInput"
#define FPARSELN_UNESCREST 0x08
#define CLK_TCK 128
#define ECANCELED 85
#define GXandInverted 0x4
#define XtNalwaysBoldMode "alwaysBoldMode"
#define COLOR_BLACK 0
#define SIGFPE 8
#define XK_ubreve 0x02fd
#define XK_Georgian_nar 0x10010dc
#define XC_top_side 138
#define __SCHAR_MAX__ 127
#define RFNOWAIT (1<<6)
#define B115200 115200
#define IceUnknownProtocol 8
#define FPE_FLTUND_TRAP 0x5
#define XK_Thai_maitri 0x0dea
#define XtNscrollLines "scrollLines"
#define T_USER 0x100
#define XPutPixel(ximage,x,y,pixel) ((*((ximage)->f.put_pixel))((ximage), (x), (y), (pixel)))
#define _POSIX_SPIN_LOCKS 200112L
#define XIMStringConversionRightEdge (0x00000002)
#define XK_Cyrillic_U_straight 0x10004ae
#define AlreadyGrabbed 1
#define __DEC64_MAX_EXP__ 384
#define LC_CTYPE 2
#define sv_onstack sv_flags
#define XtHpopup ((char*)&XtStrings[2560])
#define ETXTBSY 26
#define XK_emptyset 0x1002205
#define XTTYMODE_swtch 6
#define _XLIB_H_ 
#define _LONGLONG 1
#define XK_KATAKANA 
#define XK_dintegral 0x100222C
#define TCOFLUSH 2
#define XK_braille_dots_124567 0x100287b
#define XK_braille_dots_124568 0x10028bb
#define mvinnstr(y,x,s,n) mvwinnstr(stdscr,y,x,s,n)
#define _XPOLL_H_ 
#define MIT_CONSOLE "MIT_CONSOLE_"
#define XtHunrealizeWidget ((char*)&XtStrings[2297])
#define NSIG 32
#define PropertyNotify 28
#define NormalFont(screen) WhichVFont(screen, fnts[fNorm].fs)
#define MIT_CONSOLE_LEN 12
#define XK_braille_dots_124578 0x10028db
#define XK_ahook 0x1001ea3
#define LastExtensionError 255
#define SIOCAIFADDR _IOW('i', 26, struct ifaliasreq)
#define __restrict 
#define XtNvisual ((char*)&XtShellStrings[104])
#define _SC_BC_SCALE_MAX 11
#define XK_Greek_EPSILONaccent 0x07a2
#define XTTYMODE_dsusp 11
#define __SHRT_MAX__ 32767
#define BLINK AttrBIT(3)
#define __LDBL_MAX__ 1.18973149535723176502e+4932L
#define ILL_ILLOPC 1
#define SmProgram "Program"
#define PRIO_PGRP 1
#define XK_dead_cedilla 0xfe5b
#define ILL_ILLOPN 2
#define KEY_COMMAND 0545
#define XK_braille_dot_7 0xfff7
#define OPT_INITIAL_ERASE 1
#define KeyPressMask (1L<<0)
#define included_xterm_h 
#define XtOffset(p_type,field) ((Cardinal) (((char *) (&(((p_type)NULL)->field))) - ((char *) NULL)))
#define XtNargc ((char*)&XtShellStrings[373])
#define XtNuseBottom ((char*)&XtStrings[840])
#define IceSetupFailed 3
#define SIGTTOU 22
#define XK_Hangul_YAE 0x0ec2
#define XtNprogramPath ((char*)&XtShellStrings[1081])
#define XtNargv ((char*)&XtShellStrings[383])
#define __GNUCLIKE_BUILTIN_VARARGS 1
#define XK_ISO_Release_Both_Margins 0xfe2b
#define XK_AE 0x00c6
#define GCForeground (1L<<2)
#define XBufferOverflow -1
#define XK_KP_Equal 0xffbd
#define RUSAGE_CHILDREN -1
#define _XtBoolean Boolean
#define sigmask(m) (1 << ((m)-1))
#define __SHRT_MAX 0x7fff
#define XK_braille_dots_2345678 0x10028fe
#define XtCurrentDirectory "XtCurrentDirectory"
#define XtNlowerRight ((char*)&XtStrings[442])
#define NOGROUP 65535
#define S_IFWHT 0160000
#define XtNname ((char*)&XtStrings[481])
#define XIMPreserveState (1L<<1)
#define _POSIX_VERSION 200112L
#define XK_Greek_beta 0x07e2
#define __UCHAR_MAX 0xffU
#define XK_braille_dots_2567 0x1002872
#define XK_braille_dots_2568 0x10028b2
#define KEY_HOME 0406
#define _SC_THREAD_STACK_MIN 93
#define XK_gcaron 0x10001e7
#define PropertyChangeMask (1L<<22)
#define _SC_V6_LP64_OFF64 105
#define _SC_JOB_CONTROL 6
#define XK_Thai_topatak 0x0daf
#define XK_kana_RU 0x04d9
#define XK_braille_dots_2578 0x10028d2
#define FPE_FLTRES 6
#define EINPROGRESS 36
#define XK_EuroSign 0x20ac
#define _tracech_t2 _tracechtype2
#define _SC_SEM_VALUE_MAX 50
#define XT_VERSION 11
#define _PC_ASYNC_IO 53
#define XK_Armenian_exclam 0x100055c
#define XK_Greek_LAMDA 0x07cb
#define XK_Hangul_YEO 0x0ec5
#define __DEC32_EPSILON__ 1E-6DF
#define XtRCallback ((char*)&XtStrings[1569])
#define XtNlabel ((char*)&XtStrings[429])
#define TypeXtMalloc(type) TypeXtMallocN(type, 1)
#define _XFUNCS_H_INCLUDED_STRING_H 
#define putchar(x) putc(x, stdout)
#define XK_Ooblique 0x00d8
#define XK_F1 0xffbe
#define XK_F2 0xffbf
#define XK_F3 0xffc0
#define XK_F4 0xffc1
#define XK_F5 0xffc2
#define XK_F6 0xffc3
#define XK_F7 0xffc4
#define XK_F8 0xffc5
#define XK_F9 0xffc6
#define PPosition (1L << 2)
#define XK_colon 0x003a
#define XK_braille_dots_3456 0x100283c
#define wattr_set(win,a,p,opts) ((win)->_attrs = (((a) & ~A_COLOR) | COLOR_PAIR(p)), OK)
#define _SC_MAPPED_FILES 29
#define _POSIX_READER_WRITER_LOCKS 200112L
#define XK_Thai_thonangmontho 0x0db1
#define XK_Fn(n) (XK_F1 + (n) - 1)
#define XtNxmcAttributes "xmcAttributes"
#define WestGravity 4
#define XK_Fabovedot 0x1001e1e
#define getc(fp) (!__isthreaded ? __sgetc(fp) : (getc)(fp))
#define init_Tres(offset) fill_Tres(wnew, request, offset)
#define FLUSHO 0x00800000
#define XK_Hyper_L 0xffed
#define XK_Hyper_R 0xffee
#define XK_Super_L 0xffeb
#define XK_Super_R 0xffec
#define FD_SETSIZE 1024U
#define __LDBL_MAX_EXP__ 16384
#define TIMEVAL_TO_TIMESPEC(tv,ts) do { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; } while (0)
#define setscrreg(t,b) wsetscrreg(stdscr,t,b)
#define XK_mabovedot 0x1001e41
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define clrtobot() wclrtobot(stdscr)
#define ICANON 0x00000100
#define IceAuthRejected 4
#define XNSeparatorofNestedList "separatorofNestedList"
#define KEY_SELECT 0601
#define XK_ebelowdot 0x1001eb9
#define XK_Hangul_J_NieunJieuj 0x0ed8
#define XK_Aacute 0x00c1
#define XK_kana_SHI 0x04bc
#define ENOTBLK 15
#define NCURSES_MOUSE_VERSION 1
#define GrabInvalidTime 2
#define XtNpopdownCallback ((char*)&XtStrings[548])
#define ttyFlush(fd) tcflush(fd, TCOFLUSH)
#define DestroyNotify 17
#define _RLIM_T_DECLARED 
#define FRG_SIZE resource.minBufSize
#define VAL_INITIAL_ERASE A2E(8)
#define EPROTOTYPE 41
#define inchstr(s) winchstr(stdscr,s)
#define _SC_SHELL 78
#define XK_Armenian_tche 0x1000573
#define __pure2 __attribute__((__const__))
#define XtCAlwaysBoldMode "AlwaysBoldMode"
#define winchstr(w,s) winchnstr(w, s, -1)
#define __SHRT_MIN (-0x7fff - 1)
#define PAIR_NUMBER(a) (NCURSES_CAST(int,(((a) & A_COLOR) >> NCURSES_ATTR_SHIFT)))
#define XtNcolorBDMode "colorBDMode"
#define ALIGN(p) _ALIGN(p)
#define XK_abreve 0x01e3
#define SmInteractStyleAny 2
#define ANSI_SO 0x0E
#define XK_Armenian_VEV 0x100054e
#define NCARGS ARG_MAX
#define WA_ALTCHARSET A_ALTCHARSET
#define VSTOP 13
#define ERPCMISMATCH 73
#define ANSI_BEL 0x07
#define _SYS_PARAM_H_ 
#define XK_L1 0xffc8
#define XK_L2 0xffc9
#define XK_L3 0xffca
#define XK_L4 0xffcb
#define XK_L5 0xffcc
#define XK_L6 0xffcd
#define XK_L7 0xffce
#define XK_L8 0xffcf
#define XK_L9 0xffd0
#define EALREADY 37
#define PBDRY 0x400
#define IOC_INOUT (IOC_IN|IOC_OUT)
#define XK_braceright 0x007d
#define TCSASOFT 0x10
#define PARMRK 0x00000008
#define XtCScrollProc ((char*)&XtStrings[1280])
#define XK_Armenian_zhe 0x100056a
#define XtRInitialState ((char*)&XtStrings[1705])
#define XtCFile ((char*)&XtStrings[1012])
#define _POSIX_SYNCHRONIZED_IO -1
#define ReplayKeyboard 5
#define ENOTCAPABLE 93
#define XK_Thai_thophuthao 0x0db2
#define SmcDieProcMask (1L << 1)
#define XK_numbersign 0x0023
#define XtEEast "east"
#define XtNinternalHeight ((char*)&XtStrings[341])
#define XK_uhornhook 0x1001eed
#define XK_dead_ogonek 0xfe5c
#define XK_Hangul_Hieuh 0x0ebe
#define XK_Uhornacute 0x1001ee8
#define BUS_ADRERR 2
#define XtNprinterNewLine "printerNewLine"
#define ButtonPressMask (1L<<2)
#define SA_ONSTACK 0x0001
#define XK_Hangul_Banja 0xff39
#define XK_Arabic_yeh_baree 0x10006d2
#define WSTOPPED WUNTRACED
#define SM_Error 0
#define IceProtocolDuplicate 6
#define O_APPEND 0x0008
#define XtNoverrideRedirect ((char*)&XtShellStrings[186])
#define XC_sb_up_arrow 114
#define XK_Thai_hohip 0x0dcb
#define SF_IMMUTABLE 0x00020000
#define isspecial(c) __sbistype((c), _CTYPE_T)
#define XK_Home 0xff50
#define XtNcreateHook ((char*)&XtStrings[2050])
#define MAXPATHLEN PATH_MAX
#define SIOCGIFCAP _IOWR('i', 31, struct ifreq)
#define XK_OE 0x13bc
#define ReverseBoldGC(w,sp) getCgsGC(w, WhichVWin(sp), gcBoldReverse)
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS 5
#define VisualNoMask 0x0
#define _PWF_SOURCE 0x3000
#define _SC_2_C_BIND 18
#define ERROR_F_SETFL 13
#define VTIME 17
#define __MINSIGSTKSZ (512 * 4)
#define XK_section 0x00a7
#define __rangeof(type,start,end) (__offsetof(type, end) - __offsetof(type, start))
#define NotifyAncestor 0
#define EnterNotify 7
#define XK_Rcedilla 0x03a3
#define ScreenSaverActive 1
#define isblank(c) __sbistype((c), _CTYPE_B)
#define XK_Hangul_RieulPieub 0x0eac
#define TRACE_SHIFT 13
#define XtCC132 "C132"
#define SIOCIFGCLONERS _IOWR('i', 120, struct if_clonereq)
#define WA_STANDOUT A_STANDOUT
#define __sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define VDISCARD 15
#define TIOCM_RNG TIOCM_RI
#define CLOCK_UPTIME_FAST 8
#define XK_eightsubscript 0x1002088
#define XK_Ediaeresis 0x00cb
#define T_NMI 19
#define ICE_Error 0
#define TTYDEF_LFLAG_NOECHO (ICANON | ISIG | IEXTEN)
#define B7200 7200
#define getchar_unlocked() getc_unlocked(stdin)
#define XK_dollar 0x0024
#define KEY_SCANCEL 0573
#define PRIO_PROCESS 0
#define XK_R1 0xffd2
#define XK_R2 0xffd3
#define XK_R3 0xffd4
#define XK_R4 0xffd5
#define XK_R5 0xffd6
#define XK_R6 0xffd7
#define XK_R7 0xffd8
#define XK_R8 0xffd9
#define XK_R9 0xffda
#define XK_Ecircumflexbelowdot 0x1001ec6
#define Mod4MapIndex 6
#define XtCOldXtermFKeys "OldXtermFKeys"
#define _XOPEN_REALTIME_THREADS -1
#define SF_ARCHIVED 0x00010000
#define USHRT_MAX __USHRT_MAX
#define XtNforcePackedFont "forcePackedFont"
#define chgat(n,a,c,o) wchgat(stdscr,n,a,c,o)
#define ETIMEDOUT 60
#define VLNEXT 14
#define _SC_AIO_LISTIO_MAX 42
#define ScrnRightMargin(xw) (IsLeftRightMode(xw) ? TScreenOf(xw)->rgt_marg : MaxCols(TScreenOf(xw)) - 1)
#define XtNinitialResourcesPersistent ((char*)&XtStrings[264])
#define XK_Scaron 0x01a9
#define XK_hyphen 0x00ad
#define IsPFKey(keysym) (((KeySym)(keysym) >= XK_KP_F1) && ((KeySym)(keysym) <= XK_KP_F4))
#define VWindow(screen) WhichVWin(screen)->window
#define CCAR_OFLOW 0x00100000
#define SF_NOUNLINK 0x00100000
#define XK_Gcedilla 0x03ab
#define __GNUCLIKE___SECTION 1
#define _NET_WM_STATE_REMOVE 0
#define _XtStringDefs_h_ 
#define ERROR_TIOCGETP 15
#define XtCModifyCursorKeys "ModifyCursorKeys"
#define __END_DECLS 
#define TEK_FONT_2 1
#define TEK_FONT_3 2
#define XK_Greek_phi 0x07f6
#define __CONCAT(x,y) __CONCAT1(x,y)
#define ALIGNBYTES _ALIGNBYTES
#define XC_target 128
#define EOVERFLOW 84
#define getnstr(s,n) wgetnstr(stdscr, s, n)
#define XNBackground "background"
#define __ISO_C_VISIBLE 1999
#define XTTYMODE_erase 2
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX 71
#define getch() wgetch(stdscr)
#define XtCAllowPasteControls "AllowPasteControls"
#define XK_Abreve 0x01c3
#define CP_SYS 2
#define XtInheritAllocate ((XtAllocateProc) _XtInherit)
#define XC_sb_v_double_arrow 116
#define GetCellColorBG(src) (((src) >> COLOR_BITS) & COLOR_MASK)
#define XK_Up 0xff52
#define KEY_NEXT 0557
#define XK_Hangul_WA 0x0ec8
#define _STDIO_H_ 
#define XK_braille_dots_3457 0x100285c
#define XK_braille_dots_3458 0x100289c
#define _INT8_T_DECLARED 
#define OPT_TEK4014 1
#define UID_MAX UINT_MAX
#define _SC_2_PBS_MESSAGE 63
#define XC_sb_right_arrow 112
#define XK_Byelorussian_shortu 0x06ae
#define PDPSHIFT 30
#define XK_currency 0x00a4
#define XK_ISO_Level5_Latch 0xfe12
#define KEY_UP 0403
#define XK_ISO_Next_Group_Lock 0xfe09
#define XK_kana_conjunctive 0x04a5
#define XK_MouseKeys_Accel_Enable 0xfe77
#define _XOPEN_ENH_I18N -1
#define XK_braille_dots_3467 0x100286c
#define XK_braille_dots_3468 0x10028ac
#define XtNvalue ((char*)&XtStrings[859])
#define B230400 230400
#define TIOCM_RTS 0004
#define T_DNA 22
#define GrayScale 1
#define PlaceOnTop 0
#define XtCBellSuppressTime "BellSuppressTime"
#define XK_Armenian_dza 0x1000571
#define DefaultColormapOfScreen(s) ((s)->cmap)
#define FIODGNAME _IOW('f', 120, struct fiodgname_arg)
#define SIGURG 16
#define _SC_TZNAME_MAX 27
#define XtNalternateScroll "alternateScroll"
#define XK_eabovedot 0x03ec
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS 12
#define XK_braille_dots_3478 0x10028cc
#define TypedBuffer(type) type *bf_buf_ ##type; Cardinal bf_len_ ##type
#define XK_ISO_Level3_Shift 0xfe03
#define XK_Ecircumflexacute 0x1001ebe
#define ACS_ULCORNER NCURSES_ACS('l')
#define __DBL_DIG__ 15
#define insertln() winsdelln(stdscr,1)
#define XK_Lacute 0x01c5
#define clrbit(a,i) (((unsigned char *)(a))[(i)/NBBY] &= ~(1<<((i)%NBBY)))
#define init_Ires(name) wnew->name = request->name
#define EINTR 4
#define XK_hebrew_lamed 0x0cec
#define RFPPWAIT (1<<31)
#define KeyRelease 3
#define _NET_WM_STATE_TOGGLE 2
#define XtRShapeStyle "ShapeStyle"
#define XC_bottom_left_corner 12
#define RLIM_NLIMITS 13
#define XAllocID(dpy) ((*((_XPrivDisplay)dpy)->resource_alloc)((dpy)))
#define PATH_MAX 1024
#define XtNhSpace ((char*)&XtStrings[251])
#define XK_ISO_Next_Group 0xfe08
#define XC_bottom_side 16
#define ru_first ru_ixrss
#define GetCellColorFG(src) ((src) & COLOR_MASK)
#define USE_BOLD(screen) ((screen)->allowBoldFonts)
#define XK_Ukranian_I 0x06b6
#define _ISPAD 0x10
#define _PWF_SHELL _PWF(8)
#define _POSIX_SPAWN 200112L
#define XrmStringsEqual(a1,a2) (strcmp(a1, a2) == 0)
#define XtERoundedRectangle "RoundedRectangle"
#define FocusChangeMask (1L<<21)
#define TTYDEV "/dev/pts/0"
#define XK_Ukranian_i 0x06a6
#define XK_kana_closingbracket 0x04a3
#define CMASK 022
#define XK_sevensuperior 0x1002077
#define TMP_MAX 308915776
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define BUTTON_PRESS(e,x) ((e) & NCURSES_MOUSE_MASK(x, 002))
#define XK_Thai_fofa 0x0dbd
#define XtNfaceNameDoublesize "faceNameDoublesize"
#define POLL_PRI 5
#define TCIOFF 3
#define FPE_SUBRNG_TRAP 0x7
#define MapNotify 19
#define XNoMemory -1
#define XK_Pointer_Button1 0xfee9
#define XK_Pointer_Button2 0xfeea
#define XK_Pointer_Button3 0xfeeb
#define XK_Pointer_Button4 0xfeec
#define XK_Pointer_Button5 0xfeed
#define ILL_ILLADR 3
#define __LDBL_MIN__ 3.36210314311209350626e-4932L
#define XK_Thai_rorua 0x0dc3
#define DFT_DECID "vt420"
#define ANSI_XON 0x11
#define XtNwinGravity ((char*)&XtShellStrings[529])
#define SIGQUIT 3
#define FPE_FPU_NP_TRAP 0x6
#define ColormapInstalled 1
#define LineCharSet(screen,ld) ((CSET_DOUBLE(GetLineDblCS(ld))) ? GetLineDblCS(ld) : (screen)->cur_chrset)
#define bkgd(ch) wbkgd(stdscr,ch)
#define XtCMaxWidth ((char*)&XtShellStrings[598])
#define NPTEPGSHIFT 9
#define MappingNotify 34
#define XK_Armenian_tyun 0x100057f
#define XK_braille_dots_567 0x1002870
#define update_font_utf8_title() 
#define RevertToNone (int)None
#define XtNallowPasteControls "allowPasteControls"
#define NBPML4 (1ul<<PML4SHIFT)
#define XtNtitleEncoding ((char*)&XtShellStrings[118])
#define XK_Abreveacute 0x1001eae
#define WIFCONTINUED(x) (x == 0x13)
#define XtCTitleEncoding ((char*)&XtShellStrings[132])
#define AllowTitleOps(w) AllowXtermOps(w, allowTitleOps)
#define TIOCPTMASTER _IO('t', 28)
#define TIOCM_CD TIOCM_DCD
#define LineTstBlinked(ld) LineTstFlag(ld, LINEBLINKED)
#define EPERM 1
#define XtClass(widget) ((widget)->core.widget_class)
#define SIOCGLOWAT _IOR('s', 3, int)
#define XK_Ubelowdot 0x1001ee4
#define ECHO 0x00000008
#define FSHIFT 11
#define OriginX(screen) (ScrollbarWidth(screen) + screen->border)
#define OriginY(screen) (screen->border)
#define B2400 2400
#define DoRM(code,value) value = (Boolean) screen->save_modes[code]
#define XtCAllowSendEvents "AllowSendEvents"
#define GrabNotViewable 3
#define si_mqd _reason._mesgq._mqd
#define XK_itilde 0x03b5
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS 6
#define XtNsaveCallback ((char*)&XtShellStrings[1189])
#define XK_Armenian_sha 0x1000577
#define __unix__ 1
#define DoSM(code,value) screen->save_modes[code] = (unsigned) (value)
#define _IONBF 2
#define XC_based_arrow_up 6
#define nextPtyData(screen,data) (IChar) (*((data)->next++) & (screen->output_eight_bits ? 0xff : 0x7f))
#define RFLINUXTHPN (1<<16)
#define _Xconst const
#define TCOOFF 1
#define XtNdisallowedFontOps "disallowedFontOps"
#define SIOCGIFBRDADDR _IOWR('i', 35, struct ifreq)
#define XC_sb_left_arrow 110
#define SM_SaveComplete 18
#define XtCJoinSession ((char*)&XtShellStrings[1069])
#define _IN_PORT_T_DECLARED 
#define XK_ae 0x00e6
#define XK_KP_Begin 0xff9d
#define XtIsRealized(object) (XtWindowOfObject(object) != None)
#define ILL_RESAD_FAULT T_RESADFLT
#define NotifyNonlinear 3
#define OPOST 0x00000001
#define NorthGravity 2
#define AllHints (InputHint|StateHint|IconPixmapHint|IconWindowHint| IconPositionHint|IconMaskHint|WindowGroupHint)
#define ttyGetAttr(fd,datap) tcgetattr(fd, datap)
#define is_idlok(win) ((win)->_idlok)
#define XK_MISCELLANY 
#define ERROR_TIOCSLTC 26
#define BUF_SIZE resource.maxBufSize
#define CoordModePrevious 1
#define TEK4014_SHOWN(xw) ((xw)->misc.Tshow)
#define XK_Arabic_veh 0x10006a4
#define IceProtoMinor 0
#define __GNUCLIKE_ATTRIBUTE_MODE_DI 1
#define T_DIVIDE 18
#define MAX_TABS (TAB_BITS_WIDTH * TAB_ARRAY_SIZE)
#define XK_Greek_OMEGAaccent 0x07ab
#define VKILL 5
#define O_WRONLY 0x0001
#define XtNscrollVCursor ((char*)&XtStrings[672])
#define XK_Cyrillic_che 0x06de
#define clrtoeol() wclrtoeol(stdscr)
#define ACS_UARROW NCURSES_ACS('-')
#define XK_Serbian_nje 0x06aa
#define XtCScrollVCursor ((char*)&XtStrings[1361])
#define CS6 0x00000100
#define CS7 0x00000200
#define XK_NairaSign 0x10020a6
#define SEEK_SET 0
#define ALL_MOUSE_EVENTS (REPORT_MOUSE_POSITION - 1)
#define O_EXCL 0x0800
#define XK_registered 0x00ae
#define XK_Gcircumflex 0x02d8
#define XtCAllowTcapOps "AllowTcapOps"
#define ACS_DEGREE NCURSES_ACS('f')
#define XK_space 0x0020
#define QUAD_MAX (__QUAD_MAX)
#define XK_Arabic_alef 0x05c7
#define isnumber(c) __sbistype((c), _CTYPE_D)
#define XtNctrlFKeys "ctrlFKeys"
#define IsModifierKey(keysym) ((((KeySym)(keysym) >= XK_Shift_L) && ((KeySym)(keysym) <= XK_Hyper_R)) || (((KeySym)(keysym) >= XK_ISO_Lock) && ((KeySym)(keysym) <= XK_ISO_Last_Group_Lock)) || ((KeySym)(keysym) == XK_Mode_switch) || ((KeySym)(keysym) == XK_Num_Lock))
#define KeymapStateMask (1L<<14)
#define XNPreeditDrawCallback "preeditDrawCallback"
#define XK_underscore 0x005f
#define BitmapPad(dpy) (((_XPrivDisplay)dpy)->bitmap_pad)
#define XtCMaxHeight ((char*)&XtShellStrings[617])
#define F_DUP2FD 10
#define WideCells(n) 1
#define ICE_ProtocolSetup 7
#define XK_braille_dots_23678 0x10028e6
#define __bool_true_false_are_defined 1
#define _MACHINE_SIGNAL_H_ 
#define XK_KP_Right 0xff98
#define __XFDS_BITS(p,n) (__FDS_BITS(p))[n]
#define SI_UNDEFINED 0
#define XtIsOverrideShell(widget) (_XtIsSubclassOf(widget, (WidgetClass)overrideShellWidgetClass, (WidgetClass)shellWidgetClass, (XtEnum)0x20))
#define XtNwaitForWm ((char*)&XtShellStrings[773])
#define XK_masculine 0x00ba
#define O_EXEC 0x00040000
#define XtCWinGravity ((char*)&XtShellStrings[540])
#define KSTACK_GUARD_PAGES 1
#define XK_braille_dots_34567 0x100287c
#define XK_braille_dots_34568 0x10028bc
#define XK_Hangul_Codeinput 0xff37
#define OPTIMIZE_SCROLL 0x04
#define XNFocusWindow "focusWindow"
#define OPT_SHIFT_FONTS 1
#define _V6_ILP32_OFFBIG 0
#define WA_HORIZONTAL A_HORIZONTAL
#define __LLONG_MAX 0x7fffffffffffffffLL
#define XK_ColonSign 0x10020a1
#define CURRENT_EMU() CURRENT_EMU_VAL((Widget)tekWidget, (Widget)term)
#define OPT_WIDER_ICHAR 1
#define XK_braille_dots_34578 0x10028dc
#define XK_hebrew_he 0x0ce4
#define SubstructureRedirectMask (1L<<20)
#define XtCAnswerbackString "AnswerbackString"
#define XtCTextSink ((char*)&XtStrings[1448])
#define _XARCH_H_ 
#define CWX (1<<0)
#define CWY (1<<1)
#define XK_Cyrillic_o_bar 0x10004e9
#define OSIOCGIFDSTADDR _IOWR('i', 15, struct ifreq)
#define _MACHINE__LIMITS_H_ 
#define XK_Wacute 0x1001e82
#define XK_Arabic_damma 0x05ef
#define XK_kra 0x03a2
#define XtEtextAppend ((char*)&XtStrings[1952])
#define XK_Pointer_DownLeft 0xfee6
#define XNStringConversion "stringConversion"
#define IOCPARM_MASK ((1 << IOCPARM_SHIFT) - 1)
#define CWDontPropagate (1L<<12)
#define OPT_EXTRA_PASTE 1
#define sigev_notify_thread_id _sigev_un._threadid
#define XC_exchange 50
#define XK_braille_dots_4567 0x1002878
#define XK_ooblique 0x00f8
#define OPT_BROKEN_OSC 0
#define NoExpose 14
#define XIMStringConversionWrapped (0x00000020)
#define XK_Greek_upsilon 0x07f5
#define wstandend(win) (wattrset(win,A_NORMAL))
#define CSRG_BASED 
#define DefaultScreen(dpy) (((_XPrivDisplay)dpy)->default_screen)
#define HAVE_TCGETATTR 1
#define L_ctermid 1024
#define XK_Udoubleacute 0x01db
#define XK_Georgian_ghan 0x10010e6
#define BadAlloc 11
#define LineClrWrapped(ld) LineClrFlag(ld, LINEWRAPPED)
#define offsetof(type,member) __offsetof(type, member)
#define FlushLog(xw) 
#define FSCALE (1<<FSHIFT)
#define SIOCGPRIVATE_0 _IOWR('i', 80, struct ifreq)
#define XtCvtStringToPosition XtCvtStringToShort
#define DirectColor 5
#define FD_SET(n,p) ((p)->__fds_bits[(n)/_NFDBITS] |= __fdset_mask(n))
#define __FLT_HAS_DENORM__ 1
#define XK_Greek_omicron 0x07ef
#define CWBackPixmap (1L<<0)
#define writePtyData(f,d,len) v_write(f,d,len)
#define XtNenvironment ((char*)&XtShellStrings[1016])
#define USE_OPENPTY 1
#define F_OSETLKW 9
#define XK_Arabic_percent 0x100066a
#define _SC_ARG_MAX 1
#define isupper(c) __sbistype((c), _CTYPE_U)
#define SIOCSLIFPHYADDR _IOW('i', 74, struct if_laddrreq)
#define toupper(c) __sbtoupper(c)
#define __GNUCLIKE_ASM 3
#define OPT_RENDERWIDE 0
#define XK_Cyrillic_yu 0x06c0
#define _X_UNLIKELY(x) __builtin_expect(!!(x), 0)
#define VisualBlueMaskMask 0x40
#define XtNfaceName "faceName"
#define XtCUseClipping "UseClipping"
#define GCTileStipYOrigin (1L<<13)
#define OPT_XMC_GLITCH 0
#define TrueColor 4
#define isSameCELL(a,b) (isSameRow(a,b) && isSameCol(a,b))
#define IsTekWidget(w) (XtClass(w) == tekWidgetClass)
#define XtNdestroyHook ((char*)&XtStrings[2099])
#define UF_OPAQUE 0x00000008
#define BUTTON2_PRESSED NCURSES_MOUSE_MASK(2, NCURSES_BUTTON_PRESSED)
#define SEEK_CUR 1
#define VisualColormapSizeMask 0x80
#define XtCForcePackedFont "ForcePackedFont"
#define CLOCAL 0x00008000
#define XK_Georgian_hoe 0x10010f5
#define XtNdecTerminalID "decTerminalID"
#define ScreenOfDisplay(dpy,scr) (&((_XPrivDisplay)dpy)->screens[scr])
#define XK_ubelowdot 0x1001ee5
#define _SCROLLWIN 0x08
#define MaxCols(screen) ((screen)->max_col + 1)
#define BadPixmap 4
#define XtCDecTerminalID "DecTerminalID"
#define xtermEnvUTF8() False
#define XtNscrollRCursor ((char*)&XtStrings[644])
#define XK_Serbian_TSHE 0x06bb
#define XtCScrollRCursor ((char*)&XtStrings[1333])
#define vw_scanw vwscanw
#define UU_LOCK_OWNER_ERR (-7)
#define XK_mu 0x00b5
#define KEY_SREDO 0620
#define XC_spraycan 124
#define TIOCM_DCD 0100
#define MappingModifier 0
#define KEY_DL 0510
#define DisableScreenInterval 0
#define _POSIX_CHOWN_RESTRICTED 1
#define O_FSYNC 0x0080
#define __FreeBSD_cc_version 800001
#define pgtok(x) ((unsigned long)(x) * (PAGE_SIZE / 1024))
#define GXnor 0x8
#define RES_OFFSET(field) XtOffsetOf(XTERM_RESOURCE, field)
#define __LLONG_MIN (-0x7fffffffffffffffLL - 1)
#define XK_adiaeresis 0x00e4
#define IsCellCombined(screen,row,col) (getXtermCombining(screen, row, col, 0) != 0)
#define XK_KP_Separator 0xffac
#define ICE_AuthNextPhase 5
#define XK_Utilde 0x03dd
#define XIMStringConversionRetrieval (0x0002)
#define mvgetnstr(y,x,str,n) mvwgetnstr(stdscr,y,x,str,n)
#define XK_Arabic_question_mark 0x05bf
#define XK_oe 0x13bd
#define _SC_XOPEN_REALTIME_THREADS 112
#define XK_braille_dots_134678 0x10028ed
#define XK_HEBREW 
#define SIOCGIFCONF32 _IOWR('i', 36, struct ifconf32)
#define WithdrawnState 0
#define TypeCallocN(type,n) (type *)calloc((size_t) (n), sizeof(type))
#define XK_hebrew_pe 0x0cf4
#define ACS_LTEE NCURSES_ACS('t')
#define addstr(str) waddnstr(stdscr,str,-1)
#define TRACE_TPUTS 0x0002
#define FPE_FLTDIV 3
#define __DBL_MAX__ 1.7976931348623157e+308
#define XK_Hangul_Khieuq 0x0ebb
#define USE_LASTLOG 
#define VSUSP 10
#define CLOCK_VIRTUAL 1
#define MAXBSIZE 65536
#define BfLen(type) screen->bf_len_ ##type
#define __DBL_HAS_INFINITY__ 1
#define resetterm() reset_shell_mode()
#define XK_ehook 0x1001ebb
#define XK_Greek_THETA 0x07c8
#define XK_threesuperior 0x00b3
#define _PC_SYMLINK_MAX 18
#define _KEY_T_DECLARED 
#define checkVeryBoldAttr(flags,fg,code,attr) if ((flags & FG_COLOR) != 0 && (screen->veryBoldColors & attr) == 0 && (flags & attr) != 0 && (fg == code)) UIntClr(flags, attr)
#define W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define COLOR_CYAN 6
#define ERROR_XERROR 83
#define NotifyPointer 5
#define LONG_BIT __LONG_BIT
#define TIOCSCTTY _IO('t', 97)
#define XK_Georgian_vin 0x10010d5
#define AllPlanes ((unsigned long)~0L)
#define XC_shuttle 118
#define ISIG 0x00000080
#define XtCMetaSendsEscape "MetaSendsEscape"
#define isspace(c) __sbistype((c), _CTYPE_S)
#define stdin __stdinp
#define XK_hebrew_doublelowline 0x0cdf
#define XtCPrinterControlMode "PrinterControlMode"
#define XtCDepth ((char*)&XtStrings[983])
#define MyStackAlloc(size,stack_cache_array) ((size) <= sizeof(stack_cache_array) ? (XtPointer)(stack_cache_array) : (XtPointer)malloc((size_t)(size)))
#define DestroyAll 0
#define TAB0 0x00000000
#define XK_ycircumflex 0x1000177
#define NeedWidePrototypes 0
#define init_Sres2(name,i) wnew->name(i) = x_strtrim(request->name(i))
#define HN_AUTOSCALE 0x20
#define XIMHotKeyStateON (0x0001L)
#define __DEC32_MIN_EXP__ (-95)
#define XtIsConstraint(obj) (((Object)(obj))->object.widget_class->core_class.class_inited & 0x10)
#define XtNunrealizeCallback ((char*)&XtStrings[815])
#define XtCInsertPosition ((char*)&XtStrings[1098])
#define XK_dead_iota 0xfe5d
#define XtCacheNone 0x001
#define XK_Cyrillic_che_vertstroke 0x10004b9
#define XK_rcedilla 0x03b3
#define CWStackMode (1<<6)
#define MACHINE "amd64"
#define P_tmpdir "/var/tmp/"
#define GCSubwindowMode (1L<<15)
#define XK_Hangul_J_SsangSios 0x0ee7
#define SIOCGIFMETRIC _IOWR('i', 23, struct ifreq)
#define _POSIX_THREAD_SPORADIC_SERVER -1
#define UU_LOCK_READ_ERR (-2)
#define ENOATTR 87
#define XtEright "right"
#define XK_Thai_khokhwai 0x0da4
#define XNResourceName "resourceName"
#define KeyPress 2
#define TRACE_HANDSHAKE(tag,data) 
#define XK_Greek_ETA 0x07c7
#define CLD_KILLED 2
#define XK_Ebelowdot 0x1001eb8
#define _PC_REC_MAX_XFER_SIZE 15
#define SV_NOCLDSTOP SA_NOCLDSTOP
#define vid_attr(a,pair,opts) vidattr(a)
#define XK_hebrew_shin 0x0cf9
#define OPT_TRACE_FLAGS 0
#define __NCURSES_H 
#define ERROR_TIOCSETC 24
#define ERROR_TIOCSETD 25
#define ERROR_TIOCSETP 23
#define delch() wdelch(stdscr)
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS 11
#define XK_gcedilla 0x03bb
#define _BLKCNT_T_DECLARED 
#define XK_braille_dots_13678 0x10028e5
#define _POSIX_NO_TRUNC 1
#define XNVaNestedList "XNVaNestedList"
#define ECHILD 10
#define mvwinch(win,y,x) (wmove(win,y,x) == ERR ? NCURSES_CAST(chtype, ERR) : winch(win))
#define XK_First_Virtual_Screen 0xfed0
#define _SC_V6_ILP32_OFF32 103
#define KBBellPercent (1L<<1)
#define XNDestroyCallback "destroyCallback"
#define BUTTON_CLICK(e,x) ((e) & NCURSES_MOUSE_MASK(x, 004))
#define XtNfontStyle "fontStyle"
#define si_trapno _reason._fault._trapno
#define XK_Cacute 0x01c6
#define XtCEightBitMeta "EightBitMeta"
#define XK_Odoubleacute 0x01d5
#define HAVE_LIB_XAW 1
#define USE_TERMIOS 
#define ERROR_SETUID 35
#define XtNreverseWrap "reverseWrap"
#define XIMStatusArea 0x0100L
#define _SC_ASYNCHRONOUS_IO 28
#define XK_braille_dots_24567 0x100287a
#define XK_braille_dots_24568 0x10028ba
#define XK_braille_dots_245 0x100281a
#define QueuedAfterFlush 2
#define _XTYPEDEF_FONT 
#define XtHmanageChildren ((char*)&XtStrings[2219])
#define XK_Georgian_gan 0x10010d2
#define _POSIX_SPORADIC_SERVER -1
#define XK_pabovedot 0x1001e57
#define __DEC128_MAX__ 9.999999999999999999999999999999999E6144DL
#define XC_ul_angle 144
#define XK_Ukrainian_i 0x06a6
#define _POSIX_MEMORY_PROTECTION 200112L
#define XK_braille_dots_24578 0x10028da
#define XK_KP_Multiply 0xffaa
#define DEF_DISALLOWED_FONT "SetFont,GetFont"
#define CWBackPixel (1L<<1)
#define XK_Hangul_J_RieulKiyeog 0x0edc
#define XtNlength ((char*)&XtStrings[435])
#define _SC_RAW_SOCKETS 119
#define XK_Uhornhook 0x1001eec
#define FillOpaqueStippled 3
#define XK_Cyrillic_shorti 0x06ca
#define XtCFastScroll "FastScroll"
#define ENOLCK 77
#define F_RDAHEAD 16
#define _SC_THREAD_SPORADIC_SERVER 92
#define __SOFF 0x1000
#define _XtComposite_h 
#define XK_Ucircumflex 0x00db
#define UU_LOCK_CREAT_ERR (-3)
#define __DEC128_EPSILON__ 1E-33DL
#define XtNmaximized "maximized"
#define PDRSHIFT 21
#define XtESouth "south"
#define XK_Pointer_Drag3 0xfef7
#define XK_Pointer_Drag4 0xfef8
#define XK_Pointer_Drag5 0xfefd
#define OPT_C1_PRINT 1
#define __DEC32_MAX_EXP__ 96
#define _POSIX_TIMERS 200112L
#define XK_Select 0xff60
#define _XFUNCPROTOEND 
#define CINTR CTRL('C')
#define Button4MotionMask (1L<<11)
#define __SNBF 0x0002
#define XtRWidget ((char*)&XtStrings[1865])
#define PDP_ENDIAN _PDP_ENDIAN
#define TRACE_CCALLS 0x0400
#define EREMOTE 71
#define SM_ShutdownCancelled 10
#define XtNbaseHeight ((char*)&XtShellStrings[507])
#define XK_Ihook 0x1001ec8
#define XK_Greek_omicronaccent 0x07b7
#define LineSolid 0
#define __CC_SUPPORTS_INLINE 1
#define OPT_BLINK_CURS 1
#define _SC_STREAM_MAX 26
#define XtNeightBitSelectTypes "eightBitSelectTypes"
#define FillTiled 1
#define CEOF CTRL('D')
#define __amd64 1
#define XK_Greek_TAU 0x07d4
#define TIOCSDRAINWAIT _IOW('t', 87, int)
#define XtNheight ((char*)&XtStrings[234])
#define CEOT CEOF
#define XK_odiaeresis 0x00f6
#define BUS_OBJERR 3
#define USE_STRUCT_LASTLOG 
#define XK_Greek_ZETA 0x07c6
#define XtNbrokenSelections "brokenSelections"
#define XtNfontWarnings "fontWarnings"
#define TIOCM_DSR 0400
#define SEGV_MAPERR 1
#define XtNscrollKey "scrollKey"
#define XtCDisallowedTcapOps "DisallowedTcapOps"
#define ONLRET 0x00000040
#define XK_Atilde 0x00c3
#define XK_Igrave 0x00cc
#define XK_Thai_thothahan 0x0db7
#define XtEdefault "default"
#define GCFont (1L<<14)
#define FG_COLOR AttrBIT(5)
#define TIOCM_DTR 0002
#define BUTTON4_PRESSED NCURSES_MOUSE_MASK(4, NCURSES_BUTTON_PRESSED)
#define _SC_2_PBS_LOCATE 62
#define XtCLogfile "Logfile"
#define NCURSES_RESERVED_EVENT 040L
#define XK_ISO_Last_Group_Lock 0xfe0f
#define XK_tabovedot 0x1001e6b
#define XtNfreeBoldBox "freeBoldBox"
#define XK_KP_Delete 0xff9f
#define SIOCDLIFADDR _IOW('i', 29, struct if_laddrreq)
#define mvwgetnstr(win,y,x,str,n) (wmove(win,y,x) == ERR ? ERR : wgetnstr(win,str,n))
#define ProtocolVersion(dpy) (((_XPrivDisplay)dpy)->proto_major_version)
#define XtInheritDeleteChild ((XtWidgetProc) _XtInherit)
#define MOD_CTRL 4
#define USE_HANDSHAKE 1
#define CRPRNT CREPRINT
#define XK_KP_Down 0xff99
#define FontAscent(screen) (IsIcon(screen) ? (screen)->fnt_icon.fs->ascent : WhichVWin(screen)->f_ascent)
#define __POSIX_VISIBLE 200809
#define TRACE_MOVE 0x0008
#define __QUAD_MAX __LONG_MAX
#define XK_Cyrillic_NJE 0x06ba
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define WTMP_FILENAME "/usr/adm/wtmp"
#define XNForeground "foreground"
#define XK_braille_dots_124678 0x10028eb
#define O_NONBLOCK 0x0004
#define DST_CAN 6
#define S_IROTH 0000004
#define _XtCompositeP_h 
#define XK_Armenian_amanak 0x100055c
#define TCSADRAIN 1
#define XtCColorMode "ColorMode"
#define COLOR_PAIR(n) NCURSES_BITS(n, 0)
#define SIG_BLOCK 1
#define XK_tcaron 0x01bb
#define attr_get(ap,cp,o) wattr_get(stdscr,ap,cp,o)
#define XtHpopupSpringLoaded ((char*)&XtStrings[2568])
#define COLOR_10 10
#define COLOR_11 11
#define COLOR_12 12
#define COLOR_13 13
#define COLOR_14 14
#define COLOR_15 15
#define _SYS_SELECT_H_ 
#define XtNcolorRVMode "colorRVMode"
#define XK_Uhorntilde 0x1001eee
#define S_IEXEC S_IXUSR
#define XtCTextSource ((char*)&XtStrings[1457])
#define XK_Cyrillic_KA_vertstroke 0x100049c
#define XK_script_switch 0xff7e
#define islower(c) __sbistype((c), _CTYPE_L)
#define SIOCGHIWAT _IOR('s', 1, int)
#define MappingKeyboard 1
#define NotifyInferior 2
#define XK_ugrave 0x00f9
#define trunc_1gpage(x) ((unsigned long)(x) & ~PDPMASK)
#define __GNUCLIKE_MATH_BUILTIN_CONSTANTS 
#define _XTYPEDEF_MASK 
#define ERROR_LDTERM 21
#define _POSIX2_PBS_ACCOUNTING -1
#define XK_Lcaron 0x01a5
#define T_RESERVED 30
#define __LDBL_MIN_10_EXP__ (-4931)
#define BitmapNoMemory 3
#define OPT_PRINT_ON_EXIT 1
#define SIOCGIFGROUP _IOWR('i', 136, struct ifgroupreq)
#define PBaseSize (1L << 8)
#define if_OPT_VT52_MODE(screen,code) if(screen->vtXX_level == 0) code
#define XNFilterEvents "filterEvents"
#define __LONG_MAX 0x7fffffffffffffffL
#define XtRWidgetList ((char*)&XtStrings[1884])
#define TIOCM_RI 0200
#define XtCMaximized "Maximized"
#define XtNborderPixmap ((char*)&XtStrings[111])
#define XK_Eabovedot 0x03cc
#define TEK4014_ACTIVE(xw) ((xw)->misc.TekEmu)
#define _IOWINT(g,n) _IOC(IOC_VOID, (g), (n), sizeof(int))
#define __SOPT 0x0400
#define XtNallowShellResize ((char*)&XtShellStrings[280])
#define S_IWUSR 0000200
#define XK_Hangul_Special 0xff3f
#define BadValue 2
#define XC_double_arrow 42
#define XtCMkSampleSize "MkSampleSize"
#define XtNlogging "logging"
#define GravityIsNorthWest(w) ((w)->misc.resizeGravity == NorthWestGravity)
#define XK_Hangul_RieulMieum 0x0eab
#define SIOCATMARK _IOR('s', 7, int)
#define UIntClr(dst,bits) dst = dst & (unsigned) ~(bits)
#define SPECNAMELEN 63
#define _MACHINE__TYPES_H_ 
#define DEF_ALLOW_WINDOW False
#define _NFDBITS (sizeof(__fd_mask) * 8)
#define XK_braille_dots_2678 0x10028e2
#define __GXX_ABI_VERSION 1002
#define is_scrollok(win) ((win)->_scroll)
#define XK_comma 0x002c
#define XK_dead_psili 0xfe64
#define INVISIBLE MiscBIT(8)
#define XK_Thai_chochang 0x0daa
#define _SC_PAGESIZE 47
#define BUTTON1_CLICKED NCURSES_MOUSE_MASK(1, NCURSES_BUTTON_CLICKED)
#define XK_Hangul_RieulKiyeog 0x0eaa
#define TTYSIZE_ROWS(data) data.ws_row
#define XtEtextRead ((char*)&XtStrings[1947])
#define XtNcacheDoublesize "cacheDoublesize"
#define F_UNLCK 2
#define included_menu_h 
#define ECHOE 0x00000002
#define XtNunderLine "underLine"
#define XK_Nacute 0x01d1
#define XtNnMarginBell "nMarginBell"
#define PML4SHIFT 39
#define __DEVOLATILE(type,var) ((type)(uintptr_t)(volatile void *)(var))
#define _SC_READER_WRITER_LOCKS 76
#define _XtPosition Position
#define _PC_LINK_MAX 1
#define SmShutdownCommand "ShutdownCommand"
#define XtNcolorULMode "colorULMode"
#define XtHaddCallbacks ((char*)&XtStrings[2329])
#define CenterGravity 5
#define XrmEnumAllLevels 0
#define ITIMER_REAL 0
#define CSUSP CTRL('Z')
#define _ALIGN(p) (((u_long)(p) + _ALIGNBYTES) &~ _ALIGNBYTES)
#define XK_Greek_lambda 0x07eb
#define __QUAD_MIN __LONG_MIN
#define XtCCurses "Curses"
#define CWBorderPixel (1L<<3)
#define LINEFEED MiscBIT(3)
#define MOD_ALT 2
#define XNPreeditCaretCallback "preeditCaretCallback"
#define TEK_FONT_LARGE 0
#define _POSIX_SHELL 1
#define WNOHANG 1
#define BUTTON2_DOUBLE_CLICKED NCURSES_MOUSE_MASK(2, NCURSES_DOUBLE_CLICKED)
#define StructureNotifyMask (1L<<17)
#define XK_overline 0x047e
#define A_ALTCHARSET NCURSES_BITS(1UL,14)
#define _XOPEN_SHM 1
#define KEY_SPRINT 0617
#define update_font_utf8_mode() 
#define ERROR_F_GETFL 12
#define _howmany(x,y) (((x) + ((y) - 1)) / (y))
#define XK_braille_dots_14567 0x1002879
#define XK_braille_dots_14568 0x10028b9
#define RectangleOut 0
#define ANSI_CAN 0x18
#define KEY_F0 0410
#define XK_hebrew_taf 0x0cfa
#define mvwhline(win,y,x,c,n) (wmove(win,y,x) == ERR ? ERR : whline(win,c,n))
#define NULLQUARK ((XrmQuark) 0)
#define BOLD AttrBIT(2)
#define FUNCPROTO 15
#define XtInheritInsertChild ((XtWidgetProc) _XtInherit)
#define XK_hebrew_taw 0x0cfa
#define F_GETFD 1
#define XK_Arabic_heh 0x05e7
#define XK_Prev_Virtual_Screen 0xfed1
#define XK_Arabic_tcheh 0x1000686
#define F_GETFL 3
#define XK_Tslash 0x03ac
#define XK_braille_dots_14578 0x10028d9
#define GCDashList (1L<<21)
#define XK_uhornacute 0x1001ee9
#define _POSIX2_FORT_RUN 200112L
#define XIMStatusCallbacks 0x0200L
#define S_IRWXG 0000070
#define TIOCMSDTRWAIT _IOW('t', 91, int)
#define SmsDeletePropertiesProcMask (1L << 8)
#define ferror(p) (!__isthreaded ? __sferror(p) : (ferror)(p))
#define XK_braille_dots_27 0x1002842
#define DEF_POINTER_MODE pNoMouse
#define XtNconnection ((char*)&XtShellStrings[918])
#define TIOCPKT_DOSTOP 0x20
#define XK_Cyrillic_ER 0x06f2
#define XK_KP_Left 0xff96
#define XK_MillSign 0x10020a5
#define __DBL_MIN__ 2.2250738585072014e-308
#define __LONG_MIN (-0x7fffffffffffffffL - 1)
#define EADDRINUSE 48
#define SIOCSIFMEDIA _IOWR('i', 55, struct ifreq)
#define ICE_AuthRequired 3
#define init_Dres(name) wnew->name = request->name
#define XK_Thai_sosua 0x0dca
#define Bres(name,class,offset,dftvalue) {RES_NAME(name), RES_CLASS(class), XtRBoolean, sizeof(Boolean), RES_OFFSET(offset), XtRImmediate, (XtPointer) dftvalue}
#define VisibilityFullyObscured 2
#define UF_SETTABLE 0x0000ffff
#define SIOCGIFFLAGS _IOWR('i', 17, struct ifreq)
#define XC_gumby 56
#define XtNeightBitMeta "eightBitMeta"
#define XtNvisualBellDelay "visualBellDelay"
#define XK_ISO_Last_Group 0xfe0e
#define isxdigit(c) __isctype((c), _CTYPE_X)
#define XK_Armenian_separation_mark 0x100055d
#define S_IRWXO 0000007
#define XK_Ecircumflextilde 0x1001ec4
#define OFF_PROTECT 0
#define BOLDATTR(screen) (unsigned) (USE_BOLD(screen) ? (BOLD | ((screen)->blink_as_bold ? BLINK : 0)) : 0)
#define DefaultExposures 2
#define XK_hebrew_tet 0x0ce8
#define XtNhighlightSelection "highlightSelection"
#define PropModeReplace 0
#define MIN_DECID 52
#define XtCHighlightColorMode "HighlightColorMode"
#define SelectionClear 29
#define LineMaxCol(screen,ld) (CSET_DOUBLE(GetLineDblCS(ld)) ? (screen->max_col / 2) : (screen->max_col))
#define XK_KP_Prior 0xff9a
#define XK_braille_dots_13468 0x10028ad
#define XtNcombiningChars "combiningChars"
#define XK_idotless 0x02b9
#define Mod3MapIndex 5
#define UU_LOCK_LINK_ERR (-5)
#define XK_Pointer_DfltBtnNext 0xfefb
#define XK_Ohorngrave 0x1001edc
#define UQUAD_MAX (__UQUAD_MAX)
#define SIGTRAP 5
#define EISDIR 21
#define __nonnull(x) __attribute__((__nonnull__(x)))
#define XK_Hangul_J_Ieung 0x0ee8
#define COLOR_BLUE 4
#define _POSIX_THREAD_ATTR_STACKSIZE 200112L
#define getXtermBackground(xw,flags,color) (((flags) & BG_COLOR) && ((int)(color) >= 0 && (color) < MAXCOLORS) ? GET_COLOR_RES(xw, TScreenOf(xw)->Acolors[color]) : T_COLOR(TScreenOf(xw), TEXT_BG))
#define XK_Greek_epsilon 0x07e5
#define ButtonRelease 5
#define XtEtop "top"
#define XK_Georgian_hae 0x10010f0
#define XK_ISO_Prev_Group 0xfe0a
#define DEFLOCALEFILTER1(x) DEFLOCALEFILTER2(x)
#define OPT_TOOLBAR 0
#define IGNPAR 0x00000004
#define XK_Georgian_har 0x10010f4
#define _MKSTEMP_DECLARED 
#define TopIf 2
#define ACS_RTEE NCURSES_ACS('u')
#define ACS_BSBS ACS_HLINE
#define KEY_BTAB 0541
#define RLIMIT_SWAP 12
#define XtSuperclass(widget) (XtClass(widget)->core_class.superclass)
#define WAIT_MYPGRP 0
#define XtCMinWidth ((char*)&XtShellStrings[560])
#define AllTemporary 0L
#define XtCCursor ((char*)&XtStrings[976])
#define XtCScrollLines "ScrollLines"
#define XK_Adiaeresis 0x00c4
#define XK_Cyrillic_GHE 0x06e7
#define SmDialogError 0
#define XtCMinAspectX ((char*)&XtShellStrings[720])
#define XtCMinAspectY ((char*)&XtShellStrings[676])
#define XK_ccircumflex 0x02e6
#define CWBorderPixmap (1L<<2)
#define XC_pirate 88
#define XtHsetWMColormapWindows ((char*)&XtStrings[2488])
#define XtNshutdownCommand ((char*)&XtShellStrings[1243])
#define COLOR_WHITE 7
#define COLOR_BD (NUM_ANSI_COLORS)
#define B110 110
#define COLOR_BL (NUM_ANSI_COLORS+2)
#define ULONG_MAX __ULONG_MAX
#define XtCLocale "Locale"
#define DEFBOLDFONT NULL
#define __DEC128_MIN__ 1E-6143DL
#define DEV_BSHIFT 9
#define FontLeftToRight 0
#define XIMStringConversionWord (0x0003)
#define XK_Arabic_hah 0x05cd
#define XK_Greek_upsilonaccent 0x07b8
#define XK_Shift_Lock 0xffe6
#define RFTHREAD (1<<13)
#define NPTEPG (PAGE_SIZE/(sizeof (pt_entry_t)))
#define XK_Armenian_yech 0x1000565
#define __DBL_HAS_DENORM__ 1
#define ttySetAttr(fd,datap) tcsetattr(fd, TCSANOW, datap)
#define VendorRelease(dpy) (((_XPrivDisplay)dpy)->release)
#define KEY_SEND 0602
#define XtRShort ((char*)&XtStrings[1791])
#define FPE_FLTSUB 8
#define NCURSES_WRAPPED_VAR(type,name) extern type NCURSES_PUBLIC_VAR(name)(void)
#define XK_kana_TSU 0x04c2
#define GCC_PRINTFLIKE(f,n) 
#define CDSUSP CTRL('Y')
#define CHAR_BIT __CHAR_BIT
#define XtNpointerShape "pointerShape"
#define XK_braille_dots_126 0x1002823
#define CSTATUS CTRL('T')
#define OPT_SCO_FUNC_KEYS 0
#define XK_ogonek 0x01b2
#define XtCProgramPath ((char*)&XtShellStrings[1093])
#define XK_Yacute 0x00dd
#define XK_Greek_finalsmallsigma 0x07f3
#define XK_umacron 0x03fe
#define OPT_PASTE64 0
#define XtCLogging "Logging"
#define XK_braille_dots_234678 0x10028ee
#define _SC_BC_BASE_MAX 9
#define GET_TTYSIZE(fd,data) ioctl(fd, TIOCGWINSZ, (char *) &data)
#define XtCRightScrollBar "RightScrollBar"
#define NCURSES_IMPEXP 
#define _PASSWORD_EFMT1 '_'
#define XK_braille_dots_125678 0x10028f3
#define TRACE_CLOSE() 
#define __NO_INLINE__ 1
#define XK_Georgian_zhar 0x10010df
#define XK_Armenian_PYUR 0x1000553
#define HN_DIVISOR_1000 0x08
#define XC_diamond_cross 36
#define XIMStatusNone 0x0800L
#define XK_braille_dots_13567 0x1002875
#define USE_POSIX_TERMIOS 1
#define XK_Cyrillic_A 0x06e1
#define XK_Cyrillic_E 0x06fc
#define CLOCKS_PER_SEC 128
#define XK_Cyrillic_O 0x06ef
#define XK_Cyrillic_U 0x06f5
#define XK_Cyrillic_a 0x06c1
#define XK_Cyrillic_e 0x06dc
#define XK_KP_Page_Down 0xff9b
#define XK_Cyrillic_i 0x06c9
#define XK_ISO_Level5_Lock 0xfe13
#define XtExposeCompressMultiple 2
#define XK_Cyrillic_o 0x06cf
#define XK_Cyrillic_u 0x06d5
#define XK_braille_dots_3567 0x1002874
#define XK_Georgian_hie 0x10010f2
#define XK_dead_caron 0xfe5a
#define KEY_SRIGHT 0622
#define _SC_TRACE 97
#define S_ISLNK(m) (((m) & 0170000) == 0120000)
#define SIOCSIFRVNET _IOWR('i', 91, struct ifreq)
#define ctodb(db) ((db) << (PAGE_SHIFT - DEV_BSHIFT))
#define USE_PTS_DEVICE 1
#define MAX_CANON 255
#define _SUSECONDS_T_DECLARED 
#define OPT_TRACE 0
#define Width(screen) WhichVWin(screen)->width
#define XK_acute 0x00b4
#define XK_braille_dots_3578 0x10028d4
#define NETGRAPHDISC 6
#define XK_Serbian_tshe 0x06ab
#define XtCWideFont "WideFont"
#define XK_SlowKeys_Enable 0xfe73
#define XK_Thai_khorakhang 0x0da6
#define XtCScrollPos "ScrollPos"
#define XtNutf8Title "utf8Title"
#define FD_ZERO(p) do { fd_set *_p; __size_t _n; _p = (p); _n = _howmany(FD_SETSIZE, _NFDBITS); while (_n > 0) _p->__fds_bits[--_n] = 0; } while (0)
#define ut_xstatus ut_exit.e_exit
#define XK_Ocircumflexacute 0x1001ed0
#define XtNmkSampleSize "mkSampleSize"
#define mvaddstr(y,x,str) mvwaddstr(stdscr,y,x,str)
#define RevertToParent 2
#define _SYS_TTYCOM_H_ 
#define XtNallowC1Printable "allowC1Printable"
#define __DBL_MANT_DIG__ 53
#define ANSI_CSI 0x9B
#define XtNhighlightReverse "highlightReverse"
#define XK_Cyrillic_ka_descender 0x100049b
#define ISTRIP 0x00000020
#define XNDirectionalDependentDrawing "directionalDependentDrawing"
#define BADSIG SIG_ERR
#define XK_Thai_yoying 0x0dad
#define KEY_NPAGE 0522
#define XK_Thai_bobaimai 0x0dba
#define XK_hebrew_zayin 0x0ce6
#define XC_sb_h_double_arrow 108
#define _MACHINE_STDARG_H_ 
#define _SC_XOPEN_ENH_I18N 109
#define XK_voicedsound 0x04de
#define VisualDepthMask 0x4
#define SV_RESETHAND SA_RESETHAND
#define XK_Ocircumflexbelowdot 0x1001ed8
#define XK_Armenian_je 0x100057b
#define XK_ARMENIAN 
#define Always 2
#define XK_Massyo 0xff2c
#define putc(x,fp) (!__isthreaded ? __sputc(x, fp) : (putc)(x, fp))
#define XNLineSpace "lineSpace"
#define close_fd(fd) close(fd), fd = -1
#define SIGEV_SIGNAL 1
#define _INT64_T_DECLARED 
#define TEKNUMLINES 4
#define DST_EET 5
#define _XFUNCPROTO_H_ 
#define HAVE_PUTENV 1
#define Sres(name,class,offset,dftvalue) {RES_NAME(name), RES_CLASS(class), XtRString, sizeof(char *), RES_OFFSET(offset), XtRString, (XtPointer) dftvalue}
#define PropModeAppend 2
#define XK_Hangul_KkogjiDalrinIeung 0x0ef3
#define XK_tslash 0x03bc
#define XtNsignalInhibit "signalInhibit"
#define SyncPointer 1
#define _RUNE_T_DECLARED 
#define __GNUC_VA_LIST_COMPATIBILITY 1
#define XK_copyright 0x00a9
#define mvinsstr(y,x,s) mvwinsstr(stdscr,y,x,s)
#define XK_ecircumflexhook 0x1001ec3
#define XtCCombiningChars "CombiningChars"
#define XtCSensitive ((char*)&XtStrings[1385])
#define XK_jcircumflex 0x02bc
#define st_mtime st_mtimespec.tv_sec
#define SIOCGIFMAC _IOWR('i', 38, struct ifreq)
#define CSET_DHL_BOT 2
#define YSorted 1
#define LineSetFlag(ld,flag) SetLineFlags(ld, (GetLineFlags(ld) | (flag)))
#define XtNbackgroundPixmap ((char*)&XtStrings[63])
#define __STRING(x) #x
#define XK_Undo 0xff65
#define ServerVendor(dpy) (((_XPrivDisplay)dpy)->vendor)
#define NGROUPS_MAX 1023
#define FamilyDECnet 1
#define XK_Hangul_J_PanSios 0x0ef8
#define XNContextualDrawing "contextualDrawing"
#define SIGVTALRM 26
#define XtEcenter "center"
#define included_xstrings_h 1
#define XK_Cyrillic_HA 0x06e8
#define RLIMIT_CPU 0
#define tolower(c) __sbtolower(c)
#define wgetparent(win) ((win) ? (win)->_parent : 0)
#define XK_Hangul_SunkyeongeumPhieuf 0x0ef4
#define TERMCAP_ERASE "kb"
#define XK_Greek_ALPHA 0x07c1
#define XK_hebrew_mem 0x0cee
#define F_ULOCK 0
#define XtNminWidth ((char*)&XtShellStrings[551])
#define SM_RegisterClientReply 2
#define _PASSWORD_LEN 128
#define ECHOK 0x00000004
#define XK_Arabic_waw 0x05e8
#define XK_notidentical 0x1002262
#define KBLedMode (1L<<5)
#define DefaultBlanking 2
#define XtCCacheDoublesize "CacheDoublesize"
#define XConverterNotFound -3
#define XK_squareroot 0x100221A
#define XK_ecircumflextilde 0x1001ec5
#define XIMPreeditCallbacks 0x0002L
#define _SC_FSYNC 38
#define mvinsch(y,x,c) mvwinsch(stdscr,y,x,c)
#define OPT_BUILTIN_XPMS 0
#define XK_Arabic_ain 0x05d9
#define XtHpostGeometry ((char*)&XtStrings[2624])
#define FPE_INTOVF 1
#define XtNbrokenStringTerm "brokenStringTerm"
#define XtCReadOnly ((char*)&XtStrings[1244])
#define ACS_BSSB ACS_ULCORNER
#define ERROR_PTY_EXEC 34
#define TIOCPKT_START 0x08
#define KEY_REPLACE 0566
#define _PW_KEYYPENABLED '\x34'
#define _ACCMODE_T_DECLARED 
#define updateRightScrollbar(xw) 
#define clearerr_unlocked(p) __sclearerr(p)
#define DFT_COLORMODE True
#define _XtObject_h 
#define _POSIX2_FORT_DEV -1
#define UCS_LIMIT 0x80000000U
#define ACS_SSBS ACS_BTEE
#define XK_Armenian_o 0x1000585
#define COLOR_RV (NUM_ANSI_COLORS+3)
#define ACS_DARROW NCURSES_ACS('.')
#define _POSIX_THREAD_PROCESS_SHARED -1
#define _SYS_CDEFS_H_ 
#define KBKey (1L<<6)
#define ERROR_SAVE_PTR 102
#define SIOCSIFLLADDR _IOW('i', 60, struct ifreq)
#define XtNcursorBlink "cursorBlink"
#define XK_ISO_Fast_Cursor_Down 0xfe2f
#define NCURSES_UNCTRL_H_incl 1
#define DEF_ALT_SENDS_ESC False
#define TIOCUCNTL _IOW('t', 102, int)
#define _SC_2_LOCALEDEF 23
#define XK_Thai_nikhahit 0x0ded
#define XK_hebrew_dalet 0x0ce3
#define XK_ecircumflexacute 0x1001ebf
#define EDOOFUS 88
#define _STRINGS_H_ 
#define _MACHINE_SETJMP_H_ 
#define KEY_RESIZE 0632
#define XK_aring 0x00e5
#define XT_CONVERT_FAIL (Atom)0x80000001
#define A_HORIZONTAL NCURSES_BITS(1UL,17)
#define OkPasswd(p) ((p)->pw_name != 0 && (p)->pw_name[0] != 0)
#define TIOCGDRAINWAIT _IOR('t', 86, int)
#define getstr(str) wgetstr(stdscr,str)
#define BitmapOpenFailed 1
#define __FBSDID(s) __IDSTRING(__CONCAT(__rcsid_,__LINE__),s)
#define XK_Thai_lakkhangyao 0x0de5
#define KEY_HELP 0553
#define DisplayString(dpy) (((_XPrivDisplay)dpy)->display_name)
#define TileShape 1
#define NAME_HP_KT 
#define XK_Cyrillic_HARDSIGN 0x06ff
#define XK_bracketleft 0x005b
#define XNPreeditAttributes "preeditAttributes"
#define XK_Hangul_Cieuc 0x0eba
#define CMIN 1
#define XtESouthWest "southwest"
#define AT_FDCWD -100
#define NMENUFONTS 9
#define WindowGroupHint (1L << 6)
#define _SC_MQ_PRIO_MAX 75
#define PSize (1L << 3)
#define XK_Cyrillic_SHA 0x06fb
#define DECL_ERRNO 1
#define COLOR_UL (NUM_ANSI_COLORS+1)
#define XK_eightsuperior 0x1002078
#define __INT_MAX 0x7fffffff
#define _SC_THREAD_ATTR_STACKSIZE 83
#define ALIGNED_POINTER(p,t) 1
#define TRACE_VIRTPUT 0x0040
#define TRACE_TRANS(name,w) 
#define NAME_VT220_KT " vt220"
#define XNR6PreeditCallback "r6PreeditCallback"
#define ERROR_INIGROUPS 28
#define RaiseLowest 0
#define SmcShutdownCancelledProcMask (1L << 3)
#define XNOrientation "orientation"
#define update_marginbell() 
#define XK_Greek_omegaaccent 0x07bb
#define DEFBLINKASBOLD False
#define XtCVisualBellDelay "VisualBellDelay"
#define XtNcjkWidth "cjkWidth"
#define XK_Lbelowdot 0x1001e36
#define NormalGC(w,sp) getCgsGC(w, WhichVWin(sp), gcNorm)
#define IceBadState 0x8001
#define ERROR_FORK 29
#define DontPreferBlanking 0
#define __SALC 0x4000
#define NAME_TCAP_KT 
#define mvchgat(y,x,n,a,c,o) mvwchgat(stdscr,y,x,n,a,c,o)
#define XK_Pointer_DblClick1 0xfeef
#define XK_Pointer_DblClick2 0xfef0
#define XK_Pointer_DblClick3 0xfef1
#define XK_Pointer_DblClick4 0xfef2
#define XtCShowMissingGlyphs "ShowMissingGlyphs"
#define KEY_CANCEL 0543
#define is_syncok(win) ((win)->_sync)
#define __DEC64_EPSILON__ 1E-15DD
#define XK_zstroke 0x10001b6
#define SmsSetPropertiesProcMask (1L << 7)
#define XK_Thai_dochada 0x0dae
#define mvwaddchstr(win,y,x,str) (wmove(win,y,x) == ERR ? ERR : waddchnstr(win,str,-1))
#define __DEC128_MIN_EXP__ (-6143)
#define NorthEastGravity 3
#define XK_braille_dots_34678 0x10028ec
#define XK_Thai_totao 0x0db5
#define XK_Hangul_SsangJieuj 0x0eb9
#define AsyncKeyboard 3
#define LO_BYTE(ch) CharOf((ch) & 0xff)
#define WLINUXCLONE 0x80000000
#define getsyx(y,x) do { if (newscr) { if (is_leaveok(newscr)) (y) = (x) = -1; else getyx(newscr,(y), (x)); } } while(0)
#define __va_copy(dest,src) __builtin_va_copy((dest), (src))
#define SIGSEGV 11
#define XIMReverse 1L
#define TTYDEF_OFLAG (OPOST | ONLCR)
#define XNFontSet "fontSet"
#define XK_dead_grave 0xfe50
#define _SC_MESSAGE_PASSING 33
#define _SYS_TIME_H_ 
#define XK_Thai_phophung 0x0dbc
#define XK_Greek_ETAaccent 0x07a3
#define getc_unlocked(fp) __sgetc(fp)
#define _SYS_TTYDEFAULTS_H_ 
#define btodb(bytes) (sizeof (bytes) > sizeof(long) ? (daddr_t)((unsigned long long)(bytes) >> DEV_BSHIFT) : (daddr_t)((unsigned long)(bytes) >> DEV_BSHIFT))
#define IceBadValue 0x8003
#define attron(at) wattron(stdscr,at)
#define TIOCM_SR 0020
#define SIG_DFL ((__sighandler_t *)0)
#define XK_Touroku 0xff2b
#define XtEForget "forget"
#define COLOR_RES2(name,class,offset,value) Sres(name, class, offset.resource, value)
#define validTtyChar(data,n) (known_ttyChars[n].sysMode >= 0 && known_ttyChars[n].sysMode < (int) XtNumber(data.c_cc))
#define XK_Tabovedot 0x1001e6a
#define _POSIX_THREAD_ATTR_STACKADDR 200112L
#define _PC_PATH_MAX 5
#define __x86_64__ 1
#define __SAPP 0x0100
#define PAGE_MASK (PAGE_SIZE-1)
#define _PID_T_DECLARED 
#define if_WIDE_OR_NARROW(screen,wide,narrow) narrow
#define XK_braille_dots_347 0x100284c
#define XC_xterm 152
#define XK_doubleacute 0x01bd
#define UsingRenderFont(xw) (((xw)->work.render_font == True) && !IsIcon(TScreenOf(xw)))
#define SIOCDIFPHYADDR _IOW('i', 73, struct ifreq)
#define KEY_PPAGE 0523
#define XtAllEvents ((EventMask) -1L)
#define DST_MET 4
#define _XtDimension Dimension
#define XK_Armenian_tsa 0x100056e
#define XK_hebrew_ayin 0x0cf2
#define NeedNestedPrototypes 1
#define XK_Armenian_tso 0x1000581
#define ESHUTDOWN 58
#define XK_sixsuperior 0x1002076
#define XK_ohornacute 0x1001edb
#define ACS_LARROW NCURSES_ACS(',')
#define XtCShutdownCommand ((char*)&XtShellStrings[1259])
#define _SC_TIMER_MAX 52
#define XK_KP_2 0xffb2
#define __INT_MIN (-0x7fffffff - 1)
#define XtExposeGraphicsExposeMerged 0x20
#define WA_NORMAL A_NORMAL
#define LC_COLLATE 1
#define XK_braille_dots_45 0x1002818
#define _SIZE_T_DECLARED 
#define _POSIX_THREADS 200112L
#define XK_dead_small_schwa 0xfe8a
#define XC_coffee_mug 28
#define XK_cuberoot 0x100221B
#define XtNchangeHook ((char*)&XtStrings[2061])
#define _PC_NO_TRUNC 8
#define F_SETOWN 6
#define ACS_BSSS ACS_TTEE
#define XK_ocircumflexacute 0x1001ed1
#define XK_Mae_Koho 0xff3e
#define __CTYPE_H_ 
#define XtNmodifyStringKeys "modifyStringKeys"
#define XK_ISO_Fast_Cursor_Left 0xfe2c
#define BUS_STK_FAULT T_STKFLT
#define included_version_h 
#define XtNselectToClipboard "selectToClipboard"
#define _PATH_PWD_MKDB "/usr/sbin/pwd_mkdb"
#define XK_notelementof 0x1002209
#define XK_Thai_leknung 0x0df1
#define XK_braille_dots_1345678 0x10028fd
#define XK_Cyrillic_ha_descender 0x10004b3
#define XK_Arabic_madda_above 0x1000653
#define XK_kana_A 0x04b1
#define TTYDISC 0
#define SIOCDIFADDR _IOW('i', 25, struct ifreq)
#define XK_kana_E 0x04b4
#define XK_kana_I 0x04b2
#define XK_kana_N 0x04dd
#define XtCHeight ((char*)&XtStrings[1051])
#define XK_kana_U 0x04b3
#define __DEC32_DEN__ 0.000001E-95DF
#define BUTTON_CTRL NCURSES_MOUSE_MASK(5, 0001L)
#define XK_kana_e 0x04aa
#define XK_kana_i 0x04a8
#define ReverseGC(w,sp) getCgsGC(w, WhichVWin(sp), gcNormReverse)
#define __ELF__ 1
#define ResizeRequest 25
#define OPT_SUN_FUNC_KEYS 1
#define XK_AudibleBell_Enable 0xfe7a
#define XK_ISO_Group_Shift 0xff7e
#define attr_off(a,o) wattr_off(stdscr,a,o)
#define nocrmode() nocbreak()
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS 2
#define __aligned(x) __attribute__((__aligned__(x)))
#define ScrnHaveColMargins(screen) ((screen)->rgt_marg > (screen)->max_col)
#define SIOCGIFMTU _IOWR('i', 51, struct ifreq)
#define XtNprecompose "precompose"
#define XtNsaveLines "saveLines"
#define DEF_MENU_LOCALE "C"
#define __fdset_mask(n) ((__fd_mask)1 << ((n) % _NFDBITS))
#define XK_Greek_alphaaccent 0x07b1
#define CSIZE 0x00000300
#define XtRWindow ((char*)&XtStrings[1895])
#define isdigit(c) __isctype((c), _CTYPE_D)
#define F_TLOCK 2
#define _XtShell_h 
#define CNUL 0
#define X_BIG_ENDIAN BIG_ENDIAN
#define __RCSID_SOURCE(s) __IDSTRING(__CONCAT(__rcsid_source_,__LINE__),s)
#define standout() wstandout(stdscr)
#define mvinstr(y,x,s) mvwinstr(stdscr,y,x,s)
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS 14
#define XK_Hangul_MultipleCandidate 0xff3d
#define GCClipYOrigin (1L<<18)
#define MAXCOMLEN 19
#define XK_Armenian_men 0x1000574
#define SIOCADDRT _IOW('r', 10, struct ortentry)
#define XK_notsign 0x00ac
#define __FLT_RADIX__ 2
#define ACS_SSSB ACS_LTEE
#define XK_braille_dots_145678 0x10028f9
#define NO_FDS {-1, -1}
#define B38400 38400
#define ACS_SSSS ACS_PLUS
#define ICE_AuthReply 4
#define IOC_IN 0x80000000
#define XK_hebrew_finalkaph 0x0cea
#define OPT_NUM_LOCK 1
#define XtCScrollBar "ScrollBar"
#define UF_NOUNLINK 0x00000010
#define XtNthickness ((char*)&XtStrings[772])
#define XtNcharClass "charClass"
#define XK_imacron 0x03ef
#define XK_Greek_etaaccent 0x07b3
#define XK_Thai_choching 0x0da9
#define RLIMIT_SBSIZE 9
#define NCURSES_EXT_FUNCS 20081102
#define X_LITTLE_ENDIAN LITTLE_ENDIAN
#define FillSolid 0
#define IceBadMinor 0x8000
#define LineFontWidth(screen,ld) (CSET_DOUBLE(GetLineDblCS(ld)) ? 2*FontWidth(screen) : FontWidth(screen))
#define JoinBevel 2
#define _IOWR(g,n,t) _IOC(IOC_INOUT, (g), (n), sizeof(t))
#define __FreeBSD__ 8
#define ClipByChildren 0
#define ERROR_EXEC 30
#define __section(x) __attribute__((__section__(x)))
#define RFMEM (1<<5)
#define SIZEOF(x) _SIZEOF(x)
#define A_INVIS NCURSES_BITS(1UL,15)
#define BUS_ADRALN 1
#define XtRDisplay ((char*)&XtStrings[1628])
#define XK_greater 0x003e
#define CURRENT_EMU_VAL(tek,vt) (TEK4014_ACTIVE(term) ? tek : vt)
#define ACS_PLMINUS NCURSES_ACS('g')
#define XK_oacute 0x00f3
#define XK_Georgian_shin 0x10010e8
#define F_TEST 3
#define XK_Hangul_SsangDikeud 0x0ea8
#define XNStatusDrawCallback "statusDrawCallback"
#define XK_hebrew_chet 0x0ce7
#define XK_dead_belowbreve 0xfe6b
#define XK_Armenian_GHAT 0x1000542
#define XtNlogFile "logFile"
#define XK_Hangul_SunkyeongeumPieub 0x0ef1
#define DEFLOCALEFILTER2(x) #x
#define EPROTO 92
#define XtEnotUseful "notUseful"
#define _POSIX_TIMEOUTS 200112L
#define BUTTON_DOUBLE_CLICK(e,x) ((e) & NCURSES_MOUSE_MASK(x, 010))
#define XtRObject ((char*)&XtStrings[1735])
#define PAllHints (PPosition|PSize|PMinSize|PMaxSize|PResizeInc|PAspect)
#define XtNinnerWidth ((char*)&XtStrings[303])
#define S_IRUSR 0000400
#define SIGPIPE 13
#define XK_Arabic_peh 0x100067e
#define HAVE_X11_XF86KEYSYM_H 0
#define TIOCGPTN _IOR('t', 15, int)
#define _SC_THREAD_PROCESS_SHARED 90
#define UCHAR_MAX __UCHAR_MAX
#define XK_braille_dots_123568 0x10028b7
#define PMinSize (1L << 4)
#define __X_FDS_BITS fds_bits
#define SIOCGPGRP _IOR('s', 9, int)
#define RLIMIT_CORE 4
#define XK_Thai_saraaa 0x0dd2
#define XK_Thai_saraae 0x0de1
#define XK_Thai_saraam 0x0dd3
#define Above 0
#define PRIMASK 0x0ff
#define OPT_LOAD_VTFONTS 0
#define XK_Greek_chi 0x07f7
#define XK_Serbian_DJE 0x06b1
#define IsFunctionKey(keysym) (((KeySym)(keysym) >= XK_F1) && ((KeySym)(keysym) <= XK_F35))
#define XK_Armenian_VYUN 0x1000552
#define NCURSES_MOUSE_MASK(b,m) ((m) << (((b) - 1) * 6))
#define XK_KP_Add 0xffab
#define XK_eng 0x03bf
#define XK_Thai_soso 0x0dab
#define XK_Cyrillic_O_bar 0x10004e8
#define XtCRenderFont "RenderFont"
#define XK_braille_dots_24678 0x10028ea
#define XtNmarginBell "marginBell"
#define KEY_SMESSAGE 0612
#define XK_Thai_chochan 0x0da8
#define XK_hebrew_nun 0x0cf0
#define XK_Shift_L 0xffe1
#define IsCursorKey(keysym) (((KeySym)(keysym) >= XK_Home) && ((KeySym)(keysym) < XK_Select))
#define _INT16_T_DECLARED 
#define XTTYMODE_stop 8
#define XtREnvironmentArray ((char*)&XtStrings[2160])
#define _POSIX_IPV6 0
#define XK_Ybelowdot 0x1001ef4
#define TRACE_ORDINARY 0x001F
#define TekScale(screen) WhichTWin(screen)->tekscale
#define DefaultDepthOfScreen(s) ((s)->root_depth)
#define XK_braille_dots_138 0x1002885
#define ImageByteOrder(dpy) (((_XPrivDisplay)dpy)->byte_order)
#define XtNmodifyKeypadKeys "modifyKeypadKeys"
#define BUTTON4_RELEASED NCURSES_MOUSE_MASK(4, NCURSES_BUTTON_RELEASED)
#define XK_Greek_ALPHAaccent 0x07a1
#define XK_Ntilde 0x00d1
#define LockMask (1<<1)
#define XNFontInfo "fontInfo"
#define Tres(name,class,offset,dftvalue) COLOR_RES2(name, class, screen.Tcolors[offset], dftvalue)
#define XK_ISO_Continuous_Underline 0xfe30
#define XK_Arabic_meem 0x05e5
#define getXtermForeground(xw,flags,color) (((flags) & FG_COLOR) && ((int)(color) >= 0 && (color) < MAXCOLORS) ? GET_COLOR_RES(xw, TScreenOf(xw)->Acolors[color]) : T_COLOR(TScreenOf(xw), TEXT_FG))
#define XK_sabovedot 0x1001e61
#define XK_Shift_R 0xffe2
#define XK_Armenian_INI 0x100053b
#define XtNhighlight ((char*)&XtStrings[241])
#define W_OK 0x02
#define XK_braille_dots_123 0x1002807
#define XK_braille_dots_124 0x100280b
#define XK_braille_dots_125 0x1002813
#define XK_braille_dots_127 0x1002843
#define XK_braille_dots_128 0x1002883
#define RLIMIT_RSS 5
#define vline(ch,n) wvline(stdscr, ch, n)
#define XK_Thai_phophan 0x0dbe
#define XtNxmcGlitch "xmcGlitch"
#define ERROR_FIONBIO 11
#define XtCHighlightSelection "HighlightSelection"
#define XtRUnsignedChar ((char*)&XtStrings[1828])
#define XtNtransient ((char*)&XtShellStrings[166])
#define KEY_OPTIONS 0561
#define O_CREAT 0x0200
#define NotUseful 0
#define _CLOCK_T_DECLARED 
#define _SYS_SYSLIMITS_H_ 
#define AllowWindowOps(w,name) (AllowXtermOps(w, allowWindowOps) || SpecialWindowOps(w,name))
#define XK_braille_dots_134 0x100280d
#define XK_braille_dots_135 0x1002815
#define XK_braille_dots_136 0x1002825
#define XK_braille_dots_137 0x1002845
#define XK_Ohornbelowdot 0x1001ee2
#define ENODEV 19
#define XC_boat 8
#define __SCHAR_MAX 0x7f
#define XK_semivoicedsound 0x04df
#define XK_emacron 0x03ba
#define XtCoreP_h 
#define XK_dead_doubleacute 0xfe59
#define is_notimeout(win) ((win)->_notimeout)
#define ACS_SSBB ACS_LLCORNER
#define XK_braille_dots_145 0x1002819
#define XK_braille_dots_146 0x1002829
#define XK_Ccaron 0x01c8
#define INT_MAX __INT_MAX
#define Button3MotionMask (1L<<10)
#define ScrnIsColInMargins(screen,col) ((col) >= (screen)->lft_marg && (col) <= (screen)->rgt_marg)
#define ULLONG_MAX __ULLONG_MAX
#define XtNtrimSelection "trimSelection"
#define XK_Imacron 0x03cf
#define USE_TERMCAP 1
#define XK_Georgian_par 0x10010de
#define XK_Thai_maiyamok 0x0de6
#define XtCTrimSelection "TrimSelection"
#define XK_Cyrillic_sha 0x06db
#define LONG64 
#define XK_Pointer_DfltBtnPrev 0xfefc
#define _POSIX_MONOTONIC_CLOCK 200112L
#define XtNsessionID ((char*)&XtShellStrings[1223])
#define XK_braille_dots_3 0x1002804
#define XtNiconNameEncoding ((char*)&XtShellStrings[246])
#define XK_braille_dots_156 0x1002831
#define XK_braille_dots_157 0x1002851
#define ERROR_XIOERROR 84
#define IceBadMajor 0
#define XK_Acircumflexhook 0x1001ea8
#define XK_Hangul_SsangSios 0x0eb6
#define XK_eth 0x00f0
#define _SC_2_PBS_ACCOUNTING 60
#define O_DIRECT 0x00010000
#define XK_Henkan 0xff23
#define XK_Yhook 0x1001ef6
#define XtNcallback ((char*)&XtStrings[136])
#define POLL_OUT 2
#define XK_braille_dots_6 0x1002820
#define COLOR_YELLOW 3
#define XK_rcaron 0x01f8
#define XtNretryInputMethod "retryInputMethod"
#define XK_braille_dots_7 0x1002840
#define winsstr(w,s) winsnstr(w, s, -1)
#define XtNformatOtherKeys "formatOtherKeys"
#define XtCEnvironment ((char*)&XtShellStrings[1028])
#define MINSIGSTKSZ __MINSIGSTKSZ
#define XK_braille_dots_167 0x1002861
#define __UINT_MAX 0xffffffffU
#define XK_cent 0x00a2
#define XK_braille_dots_8 0x1002880
#define cvtINT8toInt(val) (val)
#define __FLT_HAS_QUIET_NAN__ 1
#define bkgdset(ch) wbkgdset(stdscr,ch)
#define XtRStringArray ((char*)&XtStrings[1804])
#define _SC_THREAD_ATTR_STACKADDR 82
#define AllowXtermOps(w,name) (TScreenOf(w)->name && !TScreenOf(w)->allowSendEvents)
#define _POSIX_TRACE_INHERIT -1
#define ERROR_OPDEVTTY 14
#define XK_twosuperior 0x00b2
#define XK_udoubleacute 0x01fb
#define XK_braille_dots_178 0x10028c1
#define WA_UNDERLINE A_UNDERLINE
#define XIMPreeditNothing 0x0008L
#define XtIMXEvent 1
#define S_ISUID 0004000
#define XK_Dabovedot 0x1001e0a
#define XK_ISO_Lock 0xfe01
#define _PC_SYNC_IO 55
#define __dead2 __attribute__((__noreturn__))
#define va_copy(dest,src) __va_copy(dest, src)
#define XK_Arabic_zain 0x05d2
#define VAL_LINE_SPEED B38400
#define MAXPTTYS 2048
#define XK_acircumflexbelowdot 0x1001ead
#define XK_Ehook 0x1001eba
#define _SC_SEM_NSEMS_MAX 49
#define __FLT_HAS_INFINITY__ 1
#define XK_Greek_iotadieresis 0x07b5
#define SIOCGLIFPHYADDR _IOWR('i', 75, struct if_laddrreq)
#define mvwinnstr(win,y,x,s,n) (wmove(win,y,x) == ERR ? ERR : winnstr(win,s,n))
#define _FFLAGS_T_DECLARED 
#define XIMPreeditUnKnown 0L
#define FullHeight(screen) WhichVWin(screen)->fullheight
#define TIOCM_CTS 0040
#define FIODTYPE _IOR('f', 122, int)
#define WidthValue 0x0004
#define SIGXFSZ 25
#define A_VERTICAL NCURSES_BITS(1UL,22)
#define SIGHUP 1
#define IceProtoMajor 1
#define XC_box_spiral 20
#define XNStdColormap "stdColorMap"
#define mvwinchnstr(win,y,x,s,n) (wmove(win,y,x) == ERR ? ERR : winchnstr(win,s,n))
#define _PWF_EXPIRE _PWF(9)
#define NotifyVirtual 1
#define XK_ISO_Partial_Space_Right 0xfe26
#define NULL ((void *)0)
#define XK_braille_dots_135678 0x10028f5
#define XtCPrecompose "Precompose"
#define IsXtermWidget(w) (XtClass(w) == xtermWidgetClass)
#define XtNscrollProc ((char*)&XtStrings[591])
#define XtNiconY ((char*)&XtShellStrings[405])
#define KEY_RIGHT 0405
#define SIOCALIFADDR _IOW('i', 27, struct if_laddrreq)
#define AT_SYMLINK_NOFOLLOW 0x200
#define BadAccess 10
#define E2BIG 7
#define SIGRTMAX 126
#define XK_Thai_phosamphao 0x0dc0
#define PlanesOfScreen(s) ((s)->root_depth)
#define PointerRoot 1L
#define IsKeypadKey(keysym) (((KeySym)(keysym) >= XK_KP_Space) && ((KeySym)(keysym) <= XK_KP_Equal))
#define BIG_ENDIAN _BIG_ENDIAN
#define __SCHAR_MIN (-0x7f - 1)
#define WA_BOLD A_BOLD
#define _PW_KEYBYUID '\x33'
#define XK_Hangul_J_RieulTieut 0x0ee0
#define XK_zacute 0x01bc
#define SM_CloseConnection 11
#define W_STOPCODE(sig) ((sig) << 8 | _WSTOPPED)
#define O_ASYNC 0x0040
#define CFLUSH CDISCARD
#define XtNmenuBar "menuBar"
#define ECHOPRT 0x00000020
#define disableSetGid() 
#define _STDBOOL_H_ 
#define FontWidth(screen) WhichVWin(screen)->f_width
#define KEY_EVENT 0633
#define INT_MIN __INT_MIN
#define XtCMaxAspectX ((char*)&XtShellStrings[742])
#define XtCMaxAspectY ((char*)&XtShellStrings[698])
#define NCURSES_TPARM_VARARGS 1
#define JoinMiter 0
#define B200 200
#define _PATH_MP_DB "/etc/pwd.db"
#define _UINT64_T_DECLARED 
#define XtCShiftFonts "ShiftFonts"
#define XkbBI_MarginBell 10
#define IXON 0x00000200
#define EXTA 19200
#define XK_Ukrainian_ghe_with_upturn 0x06ad
#define TWidth(screen) WhichTWin(screen)->width
#define XK_Armenian_BEN 0x1000532
#define _FTRUNCATE_DECLARED 
#define EXTB 38400
#define XtNcursorColor "cursorColor"
#define GCStipple (1L<<11)
#define A_CHARTEXT (NCURSES_BITS(1UL,0) - 1UL)
#define XK_amacron 0x03e0
#define _SC_MEMORY_PROTECTION 32
#define _tracech_t _tracechtype
#define _LWPID_T_DECLARED 
#define winsertln(win) winsdelln(win,1)
#define XK_Thai_chochoe 0x0dac
#define B57600 57600
#define XtCKnobIndent ((char*)&XtStrings[1130])
#define XtCCdXtraScroll "CdXtraScroll"
#define XK_Hangul_J_NieunHieuh 0x0ed9
#define A_COLOR NCURSES_BITS(((1UL) << 8) - 1UL,0)
#define OPT_VT52_MODE 1
#define HN_B 0x04
#define DEF_ALLOW_COLOR True
#define __XSTRING(x) __STRING(x)
#define IGNBRK 0x00000001
#define XtNinitialFont "initialFont"
#define getyx(win,y,x) (y = getcury(win), x = getcurx(win))
#define _XOSDEFS_H_ 
#define XK_KP_Divide 0xffaf
#define XK_Serbian_DZE 0x06bf
#define CLICK_RES_CLASS(count) "On" count "Clicks"
#define ENOTDIR 20
#define NULLSTRING ((XrmString) 0)
#define XtCvtIntToPosition XtCvtIntToShort
#define SEEK_HOLE 4
#define TIMER_ABSTIME 0x1
#define _PC_CAP_PRESENT 61
#define XK_ocircumflexhook 0x1001ed5
#define XtNlogInhibit "logInhibit"
#define XtHsetKeyboardFocus ((char*)&XtStrings[2469])
#define _NET_WM_STATE_ADD 1
#define XK_braille_dots_123578 0x10028d7
#define _SIG_VALID(sig) ((sig) <= _SIG_MAXSIG && (sig) > 0)
#define XtNallowColorOps "allowColorOps"
#define XtCAllowColorOps "AllowColorOps"
#define KEY_STAB 0524
#define ECONNRESET 54
#define XtNtekInhibit "tekInhibit"
#define CurrentTime 0L
#define XK_KP_0 0xffb0
#define XK_KP_1 0xffb1
#define XK_KP_3 0xffb3
#define XK_KP_5 0xffb5
#define XK_KP_6 0xffb6
#define XK_KP_7 0xffb7
#define XK_KP_9 0xffb9
#define RectangleIn 1
#define XK_Eisu_toggle 0xff30
#define BlackPixel(dpy,scr) (ScreenOfDisplay(dpy,scr)->black_pixel)
#define XK_diaeresis 0x00a8
#define SEGV_ACCERR 2
#define XtCX ((char*)&XtStrings[1523])
#define XtCY ((char*)&XtStrings[1525])
#define XK_Ytilde 0x1001ef8
#define XK_agrave 0x00e0
#define SIGSTOP 17
#define ENXIO 6
#define XK_Greek_zeta 0x07e6
#define _SC_THREAD_CPUTIME 84
#define TIOCPKT_FLUSHREAD 0x01
#define XK_braille_dots_14678 0x10028e9
#define CLOCK_MONOTONIC 4
#define XtRInt ((char*)&XtStrings[1718])
#define EBADRPC 72
#define KBBellPitch (1L<<2)
#define XK_Thai_saraue 0x0dd6
#define ishexnumber(c) __sbistype((c), _CTYPE_X)
#define MaxCmapsOfScreen(s) ((s)->max_maps)
#define XK_Pointer_Up 0xfee2
#define XtInheritDisplayAccelerator ((XtStringProc) _XtInherit)
#define TRACE(p) 
#define Mod2MapIndex 4
#define XtNforceBoxChars "forceBoxChars"
#define XK_braille_dots_147 0x1002849
#define PDROP 0x200
#define SIGRTMIN 65
#define OPT_BOX_CHARS 1
#define XtCReverseWrap "ReverseWrap"
#define ReparentNotify 21
#define XtCForceBoxChars "ForceBoxChars"
#define ANSI_DCS 0x90
#define XK_braille_dots_148 0x1002889
#define DefaultRootWindow(dpy) (ScreenOfDisplay(dpy,DefaultScreen(dpy))->root)
#define ICE_ConnectionReply 6
#define XtOffsetOf(s_type,field) offsetof(s_type,field)
#define XK_ucircumflex 0x00fb
#define XtREditMode ((char*)&XtStrings[1636])
#define XK_brokenbar 0x00a6
#define getparx(win) ((win) ? (win)->_parx : ERR)
#define XK_kana_switch 0xff7e
#define XK_sterling 0x00a3
#define XK_exclamdown 0x00a1
#define L_XTND SEEK_END
#define getpary(win) ((win) ? (win)->_pary : ERR)
#define XtHsetValues ((char*)&XtStrings[2207])
#define XK_Cyrillic_U_straight_bar 0x10004b0
#define ConnectionNumber(dpy) (((_XPrivDisplay)dpy)->fd)
#define XK_Ncaron 0x01d2
#define included_trace_h 
#define XtCScrollCond "ScrollCond"
#define XK_Zenkaku 0xff28
#define XK_Greek_upsilondieresis 0x07b9
#define XK_onesubscript 0x1002081
#define XK_Cyrillic_IE 0x06e5
#define FAPPEND O_APPEND
#define MAXDUMPPGS (DFLTPHYS/PAGE_SIZE)
#define UIOCCMD(n) _IO('u', n)
#define ANSI_DEL 0x7F
#define SizeOfLineData offsetof(LineData, combData)
#define CP_IDLE 4
#define TAB_BITS_SHIFT 5
#define _POSIX2_PBS_LOCATE -1
#define XK_Pointer_DownRight 0xfee7
#define XT_REVISION 6
#define XtCEightBitSelectTypes "EightBitSelectTypes"
#define __BEGIN_DECLS 
#define mvgetstr(y,x,str) mvwgetstr(stdscr,y,x,str)
#define __LDBL_MANT_DIG__ 64
#define XC_circle 24
#define TIOCM_ST 0010
#define UTMP_FILENAME "/etc/utmp"
#define mvaddchnstr(y,x,str,n) mvwaddchnstr(stdscr,y,x,str,n)
#define XK_ediaeresis 0x00eb
#define S_IFSOCK 0140000
#define GXorInverted 0xd
#define __SSE__ 1
#define __SRD 0x0004
#define _XRESOURCE_H_ 
#define XK_Greek_theta 0x07e8
#define XK_Hangul_J_Tieut 0x0eec
#define __SIGN 0x8000
#define RFENVG (1<<1)
#define XK_Thai_leksong 0x0df2
#define false 0
#define POLL_HUP 4
#define XtNdisallowedWindowOps "disallowedWindowOps"
#define XK_ISO_Fast_Cursor_Right 0xfe2d
#define BadCursor 6
#define CSET_EXTEND(code) ((int)(code) > CSET_DWL)
#define __GNUC_VA_LIST 
#define XK_hebrew_samech 0x0cf1
#define RLIMIT_NOFILE 8
#define XK_Arabic_khah 0x05ce
#define OPT_PRINT_COLORS 1
#define XtNbrokenLinuxOSC "brokenLinuxOSC"
#define XtUnspecifiedWindowGroup ((Window)3)
#define XK_Thai_maitaikhu 0x0de7
#define XK_Cyrillic_BE 0x06e2
#define getbkgd(win) ((win)->_bkgd)
#define _XOPEN_REALTIME -1
#define XK_cabovedot 0x02e5
#define NotifyNormal 0
#define KEY_PREVIOUS 0562
#define TIOCGETD _IOR('t', 26, int)
#define I_SIGNAL 0x02
#define _X_HIDDEN __attribute__((visibility("hidden")))
#define CirculateRequest 27
#define if_OPT_DEC_CHRSET(code) code
#define FILENAME_MAX 1024
#define XLookupChars 2
#define KEY_SEXIT 0604
#define XK_abrevehook 0x1001eb3
#define PROTO_XT_SEL_CB_ARGS (Widget w, XtPointer client_data, Atom *selection, Atom *type, XtPointer value, unsigned long *length, int *format)
#define XK_Uacute 0x00da
#define UCS_REPL 0xfffd
#define __k8__ 1
#define XtCValue ((char*)&XtStrings[1497])
#define XK_Hangul_AraeA 0x0ef6
#define XtCHSpace ((char*)&XtStrings[1058])
#define _MKDTEMP_DECLARED 
#define XK_Cyrillic_DE 0x06e4
#define XK_hebrew_resh 0x0cf8
#define NBBY 8
#define T_PROTFLT 9
#define XtCFreeBoldBox "FreeBoldBox"
#define FALSE 0
#define SIOCGETVIFCNT _IOWR('r', 15, struct sioc_vif_req)
#define XK_Cyrillic_lje 0x06a9
#define XtCVSpace ((char*)&XtStrings[1503])
#define _POSIX_MEMLOCK_RANGE 200112L
#define XK_periodcentered 0x00b7
#define IceFatalToProtocol 1
#define XK_Greek_delta 0x07e4
#define XC_bogosity 10
#define NCURSES_VERSION_MINOR 7
#define XK_ISO_Discontinuous_Underline 0xfe31
#define SmCurrentDirectory "CurrentDirectory"
#define XK_Cyrillic_EF 0x06e6
#define XtNbitmap ((char*)&XtStrings[80])
#define CONTROL(a) (A2E(E2A(a)&037))
#define XK_Cyrillic_EL 0x06ec
#define XK_Cyrillic_EM 0x06ed
#define XK_Cyrillic_EN 0x06ee
#define XC_right_ptr 94
#define XK_Cyrillic_ES 0x06f3
#define OPT_COLOR_RES 1
#define XK_gbreve 0x02bb
#define NotifyWhileGrabbed 3
#define ACS_BTEE NCURSES_ACS('v')
#define __volatile volatile
#define ControlMask (1<<2)
#define _MKNOD_DECLARED 
#define Button1MotionMask (1L<<8)
#define XK_Cyrillic_YERU 0x06f9
#define BKVAMASK (BKVASIZE-1)
#define SIGALRM 14
#define XK_ISO_Release_Margin_Right 0xfe2a
#define RES_CLASS(name) name
#define XtCFunction ((char*)&XtStrings[1042])
#define _SC_CLOCK_SELECTION 67
#define XtCTransientFor ((char*)&XtShellStrings[233])
#define TIOCPKT_STOP 0x04
#define HostDelete 1
#define SI_ASYNCIO 0x10004
#define XtNx ((char*)&XtStrings[885])
#define XtNy ((char*)&XtStrings[887])
#define CACHE_LINE_SIZE (1 << CACHE_LINE_SHIFT)
#define XNPreeditStartCallback "preeditStartCallback"
#define FillStippled 2
#define XK_Thai_kokai 0x0da1
#define XtNautoWrap "autoWrap"
#define TMODE(ind,var) if (ttymodelist[ind].set) var = (cc_t) ttymodelist[ind].value
#define NCURSES_ENABLE_STDBOOL_H 1
#define EADDRNOTAVAIL 49
#define NoEventMask 0L
#define ReleaseByFreeingColormap ((XID) 1L)
#define DEF_BACKARO_ERASE False
#define TFullHeight(screen) WhichTWin(screen)->fullheight
#define XK_Thai_moma 0x0dc1
#define _MKTEMP_DECLARED 
#define XK_Greek_rho 0x07f1
#define __FLT_DIG__ 6
#define HeightValue 0x0008
#define XK_dead_belowring 0xfe67
#define XK_Arabic_switch 0xff7e
#define F_UNLCKSYS 4
#define XK_Greek_DELTA 0x07c4
#define XtInheritQueryGeometry ((XtGeometryHandler) _XtInherit)
#define RetainPermanent 1
#define HeightOfScreen(s) ((s)->height)
#define PDPMASK (NBPDP-1)
#define XYBitmap 0
#define XNOMAutomatic "omAutomatic"
#define XK_Thai_lu 0x0dc6
#define XC_sb_down_arrow 106
#define NPDEPG (PAGE_SIZE/(sizeof (pd_entry_t)))
#define XK_Cyrillic_IO 0x06b3
#define _RUNETYPE_H_ 
#define TIOCFLUSH _IOW('t', 16, int)
#define BITS2MASK(b) ((1 << b) - 1)
#define XK_braceleft 0x007b
#define XK_kana_RA 0x04d7
#define XK_hebrew_samekh 0x0cf1
#define XK_Armenian_DZA 0x1000541
#define XtCUtf8Fonts "Utf8Fonts"
#define STDIN_FILENO 0
#define XK_braille_dots_1357 0x1002855
#define BUTTON4_TRIPLE_CLICKED NCURSES_MOUSE_MASK(4, NCURSES_TRIPLE_CLICKED)
#define __INT_MAX__ 2147483647
#define XtCGeometry ((char*)&XtShellStrings[478])
#define T_MCHK 28
#define XK_Cyrillic_JE 0x06b8
#define _POSIX_ADVISORY_INFO -1
#define XtCJumpScroll "JumpScroll"
#define mvwinsstr(win,y,x,s) (wmove(win,y,x) == ERR ? ERR : winsstr(win,s))
#define XtNmkSamplePass "mkSamplePass"
#define ParentRelative 1L
#define SGR_MASK (BOLD | BLINK | UNDERLINE | INVERSE)
#define XK_Etilde 0x1001ebc
#define XNSpotLocation "spotLocation"
#define XK_Macedonia_kje 0x06ac
#define MJUM9BYTES (9 * 1024)
#define S_IWOTH 0000002
#define XtCFormatOtherKeys "FormatOtherKeys"
#define XtCHpLowerleftBugCompat "HpLowerleftBugCompat"
#define si_band _reason._poll._band
#define NPDPEPGSHIFT 9
#define NINPUTWIDGETS 3
#define WAIT_ANY (-1)
#define HUPCL 0x00004000
#define IconicState 3
#define XK_Cyrillic_KA 0x06eb
#define EnableAccess 1
#define XK_braille_dots_3678 0x10028e4
#define JoinRound 1
#define FREAD 0x0001
#define DBLCS_MASK BITS2MASK(DBLCS_BITS)
#define KEY_SPREVIOUS 0616
#define XK_Macedonia_GJE 0x06b2
#define getmaxyx(win,y,x) (y = getmaxy(win), x = getmaxx(win))
#define XK_kana_RI 0x04d8
#define XK_abrevegrave 0x1001eb1
#define LLONG_MAX __LLONG_MAX
#define OCRNL 0x00000010
#define ERROR_TIOCKSETC 47
#define XtNshowMissingGlyphs "showMissingGlyphs"
#define FamilyChaos 2
#define BadColor 12
#define XtCWaitforwm ((char*)&XtShellStrings[803])
#define XtNconfigureHook ((char*)&XtStrings[2072])
#define Below 1
#define ZoomState 2
#define XK_Hangul_RieulHieuh 0x0eb0
#define XK_kana_middledot 0x04a5
#define XK_ISO_Set_Margin_Left 0xfe27
#define EIO 5
#define SIOCGIFNETMASK _IOWR('i', 37, struct ifreq)
#define XtNscrollUCursor ((char*)&XtStrings[658])
#define XK_dead_diaeresis 0xfe57
#define XK_Ibelowdot 0x1001eca
#define XTTYMODE_eof 4
#define XtCScrollUCursor ((char*)&XtStrings[1347])
#define XtNcdXtraScroll "cdXtraScroll"
#define TRACE_HINTS(hints) 
#define ENETUNREACH 51
#define EXDEV 18
#define LastKnownRequestProcessed(dpy) (((_XPrivDisplay)dpy)->last_request_read)
#define _SC_PHYS_PAGES 121
#define XC_sizing 120
#define NotifyPointerRoot 6
#define BSD4_3 1
#define BSD4_4 1
#define cvtINT16toInt(val) (val)
#define _PC_INF_PRESENT 62
#define _SC_ADVISORY_INFO 65
#define __strong_reference(sym,aliassym) extern __typeof (sym) aliassym __attribute__ ((__alias__ (#sym)))
#define S_IRGRP 0000040
#define XK_Hiragana_Katakana 0xff27
#define XK_Arabic_seen 0x05d3
#define YNegative 0x0020
#define TIOCPKT _IOW('t', 112, int)
#define ExposureMask (1L<<15)
#define TTYDEF_LFLAG TTYDEF_LFLAG_ECHO
#define NCURSES_OPAQUE 0
#define _PWD_CURRENT_VERSION '\x04'
#define CLNEXT CTRL('V')
#define inchnstr(s,n) winchnstr(stdscr,s,n)
#define XK_GEORGIAN 
#define XK_Thai_ru 0x0dc4
#define _SYS_TIMESPEC_H_ 
#define LineTstWrapped(ld) LineTstFlag(ld, LINEWRAPPED)
#define XTTYMODE_eol 5
#define InputOutput 1
#define XK_Arabic_beh 0x05c8
#define XC_draped_box 48
#define XtRFloat ((char*)&XtStrings[1655])
#define XK_Arabic_hamza_above 0x1000654
#define VSTATUS 18
#define XK_sevensubscript 0x1002087
#define XtCRestartStyle ((char*)&XtShellStrings[1176])
#define XtNdynamicColors "dynamicColors"
#define XNHotKeyState "hotKeyState"
#define INSERT MiscBIT(5)
#define for_each_gc(n) for (n = gcNorm; n < gcMAX; ++n)
#define XtCDynamicColors "DynamicColors"
#define XK_Cyrillic_PE 0x06f0
#define XK_kana_fullstop 0x04a1
#define __WINT_TYPE__ int
#define EDQUOT 69
#define XtNtoolBar "toolBar"
#define SIOCSIFNAME _IOW('i', 40, struct ifreq)
#define STDOUT_FILENO 1
#define NCURSES_VERSION_MAJOR 5
#define XC_spider 122
#define Complex 0
#define XtCBrokenLinuxOSC "BrokenLinuxOSC"
#define XK_icircumflex 0x00ee
#define XtCWideChars "WideChars"
#define TypeMalloc(type) TypeMallocN(type, 1)
#define XK_obarred 0x1000275
#define XtREnum ((char*)&XtStrings[1645])
#define DefaultColormap(dpy,scr) (ScreenOfDisplay(dpy,scr)->cmap)
#define XtExposeNoExpose 0x40
#define XK_Armenian_yentamna 0x100058a
#define XK_braille_dots_345678 0x10028fc
#define XK_dead_A 0xfe81
#define XK_dead_E 0xfe83
#define XtCFont ((char*)&XtStrings[1017])
#define XK_dead_I 0xfe85
#define XK_dead_O 0xfe87
#define XK_Down 0xff54
#define Cres(name,class,offset,dftvalue) {RES_NAME(name), RES_CLASS(class), XtRPixel, sizeof(Pixel), RES_OFFSET(offset), XtRString, (XtPointer) dftvalue}
#define XK_dead_U 0xfe89
#define F_LOCK 1
#define XK_ohorntilde 0x1001ee1
#define XK_dead_a 0xfe80
#define XK_dead_e 0xfe82
#define isset(a,i) (((const unsigned char *)(a))[(i)/NBBY] & (1<<((i)%NBBY)))
#define XK_dead_i 0xfe84
#define XtCQuietGrab "QuietGrab"
#define XK_dead_o 0xfe86
#define WCOREFLAG 0200
#define CHARBYCHAR DrawBIT(4)
#define XK_dead_u 0xfe88
#define ENOSPC 28
#define EPROCUNAVAIL 76
#define OPT_SUNPC_KBD 1
#define ToolbarHeight(w) 0
#define ENOEXEC 8
#define XIMStringConversionTopEdge (0x00000004)
#define XK_degree 0x00b0
#define __sym_compat(sym,impl,verid) __asm__(".symver " #impl ", " #sym "@" #verid)
#define XtInheritExpose ((XtExposeProc) _XtInherit)
#define _POSIX_THREAD_PRIO_INHERIT 200112L
#define EOF (-1)
#define S_IXUSR 0000100
#define B0 0
#define getmaxx(win) ((win) ? ((win)->_maxx + 1) : ERR)
#define ExtractBackground(color) (unsigned) GetCellColorBG(color)
#define XtNvisualBellLine "visualBellLine"
#define XK_ocircumflextilde 0x1001ed7
#define RectanglePart 2
#define ENETRESET 52
#define XK_Racute 0x01c0
#define S_ISREG(m) (((m) & 0170000) == 0100000)
#define XtNwidth ((char*)&XtStrings[872])
#define MotionOn(s,t) { (s)->event_mask &= ~ButtonMotionMask; (s)->event_mask |= PointerMotionMask; XSelectInput(XtDisplay((t)), XtWindow((t)), (long) (s)->event_mask); }
#define UIntSet(dst,bits) dst = dst | (unsigned) (bits)
#define PROTO_XT_CVT_SELECT_ARGS (Widget w, Atom *selection, Atom *target, Atom *type, XtPointer *value, unsigned long *length, int *format)
#define XK_Cyrillic_TE 0x06f4
#define KEY_SNEXT 0614
#define XK_dead_perispomeni 0xfe53
#define SIG_ATOMIC_T int
#define CLOCK_MONOTONIC_FAST 12
#define SV_ONSTACK SA_ONSTACK
#define XtNveryBoldColors "veryBoldColors"
#define SIGTSTP 18
#define ACS_LRCORNER NCURSES_ACS('j')
#define XK_Odiaeresis 0x00d6
#define WA_RIGHT A_RIGHT
#define KBLed (1L<<4)
#define _OPTRESET_DECLARED 
#define XtNselectionArray ((char*)&XtStrings[696])
#define OPT_ISO_COLORS 1
#define XtCLength ((char*)&XtStrings[1157])
#define XK_Umacron 0x03de
#define SmcSaveYourselfProcMask (1L << 0)
#define MAX_DECID 525
#define RLIMIT_VMEM 10
#define XtRCursor ((char*)&XtStrings[1611])
#define _PW_KEYBYNUM '\x32'
#define USE_POSIX_WAIT 
#define DOUBLEHFONT DrawBIT(3)
#define _PTHREAD_T_DECLARED 
#define XK_hebrew_aleph 0x0ce0
#define _POSIX_SEMAPHORES -1
#define RLIMIT_FSIZE 1
#define ctob(x) ((x)<<PAGE_SHIFT)
#define XNQueryInputStyle "queryInputStyle"
#define XtRFontStruct ((char*)&XtStrings[1666])
#define __DBL_EPSILON__ 2.2204460492503131e-16
#define BadImplementation 17
#define XK_Arabic_hamzaunderalef 0x05c5
#define UNDERLINE AttrBIT(1)
#define XtNeightBitOutput "eightBitOutput"
#define L_SET SEEK_SET
#define XtNc132 "c132"
#define XK_Cyrillic_VE 0x06f7
#define EFTYPE 79
#define ERR (-1)
#define GCTileStipXOrigin (1L<<12)
#define EDOM 33
#define XK_Georgian_ban 0x10010d1
#define XtNparameter ((char*)&XtStrings[517])
#define mvaddch(y,x,ch) mvwaddch(stdscr,y,x,ch)
#define XFD_ANYSET(p) ((howmany(FD_SETSIZE, NFDBITS) > 0 && (__XFDS_BITS(p, 0))) || (howmany(FD_SETSIZE, NFDBITS) > 1 && (__XFDS_BITS(p, 1))) || (howmany(FD_SETSIZE, NFDBITS) > 2 && (__XFDS_BITS(p, 2))) || (howmany(FD_SETSIZE, NFDBITS) > 3 && (__XFDS_BITS(p, 3))) || (howmany(FD_SETSIZE, NFDBITS) > 4 && (__XFDS_BITS(p, 4))) || (howmany(FD_SETSIZE, NFDBITS) > 5 && (__XFDS_BITS(p, 5))) || (howmany(FD_SETSIZE, NFDBITS) > 6 && (__XFDS_BITS(p, 6))) || (howmany(FD_SETSIZE, NFDBITS) > 7 && (__XFDS_BITS(p, 7))))
#define B134 134
#define addch(ch) waddch(stdscr,ch)
#define __INTMAX_MAX__ 9223372036854775807L
#define __sym_default(sym,impl,verid) __asm__(".symver " #impl ", " #sym "@@" #verid)
#define XK_Hangul_RieulYeorinHieuh 0x0eef
#define XK_Greek_XI 0x07ce
#define mvwchgat(win,y,x,n,a,c,o) (wmove(win,y,x) == ERR ? ERR : wchgat(win,n,a,c,o))
#define SyncBoth 7
#define XK_WonSign 0x10020a9
#define XK_Armenian_nu 0x1000576
#define RLIMIT_MEMLOCK 6
#define XtNkeepSelection "keepSelection"
#define fileno(p) (!__isthreaded ? __sfileno(p) : (fileno)(p))
#define getcurx(win) ((win) ? (win)->_curx : ERR)
#define getcury(win) ((win) ? (win)->_cury : ERR)
#define XK_Serbian_LJE 0x06b9
#define FamilyServerInterpreted 5
#define SIGKILL 9
#define XtNboldFont "boldFont"
#define T_TRCTRAP 10
#define ESRCH 3
#define DisableScreenSaver 0
#define _SC_REGEXP 77
#define H4DISC 7
#define EHOSTDOWN 64
#define XK_Greek_omega 0x07f9
#define SIOCIFDESTROY _IOW('i', 121, struct ifreq)
#define SEEK_END 2
#define XK_Sabovedot 0x1001e60
#define XK_Cyrillic_YA 0x06f1
#define SCROLLLINES 1
#define XtSpecificationRelease 6
#define TOSTOP 0x00400000
#define XNBackgroundPixmap "backgroundPixmap"
#define __GNUC_PATCHLEVEL__ 1
#define XtVersionDontCheck 0
#define XK_ISO_First_Group 0xfe0c
#define _PW_KEYBYNAME '\x31'
#define OPT_AIX_COLORS 1
#define XNStringConversionCallback "stringConversionCallback"
#define XtNstring ((char*)&XtStrings[733])
#define UF_IMMUTABLE 0x00000002
#define XK_Cyrillic_ZE 0x06fa
#define CLOCK_UPTIME_PRECISE 7
#define ScrnLeftMargin(xw) (IsLeftRightMode(xw) ? TScreenOf(xw)->lft_marg : 0)
#define XK_Hangul_End 0xff33
#define XtIsTopLevelShell(obj) (((Object)(obj))->object.widget_class->core_class.class_inited & 0x80)
#define FontDescent(screen) (IsIcon(screen) ? (screen)->fnt_icon.fs->descent : WhichVWin(screen)->f_descent)
#define HI_BYTE(ch) CharOf((ch) >> 8)
#define CQUIT CTRL('\\')
#define _PWF_DIR _PWF(7)
#define XK_dead_belowmacron 0xfe68
#define XTTYMODE_weras 14
#define XK_otilde 0x00f5
#define XK_wgrave 0x1001e81
#define XNInputStyle "inputStyle"
#define KEY_A1 0534
#define KEY_A3 0535
#define XtNallowBoldFonts "allowBoldFonts"
#define SIOCGIFSTATUS _IOWR('i', 59, struct ifstat)
#define CWBackingStore (1L<<6)
#define RLIMIT_NPTS 11
#define _CS_POSIX_V6_ILP32_OFF32_LIBS 4
#define XK_Greek_OMEGA 0x07d9
#define _SC_LOGIN_NAME_MAX 73
#define NCURSES_DOUBLE_CLICKED 010L
#define SA_RESTART 0x0002
#define ferror_unlocked(p) __sferror(p)
#define XtNtransientFor ((char*)&XtShellStrings[220])
#define XtHmapWidget ((char*)&XtStrings[2534])
#define PROTO_XT_EV_HANDLER_ARGS (Widget w, XtPointer closure, XEvent *event, Boolean *cont)
#define KEY_B2 0536
#define EAFNOSUPPORT 47
#define ScrollbarWidth(screen) WhichVWin(screen)->sb_info.width
#define SouthEastGravity 9
#define XK_iogonek 0x03e7
#define XIMStringConversionSubstitution (0x0001)
#define XtCBackingStore "BackingStore"
#define _SC_TIMERS 41
#define isCursorBlock(s) ((s)->cursor_shape == CURSOR_BLOCK)
#define REVERSEWRAP MiscBIT(1)
#define XK_braille_dots_45678 0x10028f8
#define TIOCM_LE 0001
#define XtNknobPixel ((char*)&XtStrings[409])
#define XK_Georgian_xan 0x10010ee
#define XK_Ecaron 0x01cc
#define XtNscrollBarBorder "scrollBarBorder"
#define GrabSuccess 0
#define KEY_C1 0537
#define KEY_C3 0540
#define _SYS_FCNTL_H_ 
#define DEFWIDEFONT NULL
#define XK_Left 0xff51
#define ButtonReleaseMask (1L<<3)
#define UF_APPEND 0x00000004
#define CWWinGravity (1L<<5)
#define TFullWidth(screen) WhichTWin(screen)->fullwidth
#define __DEQUALIFY(type,var) ((type)(uintptr_t)(const volatile void *)(var))
#define va_arg(ap,type) __builtin_va_arg((ap), type)
#define __LDBL_HAS_INFINITY__ 1
#define XK_braille_dots_12458 0x100289b
#define XtNfontDoublesize "fontDoublesize"
#define S_ISGID 0002000
#define GCBackground (1L<<3)
#define AssignMax(x,y) {if ((y) > (x)) x = (y);}
#define XK_braille_dots_4568 0x10028b8
#define KEY_DC 0512
#define IsIcon(screen) (WhichVWin(screen) == &(screen)->iconVwin)
#define XK_zabovedot 0x01bf
#define _SYS_TYPES_H_ 
#define NUM_CHRSET 8
#define ICE_Ping 9
#define XK_braille_dots_4578 0x10028d8
#define FIOSEEKHOLE _IOWR('f', 98, off_t)
#define ENOTSUP EOPNOTSUPP
#define XDestroyImage(ximage) ((*((ximage)->f.destroy_image))((ximage)))
#define _PC_ACL_EXTENDED 59
#define XK_Hangul_J_Dikeud 0x0eda
#define R_OK 0x04
#define FIONWRITE _IOR('f', 119, int)
#define XtHdestroy ((char*)&XtStrings[2639])
#define __packed __attribute__((__packed__))
#define TRACE_ATTRS 0x1000
#define VisibilityNotify 15
#define XtExtdefaultbackground ((char*)&XtStrings[1964])
#define XK_braille_dots_168 0x10028a1
#define OK (0)
#define CCTS_OFLOW 0x00010000
#define ON 1
#define XK_LATIN2 
#define XtRStringTable ((char*)&XtStrings[1816])
#define XtCFaceNameDoublesize "FaceNameDoublesize"
#define XtNrightScrollBar "rightScrollBar"
#define XK_Uhornbelowdot 0x1001ef0
#define XK_onesuperior 0x00b9
#define GrabModeSync 0
#define StaticGravity 10
#define CLD_DUMPED 3
#define _POSIX2_VERSION 199212L
#define ICRNL 0x00000100
#define XtCColor ((char*)&XtStrings[970])
#define XtNtekSmall "tekSmall"
#define WEXITSTATUS(x) (_W_INT(x) >> 8)
#define MAXDIMENSION ((1 << 31)-1)
#define _ICE_H_ 
#define XK_Armenian_ghat 0x1000572
#define wattr_get(win,a,p,opts) ((void)((a) != (void *)0 && (*(a) = (win)->_attrs)), (void)((p) != (void *)0 && (*(p) = PAIR_NUMBER((win)->_attrs))), OK)
#define ERROR_TINIT 64
#define XK_Greek_UPSILON 0x07d5
#define XtNbellSuppressTime "bellSuppressTime"
#define XK_Armenian_question 0x100055e
#define FOPEN_MAX 20
#define XtCAltIsNotMeta "AltIsNotMeta"
#define XtCVisualBellLine "VisualBellLine"
#define XK_Cyrillic_be 0x06c2
#define XK_dstroke 0x01f0
#define TRACE_TTYSIZE(fd,id) 
#define SMOOTHSCROLL MiscBIT(6)
#define A_BLINK NCURSES_BITS(1UL,11)
#define COLOR_VALUE(s,w) ((s)->colors[w])
#define LeaveNotify 8
#define SIOCDELRT _IOW('r', 11, struct ortentry)
#define XC_draft_large 44
#define XtNcancelCallback ((char*)&XtShellStrings[877])
#define XK_Hangul_YA 0x0ec1
#define XK_Georgian_char 0x10010ed
#define gettmode() 
#define XK_semicolon 0x003b
#define XtCVeryBoldColors "VeryBoldColors"
#define KEY_PRINT 0532
#define ANSI_SOS 0x98
#define KEY_IC 0513
#define SmSaveBoth 2
#define KEY_IL 0511
#define XtCSelectionArray ((char*)&XtStrings[1395])
#define XK_Katakana 0xff26
#define NCURSES_COLOR_T short
#define XtHaddCallback ((char*)&XtStrings[2315])
#define XK_Hangul_J_Rieul 0x0edb
#define BUTTON_RELEASE(e,x) ((e) & NCURSES_MOUSE_MASK(x, 001))
#define ANSI_SPA 0x20
#define XtEbottom "bottom"
#define XtRCommandArgArray ((char*)&XtStrings[2128])
#define XK_Cyrillic_de 0x06c4
#define B921600 921600
#define B75 75
#define _STRING_H_ 
#define ReplayPointer 2
#define XK_Greek_LAMBDA 0x07cb
#define XtCEightBitOutput "EightBitOutput"
#define XK_FFrancSign 0x10020a3
#define INPCK 0x00000010
#define _POSIX_THREAD_PRIO_PROTECT 200112L
#define _XLOCALE_H_ 
#define XkbBI_MinorError 1
#define XK_Cyrillic_ef 0x06c6
#define XtNpopOnBell "popOnBell"
#define XtNrestartStyle ((char*)&XtShellStrings[1163])
#define XK_Cyrillic_el 0x06cc
#define XK_Cyrillic_em 0x06cd
#define XK_Cyrillic_en 0x06ce
#define wattrset(win,at) ((win)->_attrs = (at))
#define XK_Cyrillic_er 0x06d2
#define XK_Cyrillic_es 0x06d3
#define XK_division 0x00f7
#define _PC_ACL_PATH_MAX 60
#define XrmNameToString(name) XrmQuarkToString(name)
#define XK_Thai_saraii 0x0dd5
#define XK_Arabic_qaf 0x05e2
#define XK_Kanji_Bangou 0xff37
#define XtRWidgetClass ((char*)&XtStrings[1872])
#define AssignMin(x,y) {if ((y) < (x)) x = (y);}
#define NextRequest(dpy) (((_XPrivDisplay)dpy)->request + 1)
#define GXcopyInverted 0xc
#define init_Sres(name) wnew->name = x_strtrim(request->name)
#define XK_Aring 0x00c5
#define __GNUCLIKE_BUILTIN_VAALIST 1
#define box(win,v,h) wborder(win, v, v, h, h, 0, 0, 0, 0)
#define BUTTON1_TRIPLE_CLICKED NCURSES_MOUSE_MASK(1, NCURSES_TRIPLE_CLICKED)
#define KEY_LL 0533
#define XK_Arabic_0 0x1000660
#define XK_Arabic_1 0x1000661
#define XK_Arabic_2 0x1000662
#define XK_Arabic_3 0x1000663
#define __FLT_DENORM_MIN__ 1.40129846e-45F
#define XK_Arabic_5 0x1000665
#define XK_Arabic_6 0x1000666
#define XK_Arabic_7 0x1000667
#define XK_Arabic_8 0x1000668
#define ANSI_SS2 0x8E
#define ANSI_SS3 0x8F
#define BorderWidth(w) ((w)->core.border_width)
#define FPARSELN_UNESCESC 0x01
#define ShiftMask (1<<0)
#define SetLineDblCS(ld,cs) (ld)->bufHead = (RowData) ((ld->bufHead & LINEFLAG_MASK) | (cs << LINEFLAG_BITS))
#define MappingPointer 2
#define clear() wclear(stdscr)
#define XIMStringConversionLine (0x0002)
#define _POSIX_BARRIERS 200112L
#define AllowTcapOps(w,name) (AllowXtermOps(w, allowTcapOps) || !TScreenOf(w)->disallow_tcap_ops[name])
#define mvinch(y,x) mvwinch(stdscr,y,x)
#define UU_LOCK_OPEN_ERR (-1)
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#define _SC_SYNCHRONIZED_IO 40
#define XtNtekStartup "tekStartup"
#define XK_Multi_key 0xff20
#define XK_Eisu_Shift 0xff2f
#define _SYSUTIL_H_ 
#define Nonconvex 1
#define roundup2(x,y) (((x)+((y)-1))&(~((y)-1)))
#define XK_Cyrillic_ha 0x06c8
#define XmuShapeOval 2
#define _SC_XOPEN_SHM 113
#define XK_wcircumflex 0x1000175
#define XK_quoteleft 0x0060
#define WA_PROTECT A_PROTECT
#define PCATCH 0x100
#define XK_dead_belowdiaeresis 0xfe6c
#define XtInheritSetValuesAlmost ((XtAlmostProc) _XtInherit)
#define SIG_ERR ((__sighandler_t *)-1)
#define OPT_EBCDIC 0
#define NBPDR (1<<PDRSHIFT)
#define XK_Greek_UPSILONdieresis 0x07a9
#define XK_Cyrillic_ie 0x06c5
#define addchnstr(str,n) waddchnstr(stdscr,str,n)
#define XK_Cyrillic_io 0x06a3
#define OPT_TCAP_FKEYS 0
#define member2struct(s,m,x) ((struct s *)(void *)((char *)(x) - offsetof(struct s, m)))
#define SmSaveLocal 1
#define ENOPROTOOPT 42
#define XK_Thai_lekkao 0x0df9
#define BUTTON1_DOUBLE_CLICKED NCURSES_MOUSE_MASK(1, NCURSES_DOUBLE_CLICKED)
#define _X_ATTRIBUTE_PRINTF(x,y) __attribute__((__format__(__printf__,x,y)))
#define XK_Farsi_yeh 0x10006cc
#define NCURSES_BUTTON_CLICKED 004L
#define TIOCCONS _IOW('t', 98, int)
#define CPUSTATES 5
#define DEF_ALLOW_TCAP True
#define XK_Cyrillic_je 0x06a8
#define UnmapGravity 0
#define XK_parenright 0x0029
#define PPPDISC 5
#define ICE_ProtocolReply 8
#define wattroff(win,at) wattr_off(win, NCURSES_CAST(attr_t, at), NULL)
#define CTIME 0
#define OPT_DEC_LOCATOR 0
#define XK_Georgian_chin 0x10010e9
#define XtNtextSource ((char*)&XtStrings[761])
#define EMFILE 24
#define B4800 4800
#define XtRDirectoryString ((char*)&XtStrings[2144])
#define XK_Hangul_EO 0x0ec3
#define VisibilityUnobscured 0
#define PlaceOnBottom 1
#define _SIGSET_T_DECLARED 
#define XC_plus 90
#define NEXTPTR(p,t) (((t *)(p)) + 1)
#define T_OFLOW 20
#define XtNiconMask ((char*)&XtShellStrings[62])
#define KEY_BACKSPACE 0407
#define XtCNotify ((char*)&XtStrings[1199])
#define st_birthtime st_birthtimespec.tv_sec
#define XK_hebrew_zade 0x0cf6
#define XK_hebrew_zadi 0x0cf6
#define CTRL(x) ((x) >= 'a' && (x) <= 'z' ? ((x) - 'a' + 1) : (((x) - 'A' + 1) & 0x7f))
#define NODEV (dev_t)(-1)
#define getparyx(win,y,x) (y = getpary(win), x = getparx(win))
#define XtCFontDoublesize "FontDoublesize"
#define XK_slash 0x002f
#define XtNinput ((char*)&XtShellStrings[417])
#define XtHunmanageChildren ((char*)&XtStrings[2236])
#define INVERSE AttrBIT(0)
#define PROJECTROOT "/usr/X11R6"
#define XtCMappedWhenManaged ((char*)&XtStrings[1164])
#define XtNjumpProc ((char*)&XtStrings[370])
#define KEY_SR 0521
#define XK_ocaron 0x10001d2
#define ACS_VLINE NCURSES_ACS('x')
#define ENOBUFS 55
#define TypeMallocN(type,n) (type *)malloc(sizeof(type) * (size_t) (n))
#define okScrnRow(screen,row) ((row) <= ((screen)->max_row - (screen)->topline) && (row) >= -((screen)->savedlines))
#define XtRFunction ((char*)&XtStrings[1677])
#define __FLT_MIN_10_EXP__ (-37)
#define XNPreeditDoneCallback "preeditDoneCallback"
#define XtCAppcursorDefault "AppcursorDefault"
#define CURSES_H 1
#define XC_cross_reverse 32
#define XK_braille_dots_158 0x1002891
#define XK_Arabic_4 0x1000664
#define BUTTON2_RELEASED NCURSES_MOUSE_MASK(2, NCURSES_BUTTON_RELEASED)
#define XK_Greek_horizbar 0x07af
#define XK_braille_dots_35678 0x10028f4
#define XK_threequarters 0x00be
#define __INTMAX_TYPE__ long int
#define XK_guillemotleft 0x00ab
#define SIGINT 2
#define EFAULT 14
#define INWINDOW 01
#define VMIN 16
#define XK_Cabovedot 0x02c5
#define XK_braille_dots_12467 0x100286b
#define _SC_V6_LPBIG_OFFBIG 106
#define XK_braille_dots_234 0x100280e
#define XK_braille_dots_235 0x1002816
#define XK_braille_dots_236 0x1002826
#define XK_braille_dots_237 0x1002846
#define XK_braille_dots_238 0x1002886
#define __DEC128_MAX_EXP__ 6144
#define XlibSpecificationRelease 6
#define XK_Arabic_9 0x1000669
#define XK_EcuSign 0x10020a0
#define OPT_ALLOW_XXX_OPS 1
#define XK_Ncedilla 0x03d1
#define __FreeBSD_version 801000
#define XK_Hangul_A 0x0ebf
#define XK_F12 0xffc9
#define SIGIOT SIGABRT
#define WORD_BIT __WORD_BIT
#define XK_Hangul_E 0x0ec4
#define IN132COLUMNS MiscBIT(7)
#define XK_Hangul_I 0x0ed3
#define XK_Hangul_O 0x0ec7
#define XK_Armenian_hyphen 0x100058a
#define XK_Cyrillic_pe 0x06d0
#define XK_AccessX_Feedback_Enable 0xfe71
#define XK_Hangul_U 0x0ecc
#define NCURSES_ATTR_T int
#define XK_braille_dots_246 0x100282a
#define XK_braille_dots_247 0x100284a
#define XK_braille_dots_248 0x100288a
#define VisualScreenMask 0x2
#define _PWF(x) (1 << x)
#define S_IXGRP 0000010
#define ICE_PingReply 10
#define XK_Scircumflex 0x02de
#define GCC_SCANFLIKE(fmt,var) 
#define XK_Georgian_qar 0x10010e7
#define FPE_FLTOVF_TRAP 0x4
#define _PWF_CHANGE _PWF(4)
#define OPT_ZICONBEEP 1
#define XK_hebrew_zain 0x0ce6
#define XK_braille_dots_256 0x1002832
#define XK_braille_dots_257 0x1002852
#define XK_braille_dots_258 0x1002892
#define sigev_notify_function _sigev_un._sigev_thread._function
#define XtRGeometry ((char*)&XtStrings[1686])
#define Button2MotionMask (1L<<9)
#define __DEC32_MANT_DIG__ 7
#define XtNfont1 "font1"
#define XtNfont2 "font2"
#define XtNfont3 "font3"
#define XtNfont4 "font4"
#define XtNfont5 "font5"
#define XtNfont6 "font6"
#define CSTOPB 0x00000400
#define _FSBLKCNT_T_DECLARED 
#define CERASE2 CTRL('H')
#define KEY_FIND 0552
#define XtNanswerbackString "answerbackString"
#define XK_braille_blank 0x1002800
#define XtNbackingStore "backingStore"
#define XK_braille_dots_267 0x1002862
#define XK_braille_dots_268 0x10028a2
#define ILL_PRVOPC 5
#define True 1
#define KEY_RESUME 0570
#define XK_Ccedilla 0x00c7
#define XK_Iacute 0x00cd
#define DoRM0(code,value) value = screen->save_modes[code]
#define __SMOD 0x2000
#define SIOCSIFADDR _IOW('i', 12, struct ifreq)
#define TIOCSWINSZ _IOW('t', 103, struct winsize)
#define XK_Cyrillic_en_descender 0x10004a3
#define XtCCursorOnTime "CursorOnTime"
#define XK_braille_dots_278 0x10028c2
#define AutoRepeatModeOff 0
#define getmaxy(win) ((win) ? ((win)->_maxy + 1) : ERR)
#define XtNdefaultString "defaultString"
#define XK_Hangul_J_PieubSios 0x0ee5
#define SIOCGETSGCNT _IOWR('r', 16, struct sioc_sg_req)
#define MAX(a,b) (((a)>(b))?(a):(b))
#define SIOCSIFCAP _IOW('i', 30, struct ifreq)
#define XtCDefaultString "DefaultString"
#define XK_Cyrillic_te 0x06d4
#define POLL_IN 1
#define Ires(name,class,offset,dftvalue) {RES_NAME(name), RES_CLASS(class), XtRInt, sizeof(int), RES_OFFSET(offset), XtRImmediate, (XtPointer) dftvalue}
#define XtNinnerHeight ((char*)&XtStrings[291])
#define XtCCreatePopupChildProc ((char*)&XtShellStrings[335])
#define XtHuninstallTranslations ((char*)&XtStrings[2445])
#define Convex 2
#define XK_Arabic_gaf 0x10006af
#define PointerMotionMask (1L<<6)
#define XtNthumbProc ((char*)&XtStrings[788])
#define NPDPEPG (PAGE_SIZE/(sizeof (pdp_entry_t)))
#define XtNhighlightColorMode "highlightColorMode"
#define GraphicsExpose 13
#define __SEOF 0x0020
#define timeradd(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec + (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec + (uvp)->tv_usec; if ((vvp)->tv_usec >= 1000000) { (vvp)->tv_sec++; (vvp)->tv_usec -= 1000000; } } while (0)
#define XK_zerosubscript 0x1002080
#define XC_lr_angle 78
#define XK_braille_dots_1235 0x1002817
#define XK_braille_dots_1236 0x1002827
#define XtCWQueryOnly (1 << 7)
#define XK_braille_dots_1238 0x1002887
#define SI_TIMER 0x10003
#define XK_Cyrillic_i_macron 0x10004e3
#define A_STANDOUT NCURSES_BITS(1UL,8)
#define fixterm() reset_prog_mode()
#define XK_Pointer_Drag2 0xfef6
#define XtNcolormap ((char*)&XtStrings[154])
#define MAXPAGESIZES 3
#define XtNscrollTtyOutput "scrollTtyOutput"
#define VisibilityPartiallyObscured 1
#define XC_dot 38
#define MODE_DECBKM xBIT(4)
#define XK_Cyrillic_ve 0x06d7
#define XK_braille_dots_1246 0x100282b
#define XK_braille_dots_1247 0x100284b
#define XK_braille_dots_1248 0x100288b
#define XtDefaultForeground "XtDefaultForeground"
#define GXequiv 0x9
#define DST_USA 1
#define PTYCHAR1 "pqrstuvwxyzPQRSTUVWXYZ"
#define PTYCHAR2 "0123456789abcdefghijklmnopqrstuv"
#define XtEEllipse "Ellipse"
#define XK_ISO_Partial_Line_Up 0xfe23
#define _SC_HOST_NAME_MAX 72
#define XK_braille_dots_1256 0x1002833
#define XK_braille_dots_1257 0x1002853
#define XK_braille_dots_1258 0x1002893
#define CursorX(screen,col) CursorX2(screen, col, FontWidth(screen))
#define CursorY(screen,row) CursorY2(screen, INX2ROW(screen, row))
#define GCPlaneMask (1L<<1)
#define XtCIconX ((char*)&XtShellStrings[399])
#define XtCIconY ((char*)&XtShellStrings[411])
#define CWHeight (1<<3)
#define XIMPreeditNone 0x0010L
#define SIOCDIFGROUP _IOW('i', 137, struct ifgroupreq)
#define XtNtitleModes "titleModes"
#define XK_Thai_ngongu 0x0da7
#define MenuFontName(n) menu_font_names[n][fNorm]
#define MDMBUF CCAR_OFLOW
#define PROPERTY_MAX_VALUE 512
#define XtCAppkeypadDefault "AppkeypadDefault"
#define XK_braille_dots_1267 0x1002863
#define XK_braille_dots_1268 0x10028a3
#define XtNprintAttributes "printAttributes"
#define ENOENT 2
#define XC_center_ptr 22
#define _SYS_IOCTL_H_ 
#define XK_Armenian_vyun 0x1000582
#define SM_SaveYourselfPhase2 17
#define B300 300
#define XK_Ahook 0x1001ea2
#define KEY_EXIT 0551
#define XK_ISO_Move_Line_Down 0xfe22
#define XK_Cyrillic_ya 0x06d1
#define XK_braille_dots_1278 0x10028c3
#define XtCacheByDisplay 0x003
#define XK_Ograve 0x00d2
#define XtNscreen ((char*)&XtStrings[584])
#define XtInheritDeallocate ((XtDeallocateProc) _XtInherit)
#define XK_Cyrillic_DZHE 0x06bf
#define XK_braille_dots_23567 0x1002876
#define OPT_COLOR_CLASS 1
#define XK_Mode_switch 0xff7e
#define LINEFLAG_BITS 4
#define XK_ARABIC 
#define TIOCSETAF _IOW('t', 22, struct termios)
#define XK_Cyrillic_ze 0x06da
#define SIGTERM 15
#define XTTYMODE_quit 1
#define TIOCSETAW _IOW('t', 21, struct termios)
#define Mod1MapIndex 3
#define XK_Cyrillic_u_straight_bar 0x10004b1
#define XtCInterval ((char*)&XtStrings[1113])
#define AnyKey 0L
#define XtNminAspectX ((char*)&XtShellStrings[709])
#define XtNminAspectY ((char*)&XtShellStrings[665])
#define LineSetBlinked(ld) LineSetFlag(ld, LINEBLINKED)
#define MCLSHIFT 11
#define CopyFromParent 0L
#define __GNUCLIKE_CTOR_SECTION_HANDLING 1
#define COLOR_1 1
#define MIN(a,b) (((a)<(b))?(a):(b))
#define vw_printw vwprintw
#define XtCFaceName "FaceName"
#define DEF_BACKARO_BS True
#define XK_Hangul_J_RieulPieub 0x0ede
#define XK_Cyrillic_tse 0x06c3
#define XK_Thai_honokhuk 0x0dce
#define XtCForeground ((char*)&XtStrings[1022])
#define XK_Armenian_CHA 0x1000549
#define SI_NOINFO 0
#define IGNORE_RC(func) (void) func
#define mvwgetch(win,y,x) (wmove(win,y,x) == ERR ? ERR : wgetch(win))
#define SIOCSIFGENERIC _IOW('i', 57, struct ifreq)
#define EHOSTUNREACH 65
#define XNMissingCharSet "missingCharSet"
#define XK_Emacron 0x03aa
#define XK_Armenian_gim 0x1000563
#define MAXSYMLINKS 32
#define T_PRIVINFLT 1
#define PtySelect fd_set
#define update_sco_fkeys() 
#define XK_ISO_Release_Margin_Left 0xfe29
#define _GETOPT_DECLARED 
#define XtCHighlightColor "HighlightColor"
#define PRIO_MAX 20
#define XK_twosubscript 0x1002082
#define XK_Korean_Won 0x0eff
#define XK_zcaron 0x01be
#define _IN_ADDR_T_DECLARED 
#define __vendorversion__ "XTerm"
#define SIGWINCH 28
#define XK_Arabic_jeh 0x1000698
#define XK_Redo 0xff66
#define __LDBL_DIG__ 18
#define TIOCNOTTY _IO('t', 113)
#define BitmapBitOrder(dpy) (((_XPrivDisplay)dpy)->bitmap_bit_order)
#define XK_Thai_baht 0x0ddf
#define XtCTekInhibit "TekInhibit"
#define VINTR 8
#define DisplayWidth(dpy,scr) (ScreenOfDisplay(dpy,scr)->width)
#define XtCCtrlFKeys "CtrlFKeys"
#define XtNsaveUnder ((char*)&XtShellStrings[146])
#define XK_GREEK 
#define _SETJMP_H_ 
#define PResizeInc (1L << 6)
#define _LSEEK_DECLARED 
#define XtCSpace ((char*)&XtStrings[1410])
#define cvtINT16toShort(val) (val)
#define XtCIconPixmap ((char*)&XtShellStrings[29])
#define SetModeInsert 0
#define XK_braille_dots_1234567 0x100287f
#define XK_braille_dots_1234568 0x10028bf
#define _SC_BC_DIM_MAX 10
#define _NLINK_T_DECLARED 
#define CDISCARD CTRL('O')
#define XtRAtom ((char*)&XtShellStrings[368])
#define XmuShapeRectangle 1
#define XK_KP_Home 0xff95
#define XtCWaitForWm ((char*)&XtShellStrings[783])
#define ExtractForeground(color) (unsigned) GetCellColorFG(color)
#define TIMESTAMP_LEN 20
#define XtNinternalWidth ((char*)&XtStrings[356])
#define _MP_DB "pwd.db"
#define NorthWestGravity 1
#define XtRCallProc ((char*)&XtStrings[1578])
#define XK_braille_dots_1234578 0x10028df
#define XtNutf8SelectTypes "utf8SelectTypes"
#define BadGC 13
#define XK_babovedot 0x1001e03
#define XTERM_POUND 0x1E
#define XK_braille_dots_25678 0x10028f2
#define XtNbaseWidth ((char*)&XtShellStrings[487])
#define XtCCutToBeginningOfLine "CutToBeginningOfLine"
#define SIOCIFCREATE _IOWR('i', 122, struct ifreq)
#define XIMPrimary (1L<<5)
#define OPT_PTY_HANDSHAKE USE_HANDSHAKE
#define _SYS__SIGSET_H_ 
#define XK_ydiaeresis 0x00ff
#define _NOCHANGE -1
#define A_LEFT NCURSES_BITS(1UL,18)
#define XIMVisibleToBackword (1L<<9)
#define SET_COLOR_RES(res,color) (res)->value = color
#define T_FPOPFLT 24
#define BUTTON3_RELEASED NCURSES_MOUSE_MASK(3, NCURSES_BUTTON_RELEASED)
#define XK_LATIN1 
#define XK_LATIN3 
#define XK_LATIN4 
#define XK_LATIN8 
#define XK_LATIN9 
#define S_IFIFO 0010000
#define TWindow(screen) WhichTWin(screen)->window
#define XK_Cyrillic_YU 0x06e0
#define FPE_FLTUND 5
#define T_COLOR(v,n) (v)->Tcolors[n].value
#define GetLineDblCS(ld) (((ld)->bufHead >> LINEFLAG_BITS) & DBLCS_MASK)
#define SF_SETTABLE 0xffff0000
#define PTYCHARLEN 2
#define X_OK 0x01
#define Status int
#define XNAreaNeeded "areaNeeded"
