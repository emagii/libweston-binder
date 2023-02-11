#if defined(CONFIG_WESTON)
am_config_add("AM_CFLAGS",				"${weston_CFLAGS}");
#endif
#if defined(CONFIG_LIBEVDEV)
am_config_add("AM_CFLAGS",				"${libevdev_CFLAGS}");
#endif
#if defined(CONFIG_PIXMAN)
am_config_add("AM_CFLAGS",				"${pixman_CFLAGS}");
#endif

